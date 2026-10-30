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
struct Al_82E1A688;
typedef struct {
  void *p0;
  void *p4;
  void (*f8)(struct Al_82E1A688 *, void *, int);
  void *pc;
  void (*f10)(struct Al_82E1A688 *, void *, unsigned, int);
} AlVt_82E1A688;
typedef struct Al_82E1A688 { AlVt_82E1A688 *vt; } Al_82E1A688;
typedef struct { char pad[0x10]; Al_82E1A688 *al; } Heap_82E1A688;
typedef struct { void *data; int size; unsigned cap; } Vec_82E1A688;
typedef struct {
  Vec_82E1A688 v[4];
  void *obj;
} Obj_82E1A688;
extern Heap_82E1A688 *fn_82CE5410(void);
extern void fn_82D003F0(void *);
extern void fn_82E1A7F0(void *);

static void Free_82E1A688(Vec_82E1A688 *v, int align)
{
  Al_82E1A688 *al = fn_82CE5410()->al;
  v->size = 0;
  if (((int)v->cap & (int)0x80000000) == 0) {
    al->vt->f10(al, v->data, v->cap & 0x3fffffff, align);
  }
  v->data = 0;
  v->cap = 0x80000000;
}

void fn_82E1A688(Obj_82E1A688 *o)
{
  void *p = o->obj;
  if (p != 0) {
    Al_82E1A688 *al;
    fn_82E1A7F0(p);
    fn_82D003F0(p);
    al = fn_82CE5410()->al;
    al->vt->f8(al, p, 0x10);
  }
  Free_82E1A688(&o->v[3], 8);
  Free_82E1A688(&o->v[2], 8);
  Free_82E1A688(&o->v[1], 0x10);
  Free_82E1A688(&o->v[0], 8);
}
