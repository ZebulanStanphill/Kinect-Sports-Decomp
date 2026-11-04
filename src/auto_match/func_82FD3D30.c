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
typedef struct Heap { struct HeapVt *vt; } Heap;
struct HeapVt { void *f0, *f4; void (*f8)(Heap *, void *); };
typedef struct Obj { void (**vt)(struct Obj *, int); int pad[2]; char sub[0x138]; void *slots[2]; } Obj;
extern void fn_82FC9C90(void *);

int fn_82FD3D30(Obj *o, Heap *h)
{
  void **p;
  int n;
  fn_82FC9C90(o->sub);
  p = o->slots;
  n = 2;
  do {
    if (*p != 0) {
      h->vt->f8(h, *p);
      *p = 0;
    }
    n--;
    p++;
  } while (n != 0);
  if (o != 0) {
    o->vt[0](o, 1);
  }
  h->vt->f8(h, o);
  return 1;
}
