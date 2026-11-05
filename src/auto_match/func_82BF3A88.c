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
typedef struct Guard_82BF3A88 {
    int w[4];
} Guard_82BF3A88;

extern void fn_82BFA8D8(Guard_82BF3A88 *);
extern void fn_82BFABC8(Guard_82BF3A88 *);
extern unsigned fn_82BF3608(char *, unsigned, unsigned);

int fn_82BF3A88(char *s, unsigned a, unsigned b)
{
    Guard_82BF3A88 g;

    fn_82BFA8D8(&g);
    if (s == 0 || *s == 0 || a == 0 || b == 0) {
        fn_82BFABC8(&g);
        return 0;
    }
    if (fn_82BF3608(s, a, b) == 0) {
        fn_82BFABC8(&g);
        return 0;
    }
    fn_82BFABC8(&g);
    return 1;
}
