typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int lbl_831D1298[];
extern struct { int pad; void (*f)(int, int, int, const char *, const char *, int); } lbl_83276774;

void fn_822A1DD8(void)
{
  if (lbl_831D1298[2] == 0 && lbl_831D1298[0] == 0) {
    if (lbl_83276774.f != 0) {
      lbl_83276774.f(0, 0, 0, "uiGameLoadingIncubationBeginEarlyDummyWipe", "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\ui\\ui_game\\ui_game_loading\\ui_game_loading_incubation.cpp", 0x1c3);
    }
    lbl_831D1298[2] = 1;
  }
}
