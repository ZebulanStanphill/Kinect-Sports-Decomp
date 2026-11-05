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
typedef struct Obj_8269A4E8 { int vt; char pad[0x62]; unsigned char flags; } Obj_8269A4E8;
typedef struct Msg_8269A4E8 {
  int type;
  int a;
  short b;
  unsigned char c;
  signed char d;
  unsigned char e;
  unsigned char f;
} Msg_8269A4E8;
extern void fn_82703F00(int, Obj_8269A4E8 *);

void fn_8269A4E8(Obj_8269A4E8 *self)
{
  if ((self->flags & 2) != 0) {
    int r = (*(int (**)(Obj_8269A4E8 *))(*(int *)self + 0x40))(self);
    fn_82703F00(r, self);
  }
  if ((self->flags & 0x10) == 0) {
    Msg_8269A4E8 m;
    m.a = 0;
    m.b = 0;
    m.c = 0;
    m.e = 0;
    m.f = 0;
    m.type = 4;
    m.d = -1;
    (*(void (**)(Obj_8269A4E8 *, Msg_8269A4E8 *))(*(int *)self + 0x6c))(self, &m);
    self->flags = self->flags | 0x10;
  }
}
