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
extern void fn_822315A0(void *);
extern void fn_8251FA58(void *);
extern void fn_8265CA20(void *);
extern void fn_82672660(int, void *);
extern float lbl_821CC160;
extern void (*lbl_83276774[])(const char *, const char *, int);

typedef struct Res { char pad[0x3c]; int f3c; void *f40; } Res;
typedef struct Self { char pad[0x50]; void *f50; Res *f54; char pad58[0x48]; void *fa0; Res *fa4; char padA8[8]; void *fb0; char padb4[8]; void *fbc; char padc0[8]; void *fc8; char padcc[8]; int fd4; float fd8; } Self;

void fn_823DB2F8(Self *self)
{
  Res *r;

  if (self->fd4 != 0 && self->fd8 <= lbl_821CC160) {
    if (lbl_83276774[2] != 0) {
      lbl_83276774[2]("olympus::sport::football::FootballUI::CloseSwipe", "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\controller\\football\\sport_controller_football_ui.cpp", 0x1e5);
    }
    self->fd4 = 0;
  }
  r = self->f54;
  if (r != 0) {
    fn_82672660(r->f3c, r);
    if (r->f40 != 0) {
      fn_822315A0(r->f40);
    }
    fn_8265CA20(r);
  }
  r = self->fa4;
  if (r != 0) {
    fn_82672660(r->f3c, r);
    if (r->f40 != 0) {
      fn_822315A0(r->f40);
    }
    fn_8265CA20(r);
  }
  if (self->fb0 != 0) {
    fn_8251FA58(self->fb0);
    self->fb0 = 0;
  }
  if (self->fbc != 0) {
    fn_8251FA58(self->fbc);
    self->fbc = 0;
  }
  if (self->fc8 != 0) {
    fn_8251FA58(self->fc8);
    self->fc8 = 0;
  }
  if (self->fa0 != 0) {
    fn_822315A0(self->fa0);
  }
  if (self->f50 != 0) {
    fn_822315A0(self->f50);
  }
}
