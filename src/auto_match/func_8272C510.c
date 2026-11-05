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
typedef struct Sub_8272C510 {
    char pad0[0x13d];
    unsigned char hi : 4;
    unsigned char f8 : 1;
    unsigned char f4 : 1;
    unsigned char f2 : 1;
    unsigned char f1 : 1;
} Sub_8272C510;
typedef struct Obj_8272C510 Obj_8272C510;
struct Obj_8272C510 {
    struct {
        char pad[0x13c];
        void (*f13c)(Obj_8272C510 *);
    } *vt;
    char pad4[0xa0 - 4];
    Sub_8272C510 *sub;
    char pada4[0xc8 - 0xa4];
    unsigned short flags;
};

extern void fn_82799B80(Sub_8272C510 *);
extern void fn_82799BA8(Sub_8272C510 *);

void fn_8272C510(Obj_8272C510 *o)
{
    unsigned short fl = o->flags;
    unsigned char on;

    if ((fl & 1) != 0 && o->sub->f8 == 0) {
        on = 1;
    } else {
        on = 0;
    }
    if (on) {
        fn_82799B80(o->sub);
    } else {
        o->sub->f1 = 0;
    }
    if ((unsigned char)(fl & 1) != 0) {
        fn_82799BA8(o->sub);
    } else {
        o->sub->f2 = 0;
    }
    o->vt->f13c(o);
}
