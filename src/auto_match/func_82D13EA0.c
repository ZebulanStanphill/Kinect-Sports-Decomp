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
typedef struct Iface Iface;
typedef struct IfaceVtbl {
  void *f0;
  void *f4;
  void (*Release)(Iface *, int, int);
  void *fc;
  void (*Free)(Iface *, int, int, int);
} IfaceVtbl;
struct Iface {
  IfaceVtbl *vtbl;
};
typedef struct Ctx {
  char pad[0x10];
  Iface *alloc;
} Ctx;
extern Ctx *fn_82CE5410(void);

typedef struct Array {
  int *data;
  int count;
  int capacity;
} Array;

void fn_82D13EA0(Array *a)

{
  Iface *it;
  int i;

  for (i = 0; i < a->count; i++) {
    int v = a->data[i];
    it = fn_82CE5410()->alloc;
    it->vtbl->Release(it,v,0x808);
  }
  a->count = 0;
  it = fn_82CE5410()->alloc;
  a->count = 0;
  if ((a->capacity & (1 << 31)) == 0) {
    it->vtbl->Free(it,(int)a->data,a->capacity & 0x3fffffff,4);
  }
  a->data = 0;
  a->capacity = 0x80000000;
}
