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
typedef struct Flags_82BAD660 {
  unsigned int pad1 : 24;
  unsigned int b24 : 1;
  unsigned int pad2 : 6;
  unsigned int b0 : 1;
} Flags_82BAD660;
typedef struct Obj_82BAD660 {
  char pad0[0x38];
  int f38;
  char pad3c[0x50 - 0x3c];
  int f50;
  char pad54[0x80 - 0x54];
  int f80;
  char pad84[0xac - 0x84];
  struct Obj_82BAD660 *fac;
  char padb0[0xe4 - 0xb0];
  Flags_82BAD660 fe4;
} Obj_82BAD660;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void fn_82BACA30(Obj_82BAD660 *, int, int, int);
extern int fn_82BD09F0(int, Obj_82BAD660 *);
extern int lbl_820DF0C0;

void fn_82BAD660(Obj_82BAD660 *o, int a, int b, int *c)
{
  Obj_82BAD660 *p = o->fac;
  int v;

  if (p != 0 && p->fe4.b0 != 0) {
    o->f50 = p->f50;
    if ((unsigned char)o->fe4.b24 != 0) {
      fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "DefIsVirtual() == false",
                  "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\asm\\asm.cpp", 0xafd);
    }
    o->f38 = fn_82BD09F0(c[0xab0 / 4], p);
    v = p->f80;
  } else {
    o->f38 = 0;
    o->f50 = 0;
    v = lbl_820DF0C0;
  }
  o->f80 = v;
  fn_82BACA30(o, a, b, (int)c);
}
