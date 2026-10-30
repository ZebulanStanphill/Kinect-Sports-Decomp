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
typedef struct VtS_82536008 { int (*stop)(void *); } VtS_82536008;
typedef struct Snd_82536008 { VtS_82536008 *vt; } Snd_82536008;
typedef struct VtL_82536008 { void *pad[2]; void (*log)(void *, const char *, int, const char *); } VtL_82536008;
typedef struct Log_82536008 { VtL_82536008 *vt; } Log_82536008;
extern Log_82536008 *lbl_8327F868;

void fn_82536008(Snd_82536008 *s)
{
  if (s != 0 && s->vt->stop(s) < 0) {
    lbl_8327F868->vt->log(lbl_8327F868, "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\audio\\audio_main.cpp", 0x7ea, "Stop failed\n");
  }
}
