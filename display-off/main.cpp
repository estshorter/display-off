#include <windows.h>
int main()
{
	constexpr int DISPLAY_ON = -1;
	constexpr int DISPLAY_OFF = 2;
	PostMessageA(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, DISPLAY_OFF);
}