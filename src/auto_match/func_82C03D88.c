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


struct If_82C03D88;
typedef struct { void *s0; void (*addref)(struct If_82C03D88 *); void (*release)(struct If_82C03D88 *); } IfVt_82C03D88;
typedef struct If_82C03D88 { IfVt_82C03D88 *vt; } If_82C03D88;
typedef struct { char pad[0x2c]; If_82C03D88 *a; If_82C03D88 *b; If_82C03D88 *c; } Obj_82C03D88;

int fn_82C03D88(Obj_82C03D88 *o, If_82C03D88 *a, If_82C03D88 *b, If_82C03D88 *c)
{
  if (o->a != 0) {
    o->a->vt->release(o->a);
    o->a = 0;
  }
  if (o->b != 0) {
    o->b->vt->release(o->b);
    o->b = 0;
  }
  if (o->c != 0) {
    o->c->vt->release(o->c);
    o->c = 0;
  }
  if (a != 0) {
    a->vt->addref(a);
    o->a = a;
  }
  if (b != 0) {
    b->vt->addref(b);
    o->b = b;
  }
  if (c != 0) {
    c->vt->addref(c);
    o->c = c;
  }
  return 0;
}
