#pragma once

#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0

#if defined(SPLIT_KEYBOARD) && !defined(EE_HANDS)
	#define EE_HANDS
#endif
