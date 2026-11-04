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
extern int fn_8267C4C8(void *);
extern int fn_8267C4F0(void *);

typedef struct Obj_827531E8 {
  int pad[3];
  void *r0;
  void *r1;
  void *r2;
  void *r3;
} Obj_827531E8;

unsigned char fn_827531E8(Obj_827531E8 *self, void *a, void *b, void *c, void *d)
{
  unsigned char flags;

  flags = 0;
  if (self->r0 != a) {
    if (a != 0) {
      fn_8267C4C8(a);
    }
    if (self->r0 != 0) {
      fn_8267C4F0(self->r0);
    }
    self->r0 = a;
  }
  if (self->r1 != b) {
    flags = 1;
    if (b != 0) {
      fn_8267C4C8(b);
    }
    if (self->r1 != 0) {
      fn_8267C4F0(self->r1);
    }
    self->r1 = b;
  }
  if (self->r2 != c) {
    flags = flags | 2;
    if (c != 0) {
      fn_8267C4C8(c);
    }
    if (self->r2 != 0) {
      fn_8267C4F0(self->r2);
    }
    self->r2 = c;
  }
  if (self->r3 != d) {
    flags = flags | 3;
    if (d != 0) {
      fn_8267C4C8(d);
    }
    if (self->r3 != 0) {
      fn_8267C4F0(self->r3);
    }
    self->r3 = d;
  }
  return flags;
}
