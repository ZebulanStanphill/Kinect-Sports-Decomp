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
extern int fn_82522838();
extern char *fn_82522CF8();
extern int fn_8259A230();
extern char *fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int lbl_8326B7D0[];
extern int *lbl_832767CC;


char *fn_825A1580(void)
{
  int *g;
  char *s;
  char *r;
  uint v;
  uint n;

  if (lbl_832767CC == 0) {
    fn_82522838();
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
  }
  g = lbl_832767CC;
  if (*g == 0) {
    fn_82522838();
  }
  fn_8259C5D8(g + 2, 1, fn_82A1BB18() + 1);
  fn_82A1BB18();
  s = fn_8259C458(lbl_8326B7D0[fn_8259A230()]);
  v = *(uint *)(s + 0x28);
  *(uint *)(s + 0x28) = 0x10;
  r = fn_82522CF8(s, 0x1a0010);
  n = v;
  if (n > 0x10) n = 0x10;
  *(uint *)(s + 0x28) = n;
  fn_82A1BB18();
  fn_8259C738(g + 2);
  *(int *)(r + 0x1a0000) = 0;
  *(int *)(r + 0x1a0004) = 0;
  return r;
}
