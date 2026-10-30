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
typedef struct G_832767CC {
  char *obj;
  int counter;
} G_832767CC;
extern void fn_82522838(void);
extern unsigned int fn_82522CF8(unsigned int, int);
extern void fn_82558B08(void);
extern unsigned int fn_8259A230(void);
extern unsigned int fn_8259C458(unsigned int);
extern void fn_8259C5D8(int *, int, int);
extern void fn_8259C738(int *);
extern int fn_82A1BB18(void);
extern unsigned int lbl_8326B7D0[];
extern G_832767CC lbl_832767CC;

unsigned int fn_82522A48(int *param_1, int param_2)
{
  unsigned int r;
  unsigned int idx;
  int n;

  if (*param_1 == 0) {
    fn_82522838();
  }
  if (lbl_832767CC.obj == 0) {
    fn_82522838();
  }
  if (lbl_832767CC.obj[0xfc] != 0) {
    fn_82A1BB18();
    if (fn_8259A230() == 0) {
      fn_82558B08();
    }
  }
  param_1 += 2;
  fn_8259C5D8(param_1, 1, fn_82A1BB18() + 1);
  lbl_832767CC.counter = lbl_832767CC.counter + 1;
  fn_82A1BB18();
  idx = fn_8259A230();
  r = fn_82522CF8(fn_8259C458(lbl_8326B7D0[idx]), param_2);
  fn_82A1BB18();
  fn_8259C738(param_1);
  return r;
}
