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
typedef struct { char b[0x50]; } Blob_82FE2850;
typedef struct Pk_82FE2850 { int f0; unsigned f4; int f8; unsigned short fc, fe; } Pk_82FE2850;
typedef struct Obj_82FE2850 {
  char p0[0xbc]; unsigned fbc; char pc0[8]; unsigned fc8; char pcc[6]; unsigned char fd2, fd3;
  char pd4[0x10]; float fe4; char pe8[0x50]; float f138;
} Obj_82FE2850;
extern void *memcpy(void *, const void *, unsigned);
extern void fn_82FE1028(Obj_82FE2850 *);
extern void fn_82FE1178(Obj_82FE2850 *, Pk_82FE2850 *, unsigned);
extern void fn_82FE11F8(Obj_82FE2850 *, Pk_82FE2850 *);
extern void fn_82FE17C0(Obj_82FE2850 *, Pk_82FE2850 *);
extern void fn_82FE2018(Obj_82FE2850 *, Pk_82FE2850 *);
extern float lbl_82006848;

void fn_82FE2850(Obj_82FE2850 *param_1, Pk_82FE2850 *param_2)
{
  unsigned char f;
  unsigned n, t, x;
  fn_82FE1028(param_1);
  f = param_2->f8 == 0x11;
  if (f) {
    if (param_1->fd3 != 0 || param_1->fd2 == 0) {
      param_1->fbc = (unsigned)((param_1->f138 * lbl_82006848 + param_1->fe4) * (float)param_1->fc8);
    }
    n = param_1->fbc;
    t = param_2->fc - param_2->fe;
    if (n < t) {
      t = n;
    }
    param_1->fbc = n - t;
    x = ((unsigned)(-(param_2->fe + t)) & 3) + t;
    fn_82FE1178(param_1, param_2, x);
    param_2->fe = param_2->fe + x;
    if (param_1->fbc > 0) {
      param_2->f8 = 0x2d;
    }
  }
  param_1->fd2 = f;
  switch (param_2->f4) {
  case 3: case 4: case 8: case 0xb: case 0xc:
    fn_82FE11F8(param_1, param_2);
    break;
  case 7: case 0xf: case 0x33:
    fn_82FE17C0(param_1, param_2);
    break;
  case 0x37: case 0x3b: case 0x3f:
    fn_82FE2018(param_1, param_2);
    break;
  }
  *(Blob_82FE2850 *)((char *)param_1 + 0x1a4) = *(Blob_82FE2850 *)((char *)param_1 + 0xe4);
}
