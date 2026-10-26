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
/* this-adjusting thunk: back to the outer object (-0xc), then to its virtual base; flag 0x80 added to the last argument */
extern void fn_82F40E88(char *p, int a, int b, int c, int d, int e);

void fn_82F408B8(char *p, int a, int b, int c, int d, int e)
{
  fn_82F40E88(p + (*(int **)(p - 0xc))[1] - 0xc, a, b, c, d, e | 0x80);
}
