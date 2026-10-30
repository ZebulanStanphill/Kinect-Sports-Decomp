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


typedef struct Iface_83032BE0 Iface_83032BE0;
typedef struct { void *f0; void (*f4)(Iface_83032BE0 *); void (*f8)(Iface_83032BE0 *); } Vt_83032BE0;
struct Iface_83032BE0 { Vt_83032BE0 *vt; };
typedef struct { Iface_83032BE0 *a; Iface_83032BE0 *b; } Obj_83032BE0;

void fn_83032BE0(Obj_83032BE0 *o)
{
  if (o->b != 0) {
    o->b->vt->f4(o->b);
    o->b = 0;
  }
  if (o->a != 0) {
    o->a->vt->f8(o->a);
    o->a = 0;
  }
}
