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
typedef struct Item_8248A380 {
    char pad0[4];
    int m4;
    char pad8[0x10];
    unsigned m18;
    char pad1c[0xc];
    unsigned m28;
} Item_8248A380;
typedef struct Vec_8248A380 {
    Item_8248A380 **begin;
    Item_8248A380 **end;
} Vec_8248A380;
typedef struct Obj_8248A380 {
    char pad0[8];
    Vec_8248A380 *vec;
} Obj_8248A380;

extern void fn_82489AA0(Item_8248A380 *, int);
extern unsigned fn_82A1E650(unsigned, int);

void fn_8248A380(Obj_8248A380 *o)
{
    Vec_8248A380 *v = o->vec;
    unsigned i;

    for (i = 0; i < (unsigned)(v->end - v->begin); i++) {
        Item_8248A380 *it = v->begin[i];
        if (it->m4 > 0 && it->m4 <= 2 && fn_82A1E650(it->m18, 0) == 0) {
            if (it->m28 == 0) {
                fn_82489AA0(it, 0);
            } else {
                fn_82489AA0(it, 3);
            }
        }
    }
}
