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
typedef struct Pair_8286DCA0 {
    char first[0x1c];
    char second[0x1c];   /* 0x1c */
} Pair_8286DCA0;

typedef struct Obj_8286DCA0 {
    int pad0;
    Pair_8286DCA0 pair;  /* 0x04 */
} Obj_8286DCA0;

extern void fn_82230300(void *p, int a, int b);

void fn_8286DCA0(void *self, Obj_8286DCA0 *o)
{
    Pair_8286DCA0 *pair = &o->pair;

    fn_82230300(pair->second, 1, 0);
    fn_82230300(pair->first, 1, 0);
}
