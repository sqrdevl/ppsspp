#include "util/const_map.h"
#include <map>

// TODO: Add any missing keys 
static const std::map<int, int> KeyMapRawSDLtoNative = InitConstMap<int, int>
	(SDLK_p, NKCODE_P)
	(SDLK_o, NKCODE_O)
	(SDLK_i, NKCODE_I)
	(SDLK_u, NKCODE_U)
	(SDLK_y, NKCODE_Y)
	(SDLK_t, NKCODE_T)
	(SDLK_r, NKCODE_R)
	(SDLK_e, NKCODE_E)
	(SDLK_w, NKCODE_W)
	(SDLK_q, NKCODE_Q)
	(SDLK_l, NKCODE_L)
	(SDLK_k, NKCODE_K)
	(SDLK_j, NKCODE_J)
	(SDLK_h, NKCODE_H)
	(SDLK_g, NKCODE_G)
	(SDLK_f, NKCODE_F)
	(SDLK_d, NKCODE_D)
	(SDLK_s, NKCODE_S)
	(SDLK_a, NKCODE_A)
	(SDLK_m, NKCODE_M)
	(SDLK_n, NKCODE_N)
	(SDLK_b, NKCODE_B)
	(SDLK_v, NKCODE_V)
	(SDLK_c, NKCODE_C)
	(SDLK_x, NKCODE_X)
	(SDLK_z, NKCODE_Z)
	(SDLK_COMMA, NKCODE_COMMA)
	(SDLK_PERIOD, NKCODE_PERIOD)
	(SDLK_LALT, NKCODE_ALT_LEFT)
	(SDLK_RALT, NKCODE_ALT_RIGHT)
	(SDLK_LSHIFT, NKCODE_SHIFT_LEFT)
	(SDLK_RSHIFT, NKCODE_SHIFT_RIGHT)
	(SDLK_TAB, NKCODE_TAB)
	(SDLK_SPACE, NKCODE_SPACE)
	(SDLK_RETURN, NKCODE_ENTER)
	(SDLK_MINUS, NKCODE_MINUS)
	(SDLK_EQUALS, NKCODE_EQUALS)
	(SDLK_LEFTBRACKET, NKCODE_LEFT_BRACKET)
	(SDLK_RIGHTBRACKET, NKCODE_RIGHT_BRACKET)
	(SDLK_BACKSLASH, NKCODE_BACKSLASH)
	(SDLK_SEMICOLON, NKCODE_SEMICOLON)
	// (SDLK_, NKCODE_APOSTROPHE) // I cannot find the SDL equiv
	(SDLK_SLASH, NKCODE_SLASH)
	(SDLK_AT, NKCODE_AT)
	(SDLK_PLUS, NKCODE_PLUS)
	(SDLK_PAGEUP, NKCODE_PAGE_UP)
	(SDLK_PAGEDOWN, NKCODE_PAGE_DOWN)
	(SDLK_ESCAPE, NKCODE_ESCAPE)
	(SDLK_DELETE, NKCODE_FORWARD_DEL)
	(SDLK_LCTRL, NKCODE_CTRL_LEFT)
	(SDLK_RCTRL, NKCODE_CTRL_RIGHT)
	(SDLK_CAPSLOCK, NKCODE_CAPS_LOCK)
	(SDLK_HOME, NKCODE_MOVE_HOME)
	(SDLK_END, NKCODE_MOVE_END)
	(SDLK_INSERT, NKCODE_INSERT)
	/* Somehow these are undefined
 	 * on my comp?
	(SDLK_KP_0, NKCODE_NUMPAD_0)
	(SDLK_KP_1, NKCODE_NUMPAD_1)
	(SDLK_KP_2, NKCODE_NUMPAD_2)
	(SDLK_KP_3, NKCODE_NUMPAD_3)
	(SDLK_KP_4, NKCODE_NUMPAD_4)
	(SDLK_KP_5, NKCODE_NUMPAD_5)
	(SDLK_KP_6, NKCODE_NUMPAD_6)
	(SDLK_KP_7, NKCODE_NUMPAD_7)
	(SDLK_KP_8, NKCODE_NUMPAD_8)
	(SDLK_KP_9, NKCODE_NUMPAD_9)
	*/
	(SDLK_KP_DIVIDE, NKCODE_NUMPAD_DIVIDE)
	(SDLK_KP_MULTIPLY, NKCODE_NUMPAD_MULTIPLY)
	(SDLK_KP_MINUS, NKCODE_NUMPAD_SUBTRACT)
	(SDLK_KP_PLUS, NKCODE_NUMPAD_ADD)
	(SDLK_KP_PERIOD, NKCODE_NUMPAD_DOT)
	(SDLK_KP_ENTER, NKCODE_NUMPAD_ENTER)
	(SDLK_KP_EQUALS, NKCODE_NUMPAD_EQUALS)
	(SDLK_1, NKCODE_1)
	(SDLK_2, NKCODE_2)
	(SDLK_3, NKCODE_3)
	(SDLK_4, NKCODE_4)
	(SDLK_5, NKCODE_5)
	(SDLK_6, NKCODE_6)
	(SDLK_7, NKCODE_7)
	(SDLK_8, NKCODE_8)
	(SDLK_9, NKCODE_9)
	(SDLK_0, NKCODE_0)
	(SDLK_LEFT, NKCODE_DPAD_LEFT)
	(SDLK_UP, NKCODE_DPAD_UP)
	(SDLK_RIGHT, NKCODE_DPAD_RIGHT)
	(SDLK_DOWN, NKCODE_DPAD_DOWN);

