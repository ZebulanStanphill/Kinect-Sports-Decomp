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


typedef struct Slot_8277DB10 {
  int pad0;
  int pad4;
  int next;
} Slot_8277DB10;
typedef struct Handle_8277DB10 {
  int f0;
  int idx;
  int f8;
  int fc;
} Handle_8277DB10;
typedef struct Mgr_8277DB10 {
  char pad[0x164];
  unsigned count;
  char pad2[8];
  char **pages;
} Mgr_8277DB10;

static void tail_(Mgr_8277DB10 *m, Handle_8277DB10 *h, unsigned a)
{
  if (a == 0xffffffff) {
    h->f0 = 0;
    return;
  }
  *(int *)(*(int *)((char *)m->pages + (a >> 8 & 0xfffffc)) + (a & 0x3ff) * 8 + 4) = 0;
}

void fn_8277DB10(Mgr_8277DB10 *m, Handle_8277DB10 *h)
{
  unsigned a;
  int b;
  unsigned *pc;

  if (h->idx == -1) {
    return;
  }
  pc = &m->count;
  if (h->idx == *pc - 1 && m->count != 0) {
    m->count = m->count - 1;
  }
  a = h->f8;
  b = h->fc;
  h->fc = -1;
  h->idx = a;
  h->f8 = b;
  tail_(m, h, h->idx);
}
