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
typedef struct Obj_827F3770 {
    char pad0[0x34];
    float a[8];   /* 0x34 */
    float b[8];   /* 0x54 */
} Obj_827F3770;

extern void fn_827F6F58(Obj_827F3770 *p, int v);
extern int fn_827FA3E8(void *src);
extern int fn_827FA3F0(void *src);
extern int fn_827FA3F8(void *src);
extern void fn_827F6BA0(Obj_827F3770 *p, unsigned short v);
extern void fn_827F6AC0(Obj_827F3770 *p, int v);
extern void fn_827FA1F0(Obj_827F3770 *p, int v);
extern void fn_827F9AB0(Obj_827F3770 *p, int v);

void *memset(void *dst, int c, unsigned int n);

Obj_827F3770 *fn_827F3770(Obj_827F3770 *p, void *src)
{
    int v0;
    int v1;
    int v2;
    float *b;
    float f;

    fn_827F6F58(p, 0);
    v0 = fn_827FA3E8(src);
    v1 = fn_827FA3F0(src);
    v2 = fn_827FA3F8(src);
    fn_827F6BA0(p, (unsigned short)v0);
    fn_827F6AC0(p, v1);
    fn_827FA1F0(p, v2);
    fn_827F9AB0(p, 0xffff);
    b = p->b;
    memset(p->a, 0, 0x20);
    memset(b, 0, 0x20);
    f = 1.0f;
    b[3] = f;
    p->a[3] = f;
    return p;
}
