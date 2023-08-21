#include <iostream>
#include <windows.h>

#include <SimpleLibrary.h>

int main()
{
    CRITICAL_SECTION critical_section;
    InitializeCriticalSection(&critical_section);
    EnterCriticalSection(&critical_section);
    LeaveCriticalSection(&critical_section);
    DeleteCriticalSection(&critical_section);

    CreateRegKey();

    std::cout << "Hello World!\n";
}
