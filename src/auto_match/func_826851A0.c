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


struct Obj_826851A0;
typedef struct VT_826851A0 {
  void (*f0)(struct Obj_826851A0 *, int);
  struct Obj_826851A0 *(*f4)(struct Obj_826851A0 *);
  int pad[2];
  int (*f10)(struct Obj_826851A0 *, struct Obj_826851A0 *, int);
  int pad2[5];
  unsigned char (*f28)(struct Obj_826851A0 *);
} VT_826851A0;
typedef struct Obj_826851A0 { VT_826851A0 *vt; } Obj_826851A0;

int fn_826851A0(Obj_826851A0 *self, int a, int b)
{
  Obj_826851A0 *o = self->vt->f4(self);
  int r;
  if (o == 0) {
    return 0;
  }
  if (o->vt->f28(o) != 0) {
    r = 0;
  } else {
    r = self->vt->f10(self, o, b);
  }
  o->vt->f0(o, 1);
  return r;
}
