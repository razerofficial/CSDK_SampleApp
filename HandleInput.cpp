#include "HandleInput.h"

#include "windows.h"

HandleInput::HandleInput(int key)
{
	_mKey = key;
	_mWasPressed = false;
}
int HandleInput::GetKey()
{
	return _mKey;
}
bool HandleInput::WasReleased(const bool requireFocus)
{
	if (requireFocus)
	{
		HWND wndConsole = GetConsoleWindow();
		if (wndConsole)
		{
			HWND wndForeground = GetForegroundWindow();
			HWND wndConsoleParent = GetParent(wndConsole);
			if (wndConsole != wndForeground &&
				wndConsoleParent != wndForeground)
			{
				return false;
			}
		}
	}
	if (GetAsyncKeyState(_mKey) != 0)
	{
		_mWasPressed = true;
	}
	else if (_mWasPressed)
	{
		_mWasPressed = false;
		return true;
	}
	return false;
}
