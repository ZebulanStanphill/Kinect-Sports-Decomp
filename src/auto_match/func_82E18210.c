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
extern int *fn_82CE5410(void);
extern void fn_82CFDFE0(void *, void *, unsigned, int);

void fn_82E18210(void *a, unsigned type, int count, unsigned *src)
{
    int *top;
    int base;
    unsigned __int64 *dst;
    int i;

    if (type == 4) {
        fn_82CFDFE0(a, src, 4, count);
    } else {
        top = fn_82CE5410();
        base = *top;
        *top = ((count * 8 + 0x7f) & ~0x7f) + base;
        dst = (unsigned __int64 *)base;
        for (i = 0; i < count; i++) {
            dst[i] = src[i];
        }
        fn_82CFDFE0(a, (void *)base, type, count);
        top = fn_82CE5410();
        *top = base;
    }
}
