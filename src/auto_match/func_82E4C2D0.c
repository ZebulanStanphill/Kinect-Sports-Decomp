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
extern void *fn_8265C940(unsigned int, unsigned int);
extern void fn_8265C990(void *, unsigned int);
extern int fn_82E83330(int);
extern int fn_82E83530(int);
extern int fn_82E85018(int);
extern int fn_82E9A2B0(void *, void *, unsigned int *, int, int, void *, int, int);
extern void fn_82E9A7B8(void *, void *, int *, int, int, int, int);
extern int fn_82E9A868(void *, void *, int *, int, int);
void *memcpy(void *d, const void *s, unsigned int n);
extern unsigned char lbl_831882F8;
extern int lbl_8323FF50;

typedef struct {
  int p0; int p4; int p8; int fc; unsigned int f10; int f14; int f18; int f1c; int f20;
  char p24[0x30 - 0x24]; int f30; char p34[4]; int f38; char p3c[4]; int f40; int f44; void *f48; int f4c; int f50; char p54[4]; int f58;
  char p5c[0x218 - 0x5c]; int f218;
} P_82E4C2D0;
typedef struct { char pad[0xae8]; int fae8; } Q_82E4C2D0;

int fn_82E4C2D0(P_82E4C2D0 *param_1, char *param_2, unsigned int *param_3)
{
  int hasOut;
  int iVar2;
  int iVar4;
  unsigned char *pBuf;
  void *pTmp;
  int stk0;
  int stk1;
  int base;
  char *dst;

  iVar4 = 0;
  hasOut = fn_82E83530(param_1->fc);
  pBuf = (unsigned char *)fn_8265C940(param_1->f58 + param_1->f50, 0x248c8000);
  if (pBuf == 0) {
    return -100;
  }
  stk0 = 0;
  if (param_1->f38 == 0) {
    if (lbl_831882F8 == 0 || lbl_8323FF50 <= 0) {
      if (hasOut == 0) goto L3f8;
    }
    else {
      fn_82E9A7B8(param_1, pBuf, &stk0, param_1->f50, param_1->f4c, param_1->f30, param_1->f40);
    }
    iVar2 = fn_82E9A868(param_1, param_1->f48, &stk1, param_1->f58, param_1->f40);
    if (iVar2 != 0) goto Lfail;
    iVar4 = 1;
    memcpy(stk0 + pBuf, param_1->f48, stk1);
    stk0 = stk1 + stk0;
  }
  else if (hasOut != 0) {
    iVar2 = fn_82E9A868(param_1, pBuf, &stk0, param_1->f58, param_1->f40);
    if (iVar2 != 0) goto Lfail;
    iVar4 = 1;
  }
L3f8:
  iVar2 = fn_82E85018(param_1->fc);
  if (iVar2 == 5 ||
      (param_1->f44 == 0 && param_1->f40 == 0 && param_1->f218 == 0 && iVar4 == 0)) {
    iVar2 = fn_82E83330(param_1->fc);
    if (iVar2 != 0 && param_1->f10 == 0x574d5641 && param_1->f14 == 1) {
      pTmp = fn_8265C940(*param_3 + 4, 0x248c8000);
      base = ((Q_82E4C2D0 *)param_1->fc)->fae8;
      dst = param_2 + base;
      memcpy(pTmp, dst, *param_3 - base);
      *dst = 0;
      dst[1] = 0;
      dst[2] = 1;
      dst[3] = 0xc;
      memcpy(dst + 4, pTmp, *param_3 - base);
      *param_3 = *param_3 + 4;
      if (pTmp != 0) {
        fn_8265C990(pTmp, 0x248c8000);
      }
    }
  }
  else {
    iVar2 = fn_82E9A2B0(param_1, param_2, param_3, param_1->f20 * param_1->f1c * 3, iVar4, pBuf, stk0, param_1->f40);
    if (iVar2 != 0) {
Lfail:
      fn_8265C990(pBuf, 0x248c8000);
      return -100;
    }
  }
  fn_8265C990(pBuf, 0x248c8000);
  return 0;
}
