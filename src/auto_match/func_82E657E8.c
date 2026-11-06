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
extern unsigned int lbl_82155118;

typedef struct Iface_82E657E8 Iface_82E657E8;
typedef struct {
  void *f0[2];
  void (*f8)(Iface_82E657E8 *);
  void *fc;
  void (*f10)(Iface_82E657E8 *);
} Vt_82E657E8;
struct Iface_82E657E8 {
  Vt_82E657E8 *vt;
};
typedef struct Obj_82E657E8 {
  void *vt;
  int pad4;
  Iface_82E657E8 *f8;
} Obj_82E657E8;

void fn_82E657E8(Obj_82E657E8 *self)
{
  Iface_82E657E8 *p = self->f8;
  self->vt = &lbl_82155118;
  if (p != 0) {
    p->vt->f10(p);
  }
  if (self->f8 != 0) {
    self->f8->vt->f8(self->f8);
    self->f8 = 0;
  }
}
