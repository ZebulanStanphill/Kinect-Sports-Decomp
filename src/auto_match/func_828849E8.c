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
extern int fn_82880428(void *);
extern int fn_82880BD8(void);
extern int fn_82881A08(void);
extern int fn_828846A0(void *, int);
extern int fn_82CE08B8(int, int, int);
extern int fn_82CE08F0(int, unsigned, int *);
extern int fn_82CE0908(int, int, int, int *, int);
extern int fn_82CE0978(int, void *, int);
extern int fn_82CE0BB0(void);
extern int lbl_831599F4;
extern unsigned lbl_832129F4;
extern unsigned lbl_83212A00[];

int fn_828849E8(void)
{
  int r;
  int opt1;
  int opt2;
  struct { short family; short port; int addr; int pad[2]; } sa;
  char buf[72];

  if (lbl_831599F4 == -1) {
    lbl_831599F4 = fn_82CE08B8(2, 2, 0x11);
    if (lbl_831599F4 == -1) {
      fn_82CE0BB0();
    }
    opt1 = 1;
    if (fn_82CE08F0(lbl_831599F4, 0x8004667e, &opt1) == -1) {
      fn_82CE0BB0();
    }
    opt2 = 1;
    if (fn_82CE0908(lbl_831599F4, 0xffff, 0x20, &opt2, 4) == -1) {
      fn_82CE0BB0();
    }
    sa.family = 2;
    sa.addr = 0;
    sa.port = 0x3e9;
    if (fn_82CE0978(lbl_831599F4, &sa, 0x10) == -1) {
      fn_82CE0BB0();
    }
  }
  r = fn_82880BD8();
  if (r < 0 && lbl_83212A00[2] < lbl_832129F4) {
    r = fn_82881A08();
    if (r >= 0) {
      fn_82880428(buf);
      fn_828846A0(buf, r);
    }
  }
  return r;
}
