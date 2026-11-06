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
extern int fn_82C106C8();
extern int fn_82C10B28();
extern int fn_82C11050();

typedef struct Res_82C11160 {
  int pad;
  int (*release)(struct Res_82C11160 *);
} Res_82C11160;

typedef struct Obj_82C11160 {
  int alloc;
  Res_82C11160 *a;
  char pad0[0xc];
  Res_82C11160 *b;
  char pad1[0x4c - 0x18 + 0x0];
} Obj_82C11160;

int fn_82C11160(Obj_82C11160 *param_1)

{
  int hr;
  Obj_82C11160 *self = param_1;

  if (self->a != 0 && self->a->release != 0) {
    hr = self->a->release(self->a);
    if (hr < 0) {
      return hr;
    }
  }
  if (self->a != 0) {
    hr = fn_82C10B28(self->alloc,0x20,&self->a);
    if (hr < 0) {
      return hr;
    }
  }
  self->a = 0;
  if (self->b != 0 && self->b->release != 0) {
    hr = self->b->release(self->b);
    if (hr < 0) {
      return hr;
    }
  }
  if (self->b != 0) {
    hr = fn_82C10B28(self->alloc,0x20,&self->b);
    if (hr < 0) {
      return hr;
    }
  }
  self->b = 0;
  if (*(int *)((char *)self + 0x64) != 0) {
    fn_82C106C8(self->alloc,*(int *)((char *)self + 0x64));
  }
  hr = fn_82C11050(*(int *)((char *)self + 0x48));
  fn_82C10B28(self->alloc,0x20,&self);
  return hr;
}
