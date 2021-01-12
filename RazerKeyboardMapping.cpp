#include "Razer\ChromaAnimationAPI.h"
#include "RazerKeyboardMapping.h"

using namespace ChromaSDK;
using namespace std;

typedef enum SAMPLE_KEY_ENUM
{
	UI_KEY_ESC = 0,
	UI_KEY_F1 = 1,
	UI_KEY_F2 = 2,
} SAMPLE_KEY_ENUM;

RazerKeyboardMapping* RazerKeyboardMapping::_sInstance = nullptr;

RazerKeyboardMapping::RazerKeyboardMapping()
{
	_sData = std::map<int, int>();
	_sData[(int)SAMPLE_KEY_ENUM::UI_KEY_ESC] = (int)Keyboard::RZKEY::RZKEY_ESC;  /*!< Esc (VK_ESCAPE) */
	_sData[(int)SAMPLE_KEY_ENUM::UI_KEY_F1] = (int)Keyboard::RZKEY::RZKEY_F1;  /*!< F1 (VK_F1) */
	_sData[(int)SAMPLE_KEY_ENUM::UI_KEY_F2] = (int)Keyboard::RZKEY::RZKEY_F2;  /*!< F2 (VK_F2) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F3;  /*!< F3 (VK_F3) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F4;  /*!< F4 (VK_F4) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F5;  /*!< F5 (VK_F5) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F6;  /*!< F6 (VK_F6) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F7;  /*!< F7 (VK_F7) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F8;  /*!< F8 (VK_F8) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F9;  /*!< F9 (VK_F9) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F10;  /*!< F10 (VK_F10) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F11;  /*!< F11 (VK_F11) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F12;  /*!< F12 (VK_F12) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_1;  /*!< 1 (VK_1) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_2;  /*!< 2 (VK_2) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_3;  /*!< 3 (VK_3) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_4;  /*!< 4 (VK_4) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_5;  /*!< 5 (VK_5) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_6;  /*!< 6 (VK_6) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_7;  /*!< 7 (VK_7) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_8;  /*!< 8 (VK_8) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_9;  /*!< 9 (VK_9) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_0;  /*!< 0 (VK_0) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_A;  /*!< A (VK_A) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_B;  /*!< B (VK_B) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_C;  /*!< C (VK_C) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_D;  /*!< D (VK_D) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_E;  /*!< E (VK_E) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_F;  /*!< F (VK_F) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_G;  /*!< G (VK_G) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_H;  /*!< H (VK_H) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_I;  /*!< I (VK_I) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_J;  /*!< J (VK_J) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_K;  /*!< K (VK_K) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_L;  /*!< L (VK_L) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_M;  /*!< M (VK_M) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_N;  /*!< N (VK_N) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_O;  /*!< O (VK_O) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_P;  /*!< P (VK_P) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_Q;  /*!< Q (VK_Q) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_R;  /*!< R (VK_R) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_S;  /*!< S (VK_S) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_T;  /*!< T (VK_T) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_U;  /*!< U (VK_U) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_V;  /*!< V (VK_V) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_W;  /*!< W (VK_W) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_X;  /*!< X (VK_X) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_Y;  /*!< Y (VK_Y) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_Z;  /*!< Z (VK_Z) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMLOCK;  /*!< Numlock (VK_NUMLOCK) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD0;  /*!< Numpad 0 (VK_NUMPAD0) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD1;  /*!< Numpad 1 (VK_NUMPAD1) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD2;  /*!< Numpad 2 (VK_NUMPAD2) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD3;  /*!< Numpad 3 (VK_NUMPAD3) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD4;  /*!< Numpad 4 (VK_NUMPAD4) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD5;  /*!< Numpad 5 (VK_NUMPAD5) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD6;  /*!< Numpad 6 (VK_NUMPAD6) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD7;  /*!< Numpad 7 (VK_NUMPAD7) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD8;  /*!< Numpad 8 (VK_NUMPAD8) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD9;  /*!< Numpad 9 (VK_ NUMPAD9*/
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD_DIVIDE;  /*!< Divide (VK_DIVIDE) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD_MULTIPLY;  /*!< Multiply (VK_MULTIPLY) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD_SUBTRACT;  /*!< Subtract (VK_SUBTRACT) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD_ADD;  /*!< Add (VK_ADD) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD_ENTER;  /*!< Enter (VK_RETURN - Extended) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_NUMPAD_DECIMAL;  /*!< Decimal (VK_DECIMAL) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_PRINTSCREEN;  /*!< Print Screen (VK_PRINT) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_SCROLL;  /*!< Scroll Lock (VK_SCROLL) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_PAUSE;  /*!< Pause (VK_PAUSE) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_INSERT;  /*!< Insert (VK_INSERT) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_HOME;  /*!< Home (VK_HOME) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_PAGEUP;  /*!< Page Up (VK_PRIOR) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_DELETE;  /*!< Delete (VK_DELETE) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_END;  /*!< End (VK_END) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_PAGEDOWN;  /*!< Page Down (VK_NEXT) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_UP;  /*!< Up (VK_UP) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_LEFT;  /*!< Left (VK_LEFT) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_DOWN;  /*!< Down (VK_DOWN) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_RIGHT;  /*!< Right (VK_RIGHT) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_TAB;  /*!< Tab (VK_TAB) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_CAPSLOCK;  /*!< Caps Lock(VK_CAPITAL) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_BACKSPACE;  /*!< Backspace (VK_BACK) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_ENTER;  /*!< Enter (VK_RETURN) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_LCTRL;  /*!< Left Control(VK_LCONTROL) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_LWIN;  /*!< Left Window (VK_LWIN) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_LALT;  /*!< Left Alt (VK_LMENU) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_SPACE;  /*!< Spacebar (VK_SPACE) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_RALT;  /*!< Right Alt (VK_RMENU) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_FN;  /*!< Function key. */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_RMENU;  /*!< Right Menu (VK_APPS) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_RCTRL;  /*!< Right Control (VK_RCONTROL) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_LSHIFT;  /*!< Left Shift (VK_LSHIFT) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_RSHIFT;  /*!< Right Shift (VK_RSHIFT) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_MACRO1;  /*!< Macro Key 1 */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_MACRO2;  /*!< Macro Key 2 */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_MACRO3;  /*!< Macro Key 3 */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_MACRO4;  /*!< Macro Key 4 */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_MACRO5;  /*!< Macro Key 5 */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_1;  /*!< ~ (tilde/半角/全角) (VK_OEM_3) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_2;  /*!< -- (minus) (VK_OEM_MINUS) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_3;  /*!< = (equal) (VK_OEM_PLUS) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_4;  /*!< [ (left sqaure bracket) (VK_OEM_4) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_5;  /*!< ] (right square bracket) (VK_OEM_6) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_6;  /*!< \ (backslash) (VK_OEM_5) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_7;  /*!< ; (semi-colon) (VK_OEM_1) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_8;  /*!< ' (apostrophe) (VK_OEM_7) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_9;  /*!< , (comma) (VK_OEM_COMMA) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_10;  /*!< . (period) (VK_OEM_PERIOD) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_OEM_11;  /*!< / (forward slash) (VK_OEM_2) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_EUR_1;  /*!< "#" (VK_OEM_5) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_EUR_2;  /*!< \ (VK_OEM_102) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_JPN_1;  /*!< ¥ (0xFF) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_JPN_2;  /*!< \ (0xC1) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_JPN_3;  /*!< 無変換 (VK_OEM_PA1) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_JPN_4;  /*!< 変換 (0xFF) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_JPN_5;  /*!< ひらがな/カタカナ (0xFF) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_KOR_1;  /*!< | (0xFF) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_KOR_2;  /*!< (VK_OEM_5) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_KOR_3;  /*!< (VK_OEM_102) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_KOR_4;  /*!< (0xC1) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_KOR_5;  /*!< (VK_OEM_PA1) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_KOR_6;  /*!< 한/영 (0xFF) */
	_sData[0] = (int)Keyboard::RZKEY::RZKEY_KOR_7;  /*!< (0xFF) */
	_sData[0] = (int)Keyboard::RZLED::RZLED_LOGO;  /*!< Razer logo */
}

int RazerKeyboardMapping::GetRZKEY(int key) 
{
	if (_sData.find(key) != _sData.end())
	{
		int rzkey = _sData[key];
		return rzkey;
	}
	else
	{
		return Keyboard::RZKEY::RZKEY_INVALID;
	}
}

RazerKeyboardMapping* RazerKeyboardMapping::GetInstance()
{
	if (_sInstance == nullptr)
	{
		_sInstance = new RazerKeyboardMapping();
	}
	return _sInstance;
}
