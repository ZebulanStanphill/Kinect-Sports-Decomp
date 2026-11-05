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
extern unsigned char *lbl_8324E3B0;

void fn_82ED76D0(int unused, unsigned char *d, short *s, int ds, int ss)
{
    int i;
    for (i = 0; i < 8; i++) {
        d[0] = lbl_8324E3B0[d[0] + s[0]];
        d[1] = lbl_8324E3B0[d[1] + s[1]];
        d[2] = lbl_8324E3B0[d[2] + s[2]];
        d[3] = lbl_8324E3B0[d[3] + s[3]];
        d += ds;
        s += ss;
    }
}
