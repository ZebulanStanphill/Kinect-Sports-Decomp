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


typedef struct VT_82E6E608 {
  int pad[0x40 / 4];
  int (*f40)(void *);
  int pad2[(0x54 - 0x44) / 4];
  int (*f54)(void *);
} VT_82E6E608;
typedef struct Sub_82E6E608 { VT_82E6E608 *vt; } Sub_82E6E608;
typedef struct Obj_82E6E608 {
  VT_82E6E608 *vt;
  int pad4;
  Sub_82E6E608 *m8;
  int pad[(0x3c - 0xc) / 4];
  int m3c;
} Obj_82E6E608;

int fn_82E6E608(Obj_82E6E608 *self)
{
  int hr;

  if (self->m3c == 0) {
    hr = self->vt->f54(self);
    if (hr < 0) return hr;
  }
  if (self->m8 == 0) {
    return 0xc00d36bb;
  }
  return self->m8->vt->f40(self->m8);
}
