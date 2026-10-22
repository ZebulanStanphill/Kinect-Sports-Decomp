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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();

typedef struct { int a; int b; void *p; } Elem;
typedef struct { Elem *data; int count; int cap; } Vec;

Vec * fn_82E08FA0(Vec *v, uint flags)
{
  int *alloc;
  int i, n, r; Elem *d;

  r = fn_82CE5410();
  n = v->count; d = v->data; alloc = *(int **)(r + 0x10);
  for (i = 0; i < n; i++) {
    if (d[i].p != 0) {
      fn_82CE4118(d[i].p);
    }
    d[i].p = 0;
    fn_82CED5B8(&d[i].b);
    fn_82CED5B8(&d[i].a);
  }
  v->count = 0;
  if ((v->cap & (int)0x80000000) == 0) {
    (*(code *)(*alloc + 0x10))(alloc, v->data, v->cap & 0x3fffffff, 0xc);
  }
  v->data = 0;
  v->cap = 0x80000000;
  if ((flags & 1) != 0) {
    alloc = *(int **)(fn_82CE5410() + 0x10);
    (*(code *)(*alloc + 8))(alloc, v, 0xc);
  }
  return v;
}
