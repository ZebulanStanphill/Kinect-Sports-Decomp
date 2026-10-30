/* file_826582F8: functions fn_826582F8..fn_8265B430, grouped as one unit because they appear
 * to come from one original source file.
 *
 * The game was built with link-time code generation. Once a variadic function
 * that uses va_start has been compiled, every call to it reserves an outgoing
 * parameter area of 8*(n+8) bytes instead of 8*max(n,8), so its callers have a
 * larger frame and cannot tail-call. Those callers only match when the
 * variadic function is defined in the same unit, as it was in the original
 * file (see CONTRIBUTING.md).
 *
 * Compiled as one unit with /O1. Each function's declarations and
 * code sit between its @@ begin/end markers, in address order; km/try.py
 * replaces one region with a candidate to test it in place. */

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
typedef struct Instr {
  unsigned int w0;
  unsigned int w4;
  unsigned char b8;
} Instr;
#define ZEXT48(x) ((U64)((U32)(x)))

typedef struct { int a; int b; unsigned int flags; } P;
typedef struct Log {
  int unk0;
  int unk4;
  unsigned int flags;
  int unkC;
  int unk10;
  int unk14;
  unsigned int used[0x800];
  int (*write)(void *ctx, const char *s, int n);
  void *ctx;
  int unk2020;
  int unk2024;
  unsigned char busy;
  unsigned char cr;
  int hr;
} Log;
typedef char *va_list;

/* @@ end of shared declarations */

/* @@ begin fn_826582F8 */
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern unsigned int lbl_821CE368;
extern unsigned int uStack_6c;


void fn_826582F8(uint *param_1,ulonglong param_2,uint param_3,int param_4,int param_5,
                  longlong param_6,uint param_7)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  char acStack_70 [4];
  undefined1 uStack_6c;
  char acStack_68 [104];
  
  param_2 = param_2 & 0x3f;
  fn_8265B200(param_1,0xffffffff821aa89c);
  if ((param_4 != 0) || (bVar2 = true, param_5 == 0)) {
    bVar2 = false;
  }
  if ((param_3 == 0) && ((param_4 == 0 || ((int)param_6 == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar8 = 0xffffffffffffffff;
  if (param_4 == 0) {
    uVar5 = 0xffffffff821ce348;
  }
  else {
    uVar9 = (uint)param_2;
    if (uVar9 == 0x20) {
      uVar5 = 0xffffffff821ce320;
      param_2 = uVar8;
    }
    else {
      if (0x20 < uVar9) {
        if (uVar9 < 0x26) {
          uVar5 = 0xffffffff821ce324;
          param_2 = param_2 - 0x21;
          goto LAB_82658438;
        }
        if (uVar9 == 0x3e) {
          uVar5 = 0xffffffff821ce328;
          param_2 = uVar8;
          goto LAB_82658438;
        }
        if (uVar9 == 0x3f) {
          uVar5 = 0xffffffff821ce330;
          param_2 = uVar8;
          goto LAB_82658438;
        }
      }
      if ((param_1[2] >> 3 & 1) != 0) {
        if (uVar9 < (*param_1 >> 0x1c & 7)) {
          uVar5 = 0xffffffff821ce338;
          goto LAB_82658438;
        }
        if ((uVar9 == 0x3d) && ((*param_1 & 0x8000000) != 0)) {
          uVar5 = 0xffffffff821ce33c;
          param_2 = uVar8;
          goto LAB_82658438;
        }
      }
      uVar5 = 0xffffffff821ce344;
    }
  }
LAB_82658438:
  fn_8265B200(param_1,0xffffffff821c4da8,uVar5);
  if (bVar2) {
    fn_8265B200(param_1,0xffffffff821ce34c);
  }
  if ((param_4 == 0) && (param_5 != 0)) {
    fn_8265B200(param_1,0xffffffff821ce350);
  }
  if (-1 < (int)param_2) {
    fn_8265B200(param_1,0xffffffff821aa66c,param_2);
  }
  if (bVar2) {
    fn_8265B200(param_1,0xffffffff821c27b4);
  }
  if (bVar3) {
    pcVar4 = "._";
  }
  else if (param_4 == 0) {
    if (param_3 == 0xf) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821c7f2c);
    if ((param_3 & 1) != 0) {
      fn_8265B200(param_1,0xffffffff821ce358);
    }
    if ((param_3 & 2) != 0) {
      fn_8265B200(param_1,0xffffffff821ce35c);
    }
    if ((param_3 & 4) != 0) {
      fn_8265B200(param_1,0xffffffff821ce360);
    }
    if ((param_3 & 8) == 0) {
      return;
    }
    pcVar4 = "w";
  }
  else {
    if ((param_3 == 0xf) && (param_7 == 0)) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821c7f2c);
    uVar9 = 0;
    lVar10 = 4;
    do {
      uVar1 = 1 << (uVar9 & 0x3f);
      if ((uVar1 & param_3) == 0) {
        if ((uVar1 & param_7) == 0) {
          cVar7 = (-(param_6 != 0) & 0xd1U) + 0x5f;
        }
        else {
          cVar7 = '_';
        }
      }
      else if ((uVar1 & param_7) == 0) {
        cVar7 = (&lbl_821CE368)[uVar9];
      }
      else {
        cVar7 = '1';
      }
      acStack_70[uVar9] = cVar7;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    bVar2 = true;
    pcVar4 = acStack_68;
    iVar6 = 0;
    do {
      cVar7 = acStack_70[iVar6];
      if ((cVar7 == '0') || (cVar7 == '1')) {
        bVar2 = false;
        break;
      }
      if (cVar7 != '_') {
        *pcVar4 = cVar7;
        pcVar4 = pcVar4 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    if (bVar2) {
      *pcVar4 = '\0';
      pcVar4 = acStack_68;
    }
    else {
      lVar10 = 3;
      uStack_6c = 0;
      do {
        iVar6 = (int)lVar10;
        if (acStack_70[iVar6] != '_') break;
        lVar10 = lVar10 + -1;
        acStack_70[iVar6] = '\0';
      } while (0 < lVar10);
      pcVar4 = acStack_70;
    }
  }
  fn_8265B200(param_1,pcVar4);
  return;
}
/* @@ end fn_826582F8 */

/* @@ begin fn_82658670 */
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern unsigned int lbl_821CE37C;


void fn_82658670(undefined8 param_1,uint param_2,ulonglong param_3,byte param_4,int param_5,
                  int param_6,int param_7,uint param_8)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_stack_00000054;
  char in_stack_0000005f;
  
  if (((param_2 == 0) && (param_6 != 0)) || ((param_2 == 1 && ((param_3 & 0x80) != 0)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar3 = (int)param_3 >> 6 & param_2;
  param_4 = param_2 == 0 & param_4;
  if (param_7 != 0) {
    fn_8265B200(param_1,0xffffffff821aa634);
  }
  if (((uVar3 & 1) != 0) || (bVar4 = false, param_4 != 0)) {
    bVar4 = true;
  }
  fn_8265B200(param_1,0xffffffff821ce318,(-(param_2 != 0) & 0xfU) + 99);
  uVar8 = 0xffffffff821ce36c;
  if (bVar4) {
    if (bVar2) {
      fn_8265B200(param_1,0xffffffff821ce36c);
    }
    fn_8265B200(param_1,0xffffffff821ce34c);
  }
  fn_8265B200(param_1,0xffffffff821aa66c,
                    ((-(ulonglong)(param_2 != 0) & 0xffffffc0) << 0x20 |
                    -(ulonglong)(param_2 != 0) & 0xffffff40) + 0xff & param_3);
  uVar9 = 0xffffffff821ce374;
  if ((uVar3 & 1) != 0) {
    fn_8265B200(param_1,0xffffffff821ce374);
  }
  if (param_4 != 0) {
    if (param_5 != 0) {
      uVar9 = 0xffffffff821ce378;
    }
    fn_8265B200(param_1,uVar9);
  }
  if (bVar4) {
    uVar8 = 0xffffffff821c27b4;
  }
  else if (!bVar2) goto LAB_826587f8;
  fn_8265B200(param_1,uVar8);
LAB_826587f8:
  if (in_stack_00000054 < 4) {
    fn_8265B200(param_1,0xffffffff821c7f2c);
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE37C)[((int)param_8 >> 6) - 1U & 3]);
    if (in_stack_00000054 < 2) {
      return;
    }
    if (in_stack_0000005f != '\0') {
      param_8 = ((int)param_8 >> 4) - 2;
    }
    uVar5 = (&lbl_821CE37C)[param_8 & 3];
  }
  else {
    if (param_8 == 0) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821c7f2c);
    uVar3 = param_8 & 3;
    uVar1 = ((int)param_8 >> 6) - 1U & 3;
    uVar7 = ((int)param_8 >> 2) + 1U & 3;
    uVar6 = ((int)param_8 >> 4) - 2U & 3;
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar3]);
    if (((uVar7 == uVar3) && (uVar6 == uVar3)) && (uVar1 == uVar3)) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar7]);
    if ((uVar6 == uVar7) && (uVar1 == uVar7)) {
      return;
    }
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE37C)[uVar6]);
    if (uVar1 == uVar6) {
      return;
    }
    uVar5 = (&lbl_821CE37C)[uVar1];
  }
  fn_8265B200(param_1,0xffffffff821ce318,uVar5);
  return;
}
/* @@ end fn_82658670 */

/* @@ begin fn_82658940 */
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern unsigned int lbl_821CE37C;
extern unsigned int lbl_821CE390;
extern unsigned int lbl_821CE398;
extern unsigned int lbl_821CE3A0;


void fn_82658940(undefined8 param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (int)param_2 >> 7 & 1;
  if (param_3 != 0) {
    fn_8265B200(param_1,0xffffffff821aa634);
  }
  uVar2 = 0xffffffff821ce384;
  if (uVar1 != 0) {
    fn_8265B200(param_1,0xffffffff821ce384);
  }
  fn_8265B200(param_1,0xffffffff821ce388,param_2 & 0x3f);
  fn_8265B200(param_1,0xffffffff821c27b4);
  if (param_4 != 0) {
    fn_8265B200(param_1,0xffffffff821c7f2c);
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE37C)[param_4 & 3]);
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE390)[(int)param_4 >> 2 & 3]);
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE398)[(int)param_4 >> 4 & 3]);
    fn_8265B200(param_1,0xffffffff821ce318,(&lbl_821CE3A0)[(int)param_4 >> 6 & 3]);
  }
  if (uVar1 == 0) {
    uVar2 = 0xffffffff82196582;
  }
  fn_8265B200(param_1,uVar2);
  return;
}
/* @@ end fn_82658940 */

/* @@ begin fn_82658A88 */
unsigned int fn_82658A88(Instr *p)
{
  unsigned int w = p->w0;
  unsigned int r = 0;
  int i;
  if ((w & 0x8000) != 0) {
    for (i = 0; i < 4; i++) {
      unsigned int m = 1 << i;
      switch ((((w >> 16) & 0xf & m) != 0) * 2 + (((w >> 20) & 0xf & m) != 0)) {
      case 0:
        if ((w & 0x4000) != 0) {
          r |= 4;
        }
        break;
      case 1:
        r |= 2;
        break;
      case 2:
        r |= 1;
        break;
      case 3:
        r |= 8;
        break;
      }
    }
  }
  return r;
}
/* @@ end fn_82658A88 */

/* @@ begin fn_82658B20 */
extern unsigned int fn_82658A88(Instr *p);

int fn_82658B20(Instr *p)
{
  if ((p->b8 & 0x1f) == 2) {
    if ((p->w0 & 0x8000) != 0) {
      unsigned int r = fn_82658A88(p);
      if ((r & 1) == 0) {
        if ((r & 2) != 0) {
          return 1;
        }
        return r == 0;
      }
    } else if ((p->w0 & 0xf0000) == 0) {
      return 1;
    }
  }
  return 0;
}
/* @@ end fn_82658B20 */

/* @@ begin fn_82658B90 */
extern void fn_826582F8();
extern void fn_82658670();
extern void fn_82658940();
extern int fn_82658B20();
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern void fn_8265B358();
extern unsigned int lbl_82188300;
extern unsigned int lbl_831BD4C0;


void fn_82658B90(undefined8 param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  bVar4 = false;
  uVar8 = 0;
  cVar5 = fn_82658B20(param_2);
  if (cVar5 != '\0') {
    fn_8265B358(param_1,0xffffffff821ce3a8,0);
    return;
  }
  bVar9 = (&lbl_82188300)[*(byte *)(param_2 + 2) & 0x1f];
  if ((((((*(byte *)(param_2 + 2) & 0x1f) == 2) &&
        (((param_2[1] >> 1 ^ param_2[1]) & 0x2000000) == 0)) &&
       (*(char *)((int)param_2 + 9) == *(char *)((int)param_2 + 10))) &&
      ((((param_2[2] >> 1 ^ param_2[2]) & 0x40000000) == 0 &&
       (*(char *)((int)param_2 + 5) == *(char *)((int)param_2 + 6))))) &&
     (((param_2[2] & 0x80000000) == 0x80000000 ||
      (((param_2[1] >> 1 ^ param_2[1]) & 0x40000000) == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    uVar6 = 0xffffffff821ce3ac;
  }
  else {
    uVar2 = param_2[2];
    uVar7 = uVar2 >> 0x18 & 0x1f;
    if ((((uVar7 == 0x1d) && (((param_2[1] >> 1 ^ param_2[1]) & 0x2000000) == 0)) &&
        ((*(char *)((int)param_2 + 9) == *(char *)((int)param_2 + 10) &&
         ((((uVar2 >> 1 ^ uVar2) & 0x40000000) == 0 &&
          (*(char *)((int)param_2 + 5) == *(char *)((int)param_2 + 6))))))) &&
       (((uVar2 & 0x80000000) == 0x80000000 || (((param_2[1] >> 1 ^ param_2[1]) & 0x40000000) == 0))
       )) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      bVar1 = *(byte *)param_2;
      uVar6 = ZEXT48((&lbl_831BD4C0)[uVar7]);
      goto LAB_82658d40;
    }
    uVar6 = 0xffffffff821ce3b0;
  }
  bVar1 = *(byte *)param_2;
  bVar9 = 1;
LAB_82658d40:
  fn_8265B358(param_1,uVar6,bVar1 & 1);
  uVar2 = *param_2;
  fn_826582F8(param_1,uVar2 & 0x3f,uVar2 >> 0x10 & 0xf,uVar2 >> 0xf & 1,uVar2 >> 6 & 1,
                uVar2 >> 0xe & 1,uVar2 >> 0x14 & 0xf);
  fn_8265B200(param_1,0xffffffff82196824);
  uVar2 = param_2[1];
  if ((((uVar2 & 0x80000000) == 0) && ((uVar2 & 0x40000000) == 0)) && ((uVar2 & 0x20000000) != 0)) {
    bVar4 = true;
  }
  if (bVar9 != 0) {
    uVar8 = ~-((int)param_2[2] >> 0x1f) & 1;
    if ((-((int)param_2[2] >> 0x1f) == 0) && (bVar4)) {
      fn_82658940(param_1,*(undefined1 *)((int)param_2 + 9),param_2[1] >> 0x1a & 1,
                    *(undefined1 *)((int)param_2 + 5));
    }
    else {
      uVar2 = param_2[1];
      fn_82658670(param_1,param_2[2] >> 0x1f,*(undefined1 *)((int)param_2 + 9),uVar2 >> 0x1f,
                    uVar2 >> 0x1d & 1,*param_2 >> 7 & 1,uVar2 >> 0x1a & 1,
                    *(undefined1 *)((int)param_2 + 5));
    }
  }
  if (1 < bVar9) {
    if (((param_2[2] & 0x40000000) == 0) && (uVar8 == 0)) {
      uVar8 = 2;
    }
    fn_8265B200(param_1,0xffffffff82196824);
    if (((param_2[2] & 0x40000000) == 0) && (bVar4)) {
      fn_82658940(param_1,*(undefined1 *)((int)param_2 + 10),param_2[1] >> 0x19 & 1,
                    *(undefined1 *)((int)param_2 + 6));
    }
    else {
      uVar2 = param_2[1] >> 0x1f;
      if (uVar8 != 2) {
        uVar2 = param_2[1] >> 0x1e;
      }
      fn_82658670(param_1,param_2[2] >> 0x1e & 1,*(undefined1 *)((int)param_2 + 10),uVar2 & 1,
                    param_2[1] >> 0x1d & 1,*param_2 >> 7 & 1,param_2[1] >> 0x19 & 1,
                    *(undefined1 *)((int)param_2 + 6));
    }
  }
  if (2 < bVar9) {
    if (((param_2[2] & 0x20000000) == 0) && (uVar8 == 0)) {
      uVar8 = 3;
    }
    fn_8265B200(param_1,0xffffffff82196824);
    if (((param_2[2] & 0x20000000) == 0) && (bVar4)) {
      fn_82658940(param_1,param_2[2] & 0xff,param_2[1] >> 0x18 & 1,param_2[1] & 0xff);
    }
    else {
      uVar2 = param_2[1] >> 0x1f;
      if (uVar8 != 3) {
        uVar2 = param_2[1] >> 0x1e;
      }
      uVar8 = param_2[1];
      fn_82658670(param_1,param_2[2] >> 0x1d & 1,param_2[2] & 0xff,uVar2 & 1,uVar8 >> 0x1d & 1,
                    *param_2 >> 7 & 1,uVar8 >> 0x18 & 1,uVar8 & 0xff);
    }
  }
  return;
}
/* @@ end fn_82658B90 */

/* @@ begin fn_82658F70 */
extern void fn_826582F8();
extern void fn_82658670();
extern void fn_82658940();
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern void fn_8265B358();
extern unsigned int lbl_82188320;
extern unsigned int lbl_831BD540;


void fn_82658F70(undefined8 param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar10;
  ulonglong uVar9;
  
  uVar10 = param_2[1];
  bVar6 = false;
  if ((((uVar10 & 0x80000000) == 0) && ((uVar10 & 0x40000000) == 0)) && ((uVar10 & 0x20000000) != 0)
     ) {
    bVar6 = true;
  }
  bVar4 = false;
  if ((10 < (*(byte *)(param_2 + 2) & 0x1f)) && ((*(byte *)(param_2 + 2) & 0x1f) < 0xf)) {
    bVar4 = true;
  }
  uVar10 = param_2[1];
  uVar2 = uVar10 >> 6;
  if (bVar4) {
    uVar10 = (uVar10 >> 4) - 2;
  }
  bVar4 = (uVar2 - 1 & 3) != (uVar10 & 3);
  if ((bVar4) || (uVar9 = (ulonglong)*param_2, (*param_2 & 0xfc000000) != 0x14000000)) {
    if (bVar4) {
LAB_82659084:
      fn_8265B358(param_1,*(undefined4 *)((int)&lbl_831BD540 + (*param_2 >> 0x18 & 0xfc)),
                        *param_2 >> 0x19 & 1);
      goto LAB_826590a8;
    }
    uVar9 = (ulonglong)*param_2;
    if ((*param_2 & 0xfc000000) == 0x5c000000) {
      uVar7 = 0xffffffff821ce3c0;
    }
    else {
      uVar9 = (ulonglong)*param_2;
      if ((*param_2 & 0xfc000000) != 0x60000000) goto LAB_82659084;
      uVar7 = 0xffffffff821ce3c8;
    }
  }
  else {
    uVar7 = 0xffffffff821ce3b8;
  }
  fn_8265B358(param_1,uVar7,uVar9 >> 0x19 & 1);
LAB_826590a8:
  uVar10 = *param_2;
  uVar5 = uVar10 >> 0xf & 1;
  uVar2 = uVar10 >> 6;
  if (uVar5 == 0) {
    uVar2 = uVar10 >> 0xe;
  }
  uVar3 = uVar10;
  if (uVar5 == 0) {
    uVar3 = uVar10 >> 8;
  }
  fn_826582F8(param_1,uVar3 & 0x3f,uVar10 >> 0x14 & 0xf,uVar5,uVar2 & 1,uVar10 >> 0xe & 1,
                uVar10 >> 0x10 & 0xf);
  cVar1 = (&lbl_82188320)[*param_2 >> 0x1a];
  if (cVar1 != '\0') {
    fn_8265B200(param_1,0xffffffff82196824);
  }
  if (cVar1 == '\x01') {
    if ((param_2[2] & 0x80000000) == 0) {
      bVar8 = 1;
    }
    else if ((param_2[2] & 0x40000000) == 0) {
      bVar8 = 2;
    }
    else {
      bVar8 = -((param_2[2] & 0x20000000) == 0) & 3;
    }
    if (((param_2[2] & 0x20000000) == 0) && (bVar6)) {
      fn_82658940(param_1,param_2[2] & 0xff,param_2[1] >> 0x18 & 1,param_2[1] & 0xff);
    }
    else {
      if (bVar8 == 3) {
        uVar10 = param_2[1] >> 0x1f;
      }
      else {
        uVar10 = param_2[1] >> 0x1e;
      }
      uVar2 = param_2[1];
      fn_82658670(param_1,param_2[2] >> 0x1d & 1,param_2[2] & 0xff,uVar10 & 1,uVar2 >> 0x1d & 1,
                    *param_2 >> 7 & 1,uVar2 >> 0x18 & 1,uVar2 & 0xff);
    }
  }
  else if (cVar1 == '\x02') {
    if (((int)param_2[2] < 0) && ((~(param_2[2] >> 0x1e) & 1) << 1 == 3)) {
      uVar10 = param_2[1] >> 0x1f;
    }
    else {
      uVar10 = param_2[1] >> 0x1e;
    }
    uVar2 = param_2[1];
    fn_82658670(param_1,0,param_2[2] & 0xff,uVar10 & 1,uVar2 >> 0x1d & 1,*param_2 >> 7 & 1,
                  uVar2 >> 0x18 & 1,uVar2 & 0xff);
    fn_8265B200(param_1,0xffffffff82196824);
    uVar9 = ((ulonglong)(param_2[2] >> 2) & 0x8000000 | (ulonglong)*param_2 & 0x4000000) >> 0x1a |
            (ulonglong)param_2[1] & 0x3c;
    if ((*param_2 & 0x80) != 0) {
      uVar9 = uVar9 | 0x80;
    }
    fn_82658670(param_1,1,uVar9,0,0,0,*(byte *)(param_2 + 1) & 1,
                  ((ulonglong)param_2[1] + 1 & 3) << 6);
  }
  return;
}
/* @@ end fn_82658F70 */

/* @@ begin fn_82659300 */
extern void fn_8265AF38(void *);
extern void fn_8265B200(void *, const char *, ...);
extern char lbl_82196824[];

void fn_82659300(P *p)
{
  fn_8265B200(p, lbl_82196824);
  fn_8265AF38(p);
  if ((p->flags & 0x20) != 0) {
    fn_8265B200(p, "             ");
  }
  fn_8265B200(p, "        ");
}
/* @@ end fn_82659300 */

/* @@ begin fn_82659368 */
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern char lbl_82196F10[];
extern char lbl_82196F18[];

void fn_82659368(Log *l, const char *name, unsigned int value, unsigned int def)
{
  const char *names[2];
  names[0] = lbl_82196F10;
  names[1] = lbl_82196F18;
  if ((unsigned char)(l->flags >> 6) & 1 || value != def) {
    fn_8265B200(l, ", %s=%s", name, names[value]);
  }
}
/* @@ end fn_82659368 */

/* @@ begin fn_826593D0 */
extern void fn_82658670();
extern void fn_82659300();
extern void fn_82659368();
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern void fn_8265B300();
extern void fn_8265B358();
extern unsigned int lbl_8203177C;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821957F0;
extern unsigned char lbl_831BD4B0[];
extern unsigned int lbl_831BD640;
extern unsigned int lbl_831BD650;
extern unsigned int lbl_831BD660;
extern unsigned int lbl_831BD670;
extern unsigned int lbl_831BD690;
extern unsigned int lbl_831BD6A0;
extern unsigned int lbl_831BD6C0;
extern unsigned int lbl_831BD7E8;
extern unsigned int lbl_831E79A8;
extern unsigned int lbl_831E79B8;
extern unsigned int lbl_831E79C8;
extern unsigned int lbl_831E79D8;


void fn_826593D0(int param_1,uint *param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar10;
  undefined8 uVar9;
  undefined **ppuVar11;
  uint uVar12;
  double dVar13;
  byte abStack_70 [8];
  longlong lStack_68;
  
  if ((param_2[1] & 0x80000000) == 0x80000000) {
    if ((param_2[2] & 0x80000000) == 0) {
      uVar7 = 0xffffffff821ce810;
    }
    else {
      uVar7 = 0xffffffff821ce808;
    }
    fn_8265B200(param_1,uVar7);
  }
  uVar12 = *param_2 & 0x1f;
  if (param_3 != 0) {
    if (uVar12 != 0) {
      uVar7 = 0xffffffff821ce4c8;
LAB_82659c84:
      fn_8265B200(param_1,uVar7);
      return;
    }
LAB_82659c90:
    uVar12 = param_2[1] >> 0x1e & 1;
    abStack_70[0] = 0;
    bVar3 = false;
    if ((((uVar12 == 0) && ((*(uint *)(param_1 + 8) & 2) == 0)) &&
        (*(code **)(param_1 + 0x2020) != (code *)0x0)) &&
       (iVar6 = (**(code **)(param_1 + 0x2020))
                          (*(undefined4 *)(param_1 + 0x2024),3,param_4,abStack_70,1), iVar6 == 0)) {
      bVar3 = true;
    }
    if ((uVar12 != 0) || (bVar4 = true, bVar3)) {
      bVar4 = false;
    }
    if (uVar12 == 0) {
      if (bVar3) {
        uVar7 = 0xffffffff821ce400;
      }
      else {
        uVar7 = 0xffffffff821ce408;
      }
    }
    else {
      uVar7 = 0xffffffff821ce3f4;
    }
    fn_8265B358(param_1,uVar7,0);
    fn_8265B200(param_1,0xffffffff821aa89c);
    if ((*param_2 & 0x40000) == 0) {
      uVar7 = 0xffffffff821ce3dc;
    }
    else {
      uVar7 = 0xffffffff821ce3d0;
    }
    fn_8265B200(param_1,uVar7,*param_2 >> 0xc & 0x3f);
    uVar1 = param_2[1];
    if ((((uVar1 & 7) != 0) || ((uVar1 & 0x38) != 8)) ||
       (((uVar1 & 0x1c0) != 0x80 || ((uVar1 & 0xe00) != 0x600)))) {
      fn_8265B200(param_1,0xffffffff821c7f2c);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 3 & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 6 & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 9 & 7]);
    }
    if ((bVar4) || (bVar3)) {
      fn_8265B200(param_1,0xffffffff82196824);
      fn_82658670(param_1,1,*param_2 >> 5 & 0x40 | *param_2 >> 5 & 0x3f,0,0,0,0,0);
      fn_8265B200(param_1,0xffffffff821ce414,lbl_831BD4B0[*param_2 >> 0x1e]);
    }
    if (bVar4) {
      fn_8265B200(param_1,0xffffffff821ce418,
                        (((ulonglong)(*param_2 >> 0x14) & 0x1f) * -3 + 0x5f) -
                        ((ulonglong)(*param_2 >> 0x19) & 3));
    }
    if (bVar3) {
      bVar5 = abStack_70[0] & 0xf;
      bVar2 = abStack_70[0] & 0xf;
      fn_8265B200(param_1,0xffffffff821ce420,
                        *(undefined4 *)
                         ((int)&lbl_831BD7E8 + (abStack_70[0] >> 2 & 0x3ffffffc)));
      if (bVar5 != 0) {
        fn_8265B200(param_1,0xffffffff821aa66c,bVar2);
      }
    }
    uVar7 = 0xffffffff82196f18;
    if (uVar12 == 0) {
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || (param_3 == 0)) {
        fn_82659300(param_1);
        uVar9 = uVar7;
        if (param_3 != 0) {
          uVar9 = 0xffffffff82196f10;
        }
        fn_8265B200(param_1,0xffffffff821ce428,uVar9);
      }
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x8000) != 0)) {
        fn_82659300(param_1);
        uVar9 = uVar7;
        if ((param_2[1] & 0x8000) == 0) {
          uVar9 = 0xffffffff82196f10;
        }
        fn_8265B200(param_1,0xffffffff821ce43c,uVar9);
      }
    }
    if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x3f000000) != 0)) {
      fn_82659300(param_1);
      fn_8265B200(param_1,0xffffffff821ce44c,
                        (int)(param_2[1] << 2 | param_2[1] >> 0x1e) >> 0x1a);
    }
    if (!bVar3) {
      fn_8265B300(param_1,0xffffffff821ce838);
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[2] & 0x7fffff00) != 0)) {
        fn_82659300(param_1);
        fn_8265B200(param_1,0xffffffff821ce45c,
                          (int)(param_2[2] << 1 | param_2[2] >> 0x1f) >> 9);
      }
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x3f0000) != 0)) {
        fn_82659300(param_1);
        fn_8265B200(param_1,0xffffffff821ce468,
                          (&lbl_831BD6C0)[*(ushort *)(param_2 + 1) & 0x3f]);
      }
      if ((bVar4) &&
         (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (*(char *)((int)param_2 + 0xb) != '\0')))) {
        fn_82659300(param_1);
        fn_8265B200(param_1,0xffffffff821ce478,*(undefined1 *)((int)param_2 + 0xb));
      }
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x1000) != 0)) {
        fn_82659300(param_1);
        if ((param_2[1] & 0x1000) == 0) {
          uVar7 = 0xffffffff82196f10;
        }
        fn_8265B200(param_1,0xffffffff821ce484,uVar7);
      }
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x2000) != 0)) {
        fn_82659300(param_1);
        if ((param_2[1] & 0x2000) == 0) {
          uVar7 = 0xffffffff821ce498;
        }
        else {
          uVar7 = 0xffffffff821ce490;
        }
        fn_8265B200(param_1,0xffffffff821ce4a4,uVar7);
      }
      if ((bVar4) && (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((*param_2 & 0x38000000) != 0)))) {
        fn_82659300(param_1);
        fn_8265B200(param_1,0xffffffff821ce4b4,(*param_2 >> 0x1b & 7) + 1);
      }
      fn_8265B300(param_1,0xffffffff821ce828);
    }
    return;
  }
  if (uVar12 == 0) goto LAB_82659c90;
  if ((uVar12 != 1) &&
     ((uVar12 < 0x10 || ((0x13 < uVar12 && ((uVar12 < 0x18 || (0x1a < uVar12)))))))) {
    uVar7 = 0xffffffff821ce630;
    goto LAB_82659c84;
  }
  uVar8 = 0xffffffff821ce4e8;
  if (uVar12 < 0x14) {
    if (uVar12 == 0x13) {
      ppuVar11 = &lbl_831E79D8;
    }
    else if (uVar12 == 1) {
      ppuVar11 = &lbl_831E79A8;
    }
    else if (uVar12 == 0x10) {
      ppuVar11 = &lbl_831E79B8;
    }
    else {
      if (uVar12 != 0x11) {
        if (uVar12 == 0x12) {
          uVar8 = 0xffffffff821ce4f8;
        }
        goto LAB_8265952c;
      }
      ppuVar11 = &lbl_831E79C8;
    }
    uVar8 = (ulonglong)*(uint *)((param_2[2] >> 0xc & 0xc) + (int)ppuVar11);
  }
  else if (uVar12 == 0x18) {
    uVar8 = 0xffffffff821ce508;
  }
  else if (uVar12 == 0x19) {
    uVar8 = 0xffffffff821ce514;
  }
  else if (uVar12 == 0x1a) {
    uVar8 = 0xffffffff821ce524;
  }
LAB_8265952c:
  fn_8265B358(param_1,uVar8,0);
  fn_8265B200(param_1,0xffffffff821aa89c);
  uVar12 = *param_2;
  if ((uVar12 & 0x1f) < 0x14) {
    if ((uVar12 & 0x40000) == 0) {
      uVar7 = 0xffffffff821ce3dc;
    }
    else {
      uVar7 = 0xffffffff821ce3d0;
    }
    fn_8265B200(param_1,uVar7,uVar12 >> 0xc & 0x3f);
    uVar12 = param_2[1];
    if (((((uVar12 & 7) != 0) || ((uVar12 & 0x38) != 8)) || ((uVar12 & 0x1c0) != 0x80)) ||
       ((uVar12 & 0xe00) != 0x600)) {
      fn_8265B200(param_1,0xffffffff821c7f2c);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 3 & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 6 & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 9 & 7]);
    }
    fn_8265B200(param_1,0xffffffff82196824);
  }
  ((void (*)())fn_82658670)(param_1,1,*param_2 >> 5 & 0x40 | *param_2 >> 5 & 0x3f,0,0,0,0);
  fn_8265B200(param_1,0xffffffff821c7f2c);
  uVar12 = *param_2;
  uVar1 = uVar12 & 0x1f;
  if (uVar1 == 1) {
    uVar1 = param_2[2] >> 0xe & 3;
    if (uVar1 != 0) {
      if (uVar1 != 1) {
        if (3 < uVar1) goto LAB_8265976c;
        cVar10 = lbl_831BD4B0[uVar12 >> 0x1a & 3];
        goto LAB_826596d0;
      }
      cVar10 = lbl_831BD4B0[uVar12 >> 0x1a & 3];
      goto LAB_82659744;
    }
    uVar12 = uVar12 >> 0x1a & 3;
LAB_82659758:
    cVar10 = lbl_831BD4B0[uVar12];
  }
  else {
    cVar10 = lbl_831BD4B0[uVar12 >> 0x1a & 3];
    if (uVar1 == 0x12) {
LAB_82659744:
      fn_8265B200(param_1,0xffffffff821ce318,cVar10);
      uVar12 = *param_2 >> 0x1c & 3;
      goto LAB_82659758;
    }
    if (uVar1 != 0x18) {
LAB_826596d0:
      fn_8265B200(param_1,0xffffffff821ce318,cVar10);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[*param_2 >> 0x1c & 3]);
      uVar12 = *param_2 >> 0x1e;
      goto LAB_82659758;
    }
  }
  fn_8265B200(param_1,0xffffffff821ce318,cVar10);
LAB_8265976c:
  if ((*param_2 & 0x1f) < 0x14) {
    fn_8265B200(param_1,0xffffffff821ce534,*param_2 >> 0x14 & 0x1f);
  }
  fn_82659368(param_1,0xffffffff821ce53c,*param_2 >> 0x13 & 1,1);
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0) {
    fn_82659368(param_1,0xffffffff821ce54c,*param_2 >> 0x19 & 1,0);
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     ((uVar12 = param_2[1] >> 0xc & 3, (*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (uVar12 != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce568,(&lbl_831BD640)[uVar12])
    ;
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     ((uVar12 = param_2[1] >> 0xe & 3, (*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (uVar12 != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce574,(&lbl_831BD650)[uVar12])
    ;
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((*(ushort *)(param_2 + 1) & 3) != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce580,
                      (&lbl_831BD660)[*(ushort *)(param_2 + 1) & 3]);
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0) &&
     ((uVar12 = param_2[1] >> 0x12 & 7, (*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (uVar12 != 7)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce58c,
                      (&lbl_831BD670)[uVar12]);
  }
  if (((0x7fff < (param_2[2] & 0xc000)) && (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0)) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((*(byte *)(param_2 + 1) & 3) != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce598,
                      (&lbl_831BD690)[*(byte *)(param_2 + 1) & 3]);
  }
  if (((0x7fff < (param_2[2] & 0xc000)) && (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0)) &&
     ((uVar12 = param_2[1] >> 0x1a & 3, (*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (uVar12 != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce5a8,(&lbl_831BD6A0)[uVar12])
    ;
  }
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0) {
    fn_82659368(param_1,0xffffffff821ce5b8,param_2[1] >> 0x1c & 1,1);
  }
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0) {
    fn_82659368(param_1,0xffffffff821ce5c8,param_2[1] >> 0x1d & 3,0);
  }
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x1f) != 0) {
    fn_82659368(param_1,0xffffffff821ce5d8,param_2[2] & 1,0);
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((param_2[2] & 0x1fc) != 0)))) {
    lStack_68 = (longlong)((int)(param_2[2] << 0x17 | param_2[2] >> 9) >> 0x19);
    fn_8265B200(param_1,0xffffffff821ce5f0,(double)((float)lStack_68 * lbl_821957F0));
  }
  dVar13 = (double)lbl_8218E8E8;
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((param_2[2] & 0x1f0000) != 0)))) {
    lStack_68 = (longlong)((int)(param_2[2] << 0xb | param_2[2] >> 0x15) >> 0x1b);
    fn_8265B200(param_1,0xffffffff821ce600,(double)(float)((double)lStack_68 * dVar13));
  }
  uVar12 = param_2[2];
  if (((0x3fff < (uVar12 & 0xc000)) && (((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0)) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((uVar12 & 0x3e00000) != 0)))) {
    lStack_68 = (longlong)((int)(uVar12 << 6 | uVar12 >> 0x1a) >> 0x1b);
    fn_8265B200(param_1,0xffffffff821ce610,(double)(float)((double)lStack_68 * dVar13));
  }
  uVar12 = param_2[2];
  if ((uVar12 & 0xc000) < 0x8000) {
    return;
  }
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) == 0) {
    return;
  }
  if (((*(uint *)(param_1 + 8) >> 6 & 1) == 0) && ((uVar12 & 0x7c000000) == 0)) {
    return;
  }
  lStack_68 = (longlong)((int)(uVar12 << 1 | uVar12 >> 0x1f) >> 0x1b);
  fn_8265B200(param_1,0xffffffff821ce620,(double)(float)((double)lStack_68 * dVar13));
  return;
}
/* @@ end fn_826593D0 */

/* @@ begin fn_8265A1D0 */
extern int fn_8265A1E8();


void fn_8265A1D0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  fn_8265A1E8(param_4,param_1,param_2,param_3);
  return;
}
/* @@ end fn_8265A1D0 */

/* @@ begin fn_8265A1E8 */
extern int fn_82658A88();
extern int fn_82658B20();
extern void fn_82658B90();
extern void fn_82658F70();
extern void fn_826593D0();
extern void fn_8265AF38();
extern void fn_8265AFA0();
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern void fn_8265B250();
extern void fn_8265B3C8();
extern unsigned int lbl_831BD828;


undefined4 fn_8265A1E8(int param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar4;
  ulonglong uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar8 = (uint)param_3;
  if ((param_2 & 1) == 0) {
    if ((param_2 & 6) == 0) goto LAB_8265adc4;
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x2030);
    if ((ulonglong)*(uint *)(param_1 + 0x2030) <= (param_3 & 0xffffffff)) {
      uVar7 = param_3;
    }
    *(int *)(param_1 + 0x2030) = (int)uVar7;
    uVar7 = (param_2 & 0xffffffff) >> 5 & 1;
    if ((param_2 & 2) != 0) {
      fn_8265AFA0(param_1);
      if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
        fn_8265B200(param_1,0xffffffff821ce850,param_3);
      }
      if (uVar7 != 0) {
        fn_8265B200(param_1,0xffffffff821ce66c);
        fn_8265B3C8(param_1,0xffffffff821ce7d4);
        fn_8265AF38(param_1);
        if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
          fn_8265B200(param_1,0xffffffff821ce860);
        }
      }
      fn_8265B200(param_1,0xffffffff821ce66c);
      fn_826593D0(param_1,param_4,(param_2 & 0xffffffff) >> 4 & 1,param_3);
      goto LAB_8265adc4;
    }
    if ((param_2 & 4) == 0) goto LAB_8265adc4;
    cVar4 = fn_82658B20(param_4);
    uVar9 = 0xffffffff821ce808;
    uVar5 = 0xffffffff821ce66c;
    if (cVar4 == '\0') {
LAB_8265abf8:
      fn_8265AFA0(param_1);
      if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
        fn_8265B200(param_1,0xffffffff821ce850,param_3);
      }
      if (uVar7 != 0) {
        fn_8265B200(param_1,0xffffffff821ce66c);
        fn_8265B3C8(param_1,0xffffffff821ce7d4);
        fn_8265AF38(param_1);
        if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
          fn_8265B200(param_1,0xffffffff821ce860);
        }
      }
      fn_8265B200(param_1,0xffffffff821ce66c);
      if (1 < (param_4[1] >> 0x1b & 3)) {
        uVar6 = uVar9;
        if ((param_4[1] >> 0x1b & 1) == 0) {
          uVar6 = 0xffffffff821ce810;
        }
        fn_8265B200(param_1,uVar6);
      }
      fn_82658B90(param_1,param_4);
    }
    else {
      uVar8 = *param_4;
      if ((uVar8 & 0xfc000000) == 0xc8000000) {
        if ((uVar8 & 0x8000) == 0) {
          uVar3 = 1;
          if ((uVar8 & 0xf00000) != 0) goto LAB_8265abec;
        }
        else {
          uVar3 = fn_82658A88(param_4);
          uVar3 = (~uVar3 & 0xffffffff) >> 1 & 1;
        }
      }
      else {
LAB_8265abec:
        uVar3 = 0;
      }
      if (uVar3 != 0) goto LAB_8265abf8;
    }
    uVar8 = *param_4;
    if ((uVar8 & 0xfc000000) == 0xc8000000) {
      if ((uVar8 & 0x8000) == 0) {
        uVar3 = 1;
        if ((uVar8 & 0xf00000) != 0) goto LAB_8265acd8;
      }
      else {
        uVar3 = fn_82658A88(param_4);
        uVar3 = (~uVar3 & 0xffffffff) >> 1 & 1;
      }
    }
    else {
LAB_8265acd8:
      uVar3 = 0;
    }
    if (uVar3 == 0) {
      cVar4 = fn_82658B20(param_4);
      if (cVar4 == '\0') {
        ((void (*)())fn_8265AF38)();
        if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
          fn_8265B200(param_1,0xffffffff821ce860);
        }
        uVar5 = 0xffffffff821ce784;
      }
      else {
        fn_8265AFA0(param_1);
        if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
          fn_8265B200(param_1,0xffffffff821ce850,param_3);
        }
        if (uVar7 != 0) {
          fn_8265B200(param_1,0xffffffff821ce66c);
          fn_8265B3C8(param_1,0xffffffff821ce7d4);
          fn_8265AF38(param_1);
          if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
            fn_8265B200(param_1,0xffffffff821ce860);
          }
        }
      }
      fn_8265B200(param_1,uVar5);
      if (1 < (param_4[1] >> 0x1b & 3)) {
        if ((param_4[1] >> 0x1b & 1) == 0) {
          uVar9 = 0xffffffff821ce810;
        }
        fn_8265B200(param_1,uVar9);
      }
      fn_82658F70(param_1,param_4);
    }
    goto LAB_8265adc4;
  }
  uVar1 = param_4[1];
  uVar10 = uVar1 >> 0xc & 0xf;
  if (*(char *)(param_1 + 0xc) != '\0') {
    fn_8265AFA0();
    if ((1 << (uVar8 & 0x1f) & *(uint *)(((int)((param_3 & 0xffffffff) >> 5) + 6) * 4 + param_1)) !=
        0) {
      if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
        fn_8265B200(param_1,0xffffffff821ce64c);
      }
      fn_8265B3C8(param_1,0xffffffff821ce654);
      fn_8265B200(param_1,0xffffffff821ce65c,param_3);
      fn_8265AF38(param_1);
    }
    if ((((*(uint *)(param_1 + 8) & 4) != 0) || ((uVar1 >> 0xc & 0xf) != 0)) &&
       ((*(uint *)(param_1 + 8) & 0x20) != 0)) {
      fn_8265B200(param_1,0xffffffff821ce840,
                        (longlong)((int)uVar8 >> 1) +
                        (ulonglong)((int)uVar8 < 0 && (param_3 & 1) != 0),
                        param_3 + ((longlong)((int)uVar8 >> 1) +
                                   (ulonglong)((int)uVar8 < 0 && (param_3 & 1) != 0) & 0x7fffffff) *
                                  -2);
    }
  }
  switch(uVar10) {
  case 0:
    if ((*(char *)(param_1 + 0xc) == '\0') || ((*(uint *)(param_1 + 8) & 4) == 0))
    goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce664;
    goto code_r0x8265a334;
  case 1:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce66c;
    goto code_r0x8265a354;
  case 2:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce66c;
    goto code_r0x8265a3a0;
  case 3:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce684;
    goto code_r0x8265a3d8;
  case 4:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce694;
code_r0x8265a3d8:
    fn_8265B3C8(param_1,uVar5);
    fn_8265B200(param_1,0xffffffff821aa89c);
    if ((param_4[1] & 0x400) == 0) {
      fn_8265B200(param_1,0xffffffff821ce68c);
    }
    fn_8265B200(param_1,0xffffffff821ce690,param_4[1] >> 2 & 0xff);
    uVar8 = 0;
code_r0x8265a428:
    uVar1 = *param_4;
    uVar5 = 1;
    goto code_r0x8265a380;
  case 5:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    if ((param_4[1] & 0x400) == 0) {
      uVar5 = 0xffffffff821ce810;
    }
    else {
      uVar5 = 0xffffffff821ce808;
    }
code_r0x8265a354:
    fn_8265B200(param_1,uVar5);
    uVar5 = 0xffffffff821ce674;
code_r0x8265a364:
    fn_8265B3C8(param_1,uVar5);
    uVar1 = *param_4;
    uVar5 = 0;
    uVar8 = param_4[1] >> 9 & 1;
code_r0x8265a380:
    fn_8265B250(param_1,uVar1 >> 0xf & 1,uVar8,uVar5);
    goto LAB_8265adc4;
  case 6:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    if ((param_4[1] & 0x400) == 0) {
      uVar5 = 0xffffffff821ce810;
    }
    else {
      uVar5 = 0xffffffff821ce808;
    }
code_r0x8265a3a0:
    fn_8265B200(param_1,uVar5);
    uVar5 = 0xffffffff821ce67c;
    goto code_r0x8265a364;
  case 7:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    fn_8265B3C8(param_1,0xffffffff821ce69c);
    fn_8265B200(param_1,0xffffffff821aa89c);
    fn_8265B200(param_1,0xffffffff821ce6a4,*(ushort *)param_4 & 0x1f);
    fn_8265B200(param_1,0xffffffff821ce314,*param_4 & 0x1fff);
    uVar8 = *param_4 >> 0xd & 1;
    if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || (uVar8 != 0)) {
      if (uVar8 == 0) {
        uVar5 = 0xffffffff82196f10;
      }
      else {
        uVar5 = 0xffffffff82196f18;
      }
      fn_8265B200(param_1,0xffffffff821ce6ac,uVar5);
    }
    uVar10 = param_4[1] >> 0xb & 1;
    if (uVar10 == 0) goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce6b8;
    break;
  case 8:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    if ((*param_4 & 0x200000) == 0) {
      uVar5 = 0xffffffff821ce66c;
    }
    else if ((param_4[1] & 0x400) == 0) {
      uVar5 = 0xffffffff821ce810;
    }
    else {
      uVar5 = 0xffffffff821ce808;
    }
    fn_8265B200(param_1,uVar5);
    fn_8265B3C8(param_1,0xffffffff821ce6cc);
    fn_8265B200(param_1,0xffffffff821aa89c);
    fn_8265B200(param_1,0xffffffff821ce6a4,*(ushort *)param_4 & 0x1f);
    fn_8265B200(param_1,0xffffffff821ce314,*param_4 & 0x1fff);
    if ((param_4[1] & 0x800) == 0) goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce6d4;
    goto code_r0x8265a63c;
  case 9:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    bVar11 = false;
    if ((*param_4 & 0x4000) == 0) {
      uVar5 = 0xffffffff821ce66c;
    }
    else {
      bVar11 = true;
      if ((param_4[1] & 0x400) == 0) {
        uVar5 = 0xffffffff821ce810;
      }
      else {
        uVar5 = 0xffffffff821ce808;
      }
    }
    fn_8265B200(param_1,uVar5);
    if (((*param_4 & 0x2000) != 0) || (bVar11)) {
      fn_8265B3C8(param_1,0xffffffff821ce6e8);
      fn_8265B200(param_1,0xffffffff821aa89c);
    }
    else {
      fn_8265B3C8(param_1,0xffffffff821ce6f0);
      fn_8265B200(param_1,0xffffffff821aa89c);
      if ((param_4[1] & 0x400) == 0) {
        uVar5 = 0xffffffff821ce68c;
      }
      else {
        uVar5 = 0xffffffff82196582;
      }
      fn_8265B200(param_1,0xffffffff821c4da8,uVar5);
      fn_8265B200(param_1,0xffffffff821ce6f8,param_4[1] >> 2 & 0xff);
    }
    uVar5 = 0xffffffff821ce314;
    uVar10 = *param_4 & 0x1fff;
    break;
  case 10:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce700;
    goto code_r0x8265a334;
  case 0xb:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    bVar11 = false;
    if ((*param_4 & 0x4000) == 0) {
      uVar5 = 0xffffffff821ce66c;
    }
    else {
      bVar11 = true;
      if ((param_4[1] & 0x400) == 0) {
        uVar5 = 0xffffffff821ce810;
      }
      else {
        uVar5 = 0xffffffff821ce808;
      }
    }
    fn_8265B200(param_1,uVar5);
    bVar2 = false;
    if (((*param_4 & 0x2000) != 0) || (bVar11)) {
      bVar2 = true;
    }
    if (bVar2) {
      fn_8265B3C8(param_1,0xffffffff821ce704);
      fn_8265B200(param_1,0xffffffff821aa89c);
    }
    else {
      fn_8265B3C8(param_1,0xffffffff821ce708);
      fn_8265B200(param_1,0xffffffff821aa89c);
      if ((param_4[1] & 0x400) == 0) {
        uVar5 = 0xffffffff821ce68c;
      }
      else {
        uVar5 = 0xffffffff82196582;
      }
      fn_8265B200(param_1,0xffffffff821c4da8,uVar5);
      fn_8265B200(param_1,0xffffffff821ce6f8,param_4[1] >> 2 & 0xff);
    }
    fn_8265B200(param_1,0xffffffff821ce314,*param_4 & 0x1fff);
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      if ((param_4[1] >> 1 & 1) == 0) {
        if ((*(uint *)(param_1 + 8) >> 6 & 1) == 0) goto code_r0x8265a8c8;
        uVar5 = 0xffffffff82196f10;
      }
      else {
        uVar5 = 0xffffffff82196f18;
      }
      fn_8265B200(param_1,0xffffffff821ce710,uVar5);
    }
code_r0x8265a8c8:
    uVar10 = param_4[1] >> 0xb & 1;
    if (uVar10 == 0) goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce724;
    break;
  case 0xc:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    fn_8265B3C8(param_1,0xffffffff821ce738);
    fn_8265B200(param_1,0xffffffff821aa89c);
    uVar8 = param_4[1] >> 9 & 3;
    fn_8265B200(param_1,0xffffffff821c4da8,
                      (&lbl_831BD828)[(*(uint *)(param_1 + 8) >> 3 & 1) + uVar8 * 2]);
    if (uVar8 == 3) {
      fn_8265B200(param_1,0xffffffff821ce740,*param_4 & 7);
    }
    if ((param_4[1] & 0x100) == 0) goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce744;
code_r0x8265a63c:
    fn_8265B200(param_1,uVar5);
    goto LAB_8265adc4;
  case 0xd:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce684;
    goto code_r0x8265a9bc;
  case 0xe:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce694;
code_r0x8265a9bc:
    fn_8265B3C8(param_1,uVar5);
    fn_8265B200(param_1,0xffffffff821aa89c);
    if ((param_4[1] & 0x400) == 0) {
      fn_8265B200(param_1,0xffffffff821ce68c);
    }
    fn_8265B200(param_1,0xffffffff821ce690,param_4[1] >> 2 & 0xff);
    uVar8 = 1;
    goto code_r0x8265a428;
  case 0xf:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce75c;
code_r0x8265a334:
    fn_8265B3C8(param_1,uVar5);
    goto LAB_8265adc4;
  default:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    fn_8265B3C8(param_1,0xffffffff821ce764);
    uVar5 = 0xffffffff821ce778;
  }
  fn_8265B200(param_1,uVar5,uVar10);
LAB_8265adc4:
  fn_8265AF38(param_1);
  return *(undefined4 *)(param_1 + 0x202c);
}
/* @@ end fn_8265A1E8 */

/* @@ begin fn_8265ADD8 */
extern int fn_82636C98();
extern void fn_8265AF38();
extern void fn_8265B000(Log *l, const char *fmt, ...);
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern void fn_8265B300();


longlong fn_8265ADD8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                      uint param_5,undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = param_4;
  param_1[2] = param_6;
  *(undefined1 *)(param_1 + 3) = 1;
  *(byte *)((int)param_1 + 0xd) = ~(byte)param_6 & 1;
  *(undefined1 *)(param_1 + 0x80a) = 1;
  param_1[0x80c] = 0;
  param_1[0x80b] = 0;
  fn_82636C98(param_4,param_5,0,0,0,0,1,0xffffffff8265b048);
  lVar1 = fn_82636C98(param_4,param_5,0,0,0,0,7,0xffffffff8265a1d0);
  if (-1 < lVar1) {
    if (((param_1[2] & 0x100) == 0) && (iVar2 = (param_1[0x80c] + 1) * 0xc, iVar2 + 0xcU <= param_5)
       ) {
      if ((param_1[2] & 0x10) == 0) {
        fn_8265B000(param_1,0xffffffff821cc86c);
      }
      else {
        fn_8265B300(param_1,0xffffffff821ce7a4);
      }
      *(undefined1 *)(param_1 + 0x80a) = 1;
      fn_8265B300(param_1,0xffffffff821ce838);
      fn_8265B200(param_1,0xffffffff821ce870);
      fn_8265B200(param_1,0xffffffff821ce78c,*(undefined4 *)(iVar2 + param_4),
                        *(undefined4 *)(iVar2 + param_4 + 4),*(undefined4 *)(iVar2 + param_4 + 8));
      fn_8265B300(param_1,0xffffffff821ce828);
      fn_8265AF38(param_1);
    }
  }
  return lVar1;
}
/* @@ end fn_8265ADD8 */

/* @@ begin fn_8265AF38 */
extern void fn_8265B000(Log *l, const char *fmt, ...);
extern void fn_8265B300(Log *l, const char *s);

void fn_8265AF38(Log *l)
{
  if (l->busy == 0) {
    if ((l->flags & 0x10) != 0) {
      fn_8265B300(l, "\\line");
    } else {
      fn_8265B000(l, "\n");
    }
    l->busy = 1;
  }
}
/* @@ end fn_8265AF38 */

/* @@ begin fn_8265AFA0 */
extern void fn_8265AF38(Log *l);
extern void fn_8265B000(Log *l, const char *fmt, ...);
extern void fn_8265B300(Log *l, const char *s);
extern char lbl_821CE7AC[];

void fn_8265AFA0(Log *l)
{
  fn_8265AF38(l);
  if ((unsigned char)(l->flags >> 7) & 1) {
    if ((l->flags & 0x10) != 0) {
      fn_8265B300(l, "\\line");
    } else {
      fn_8265B000(l, lbl_821CE7AC);
    }
  }
}
/* @@ end fn_8265AFA0 */

/* @@ begin fn_8265B000 */
extern void __cdecl __va_start(va_list *, ...);
extern void fn_8265B100(Log *l, const char *fmt, va_list ap);

void fn_8265B000(Log *l, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  fn_8265B100(l, fmt, ap);
}
/* @@ end fn_8265B000 */

/* @@ begin fn_8265B048 */
extern void fn_8265B430(Log *l, unsigned char point, int n, const char *fmt, ...);

int fn_8265B048(unsigned int flags, int line, Instr *ins, Log *l)
{
  if ((flags & 1) != 0) {
    unsigned int kind;
    if ((ins->w4 & 0x800) != 0) {
      fn_8265B430(l, 0, line, "Absolute addressing is unsupported.");
    }
    kind = (ins->w4 >> 12) & 0xf;
    if (kind == 7 || kind == 8 || kind == 9 || kind == 11) {
      unsigned int *used = l->used;
      unsigned int r = ins->w0 & 0x1fff;
      used[r >> 5] |= 1 << (r & 0x1f);
    }
  }
  return 0;
}
/* @@ end fn_8265B048 */

/* @@ begin fn_8265B100 */
extern int _vsnprintf(char *buf, unsigned int size, const char *fmt, va_list ap);

void fn_8265B100(Log *l, const char *fmt, va_list ap)
{
  char buf[0x800];
  int n;
  if (l != 0 && l->hr >= 0) {
    n = _vsnprintf(buf, sizeof(buf), fmt, ap);
    if (n > 0) {
      if (l->cr) {
        char c = buf[0];
        unsigned char word;
        int hr;
        l->cr = 0;
        word = !(c == ' ' || c == '-' || (c >= '0' && c <= '9'));
        if (!word) {
          hr = l->write(l->ctx, " ", 1);
          if (hr < 0) {
            l->hr = hr;
          }
        }
      }
      {
        int hr = l->write(l->ctx, buf, n);
        if (hr < 0) {
          l->hr = hr;
        }
      }
    }
  }
}
/* @@ end fn_8265B100 */

/* @@ begin fn_8265B200 */
extern void __cdecl __va_start(va_list *, ...);
extern void fn_8265B100(Log *l, const char *fmt, va_list ap);

void fn_8265B200(Log *l, const char *fmt, ...)
{
  va_list ap;
  l->busy = 0;
  __va_start(&ap, fmt);
  fn_8265B100(l, fmt, ap);
}
/* @@ end fn_8265B200 */

/* @@ begin fn_8265B250 */
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern char lbl_82196F10[];
extern char lbl_82196F18[];
extern char lbl_82196FAC[];

void fn_8265B250(Log *l, int yield, int predicateClean, unsigned char separate)
{
  const char *yes = lbl_82196F18;
  const char *no = lbl_82196F10;
  if ((unsigned char)(l->flags >> 6) & 1 || yield != 0) {
    if (separate) {
      fn_8265B200(l, lbl_82196FAC);
    }
    fn_8265B200(l, " Yield=%s", yield != 0 ? yes : no);
  }
  if ((unsigned char)(l->flags >> 6) & 1 || predicateClean == 0) {
    fn_8265B200(l, "    // PredicateClean=%s", predicateClean != 0 ? yes : no);
  }
}
/* @@ end fn_8265B250 */

/* @@ begin fn_8265B300 */
extern void fn_8265B200(Log *l, const char *fmt, ...);

void fn_8265B300(Log *l, const char *s)
{
  if ((l->flags & 0x10) != 0) {
    l->cr = 0;
    fn_8265B200(l, "%s", s);
    l->cr = 1;
  }
}
/* @@ end fn_8265B300 */

/* @@ begin fn_8265B358 */
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern void fn_8265B300(Log *l, const char *s);
extern char lbl_82196582[];

void fn_8265B358(Log *l, const char *s, unsigned char sat)
{
  fn_8265B300(l, "\\cf2");
  fn_8265B200(l, "%s%s", s, sat ? "_sat" : lbl_82196582);
  fn_8265B300(l, "\\cf3");
}
/* @@ end fn_8265B358 */

/* @@ begin fn_8265B3C8 */
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern void fn_8265B300(Log *l, const char *s);

void fn_8265B3C8(Log *l, const char *s)
{
  fn_8265B300(l, "\\cf5");
  fn_8265B200(l, "%s", s);
  fn_8265B300(l, "\\cf3");
}
/* @@ end fn_8265B3C8 */

/* @@ begin fn_8265B430 */
extern void __cdecl __va_start(va_list *, ...);
extern void fn_8265AF38(Log *l);
extern void fn_8265B100(Log *l, const char *fmt, va_list ap);
extern void fn_8265B200(Log *l, const char *fmt, ...);
extern void fn_8265B300(Log *l, const char *s);

void fn_8265B430(Log *l, unsigned char point, int n, const char *fmt, ...)
{
  va_list ap;
  fn_8265AF38(l);
  fn_8265B300(l, "\\cf4");
  fn_8265B200(l, "// ");
  if (point) {
    fn_8265B200(l, "%4d  ", n);
  } else {
    fn_8265B200(l, "%4d.%d ", n / 2, n % 2);
  }
  fn_8265B200(l, "Warning: ");
  __va_start(&ap, fmt);
  fn_8265B100(l, fmt, ap);
  fn_8265B300(l, "\\cf3");
  fn_8265AF38(l);
}
/* @@ end fn_8265B430 */
