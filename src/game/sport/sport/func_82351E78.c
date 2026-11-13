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
typedef void (*AssertFn_82351E78)(int, int, int, const char *, const char *, int);
typedef int (*CheckFn_82351E78)(void);
typedef struct { int pad0; AssertFn_82351E78 assertFn; char pad8[0x20 - 8]; CheckFn_82351E78 checkFn; } Hooks_82351E78;
struct Obj_82351E78;
typedef struct { void *f0; void *f4; void *f8; void *fc; int (*f10)(struct Obj_82351E78 *, float); } VT_82351E78;
typedef struct Obj_82351E78 { VT_82351E78 *vt; } Obj_82351E78;
typedef struct {
  char pad0[0x18]; Obj_82351E78 *f18;
  char pad1[0x350 - 0x1c]; int f350; int f354;
  char pad2[0x3e4 - 0x358]; int f3e4;
} Self_82351E78;
extern Hooks_82351E78 lbl_83276774;
extern void fn_82350888(Self_82351E78 *, int);
extern void fn_82355538(Self_82351E78 *);
extern void fn_82358A60(Obj_82351E78 *);

void fn_82351E78(Self_82351E78 *self, float dt)
{
  int ok;
  if (self->f354 == 0) {
    if (self->f3e4 == 0) {
      if (lbl_83276774.assertFn != 0) {
        lbl_83276774.assertFn(0, 0, 1, "olympus::sport::Sport::TickActiveSessionInit", "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\sport.cpp", 0x87f);
      }
      self->f3e4 = 1;
    }
    ok = lbl_83276774.checkFn != 0 ? lbl_83276774.checkFn() : 0;
    if (ok != 0) {
      if (self->f18 == 0 || self->f18->vt->f10(self->f18, dt) != 0) {
        if (self->f350 == 0) {
          fn_82358A60(self->f18);
          self->f350 = 1;
        } else {
          fn_82355538(self);
          self->f354 = 1;
        }
      }
    }
  } else {
    fn_82350888(self, 7);
  }
}
