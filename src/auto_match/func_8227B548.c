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
typedef struct Tmp_8227B548 {
    int pad0;
    unsigned rc;
} Tmp_8227B548;
typedef struct Obj_8227B548 {
    char pad0[0xa48];
    int m48;
    float m4c;
    int pad50;
    int m54;
    char pad58[8];
    int m60;
} Obj_8227B548;

extern int *fn_82279C58(Tmp_8227B548 *, Obj_8227B548 *);
extern void fn_82672C20(int, const char *, int, int);
extern void fn_822315A0(unsigned);
extern float lbl_821CC160;

void fn_8227B548(Obj_8227B548 *o)
{
    Tmp_8227B548 t;

    if (o->m48 != 0) {
        if (o->m60 == 0) {
            fn_82672C20(*fn_82279C58(&t, o), "_root.mainCtrl.show", 0, 0);
            if (t.rc != 0) {
                fn_822315A0(t.rc);
            }
            o->m48 = 1;
            o->m4c = lbl_821CC160;
        }
    } else {
        o->m54 = 1;
    }
}
