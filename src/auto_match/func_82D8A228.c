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
struct HeapVt { void *f0; void *(*alloc)(Heap *, int); };
typedef struct { Heap *pad[4]; Heap *heap; } Glob;
typedef struct { unsigned *a; unsigned short b; unsigned short c; } Part;
typedef struct { Part p0; Part p1; } Set;
static __forceinline void init(Part *p) { p->a = 0; p->b = 0; p->c = 0x8000; }
typedef struct { char pad[0x214]; Set *set; } Obj;
extern Glob *fn_82CE5410(void);

void fn_82D8A228(Obj *o, unsigned x)
{
  Set *s;
  int i;
  unsigned *p;
  int n;
  if (o->set == 0) {
    Glob *g = fn_82CE5410();
    Set *m = (Set *)g->heap->vt->alloc(g->heap, 0x10);
    Set *r;
    if (m != 0) {
      init(&m->p0);
      init(&m->p1);
      r = m;
    } else r = 0;
    o->set = r;
  }
  s = o->set;
  i = 0;
  n = s->p1.b;
  if (n > 0) {
    p = s->p1.a;
    do {
      if (*p == x) goto found;
      i++;
      p++;
    } while (i < n);
  }
  i = -1;
found:
  s->p1.a[i] = 0;
}
