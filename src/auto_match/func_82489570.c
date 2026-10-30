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
extern void fn_8251CF80(void *, int, void *);
extern void fn_8251FA58(unsigned int);
extern void fn_82520158(const char *, void *, int);
extern void fn_82544F40(void);
extern unsigned char lbl_83276741;
extern unsigned int lbl_832810F0;

void fn_82489570(void)
{
  struct { char buf[16]; struct {int a; int b; int c;} v; } L;

  if (lbl_832810F0 != 0) {
    fn_82544F40();
    fn_8251FA58(lbl_832810F0);
    lbl_832810F0 = 0;
  }
  if (lbl_83276741 == 0) {
    lbl_83276741 = 1;
  }
  fn_82520158("first_scene", L.buf, 0);
  L.v.a = 0;
  L.v.b = 0;
  L.v.c = 0;
  fn_8251CF80(L.buf, 0, &L.v);
}
