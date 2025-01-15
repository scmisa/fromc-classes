// g++ -o render render.cpp -lgdi32 -lopengl32 -lglu32
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    case WM_PAINT:
        PAINTSTRUCT ps;
        HDC hdc;
        hdc = BeginPaint(hwnd, &ps);
        EndPaint(hwnd, &ps);
        return 0;
    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

void EnableOpenGL(HWND hwnd, HDC *hdc, HGLRC *hrc)
{
    PIXELFORMATDESCRIPTOR pfd;
    int iFormat;

    *hdc = GetDC(hwnd);

    ZeroMemory(&pfd, sizeof(pfd));
    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;

    iFormat = ChoosePixelFormat(*hdc, &pfd);
    SetPixelFormat(*hdc, iFormat, &pfd);

    *hrc = wglCreateContext(*hdc);
    wglMakeCurrent(*hdc, *hrc);
}

void DisableOpenGL(HWND hwnd, HDC hdc, HGLRC hrc)
{
    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(hrc);
    ReleaseDC(hwnd, hdc);
}

GLuint LoadTexture(const char *filename)
{
    int width, height, channels;
    unsigned char *data = stbi_load(filename, &width, &height, &channels, 0);
    if (data == NULL)
    {
        MessageBoxW(NULL, L"Failed to load texture", L"Error", MB_OK);
        exit(1);
    }

    GLuint texture;
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    stbi_image_free(data);
    return texture;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSW wc;
    HWND hwnd;
    HDC hdc;
    HGLRC hrc;
    MSG msg;
    BOOL quit = FALSE;

    wc.style = CS_OWNDC;
    wc.lpfnWndProc = WindowProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = L"GLSample";

    RegisterClassW(&wc);

    hwnd = CreateWindowW(
        L"GLSample", L"OpenGL Sample", WS_CAPTION | WS_POPUPWINDOW | WS_VISIBLE,
        0, 0, 800, 600,
        NULL, NULL, hInstance, NULL);

    EnableOpenGL(hwnd, &hdc, &hrc);

    GLuint texture = LoadTexture("pixel.bmp");

    while (!quit)
    {
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            if (msg.message == WM_QUIT)
            {
                quit = TRUE;
            }
            else
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
        else
        {
            glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            glEnable(GL_TEXTURE_2D);
            glBindTexture(GL_TEXTURE_2D, texture);

            glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 0.0f);
            glVertex2f(-1.0f, -1.0f);
            glTexCoord2f(1.0f, 0.0f);
            glVertex2f(1.0f, -1.0f);
            glTexCoord2f(1.0f, 1.0f);
            glVertex2f(1.0f, 1.0f);
            glTexCoord2f(0.0f, 1.0f);
            glVertex2f(-1.0f, 1.0f);
            glEnd();

            glDisable(GL_TEXTURE_2D);

            SwapBuffers(hdc);
        }
    }

    DisableOpenGL(hwnd, hdc, hrc);
    DestroyWindow(hwnd);

    return msg.wParam;
}