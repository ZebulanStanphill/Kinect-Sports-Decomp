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
extern void fn_82D58908(void *, void *, int, int, int, int, int, int, int);

typedef struct { int v[5]; } Rec_82D59268;

typedef struct {
  char pad0[0x190];
  int count;
  char pad194[0x1a0 - 0x194];
  char t1a0[0x400];
  char t5a0[0x9a0 - 0x5a0];
  Rec_82D59268 recs[1];
  char pad2[0x1e30 - 0x9a0 - 0x14];
  int f1e30;
  int f1e34;
} Obj_82D59268;

void fn_82D59268(Obj_82D59268 *self, Rec_82D59268 *src, int a, int b)
{
  { Rec_82D59268 *d = &self->recs[self->count]; *d = *src; }
  fn_82D58908(self, self->t1a0, self->count, a, b, a, b, self->f1e30, 0);
  if (((char *)src)[0x11] != 0) {
    fn_82D58908(self, self->t5a0, self->count, a, b, a, b, self->f1e34, 0);
  }
  self->count = self->count + 1;
}
