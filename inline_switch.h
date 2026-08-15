#ifndef __inline_switch_h
#define __inline_switch_h

// made by stalker320
// 
// required macro: _INLINE_SWITCH_KEY
// optional macro: _INLINE_DEFAULT_VALUE

#ifndef _INLINE_DEFAULT_VALUE
#define _INLINE_DEFAULT_VALUE "error"
#endif

#define CASE(key, val) (_INLINE_SWITCH_KEY) == (key) ? (val) :
#define END_CASE (_INLINE_DEFAULT_VALUE)

#define INLINE_SWITCH(...) (__VA_ARGS__ END_CASE)


#endif // __inline_switch_h
