#pragma once

#include <map>

class RazerKeyboardMapping
{
public:
	static RazerKeyboardMapping* GetInstance();

	// Use the key id from the UI enum to get the RZKEY from the mapping
	int GetRZKEY(int key);
private:
	RazerKeyboardMapping();

	//singleton
	static RazerKeyboardMapping* _sInstance;

	//key would be 3rd party input mapping, like UI enum for key binding
	//value is RZKEY or LED
	std::map<int, int> _sData;
};
