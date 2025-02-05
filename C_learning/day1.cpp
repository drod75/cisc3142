#include <windows.h>

void foo(void) // Function Signature or Prototype
{
    OutputDebugStringA(
        "This is the first thing we have actually printed out.\n");
}

int CALLBACK WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    foo();

    
}
