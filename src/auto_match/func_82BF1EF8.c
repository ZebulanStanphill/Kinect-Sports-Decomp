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
typedef struct Obj_82BF1EF8 {
    void *vt;
    char pad4[8];
    void *vt2;
    char pad10[0x10];
    void *m20;
} Obj_82BF1EF8;

extern void fn_82BE5230(void *);
extern char lbl_820EB5B4[];
extern char lbl_820EB5B8[];
extern char lbl_82197048[];
extern void (*lbl_831751CC)(void *);

void fn_82BF1EF8(Obj_82BF1EF8 *o)
{
    o->vt = lbl_820EB5B8;
    o->vt2 = lbl_820EB5B4;
    if (o->m20 != 0) {
        lbl_831751CC(o->m20);
    }
    fn_82BE5230(&o->vt2);
    o->vt = lbl_82197048;
}
