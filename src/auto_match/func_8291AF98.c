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
extern int fn_8265C990();
extern int fn_82917D90();
extern int fn_8265C990();
extern int fn_82917D90();
extern unsigned int lbl_8202E390;

typedef struct Obj {
    void *vtbl;
    int pad4;
    void *p8;
    int padc[2];
    void **items;   /* 0x14 */
    unsigned int count; /* 0x18 */
    void *p1c;
} Obj;

void fn_8291AF98(Obj *o)
{
    unsigned int i;
    void *it;

    o->vtbl = &lbl_8202E390;
    if (o->items != 0) {
        for (i = 0; i < o->count; i++) {
            it = o->items[i];
            if (it != 0) {
                fn_82917D90(it);
                fn_8265C990(it, 0x24810000);
            }
        }
        fn_8265C990(o->items, 0x24810000);
    }
    fn_8265C990(o->p8, 0x24810000);
    fn_8265C990(o->p1c, 0x24810000);
}
