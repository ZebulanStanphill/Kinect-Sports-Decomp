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
extern void *memcpy(void *, const void *, unsigned int);

typedef struct Iface_82A50118 Iface_82A50118;
typedef struct Vt_82A50118 { int pad[3]; void (*f)(Iface_82A50118 *, int, void *, int); } Vt_82A50118;
struct Iface_82A50118 { Vt_82A50118 *vt; };
typedef struct Obj_82A50118 { Iface_82A50118 *h; int w; int a; int b; int pad[2]; void *data; } Obj_82A50118;

void fn_82A50118(Obj_82A50118 *o, void *dst)
{
  o->h->vt->f(o->h, 0, o->data, (o->a * o->w + 3) * 4);
  memcpy(dst, o->data, 0xc);
}
