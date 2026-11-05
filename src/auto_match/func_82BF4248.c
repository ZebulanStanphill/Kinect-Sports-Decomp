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
struct Obj_82BF4248;
typedef struct { int (*f0)(struct Obj_82BF4248 *); __int64 (*f4)(struct Obj_82BF4248 *); } VT_82BF4248;
typedef struct Obj_82BF4248 { VT_82BF4248 *vt; } Obj_82BF4248;
typedef struct { int (*f0)(struct Obj_82BF4248 *); int (*f4)(struct Obj_82BF4248 *); } VT2_82BF4248;
typedef struct Item_82BF4248 { VT2_82BF4248 *vt; } Item_82BF4248;
typedef struct Node_82BF4248 { int f0, f4; struct Node_82BF4248 *next; int fc; int obj; } Node_82BF4248;
typedef struct { int a, b; Node_82BF4248 *head; } List_82BF4248;
typedef struct { char pad[0x4c]; int f4c; } Self_82BF4248;
extern void fn_82BEC770(List_82BF4248 *);
extern void fn_82BEC9C8(Self_82BF4248 *, void *, __int64 *, List_82BF4248 *);
extern void fn_82BEDD30(Self_82BF4248 *, int);
extern void fn_82BF6CE8(List_82BF4248 *);
extern void fn_82BF4228(void);
#define O(x) ((Obj_82BF4248 *)(x))
#define I(x) ((Item_82BF4248 *)(x))

void fn_82BF4248(Self_82BF4248 *self)
{
  struct { __int64 v[2]; List_82BF4248 l; } L;
  Node_82BF4248 *n;
  int o, io;
  o = self->f4c;
  if (o != 0) {
    if (O(o)->vt->f0(O(o)) != 0) {
      fn_82BEC770(&L.l);
      o = self->f4c;
      L.v[0] = O(o)->vt->f4(O(o));
      fn_82BEC9C8(self, (void *)fn_82BF4228, L.v, &L.l);
      for (n = L.l.head; n != 0; n = n->next) {
        io = n->obj;
        if (io != 0) {
          fn_82BEDD30(self, I(io)->vt->f4((Obj_82BF4248 *)io));
        }
      }
      fn_82BF6CE8(&L.l);
    }
  }
}
