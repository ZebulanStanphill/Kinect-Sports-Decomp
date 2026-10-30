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
struct Al_82CE7240;
typedef struct {
  void *p0;
  void *p4;
  void *p8;
  void *pc;
  void (*f10)(struct Al_82CE7240 *, void *, unsigned, int);
} AlVt_82CE7240;
typedef struct Al_82CE7240 { AlVt_82CE7240 *vt; } Al_82CE7240;
typedef struct { char pad[0x14]; Al_82CE7240 *al; } Heap_82CE7240;
typedef struct { void *data; int size; unsigned cap; } Vec_82CE7240;
typedef struct {
  int pad0;
  Vec_82CE7240 a;
  Vec_82CE7240 b;
} Obj_82CE7240;
extern Heap_82CE7240 *fn_82CE5410(void);

static void Free_82CE7240(Vec_82CE7240 *v, int align)
{
  Al_82CE7240 *al = fn_82CE5410()->al;
  v->size = 0;
  if (((int)v->cap & (int)0x80000000) == 0) {
    al->vt->f10(al, v->data, v->cap & 0x3fffffff, align);
  }
  v->data = 0;
  v->cap = 0x80000000;
}

void fn_82CE7240(Obj_82CE7240 *o)
{
  Free_82CE7240(&o->b, 4);
  Free_82CE7240(&o->a, 4);
}
