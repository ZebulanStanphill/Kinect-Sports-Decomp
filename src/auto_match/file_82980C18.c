/* file_82980C18: functions fn_82980C18..fn_829860E0, grouped as one unit because they appear
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

typedef char *va_list;
typedef struct Compiler {
  int unk0;
  char *ctx;
  char pad8[0x48 - 0x8];
  int failed;
  int fatal;
} Compiler;
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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define SQRT(x) sqrt(x)
typedef struct { char pad[0xbd8]; void *log; } Owner_82983680;

typedef struct { unsigned int pad0 : 20; unsigned int m : 2; unsigned int low : 10; } Bits_829843D0;
typedef struct {
  unsigned int f0;
  struct { char pad[0x3c]; unsigned int f3c; } *f4;
} Ctx_829843D0;
typedef struct {
  char pad0[4];
  int kind;
  char pad1[8];
  int dim;
  char pad2[0x10];
  Bits_829843D0 bits;
} Node_829843D0;

/* @@ end of shared declarations */

/* @@ begin fn_82980C18 */
extern void __cdecl __va_start(va_list *, ...);
extern int fn_828F5960(char *buf, unsigned int size, const char *fmt, va_list ap);
extern void fn_828FA8D8(void *log, int a, int b, const char *fmt, ...);
extern void fn_828FAB00(void *log, int a, int b, const char *fmt, ...);

void fn_82980C18(Compiler *c, int a, int b, const char *fmt, ...)
{
  va_list ap;
  char buf[0x100];
  __va_start(&ap, fmt);
  fn_828F5960(buf, sizeof(buf), fmt, ap);
  fn_828FA8D8(c->ctx + 0x18, a, b, "%s", buf);
  c->failed = 1;
}
/* @@ end fn_82980C18 */

/* @@ begin fn_82980C90 */
extern void __cdecl __va_start(va_list *, ...);
extern int fn_828F5960(char *buf, unsigned int size, const char *fmt, va_list ap);
extern void fn_828FA8D8(void *log, int a, int b, const char *fmt, ...);
extern void fn_828FAB00(void *log, int a, int b, const char *fmt, ...);

void fn_82980C90(Compiler *c, int a, int b, const char *fmt, ...)
{
  va_list ap;
  char buf[0x100];
  __va_start(&ap, fmt);
  fn_828F5960(buf, sizeof(buf), fmt, ap);
  fn_828FAB00(c->ctx + 0x18, a, b, "%s", buf);
}
/* @@ end fn_82980C90 */

/* @@ begin fn_82980D00 */
extern void __cdecl __va_start(va_list *, ...);
extern int fn_828F5960(char *buf, unsigned int size, const char *fmt, va_list ap);
extern void fn_828FA8D8(void *log, int a, int b, const char *fmt, ...);
extern void fn_828FAB00(void *log, int a, int b, const char *fmt, ...);

void fn_82980D00(Compiler *c, int a, int b, const char *fmt, ...)
{
  va_list ap;
  char buf[0x100];
  __va_start(&ap, fmt);
  fn_828F5960(buf, sizeof(buf), fmt, ap);
  fn_828FA8D8(c->ctx + 0x18, a, b, "%s", buf);
  c->failed = 1;
  c->fatal = 1;
}
/* @@ end fn_82980D00 */

/* @@ begin fn_82980D80 */
extern void fn_82980D00(int p, int a, int b, const char *msg, ...);

void *fn_82980D80(int param_1, void *param_2)
{
    if (param_2 == 0) {
        if (*(int *)(param_1 + 0x48) == 0) {
            fn_82980D00(param_1, 0, 0, "internal error: production failed!");
        }
        *(int *)(param_1 + 0x48) = 1;
        *(int *)(param_1 + 0x4c) = 1;
    }
    return param_2;
}
/* @@ end fn_82980D80 */

/* @@ begin fn_82980DE8 */
extern int fn_829301D0();
extern int fn_82930318();
extern int fn_82930CE0();
extern void fn_82980D00(Compiler *c, int a, int b, const char *fmt, ...);
extern int memcpy();


undefined8 fn_82980DE8(int param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  char *pcVar3;
  ulonglong uVar2;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar6 = (char *)0x0;
  pcVar3 = param_3;
  if (param_3 != (char *)0x0) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar6 = pcVar3 + (-1 - (int)param_3);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 != 0) {
    pcVar3 = *(char **)(iVar4 + 0x14);
    pcVar5 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + (-1 - (int)pcVar3);
      if ((pcVar5 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
        pcVar3 = (char *)fn_829301D0(*(undefined4 *)(param_1 + 4),pcVar5 + (int)(pcVar6 + 3),
                                           0x10);
        if (pcVar3 == (char *)0x0) goto LAB_82980e8c;
        memcpy(pcVar3,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),pcVar5);
        pcVar7 = pcVar3 + (int)pcVar5;
        pcVar3[(int)pcVar5] = ':';
        pcVar7[1] = ':';
        memcpy(pcVar7 + 2,param_3,pcVar6);
        pcVar7[(int)(pcVar6 + 2)] = '\0';
        param_3 = pcVar3;
        goto LAB_82980f0c;
      }
    }
    if ((iVar4 != 0) && (param_3 == (char *)0x0)) {
      param_3 = *(char **)(iVar4 + 0x14);
    }
  }
LAB_82980f0c:
  uVar2 = fn_82930318(0x24);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_82930CE0(uVar2,param_2,param_3,0,0,*(undefined4 *)(param_1 + 0x14));
  }
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x14) = iVar4;
    return 0;
  }
LAB_82980e8c:
  fn_82980D00(param_1,0,0,0xffffffff820295b0);
  return 0xffffffff8007000e;
}
/* @@ end fn_82980DE8 */

/* @@ begin fn_82980F58 */
extern int fn_8297F280();
extern void fn_82980D00(int, int, int, const char *, ...);

int fn_82980F58(int param_1)
{
  unsigned int iVar1;
  int uVar2;
  int *piVar3;

  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    fn_82980D00(param_1,0,0,"internal error: scope underflow");
    uVar2 = 0x80004005;
  }
  else {
    if (((*(int *)(iVar1 + 0x10) == 4) && (*(unsigned int *)(iVar1 + 0x20) != 0)) &&
       (*(int *)(*(int *)(iVar1 + 0x20) + 0x10) != 4)) {
      piVar3 = (int *)(iVar1 + 0x18);
      for (iVar1 = *(int *)(iVar1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
        *(int *)(*(int *)(iVar1 + 8) + 0x30) = 1;
        uVar2 = fn_8297F280(param_1,*(int *)(*(int *)(param_1 + 0x14) + 0x20),
                              *(int *)(*piVar3 + 8));
        if (uVar2 < 0) {
          return uVar2;
        }
        iVar1 = *piVar3;
        piVar3 = (int *)(iVar1 + 0xc);
      }
      *piVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x20) + 0x18);
      *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x20) + 0x18) =
           *(int *)(*(int *)(param_1 + 0x14) + 0x18);
      *(int *)(*(int *)(param_1 + 0x14) + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(iVar1 + 0x20);
    *(int *)(iVar1 + 0x20) = 0;
    return 0;
  }
  return uVar2;
}
/* @@ end fn_82980F58 */

/* @@ begin fn_82981050 */
extern int fn_82930318();
extern int fn_82930430();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_8297F280();
extern int fn_8297F4D8();
extern void fn_82980C18(Compiler *c, int a, int b, const char *fmt, ...);
extern void fn_82980D00(Compiler *c, int a, int b, const char *fmt, ...);


uint fn_82981050(int param_1,int param_2,int param_3)

{
  int iVar2;
  int iVar3;
  ulonglong uVar1;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    fn_82980D00(param_1,0,0,0xffffffff8204dff4);
  }
  else {
    iVar4 = *(int *)(param_2 + 0x14);
    iVar8 = iVar4 + 0x10;
    for (iVar2 = fn_8297F4D8(param_1,iVar8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      if ((*(int *)(*(int *)(iVar2 + 8) + 0x30) == 0) &&
         ((*(int *)(param_2 + 0x10) != 2 || (*(int *)(*(int *)(iVar2 + 8) + 0x10) != 2)))) {
        if ((param_3 != 0) && (iVar3 = fn_82930430(param_2), iVar3 != 0)) {
          return 0;
        }
        uVar6 = 0xbbb;
        uVar7 = 0xffffffff8204dfb4;
        goto LAB_82981158;
      }
    }
    iVar2 = *(int *)(iVar3 + 0x20);
    if ((((iVar2 == 0) || (*(int *)(iVar3 + 0x10) != 3)) || (*(int *)(iVar2 + 0x10) != 2)) ||
       (iVar3 = fn_8297F4D8(param_1,iVar8,iVar2), iVar3 == 0)) {
      uVar1 = fn_82930318(0x14);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_829304E0(uVar1,0,0,0xffffffff8204dcf4);
      }
      if (iVar3 != 0) {
        iVar4 = fn_82930458(param_2);
        *(int *)(iVar3 + 8) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14);
          *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(*(int *)(iVar3 + 8) + 0x24);
          *(undefined4 *)(*(int *)(iVar3 + 8) + 0x28) = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(*(int *)(iVar3 + 8) + 0x28);
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18);
          *(int *)(*(int *)(param_1 + 0x14) + 0x18) = iVar3;
          uVar5 = fn_8297F280(param_1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(iVar3 + 8));
          return (int)uVar5 >> 0x1f & uVar5;
        }
      }
      return 0x8007000e;
    }
    uVar6 = 0xbdc;
    uVar7 = 0xffffffff8204dfcc;
LAB_82981158:
    fn_82980C18(param_1,iVar8,uVar6,uVar7,*(undefined4 *)(iVar4 + 0x18));
  }
  return 0x80004005;
}
/* @@ end fn_82981050 */

/* @@ begin fn_82981238 */
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82930FC0();
extern void fn_82980C18(Compiler *c, int a, int b, const char *fmt, ...);
extern int fn_82981050();


int fn_82981238(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined8 param_6)

{
  undefined4 uVar2;
  ulonglong uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    if ((CONCAT44(uVar2,uVar2) & 0xfffffffffffffff7) != 0) {
      if ((int)param_2 == 7) {
        uVar6 = 0xffffffff8204e048;
      }
      else {
        if ((int)param_2 != 8) {
          return 0;
        }
        uVar6 = 0xffffffff8204e01c;
      }
      fn_82980C18(param_1,0,0xbe8,uVar6);
      return 0;
    }
    *(undefined4 *)(param_4 + 0x20) = uVar2;
    uVar2 = fn_82930458(*(undefined4 *)(param_3 + 0x1c));
    *(undefined4 *)(param_4 + 0x24) = uVar2;
  }
  uVar1 = fn_82930318(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_829304E0(uVar1,0,0,0xffffffff8204e014);
  }
  if (iVar3 != 0) {
    uVar1 = fn_82930318(0x34);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82930FC0(uVar1,param_2,*(undefined4 *)(param_4 + 0x14),param_6,0,param_4);
    }
    if ((iVar4 != 0) && (iVar5 = fn_82981050(param_1,iVar4,0), -1 < iVar5)) {
      *(int *)(iVar3 + 8) = iVar4;
      *(int *)(iVar4 + 0x20) = param_4;
      *(undefined4 *)(iVar4 + 0x1c) = param_5;
      return iVar3;
    }
  }
  return 0;
}
/* @@ end fn_82981238 */

/* @@ begin fn_82981360 */
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82930FC0();
extern int fn_82981050();


int fn_82981360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_82930318(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_829304E0(uVar1,0,0,0xffffffff8204e074);
  }
  if (iVar2 != 0) {
    uVar1 = fn_82930318(0x34);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82930FC0(uVar1,6,param_2,param_3,param_4,0);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      *(int *)(iVar2 + 8) = (int)uVar1;
      iVar3 = fn_82981050(param_1,uVar1,1);
      if (-1 < iVar3) {
        return iVar2;
      }
    }
  }
  return 0;
}
/* @@ end fn_82981360 */

/* @@ begin fn_82981420 */
extern int fn_82930318();
extern int fn_829304E0();
extern void * fn_82980D80();


undefined8 fn_82981420(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  
  uVar1 = fn_82930318(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_829304E0(uVar1,0,*(undefined4 *)(param_1 + 0x10),0xffffffff8204e080);
  }
  if (iVar3 == 0) {
    fn_82980D80(param_1,0);
    uVar2 = 0xffffffff8007000e;
  }
  else {
    *(int *)(param_1 + 0x10) = iVar3;
    uVar2 = 0;
    *(undefined4 *)(iVar3 + 8) = param_2;
  }
  return uVar2;
}
/* @@ end fn_82981420 */

/* @@ begin fn_829814B0 */
extern void fn_82980D00(Compiler *c, int a, int b, const char *fmt, ...);


undefined8 fn_829814B0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 1) {
    do {
      if (*(int *)(param_2 + 4) != 1) break;
      fn_829814B0(param_1,*(undefined4 *)(param_2 + 8),param_3);
      param_2 = *(int *)(param_2 + 0xc);
    } while (param_2 != 0);
    if (param_2 == 0) {
      return 0;
    }
  }
  else if (iVar1 == 6) {
    param_2 = *(int *)(param_2 + 0x18);
  }
  else if (iVar1 == 8) {
    param_2 = *(int *)(param_2 + 0x10);
  }
  else {
    if (iVar1 == 9) {
      if ((int)param_3 == 0) {
        uVar2 = *(uint *)(param_2 + 0x24) & 0xfffffdff;
      }
      else {
        uVar2 = *(uint *)(param_2 + 0x24) | 0x200;
      }
      *(uint *)(param_2 + 0x24) = uVar2;
      return 0;
    }
    if (iVar1 != 0xb) {
      fn_82980D00(param_1,0,0,0xffffffff8202dc94);
      return 0;
    }
    param_2 = *(int *)(param_2 + 0x30);
  }
  fn_829814B0(param_1,param_2,param_3);
  return 0;
}
/* @@ end fn_829814B0 */

/* @@ begin fn_82981598 */
extern void fn_82980D00(Compiler *c, int a, int b, const char *fmt, ...);


uint fn_82981598(undefined8 param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (param_2 == 0) {
            return 0;
          }
          iVar1 = *(int *)(param_2 + 4);
          if (iVar1 != 1) break;
          iVar1 = fn_82981598(param_1,*(undefined4 *)(param_2 + 8));
          if (iVar1 != 0) {
            return 1;
          }
          param_2 = *(int *)(param_2 + 0xc);
        }
        if (iVar1 != 6) break;
        param_2 = *(int *)(param_2 + 0x18);
      }
      if (iVar1 != 8) break;
      param_2 = *(int *)(param_2 + 0x10);
    }
    if (iVar1 == 9) {
      return *(uint *)(param_2 + 0x24) & 0x200;
    }
    if (iVar1 != 0xb) break;
    param_2 = *(int *)(param_2 + 0x30);
  }
  fn_82980D00(param_1,0,0,0xffffffff8202dc94);
  return 0;
}
/* @@ end fn_82981598 */

/* @@ begin fn_82981668 */
extern void fn_82980D00(Compiler *c, int a, int b, const char *fmt, ...);


undefined8 fn_82981668(undefined8 param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (param_2 == 0) {
            return 1;
          }
          iVar1 = *(int *)(param_2 + 4);
          if (iVar1 != 1) break;
          iVar1 = fn_82981668(param_1,*(undefined4 *)(param_2 + 8));
          if (iVar1 == 0) {
            return 0;
          }
          param_2 = *(int *)(param_2 + 0xc);
        }
        if (iVar1 != 6) break;
        param_2 = *(int *)(param_2 + 0x18);
      }
      if (iVar1 != 8) break;
      param_2 = *(int *)(param_2 + 0x10);
    }
    if (iVar1 == 9) {
      if (2 < *(uint *)(param_2 + 0x10)) {
        return 0;
      }
      return 1;
    }
    if (iVar1 != 0xb) break;
    param_2 = *(int *)(param_2 + 0x30);
  }
  fn_82980D00(param_1,0,0,0xffffffff8202dc94);
  return 0;
}
/* @@ end fn_82981668 */

/* @@ begin fn_82981738 */
extern void fn_82980D00(Compiler *c, int a, int b, const char *fmt, ...);


longlong fn_82981738(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_2 == 0) {
    return 0;
  }
  do {
    if (*(int *)(param_2 + 4) != 1) break;
    lVar2 = fn_82981738(param_1,*(undefined4 *)(param_2 + 8));
    param_2 = *(int *)(param_2 + 0xc);
    lVar4 = lVar2 + lVar4;
  } while (param_2 != 0);
  if (param_2 == 0) {
    return lVar4;
  }
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 == 6) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    if (iVar3 == 8) {
      iVar3 = fn_82981738(param_1,*(undefined4 *)(param_2 + 0x10));
      lVar2 = (longlong)iVar3 * (longlong)*(int *)(param_2 + 0x14);
      goto LAB_82981818;
    }
    if (iVar3 == 9) {
      lVar2 = (longlong)*(int *)(param_2 + 0x20) * (longlong)*(int *)(param_2 + 0x1c);
      goto LAB_82981818;
    }
    if (iVar3 != 0xb) {
      fn_82980D00(param_1,0,0,0xffffffff8202dc94);
      return 0;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x30);
  }
  lVar2 = fn_82981738(param_1,uVar1);
LAB_82981818:
  return lVar2 + lVar4;
}
/* @@ end fn_82981738 */

/* @@ begin fn_82981820 */
extern int fn_828F6FA8();
extern int fn_82981598();
extern longlong fn_82981738();
extern int fn_82F68CC0();
extern unsigned int stack0x00000000;


char * fn_82981820(undefined8 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char acStack_140 [320];
  
  pcVar11 = &stack0x00000000 + -0x140;
  if (param_3 == 0) {
    return (char *)0x0;
  }
  if (param_4 == 0) {
    pcVar11 = "void";
    pcVar10 = pcVar11;
    goto LAB_82981bf0;
  }
  iVar4 = *(int *)(param_4 + 4);
  pcVar10 = pcVar11;
  if (iVar4 == 1) {
    iVar4 = fn_82981598(param_1,param_4);
    if (iVar4 == 0) {
      uVar6 = 0xffffffff82196582;
    }
    else {
      uVar6 = 0xffffffff8204e208;
    }
    uVar8 = fn_82981738(param_1,param_4);
    uVar5 = 0xffffffff8204e088;
  }
  else {
    if (iVar4 == 8) {
      iVar4 = *(int *)(param_4 + 4);
      iVar7 = param_4;
      while (iVar4 == 8) {
        iVar7 = *(int *)(iVar7 + 0x10);
        iVar4 = *(int *)(iVar7 + 4);
      }
      pcVar3 = (char *)((int (*)())fn_82981820)(param_1,&stack0x00000000 + -0x140,0xff);
      iVar4 = *(int *)(param_4 + 4);
      while (iVar4 == 8) {
        pcVar12 = &stack0x00000000 + (int)(pcVar3 + -0x140);
        fn_828F6FA8(pcVar12,0xff - (int)pcVar3,0xffffffff8204e098,
                          *(undefined4 *)(param_4 + 0x14));
        pcVar9 = pcVar12;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        param_4 = *(int *)(param_4 + 0x10);
        pcVar3 = pcVar9 + (int)(pcVar3 + (-1 - (int)pcVar12));
        iVar4 = *(int *)(param_4 + 4);
      }
      goto LAB_82981bf0;
    }
    if (iVar4 != 9) {
      pcVar11 = "unknown";
      pcVar10 = pcVar11;
      goto LAB_82981bf0;
    }
    if ((*(uint *)(param_4 + 0x24) & 0x200) == 0) {
      uVar6 = 0xffffffff82196582;
    }
    else {
      uVar6 = 0xffffffff8204e208;
    }
    switch(*(undefined4 *)(param_4 + 0x14)) {
    case 0:
      uVar8 = 0xffffffff8202f4e0;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uVar8 = 0xffffffff8202f488;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      uVar8 = 0xffffffff8204e200;
      break;
    case 10:
    case 0xc:
      uVar8 = 0xffffffff821c8054;
      break;
    case 0xb:
      uVar8 = 0xffffffff8204e1f8;
      break;
    case 0xd:
      uVar8 = 0xffffffff8204e1f0;
      break;
    case 0xe:
    case 0x10:
      uVar8 = 0xffffffff8204e1e4;
      break;
    case 0xf:
      uVar8 = 0xffffffff8204e1d8;
      break;
    case 0x11:
      uVar8 = 0xffffffff8204e1c8;
      break;
    case 0x12:
    case 0x14:
      uVar8 = 0xffffffff8204e1bc;
      break;
    case 0x13:
      uVar8 = 0xffffffff8204e1b0;
      break;
    case 0x15:
      uVar8 = 0xffffffff8204e1a0;
      break;
    case 0x16:
      uVar8 = 0xffffffff82024a3c;
      break;
    case 0x17:
      uVar8 = 0xffffffff8200ed9c;
      break;
    case 0x18:
      uVar8 = 0xffffffff821c4554;
      break;
    case 0x19:
      uVar8 = 0xffffffff8204e194;
      break;
    case 0x1a:
      uVar8 = 0xffffffff8204e160;
      break;
    case 0x1b:
      uVar8 = 0xffffffff8204e188;
      break;
    case 0x1c:
      uVar8 = 0xffffffff8204e150;
      break;
    case 0x1d:
      uVar8 = 0xffffffff8204e17c;
      break;
    case 0x1e:
      uVar8 = 0xffffffff8204e170;
      break;
    case 0x1f:
      uVar8 = 0xffffffff8204e144;
      break;
    case 0x20:
      uVar8 = 0xffffffff8204e130;
      break;
    case 0x21:
      uVar8 = 0xffffffff8202f4c8;
      break;
    case 0x22:
      uVar8 = 0xffffffff8204e124;
      break;
    case 0x23:
      uVar8 = 0xffffffff8204e118;
      break;
    case 0x24:
      uVar8 = 0xffffffff8204e10c;
      break;
    case 0x25:
      uVar8 = 0xffffffff8204e100;
      break;
    default:
      uVar8 = 0xffffffff82196ea4;
      break;
    case 0x27:
      uVar8 = 0xffffffff82005d48;
      break;
    case 0x2a:
      uVar8 = 0xffffffff82001424;
      break;
    case 0x2b:
      uVar8 = 0xffffffff82001414;
      break;
    case 0x2c:
      uVar8 = 0xffffffff8204e0f0;
      break;
    case 0x2d:
      uVar8 = 0xffffffff8204e0e0;
      break;
    case 0x2e:
      uVar8 = 0xffffffff8202f414;
      break;
    case 0x2f:
      uVar8 = 0xffffffff8204e0d4;
      break;
    case 0x33:
      uVar8 = 0xffffffff8204e0c8;
      break;
    case 0x34:
      uVar8 = 0xffffffff8204e0bc;
      break;
    case 0x35:
      uVar8 = 0xffffffff8204e0ac;
    }
    puVar2 = &stack0x00000000 + -0x140;
    if (*(int *)(param_4 + 0x10) == 1) {
      fn_828F6FA8(puVar2,0xff,0xffffffff82038784,uVar6,uVar8,*(undefined4 *)(param_4 + 0x20));
      goto LAB_82981bf0;
    }
    if (*(int *)(param_4 + 0x10) == 2) {
      fn_828F6FA8(puVar2,0xff,0xffffffff8204e0a0,uVar6,uVar8,*(undefined4 *)(param_4 + 0x1c),
                        *(undefined4 *)(param_4 + 0x20));
      goto LAB_82981bf0;
    }
    uVar5 = 0xffffffff821b0c70;
  }
  fn_828F6FA8(&stack0x00000000 + -0x140,0xff,uVar5,uVar6,uVar8);
LAB_82981bf0:
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar10 + (-1 - (int)pcVar11);
  if ((char *)(param_3 + -1) < pcVar10 + (-1 - (int)pcVar11)) {
    pcVar3 = (char *)(param_3 + -1);
  }
  fn_82F68CC0(param_2,pcVar11,pcVar3);
  pcVar3[param_2] = '\0';
  return pcVar3;
}
/* @@ end fn_82981820 */

/* @@ begin fn_82981C40 */
extern void fn_82980D00(Compiler *c, int a, int b, const char *fmt, ...);
extern longlong fn_82981738();


undefined8 fn_82981C40(undefined8 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (param_2 == 0) {
            return 0xffffffff80004005;
          }
          iVar1 = *(int *)(param_2 + 4);
          if (iVar1 != 1) break;
          uVar3 = fn_82981738(param_1,*(undefined4 *)(param_2 + 8));
          if (param_3 < uVar3) {
            param_2 = *(int *)(param_2 + 8);
          }
          else {
            param_2 = *(int *)(param_2 + 0xc);
            param_3 = param_3 - uVar3;
          }
        }
        if (iVar1 != 6) break;
        param_2 = *(int *)(param_2 + 0x18);
      }
      if (iVar1 != 8) break;
      param_2 = *(int *)(param_2 + 0x10);
      uVar2 = fn_82981738(param_1,param_2);
      if ((uVar2 & 0xffffffff) == 0) {
        return 0xffffffff80004005;
      }
      trapWord(6,uVar2,0);
      param_3 = param_3 - (int)((ulonglong)param_3 / (uVar2 & 0xffffffff)) * (int)uVar2;
    }
    if (iVar1 == 9) break;
    if (iVar1 != 0xb) {
      fn_82980D00(param_1,0,0,0xffffffff8202dc94);
      return 0;
    }
    param_2 = *(int *)(param_2 + 0x30);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if (((uVar3 == 0) || (uVar3 == 1)) || (uVar3 < 3)) {
    uVar4 = 0;
  }
  else {
    if (uVar3 != 3) goto LAB_82981d50;
    uVar4 = 3;
  }
  *(undefined4 *)(param_4 + 0x10) = uVar4;
LAB_82981d50:
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_4 + 0x1c) = 1;
  *(undefined4 *)(param_4 + 0x20) = 1;
  *(undefined4 *)(param_4 + 0x14) = uVar4;
  *(uint *)(param_4 + 0x24) = *(uint *)(param_2 + 0x24) & 0x200;
  return 0;
}
/* @@ end fn_82981C40 */

/* @@ begin fn_82981D78 */
extern void fn_82980C18(uint *p, void *loc, int code, const char *fmt, ...);

int fn_82981D78(uint *param_1, int param_2)
{
  uint uVar1;
  int iVar2;

  if ((*param_1 & 0x2100000) != 0) {
    for (uVar1 = param_1[5]; uVar1 != 0; uVar1 = *(uint *)(uVar1 + 0x20)) {
      iVar2 = *(int *)(uVar1 + 0x10);
      if (iVar2 == 2 || iVar2 == 3 || iVar2 == 4) {
        fn_82980C18(param_1, param_1 + 10, 0xbf8, "object literals are not allowed inside functions");
        return 0;
      }
    }
  }
  return param_2;
}
/* @@ end fn_82981D78 */

/* @@ begin fn_82981DF8 */
extern double sqrt(double);
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8297FBF0();
extern int fn_829803A8();
extern longlong fn_829860E0();
extern int fn_82F64318();
extern int fn_82F643F8();
extern int fn_82F64A40();
extern int fn_82F64F30();
extern int fn_82F65018();
extern int fn_82F655D8();
extern int fn_82F65D50();
extern int fn_82F65E18();
extern int fn_82F65E20();
extern int fn_82F67DE8();
extern int fn_82F68918();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6A7A0();
extern int fn_82F6B2A8();
extern int fn_82F6DFB0();
extern int fn_82F6DFD0();
extern int fn_82F6E018();
extern int fn_82F6EF10();
extern int fn_82F6F010();
extern int fn_82F6F278();
extern int iRam00000010;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_820105A0;
extern unsigned int lbl_82015618;
extern float lbl_8202DDF8;
extern unsigned int lbl_8202DE58;
extern unsigned int lbl_8202DE60;
extern unsigned int uRam00000014;
extern unsigned int uRam00000018;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;


/* WARNING: Removing unreachable block (ram,0x82982518) */
/* WARNING: Removing unreachable block (ram,0x8298252c) */
/* WARNING: Removing unreachable block (ram,0x82982548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82981DF8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  double *pdVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  double *pdVar15;
  uint uVar16;
  longlong lVar14;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int aiStack_a0 [8];

  uVar3 = fn_82F6A548();
  if ((param_2 & 0xffffffff) == 0) {
    if ((param_3 & 0xffffffff) == 0) {
      lVar4 = 0;
      goto LAB_8298336c;
    }
LAB_82983364:
    lVar4 = -0x7fffbffb;
    goto LAB_8298336c;
  }
  iVar6 = (int)param_2;
  if ((*(int *)(iVar6 + 4) != 0xe) ||
     (uVar19 = (longlong)*(int *)(iVar6 + 0x14) * (longlong)*(int *)(iVar6 + 0x18),
     *(int *)(iVar6 + 0x1c) != 0x20)) goto LAB_82983364;
  iVar1 = *(int *)(iVar6 + 0x24);
  iVar18 = *(int *)(iVar1 + 8);
  uStack_b0 = 0;
  aiStack_a0[2] = 0;
  aiStack_a0[3] = 0;
  aiStack_a0[6] = 0;
  aiStack_a0[7] = 0;
  uStack_a8 = 0;
  if (iVar18 != 0) {
    iVar7 = 0;
    do {
      iVar11 = *(int *)(iVar18 + 8);
      if ((iVar11 != 0) && (*(int *)(iVar11 + 4) == 0xe)) {
        uVar12 = (longlong)*(int *)(iVar11 + 0x18) * (longlong)*(int *)(iVar11 + 0x14);
        *(int *)((int)aiStack_a0 + iVar7) = iVar11;
        *(int *)((int)aiStack_a0 + iVar7 + 0x10) = (int)uVar12;
        lVar5 = fn_8265C940((uVar12 & 0xfffffff) << 4,0x24810000);
        *(int *)((int)&uStack_b0 + iVar7) = (int)lVar5;
        if (lVar5 == 0) {
          lVar4 = -0x7ff8fff2;
          goto LAB_8298333c;
        }
        lVar4 = fn_829860E0(uVar3,*(undefined4 *)((int)aiStack_a0 + iVar7),lVar5);
        if (lVar4 < 0) goto LAB_8298333c;
        uVar12 = 0;
        if (*(int *)((int)aiStack_a0 + iVar7 + 0x10) != 0) {
          lVar13 = 0;
          do {
            lVar9 = lVar5 + lVar13;
            lVar4 = fn_8297FBF0(uVar3,lVar9 + 8);
            if (lVar4 < 0) goto LAB_8298333c;
            uVar10 = *(uint *)((int)aiStack_a0 + iVar7 + 0x10);
            uVar12 = uVar12 + 1;
            *(undefined4 *)lVar9 = 3;
            lVar13 = lVar13 + 0x10;
          } while ((uVar12 & 0xffffffff) < (ulonglong)uVar10);
        }
      }
      iVar18 = *(int *)(iVar18 + 0xc);
      iVar7 = iVar7 + 4;
    } while (iVar18 != 0);
  }
  dVar27 = lbl_8202DE60;
  dVar28 = lbl_8202DE58;
  dVar24 = lbl_8202DDF8;
  dVar26 = lbl_820105A0;
  dVar35 = lbl_8200E890;
  dVar34 = lbl_82005758;
  dVar22 = lbl_82005710;
  dVar23 = lbl_82002C40;
  uVar10 = uRam00000018;
  iVar18 = (int)param_3;
  switch(*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x20) + 8) + 0x18)) {
  case 0:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 = ABS(*(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18) + (int)(double *)lVar4));
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 1:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      dVar23 = lbl_82005758;
      dVar22 = lbl_8200E890;
      do {
        if ((*pdVar15 < dVar22) || (dVar23 < *pdVar15)) goto switchD_82981f8c_caseD_5;
        uVar25 = fn_82F65E18();
        uVar12 = uVar12 + 1;
        *(undefined8 *)(iVar18 + (int)pdVar15) = uVar25;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 2:
    uVar12 = 0;
    *(double *)(iVar18 + 8) = lbl_82005758;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      do {
        dVar23 = lbl_82005710;
        if (*pdVar15 == lbl_82005710) goto LAB_829820b4;
        uVar12 = uVar12 + 1;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 3:
    uVar12 = 0;
    *(double *)(iVar18 + 8) = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      do {
        dVar23 = lbl_82005758;
        if (*pdVar15 != dVar22) goto LAB_829820b4;
        uVar12 = uVar12 + 1;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 4:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      dVar23 = lbl_82005758;
      dVar22 = lbl_8200E890;
      do {
        if ((*pdVar15 < dVar22) || (dVar23 < *pdVar15)) goto switchD_82981f8c_caseD_5;
        uVar25 = fn_82F65D50();
        uVar12 = uVar12 + 1;
        *(undefined8 *)((int)pdVar15 + iVar18) = uVar25;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  default:
    goto switchD_82981f8c_caseD_5;
  case 6:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F64F30(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 7:
    if ((uVar19 & 0xffffffff) != 0) {
      puVar21 = (undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      iVar6 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F65018(*puVar21,*(undefined8 *)(iVar6 + (int)puVar21));
        *(undefined8 *)((int)puVar21 + iVar18) = uVar25;
        uVar12 = uVar12 - 1;
        puVar21 = puVar21 + 2;
      } while (uVar12 != 0);
    }
    break;
  case 8:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6B2A8(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 9:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        dVar23 = *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15);
        dVar22 = *(double *)(((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15);
        if ((dVar23 < dVar22) || (dVar22 = *pdVar15, dVar22 < dVar23)) {
          *(double *)((iVar18 - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) = dVar22;
        }
        else {
          *(double *)((iVar18 - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) = dVar23;
        }
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0xb:
    if ((uVar19 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F643F8(*(undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8));
    }
    break;
  case 0xc:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6F278(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0xd:
    *(double *)(iVar18 + 8) =
         *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18) * *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x28) -
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x18) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28);
    *(double *)(iVar18 + 0x18) =
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) -
         *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) * *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x28);
    *(double *)(iVar18 + 0x28) =
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x18) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) -
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18);
    break;
  case 0x10:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 - 8;
      uVar12 = uVar19;
      do {
        lVar4 = lVar4 + 0x10;
        *(double *)lVar4 = dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x11:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 - 8;
      uVar12 = uVar19;
      do {
        lVar4 = lVar4 + 0x10;
        *(double *)lVar4 = dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x12:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 = *(double *)((int)(double *)lVar4 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18)) * dVar27;
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x13:
    if (uRam00000014 == 1) {
      dVar23 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
    }
    else if (uRam00000014 == 2) {
      dVar23 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) -
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18);
    }
    else if (uRam00000014 == 3) {
      dVar23 = (*(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x78) -
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x68) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x48)) *
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) +
               ((*(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x48) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x88) -
                *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x58) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x78)) *
                *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) -
               (*(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x88) -
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x68) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x58)) *
               *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18));
    }
    else {
      if (uRam00000014 != 4) goto switchD_82981f8c_caseD_5;
      dVar23 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xb8);
      dVar33 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 200);
      dVar24 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xa8);
      dVar30 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xe8);
      dVar29 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xd8);
      dVar26 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x98);
      dVar31 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0xf8);
      dVar28 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x88);
      dVar34 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x68);
      dVar37 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x58);
      dVar22 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x48);
      dVar36 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x78);
      dVar32 = dVar28 * dVar31 - dVar33 * dVar23;
      dVar35 = dVar28 * dVar30 - dVar33 * dVar24;
      dVar27 = dVar24 * dVar31 - dVar23 * dVar30;
      dVar23 = dVar26 * dVar31 - dVar29 * dVar23;
      dVar28 = dVar28 * dVar29 - dVar33 * dVar26;
      dVar26 = dVar26 * dVar30 - dVar29 * dVar24;
      dVar23 = -((dVar28 * dVar34 + (dVar22 * dVar26 - dVar35 * dVar37)) *
                 *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) -
                ((dVar28 * dVar36 + (dVar22 * dVar23 - dVar32 * dVar37)) *
                 *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) +
                ((dVar36 * dVar26 + (dVar37 * dVar27 - dVar34 * dVar23)) *
                 *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) -
                (dVar35 * dVar36 + (dVar22 * dVar27 - dVar32 * dVar34)) *
                *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18))));
    }
    goto LAB_829820b4;
  case 0x15:
    dVar23 = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        pdVar2 = (double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15);
        dVar22 = *pdVar15;
        pdVar15 = pdVar15 + 2;
        dVar22 = *pdVar2 - dVar22;
        dVar23 = dVar22 * dVar22 + dVar23;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    dVar23 = SQRT(dVar23);
    goto LAB_829820b4;
  case 0x16:
    *(double *)(iVar18 + 8) = lbl_82005710;
    break;
  case 0x17:
    *(double *)(iVar18 + 8) = lbl_82005758;
    *(double *)(iVar18 + 0x18) =
         *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x18) * *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18);
    *(undefined8 *)(iVar18 + 0x28) = *(undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28);
    dVar24 = *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 0x38);
    goto LAB_829832d0;
  case 0x18:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F64A40(*(undefined8 *)(iVar18 + (int)(undefined8 *)lVar4));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x19:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F655D8(dVar23,*(undefined8 *)(iVar18 + (int)(undefined8 *)lVar4));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x1a:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      do {
        pdVar2 = (double *)(((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15);
        dVar34 = *pdVar15;
        pdVar15 = pdVar15 + 2;
        dVar23 = *pdVar2 * dVar34 + dVar23;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if ((uVar19 & 0xffffffff) != 0) {
        pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
        uVar12 = uVar19;
        do {
          dVar34 = *pdVar15;
          if (dVar22 <= dVar23) {
            dVar34 = -dVar34;
          }
          *(double *)((iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) = dVar34;
          pdVar15 = pdVar15 + 2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    break;
  case 0x1b:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F68918(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x1c:
    if ((uVar19 & 0xffffffff) != 0) {
      puVar21 = (undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      iVar6 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6A7A0(*puVar21,*(undefined8 *)(iVar6 + (int)puVar21));
        *(undefined8 *)((int)puVar21 + iVar18) = uVar25;
        uVar12 = uVar12 - 1;
        puVar21 = puVar21 + 2;
      } while (uVar12 != 0);
    }
    break;
  case 0x1d:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      do {
        iVar6 = fn_82F6DFB0(*pdVar15);
        if (iVar6 == 0) {
          *(double *)((int)pdVar15 + iVar18) = dVar23;
        }
        else {
          dVar22 = (double)fn_82F68918(*pdVar15);
          *(double *)((int)pdVar15 + iVar18) = *pdVar15 - dVar22;
        }
        uVar12 = uVar12 - 1;
        pdVar15 = pdVar15 + 2;
      } while (uVar12 != 0);
    }
    break;
  case 0x1f:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 - 8;
      uVar12 = uVar19;
      do {
        lVar4 = lVar4 + 0x10;
        *(double *)lVar4 = dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x20:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      dVar22 = lbl_82005758;
      do {
        iVar6 = fn_82F6DFB0(*(undefined8 *)((int)(double *)lVar4 + iVar18));
        dVar34 = dVar23;
        if (iVar6 != 0) {
          dVar34 = dVar22;
        }
        *(double *)lVar4 = dVar34;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x21:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      dVar22 = lbl_82005758;
      do {
        iVar6 = fn_82F6DFB0(*(undefined8 *)((int)(double *)lVar4 + iVar18));
        dVar34 = dVar22;
        if (iVar6 != 0) {
          dVar34 = dVar23;
        }
        *(double *)lVar4 = dVar34;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x22:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      dVar23 = lbl_82005710;
      dVar22 = lbl_82005758;
      do {
        iVar6 = fn_82F6DFD0(*(undefined8 *)((int)(double *)lVar4 + iVar18));
        dVar34 = dVar23;
        if (iVar6 != 0) {
          dVar34 = dVar22;
        }
        *(double *)lVar4 = dVar34;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x23:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      iVar6 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      do {
        dVar22 = (double)fn_82F655D8(dVar23,*(undefined8 *)((int)pdVar15 + iVar6));
        *(double *)((int)pdVar15 + iVar18) = dVar22 * *pdVar15;
        uVar12 = uVar12 - 1;
        pdVar15 = pdVar15 + 2;
      } while (uVar12 != 0);
    }
    break;
  case 0x24:
    dVar23 = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + -8);
      uVar12 = uVar19;
      do {
        pdVar15 = pdVar15 + 2;
        dVar23 = *pdVar15 * *pdVar15 + dVar23;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    dVar23 = SQRT(dVar23);
LAB_829820b4:
    *(double *)(iVar18 + 8) = dVar23;
    break;
  case 0x25:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF))) =
             (*(double *)
               ((int)pdVar15 +
               ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + ((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF))) - *pdVar15
             ) * *(double *)(((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) + *pdVar15;
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x26:
    *(double *)(iVar18 + 8) = lbl_82005758;
    *(double *)(iVar18 + 0x28) = dVar22;
    *(double *)(iVar18 + 0x38) = dVar34;
    *(double *)(iVar18 + 0x18) = dVar22;
    if (dVar22 < *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8)) {
      *(double *)(iVar18 + 0x18) = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      if (dVar22 < *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8)) {
        uVar25 = fn_82F655D8(*(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8),
                                   *(undefined8 *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8));
        *(undefined8 *)(iVar18 + 0x28) = uVar25;
      }
    }
    break;
  case 0x28:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      dVar23 = lbl_82005710;
      do {
        if (*pdVar15 <= dVar23) goto switchD_82981f8c_caseD_5;
        uVar25 = fn_82F65E20();
        uVar12 = uVar12 + 1;
        *(undefined8 *)((int)pdVar15 + iVar18) = uVar25;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x29:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      uVar25 = lbl_82015618;
      dVar23 = lbl_82005710;
      do {
        if (*pdVar15 <= dVar23) goto switchD_82981f8c_caseD_5;
        dVar22 = (double)fn_82F65E20();
        dVar34 = (double)fn_82F65E20(uVar25);
        uVar12 = uVar12 + 1;
        *(double *)((int)pdVar15 + iVar18) = dVar22 / dVar34;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x2a:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      do {
        if (*pdVar15 <= dVar22) goto switchD_82981f8c_caseD_5;
        dVar34 = (double)fn_82F65E20();
        dVar35 = (double)fn_82F65E20(dVar23);
        uVar12 = uVar12 + 1;
        *(double *)(iVar18 + (int)pdVar15) = dVar34 / dVar35;
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x2b:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        dVar23 = *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15);
        if (dVar23 <= *pdVar15) {
          dVar23 = *pdVar15;
        }
        *(double *)((iVar18 - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15) = dVar23;
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x2c:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        dVar23 = *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15);
        if (*pdVar15 <= dVar23) {
          dVar23 = *pdVar15;
        }
        *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF))) = dVar23;
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 =
             *(double *)(((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - iVar18) + (int)(double *)lVar4) *
             *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x31:
  case 0x34:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 =
             *(double *)((int)(double *)lVar4 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18)) *
             *(double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x32:
  case 0x33:
  case 0x35:
  case 0x36:
    uVar12 = (ulonglong)uRam00000014;
    uVar16 = uRam00000014;
    uVar17 = uRam00000018;
    if (*(int *)(iRam00000010 + 0x10) == 1) {
      uVar16 = uRam00000018;
      uVar17 = uRam00000014;
    }
    if ((uRam00000018 == uVar16) &&
       (((longlong)(int)uVar17 * (longlong)(int)uRam00000014 & 0xffffffffU) == (uVar19 & 0xffffffff)
       )) {
      if (uRam00000014 != 0) {
        lVar5 = ((ulonglong)uVar17 & 0xfffffff) * 0x10;
        iVar6 = 0;
        lVar4 = param_3 + 8;
        do {
          if (uVar17 != 0) {
            lVar13 = lVar4 + -0x10;
            lVar9 = (uStack_b0 & 0xffffffff) + 8;
            uVar8 = (ulonglong)uVar17;
            do {
              iVar18 = 0;
              dVar23 = dVar22;
              if (uVar10 != 0) {
                lVar14 = lVar9 + ((ulonglong)uVar17 & 0xfffffff) * -0x10;
                uVar16 = uVar10;
                do {
                  iVar7 = iVar18 + iVar6;
                  lVar14 = lVar14 + lVar5;
                  iVar18 = iVar18 + 1;
                  dVar23 = *(double *)(iVar7 * 0x10 + (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) * *(double *)lVar14 +
                           dVar23;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              lVar13 = lVar13 + 0x10;
              *(double *)lVar13 = dVar23;
              uVar8 = uVar8 - 1;
              lVar9 = lVar9 + 0x10;
            } while (uVar8 != 0);
          }
          uVar12 = uVar12 - 1;
          lVar4 = lVar4 + lVar5;
          iVar6 = uVar10 + iVar6;
        } while (uVar12 != 0);
      }
      break;
    }
    goto switchD_82981f8c_caseD_5;
  case 0x38:
    dVar23 = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + -8);
      uVar12 = uVar19;
      do {
        pdVar15 = pdVar15 + 2;
        dVar22 = *pdVar15 * *pdVar15 + dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (dVar22 != lbl_82005710) {
        dVar23 = lbl_82005758 / SQRT(dVar22);
      }
    }
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 = *(double *)((int)(double *)lVar4 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18)) * dVar23;
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x39:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      puVar21 = (undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      iVar6 = (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF);
      do {
        uVar25 = fn_82F655D8(*puVar21,*(undefined8 *)((int)puVar21 + iVar6));
        *(undefined8 *)((int)puVar21 + iVar18) = uVar25;
        iVar7 = fn_82F6E018();
        if ((0 < iVar7) && (iVar7 < 3)) goto switchD_82981f8c_caseD_5;
        uVar12 = uVar12 + 1;
        puVar21 = puVar21 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x3a:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        *(double *)lVar4 = *(double *)((int)(double *)lVar4 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18)) * dVar28;
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x3e:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        pdVar2 = (double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)));
        dVar34 = *pdVar15;
        pdVar15 = pdVar15 + 2;
        dVar22 = *pdVar2 * dVar34 + dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if ((uVar19 & 0xffffffff) != 0) {
        pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
        uVar12 = uVar19;
        do {
          *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF))) =
               -(dVar22 * *pdVar15 * dVar23 -
                *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15));
          pdVar15 = pdVar15 + 2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    break;
  case 0x3f:
    dVar34 = *(double *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
    dVar23 = lbl_82005710;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        pdVar2 = (double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)));
        dVar35 = *pdVar15;
        pdVar15 = pdVar15 + 2;
        dVar23 = *pdVar2 * dVar35 + dVar23;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    dVar35 = -(-(dVar23 * dVar23 - lbl_82005758) * dVar34 * dVar34 - lbl_82005758);
    if (lbl_82005710 <= dVar35) {
      if ((uVar19 & 0xffffffff) != 0) {
        pdVar15 = (double *)((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) + 8);
        uVar12 = uVar19;
        do {
          *(double *)((iVar18 - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15) =
               *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF)) + (int)pdVar15) * dVar34 -
               (dVar23 * dVar34 + SQRT(dVar35)) * *pdVar15;
          pdVar15 = pdVar15 + 2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 - 8;
      uVar12 = uVar19;
      do {
        lVar4 = lVar4 + 0x10;
        *(double *)lVar4 = dVar22;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x40:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      dVar23 = lbl_82005730;
      do {
        uVar25 = fn_82F68918(*(double *)(iVar18 + (int)(undefined8 *)lVar4) + dVar23);
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x41:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      do {
        dVar23 = *pdVar15;
        if ((dVar23 < dVar22) || (dVar23 == dVar22)) goto switchD_82981f8c_caseD_5;
        uVar12 = uVar12 + 1;
        *(double *)((iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) = dVar34 / SQRT(dVar23);
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x42:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        pdVar15 = (double *)lVar4;
        dVar23 = *(double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18));
        if (dVar22 <= dVar23) {
          if (dVar23 <= dVar34) {
            *pdVar15 = dVar23;
          }
          else {
            *pdVar15 = dVar34;
          }
        }
        else {
          *pdVar15 = dVar22;
        }
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x43:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      uVar12 = uVar19;
      do {
        pdVar15 = (double *)lVar4;
        dVar23 = *(double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18));
        if (dVar22 <= dVar23) {
          if (dVar23 <= dVar22) {
            *pdVar15 = dVar22;
          }
          else {
            *pdVar15 = dVar34;
          }
        }
        else {
          *pdVar15 = dVar35;
        }
        lVar4 = lVar4 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x44:
    if ((uVar19 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F64318(*(undefined8 *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8));
    }
    break;
  case 0x46:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6F010(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x47:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      iVar18 = iVar18 - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF);
      uVar12 = uVar19;
      do {
        dVar35 = *pdVar15;
        if (*(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15) <= dVar35) {
          dVar24 = *(double *)(((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15);
          if (dVar35 < dVar24) {
            dVar28 = *(double *)(((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - (((U64)(uStack_a8) >> 0) & 0xFFFFFFFF)) + (int)pdVar15);
            dVar35 = (dVar35 - dVar28) / (dVar24 - dVar28);
            *(double *)(iVar18 + (int)pdVar15) =
                 dVar35 * dVar35 * dVar26 - dVar35 * dVar35 * dVar35 * dVar23;
          }
          else {
            *(double *)(iVar18 + (int)pdVar15) = dVar34;
          }
        }
        else {
          *(double *)(iVar18 + (int)pdVar15) = dVar22;
        }
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x48:
    uVar12 = 0;
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      do {
        if (*pdVar15 < dVar22) goto switchD_82981f8c_caseD_5;
        uVar12 = uVar12 + 1;
        *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF))) = SQRT(*pdVar15);
        pdVar15 = pdVar15 + 2;
      } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
    }
    break;
  case 0x49:
    if ((uVar19 & 0xffffffff) != 0) {
      pdVar15 = (double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
      uVar12 = uVar19;
      do {
        dVar23 = dVar22;
        if (*pdVar15 <= *(double *)((int)pdVar15 + ((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF)))) {
          dVar23 = dVar34;
        }
        *(double *)((int)pdVar15 + (iVar18 - (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF))) = dVar23;
        pdVar15 = pdVar15 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x4a:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F67DE8(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x4b:
    if ((uVar19 & 0xffffffff) != 0) {
      lVar4 = param_3 + 8;
      iVar18 = (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) - iVar18;
      uVar12 = uVar19;
      do {
        uVar25 = fn_82F6EF10(*(undefined8 *)((int)(undefined8 *)lVar4 + iVar18));
        *(undefined8 *)lVar4 = uVar25;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar12 != 0);
    }
    break;
  case 0x87:
    uVar17 = 0;
    uVar10 = uRam00000014;
    if (uRam00000018 != 0) {
      do {
        uVar16 = 0;
        if (uVar10 != 0) {
          do {
            iVar11 = uRam00000018 * uVar16;
            iVar7 = uVar17 * *(int *)(iVar6 + 0x18) + uVar16;
            uVar16 = uVar16 + 1;
            *(undefined8 *)(iVar7 * 0x10 + iVar18 + 8) =
                 *(undefined8 *)((iVar11 + uVar17) * 0x10 + (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8);
            uVar10 = uRam00000014;
          } while (uVar16 < uRam00000014);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uRam00000018);
    }
    break;
  case 0x89:
    *(double *)(iVar18 + 8) = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x28) * lbl_8202DDF8;
    *(double *)(iVar18 + 0x18) = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x18) * dVar24;
    *(double *)(iVar18 + 0x28) = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 8) * dVar24;
    dVar24 = *(double *)((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) + 0x38) * dVar24;
LAB_829832d0:
    *(double *)(iVar18 + 0x38) = dVar24;
  }
  for (iVar6 = *(int *)(iVar1 + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
    if (*(int *)(iVar6 + 8) != 0) goto switchD_82981f8c_caseD_5;
  }
  uVar12 = 0;
  if ((uVar19 & 0xffffffff) != 0) {
    do {
      lVar4 = fn_829803A8(*(undefined8 *)((int)param_3 + 8),uVar3);
      if (lVar4 < 0) goto LAB_8298333c;
      uVar12 = uVar12 + 1;
      param_3 = param_3 + 0x10;
    } while ((uVar12 & 0xffffffff) < (uVar19 & 0xffffffff));
  }
  lVar4 = 0;
LAB_8298333c:
  lVar5 = 4;
  puVar20 = &uStack_b4;
  do {
    puVar20 = puVar20 + 1;
    fn_8265C990(*puVar20,0x24810000);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
LAB_8298336c:
  fn_82F6A594(lVar4);
  return;
switchD_82981f8c_caseD_5:
  lVar4 = -0x7fffbffb;
  goto LAB_8298333c;
}
/* @@ end fn_82981DF8 */

/* @@ begin fn_82983380 */
extern longlong fn_82981738();


void fn_82983380(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 0xe)) {
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
      uVar2 = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
    else {
      if (*(int *)(iVar1 + 4) != 9) {
        *(undefined4 *)(param_2 + 0x14) = 1;
        uVar2 = ((longlong (*)())fn_82981738)();
        *(undefined4 *)(param_2 + 0x18) = uVar2;
        return;
      }
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar1 + 0x1c);
      uVar2 = *(undefined4 *)(iVar1 + 0x20);
    }
    *(undefined4 *)(param_2 + 0x18) = uVar2;
  }
  return;
}
/* @@ end fn_82983380 */

/* @@ begin fn_82983408 */
extern int fn_828F6FA8();
extern int fn_829301D0();
extern int fn_82930318();
extern int fn_82930940();


int fn_82983408(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar6;
  longlong lVar5;
  char *pcVar7;
  char *pcVar8;
  char acStack_50 [16];
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 4) == 3)) &&
      ((*(int *)(param_2 + 0x10) == 2 || (*(int *)(param_2 + 0x10) == 3)))) &&
     (((param_3 != 0 && (*(int *)(param_3 + 4) == 3)) && (*(int *)(param_3 + 0x10) == 9)))) {
    uVar4 = fn_82930318(0x30);
    if ((uVar4 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_82930940(uVar4,param_3 + 0x10);
    }
    if (iVar6 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x18);
      pcVar3 = *(char **)(param_3 + 0x18);
      fn_828F6FA8(acStack_50,0x10,0xffffffff821c7f34,uVar2);
      pcVar7 = acStack_50;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar8 = pcVar3;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      lVar5 = fn_829301D0(*(undefined4 *)(param_1 + 4),
                                pcVar7 + (int)(pcVar8 + ((-1 - (int)acStack_50) - (int)pcVar3)),1);
      if (lVar5 != 0) {
        fn_828F6FA8(lVar5,pcVar7 + (int)(pcVar8 + ((-1 - (int)acStack_50) - (int)pcVar3)),
                          0xffffffff8204e24c,uVar2,pcVar3);
        *(int *)(iVar6 + 0x18) = (int)lVar5;
        return iVar6;
      }
    }
  }
  return 0;
}
/* @@ end fn_82983408 */

/* @@ begin fn_82983550 */
extern int fn_828F6FA8();
extern int fn_829301D0();
extern int fn_82930318();
extern int fn_82930940();


int fn_82983550(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 4) == 3)) && (*(int *)(param_2 + 0x10) == 10)) &&
     (((param_3 != 0 && (*(int *)(param_3 + 4) == 3)) && (*(int *)(param_3 + 0x10) == 10)))) {
    uVar4 = fn_82930318(0x30);
    if ((uVar4 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_82930940(uVar4,param_2 + 0x10);
    }
    if (iVar5 != 0) {
      pcVar2 = *(char **)(param_2 + 0x18);
      pcVar3 = *(char **)(param_3 + 0x18);
      pcVar7 = pcVar2;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar8 = pcVar3;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + (int)(pcVar8 + (-(int)pcVar3 - (int)pcVar2) + -1);
      iVar6 = fn_829301D0(*(undefined4 *)(param_1 + 4),pcVar7,1);
      if (iVar6 != 0) {
        fn_828F6FA8(iVar6,pcVar7,0xffffffff821b0c70,pcVar2,pcVar3);
        pcVar7[iVar6 + -1] = '\0';
        *(int *)(iVar5 + 0x18) = iVar6;
        return iVar5;
      }
    }
  }
  return 0;
}
/* @@ end fn_82983550 */

/* @@ begin fn_82983680 */
extern void __cdecl __va_start(va_list *, ...);
extern void fn_82980A08(void *log, const char *fmt, va_list ap);

void fn_82983680(Owner_82983680 *o, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  fn_82980A08(o->log, fmt, ap);
}
/* @@ end fn_82983680 */

/* @@ begin fn_829836D0 */
extern void __cdecl __va_start(va_list *, ...);
extern void fn_82980A08(void *log, const char *fmt, va_list ap);

void fn_829836D0(void *log, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  fn_82980A08(log, fmt, ap);
}
/* @@ end fn_829836D0 */

/* @@ begin fn_82983718 */
extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_f0;
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82930940();
extern int fn_82930FC0();
extern int fn_82931D48();
extern int fn_82931F90();
extern int fn_82932548();
extern int fn_829334D8();
extern int fn_8297F458();
extern int fn_8297F800();
extern int fn_82981598();
extern longlong fn_82981738();
extern undefined8 fn_82981C40();
extern unsigned int iStack00000034;
extern unsigned int iStack_10c;
extern unsigned int uStack_144;
extern unsigned int uStack_164;
extern unsigned int uStack_184;
extern unsigned int uStack_dc;


undefined8
fn_82983718(undefined8 param_1,longlong param_2,ulonglong param_3,int *param_4,int param_5,
             int param_6,int *param_7,int *param_8)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar7;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  byte *pbVar17;
  ulonglong uVar16;
  undefined4 *puVar18;
  byte *pbVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  int *piVar25;
  int *piVar26;
  uint uVar27;
  longlong lVar28;
  int iStack00000034;
  int *piStack0000004c;
  undefined4 uStack_184;
  int aiStack_180 [7];
  undefined4 uStack_164;
  uint auStack_160 [7];
  undefined4 uStack_144;
  int aiStack_140 [8];
  undefined1 auStack_120 [20];
  int iStack_10c;
  undefined1 auStack_f0 [20];
  undefined4 uStack_dc;
  int aiStack_c0 [48];
  
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  iVar14 = param_6;
  if (param_6 != 0) {
    do {
      iVar8 = *(int *)(iVar14 + 8);
      if ((((iVar8 == 0) || (*(int *)(iVar8 + 4) != 0xe)) || (*(int *)(iVar8 + 0x10) == 0)) ||
         ((iVar8 = *(int *)(*(int *)(iVar8 + 0x10) + 4), iVar8 != 9 && (iVar8 != 1)))) break;
      iVar14 = *(int *)(iVar14 + 0xc);
    } while (iVar14 != 0);
    if (iVar14 != 0) {
      return 1;
    }
  }
  uVar13 = 0;
  uVar7 = param_3;
  if ((param_3 & 0xffffffff) != 0) {
    pbVar4 = *(byte **)(param_5 + 8);
    uVar24 = uVar13;
    do {
      uVar13 = (uVar7 + uVar24 & 0xffffffff) >> 1;
      lVar15 = uVar13 * 0xe4 + param_2;
      pbVar17 = *(byte **)((int)lVar15 + 4);
      pbVar19 = pbVar4;
      do {
        bVar2 = *pbVar19;
        bVar3 = *pbVar17;
        iVar14 = (uint)bVar2 - (uint)bVar3;
        if (bVar2 == 0) break;
        pbVar19 = pbVar19 + 1;
        pbVar17 = pbVar17 + 1;
      } while ((uint)bVar2 == (uint)bVar3);
      if (iVar14 < 1) {
        uVar7 = uVar13;
        if (-1 < iVar14) {
          uVar7 = uVar13 + 1;
          if (uVar13 == 0) goto LAB_8298388c;
          lVar15 = lVar15 + -0xe0;
          goto LAB_8298384c;
        }
      }
      else {
        uVar24 = uVar13 + 1;
      }
      uVar13 = uVar24;
      uVar24 = uVar13;
    } while (uVar13 < (uVar7 & 0xffffffff));
  }
  goto LAB_829838e4;
  while( true ) {
    uVar13 = uVar13 - 1;
    lVar15 = lVar15 + -0xe4;
    if (uVar13 == 0) break;
LAB_8298384c:
    pbVar17 = (byte *)*(undefined4 *)lVar15;
    pbVar19 = pbVar4;
    do {
      bVar2 = *pbVar19;
      bVar3 = *pbVar17;
      if (bVar2 == 0) break;
      pbVar19 = pbVar19 + 1;
      pbVar17 = pbVar17 + 1;
    } while (bVar2 == bVar3);
    if (bVar2 != bVar3) break;
  }
LAB_8298388c:
  if (uVar7 < (param_3 & 0xffffffff)) {
    lVar15 = uVar7 * 0xe4 + param_2 + 4;
    do {
      pbVar17 = (byte *)*(undefined4 *)lVar15;
      pbVar19 = pbVar4;
      do {
        bVar2 = *pbVar19;
        bVar3 = *pbVar17;
        if (bVar2 == 0) break;
        pbVar19 = pbVar19 + 1;
        pbVar17 = pbVar17 + 1;
      } while (bVar2 == bVar3);
      if (bVar2 != bVar3) break;
      uVar7 = uVar7 + 1;
      lVar15 = lVar15 + 0xe4;
    } while ((uVar7 & 0xffffffff) < (param_3 & 0xffffffff));
  }
LAB_829838e4:
  if ((uVar13 & 0xffffffff) == (uVar7 & 0xffffffff)) {
    return 1;
  }
  iStack00000034 = param_5;
  piStack0000004c = param_8;
  if ((uVar13 & 0xffffffff) < (uVar7 & 0xffffffff)) {
    lVar15 = uVar13 * 0xe4 + param_2 + 0xc;
    do {
      puVar18 = &uStack_164;
      piVar26 = (int *)lVar15;
      lVar28 = 7;
      do {
        puVar18 = puVar18 + 1;
        *puVar18 = 0xffffffff;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      puVar18 = &uStack_184;
      lVar28 = 7;
      do {
        puVar18 = puVar18 + 1;
        *puVar18 = 0x37;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      puVar18 = &uStack_144;
      lVar28 = 7;
      do {
        puVar18 = puVar18 + 1;
        *puVar18 = 5;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      fn_82931D48(auStack_120);
      fn_82931D48(auStack_f0);
      uVar24 = 1;
      if (param_6 == 0) {
LAB_82983bb8:
        iVar14 = (int)((uVar24 & 0xffffffff) << 5);
        if ((*(int *)((int)piVar26 + iVar14 + -8) == 0) || (*(int *)((int)piVar26 + iVar14) == -2))
        goto LAB_82983bd8;
      }
      else {
        lVar28 = lVar15 + 0x18;
        iVar14 = param_6;
        do {
          if ((6 < (uVar24 & 0xffffffff)) || (piVar25 = (int *)lVar28, *piVar25 == 0)) break;
          iVar8 = piVar25[2];
          if (iVar8 == -1) {
LAB_82983b6c:
            lVar28 = lVar28 + 0x20;
            uVar24 = uVar24 + 1;
          }
          else {
            iVar20 = *(int *)(*(int *)(iVar14 + 8) + 0x10);
            if (*(int *)(iVar20 + 4) != 9) break;
            if (iVar8 != -2) {
              iVar8 = aiStack_140[iVar8];
              if ((iVar8 == 5) ||
                 ((iVar8 == 0 && ((*(int *)(iVar20 + 0x10) == 1 || (*(int *)(iVar20 + 0x10) == 2))))
                 )) {
                iVar8 = piVar25[2];
                iVar5 = piVar25[3];
                aiStack_140[iVar8] = *(int *)(iVar20 + 0x10);
                aiStack_c0[iVar8] = iVar5;
              }
              else {
                if (*(int *)(iVar20 + 0x10) == 0) {
                  if ((iVar8 == 0) || (iVar8 == 1)) goto LAB_82983a34;
                  bVar1 = iVar8 == 2;
                }
                else {
                  bVar1 = *(int *)(iVar20 + 0x10) == iVar8;
                }
                if (!bVar1) break;
              }
LAB_82983a34:
              if (aiStack_180[piVar25[4]] == 0x37) {
                iVar8 = piVar25[4];
                iVar5 = piVar25[5];
                aiStack_180[iVar8] = *(int *)(iVar20 + 0x14);
                aiStack_c0[iVar8] = iVar5;
              }
              else {
                iStack_10c = aiStack_180[piVar25[4]];
                uStack_dc = *(undefined4 *)(iVar20 + 0x14);
                iVar8 = fn_8297F800(param_1,auStack_120,auStack_f0,aiStack_180 + piVar25[4]);
                if (iVar8 < 0) break;
              }
            }
            iVar8 = *(int *)(iVar20 + 0x10);
            if (iVar8 != 0) {
              uVar27 = piVar25[6];
              if ((int)uVar27 < 0) {
                if (*(uint *)(iVar20 + 0x1c) < auStack_160[~uVar27]) {
                  auStack_160[~uVar27] = *(uint *)(iVar20 + 0x1c);
                }
              }
              else if (*(uint *)(iVar20 + 0x1c) < uVar27) break;
              if (iVar8 != 0) {
                uVar27 = piVar25[7];
                if ((int)uVar27 < 0) {
                  if (*(uint *)(iVar20 + 0x20) < auStack_160[~uVar27]) {
                    auStack_160[~uVar27] = *(uint *)(iVar20 + 0x20);
                  }
                }
                else if (*(uint *)(iVar20 + 0x20) < uVar27) break;
              }
            }
            if (((piVar25[1] & 0x20U) != 0) && (iVar8 = fn_82981598(param_1,iVar20), iVar8 != 0))
            break;
            if (piVar25[2] != -2) goto LAB_82983b6c;
          }
          iVar14 = *(int *)(iVar14 + 0xc);
        } while (iVar14 != 0);
        if (iVar14 == 0) {
          if ((uVar24 & 0xffffffff) < 7) {
            iVar14 = (int)((uVar24 & 0xffffffff) << 5);
            if ((*(int *)((int)piVar26 + iVar14 + -8) != 0) &&
               (*(int *)((int)piVar26 + iVar14) != -2)) goto LAB_82983d78;
            if ((uVar24 & 0xffffffff) < 7) goto LAB_82983bb8;
          }
LAB_82983bd8:
          if ((piVar26[-1] != 0) && (iVar14 = *piVar26, iVar14 != -1)) {
            if (aiStack_140[iVar14] == 5) {
              aiStack_140[iVar14] = *(int *)piVar26[1];
            }
            if (aiStack_180[piVar26[2]] == 0x37) {
              aiStack_180[piVar26[2]] = *(int *)piVar26[3];
            }
          }
          uVar24 = 0;
          lVar28 = lVar15 + 0xc;
          uVar16 = 0;
          do {
            piVar25 = (int *)lVar28;
            piVar26 = (int *)piVar25[-2];
            if (piVar25[-3] != -1) {
              iVar14 = (int)uVar16;
              if (piVar26 != (int *)0x0) {
                iVar8 = *(int *)((int)aiStack_140 + iVar14);
                if (iVar8 == 5) {
                  *(int *)((int)aiStack_140 + iVar14) = *piVar26;
                }
                else {
                  if ((iVar8 == 0) && ((iVar20 = *piVar26, iVar20 == 1 || (iVar20 == 2)))) {
                    *(int *)((int)aiStack_140 + iVar14) = iVar20;
                  }
                  else {
                    iVar20 = *piVar26;
                    while ((iVar20 != 5 && (iVar8 != iVar20))) {
                      piVar26 = piVar26 + 1;
                      iVar20 = *piVar26;
                    }
                  }
                  if (iVar20 == 5) break;
                }
              }
              piVar25 = (int *)*piVar25;
              if (piVar25 != (int *)0x0) {
                piVar26 = aiStack_180;
                iVar8 = *(int *)((int)piVar26 + iVar14);
                if (iVar8 == 0x37) {
                  iVar14 = *piVar25;
                }
                else {
                  iVar20 = *piVar25;
                  piVar21 = piVar25;
                  while (iVar20 != 0x37) {
                    if (iVar20 == 0x36) goto LAB_82983d70;
                    if (iVar8 == iVar20) break;
                    piVar21 = piVar21 + 1;
                    iVar20 = *piVar21;
                  }
                  if (iVar20 == 0x36) break;
                  if (*(int *)((int)aiStack_140 + iVar14) == 3) {
                    if (iVar20 != 0x37) goto LAB_82983d48;
                    iVar14 = fn_8297F458(iVar8,*piVar25);
                    if (iVar14 == 0) break;
                  }
                  if (iVar20 != 0x37) goto LAB_82983d48;
                  iVar14 = *piVar25;
                }
                *(int *)((int)piVar26 + (int)uVar16) = iVar14;
              }
LAB_82983d48:
              if (*(int *)((int)auStack_160 + (int)uVar16) == -1) {
                *(undefined4 *)((int)auStack_160 + (int)uVar16) = 1;
              }
            }
            uVar16 = uVar16 + 4;
            uVar24 = uVar24 + 1;
            lVar28 = lVar28 + 0x20;
          } while ((uVar16 & 0xffffffff) < 0x1c);
LAB_82983d70:
          if ((uVar24 & 0xffffffff) == 7) break;
        }
      }
LAB_82983d78:
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0xe4;
    } while ((uVar13 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  piVar26 = piStack0000004c;
  if ((uVar13 & 0xffffffff) == (uVar7 & 0xffffffff)) {
    return 1;
  }
  iVar14 = (int)param_2;
  if (param_7 != (int *)0x0) {
    iVar8 = fn_82930318(0x50);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = fn_82931F90();
    }
    if (iVar8 == 0) {
      return 0xffffffff8007000e;
    }
    piVar25 = (int *)(iVar8 + 0x2c);
    iVar20 = (int)uVar13 * 0xe4;
    uVar27 = 0;
    do {
      iVar5 = uVar27 * 0x20 + iVar20 + iVar14;
      uVar23 = uVar27 + 1;
      if (((*(int *)(iVar5 + 0xc) == -2) && (uVar23 = uVar27, param_6 == 0)) ||
         (*(int *)(iVar5 + 4) == 0)) break;
      iVar22 = param_6;
      if (uVar27 != 0) {
        iVar22 = *(int *)(param_6 + 0xc);
      }
      if (*(int *)(iVar5 + 8) != 0) {
        if (*(int *)(iVar5 + 0xc) == -1) {
          if ((*(int *)(iVar5 + 0x1c) == 0) || (*(int *)(iVar5 + 0x20) == 0)) {
            iVar9 = *param_4;
            piVar26 = param_4;
LAB_82983f50:
            iVar9 = (**(code **)(iVar9 + 4))(piVar26);
            if (iVar9 == 0) {
              return 0xffffffff8007000e;
            }
          }
          else {
            iVar9 = fn_82930318(0x28);
            if (iVar9 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = fn_82931D48();
            }
            if (iVar9 == 0) {
              return 0xffffffff8007000e;
            }
            uVar6 = *(uint *)(iVar5 + 0x1c);
            if ((int)uVar6 < 0) {
              uVar6 = auStack_160[~uVar6];
              *(uint *)(iVar9 + 0x1c) = uVar6;
              if (uVar6 == 0xffffffff) {
                *(undefined4 *)(iVar9 + 0x1c) = 1;
              }
            }
            else if (uVar6 != 0) {
              *(uint *)(iVar9 + 0x1c) = uVar6;
            }
            uVar6 = *(uint *)(iVar5 + 0x20);
            if ((int)uVar6 < 0) {
              uVar6 = auStack_160[~uVar6];
              *(uint *)(iVar9 + 0x20) = uVar6;
              if (uVar6 == 0xffffffff) {
                *(undefined4 *)(iVar9 + 0x20) = 1;
              }
            }
            else if (uVar6 != 0) {
              *(uint *)(iVar9 + 0x20) = uVar6;
            }
            if (*(int *)(iVar9 + 0x20) != 1) {
              return 1;
            }
            if (*(int *)(iVar9 + 0x1c) != 1) {
              return 1;
            }
            iVar10 = fn_82981C40(param_1,param_4,0,iVar9);
            if (iVar10 < 0) {
              return 1;
            }
          }
        }
        else {
          if (*(int *)(iVar5 + 0xc) == -2) {
            piVar26 = *(int **)(*(int *)(param_6 + 8) + 0x10);
            iVar9 = *piVar26;
            goto LAB_82983f50;
          }
          iVar9 = fn_82930318(0x28);
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = fn_82931D48();
          }
          if (iVar9 == 0) {
            return 0xffffffff8007000e;
          }
          *(int *)(iVar9 + 0x10) = aiStack_140[*(int *)(iVar5 + 0xc)];
          *(int *)(iVar9 + 0x14) = aiStack_180[*(int *)(iVar5 + 0x14)];
          uVar6 = *(uint *)(iVar5 + 0x1c);
          if ((int)uVar6 < 0) {
            uVar6 = auStack_160[~uVar6];
            *(uint *)(iVar9 + 0x1c) = uVar6;
            if (uVar6 == 0xffffffff) {
              *(undefined4 *)(iVar9 + 0x1c) = 1;
            }
          }
          else {
            *(uint *)(iVar9 + 0x1c) = uVar6;
          }
          uVar6 = *(uint *)(iVar5 + 0x20);
          if ((int)uVar6 < 0) {
            uVar6 = auStack_160[~uVar6];
            *(uint *)(iVar9 + 0x20) = uVar6;
            if (uVar6 == 0xffffffff) {
              *(undefined4 *)(iVar9 + 0x20) = 1;
            }
          }
          else {
            *(uint *)(iVar9 + 0x20) = uVar6;
          }
          *(uint *)(iVar9 + 0x24) = *(uint *)(iVar5 + 8) & 0xc00;
          if ((uVar27 == 0) || ((*(uint *)(iVar5 + 8) & 0x20) == 0)) {
            *(uint *)(iVar9 + 0x24) = *(uint *)(iVar9 + 0x24) | 0x200;
          }
          if (((*(int *)(iVar9 + 0x10) == 1) || (*(int *)(iVar9 + 0x10) == 2)) &&
             ((*(int *)(iVar9 + 0x20) == 1 && (*(int *)(iVar9 + 0x1c) == 1)))) {
            *(undefined4 *)(iVar9 + 0x10) = 0;
          }
        }
        if (uVar27 == 0) {
          if ((*(int *)(iVar20 + iVar14 + 8) != 0) && (*(int *)(iVar8 + 0x28) = iVar9, iVar9 == 0))
          {
            return 0xffffffff8007000e;
          }
        }
        else {
          uVar7 = fn_82930318(0x14);
          if ((uVar7 & 0xffffffff) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = fn_829304E0(uVar7,0,0,0xffffffff8204e25c);
          }
          *piVar25 = iVar10;
          if (iVar10 == 0) {
            return 0xffffffff8007000e;
          }
          uVar7 = fn_82930318(0x34);
          if ((uVar7 & 0xffffffff) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = fn_82930FC0(uVar7,1,0,0,0,0);
          }
          if (iVar10 == 0) {
            return 0xffffffff8007000e;
          }
          *(int *)(*piVar25 + 8) = iVar10;
          uVar7 = fn_82930318(0x30);
          if ((uVar7 & 0xffffffff) == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = fn_82930940(uVar7,iStack00000034);
          }
          *(int *)(iVar10 + 0x14) = iVar11;
          if (iVar11 == 0) {
            return 0xffffffff8007000e;
          }
          *(int *)(iVar11 + 0x18) = *(int *)(iVar5 + 4);
          iVar11 = fn_82930318(0x58);
          if (iVar11 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = fn_82932548();
          }
          if (iVar11 == 0) {
            return 0xffffffff8007000e;
          }
          *(int *)(iVar10 + 0x18) = iVar11;
          *(undefined4 *)(iVar11 + 0x10) = 0xffffffff;
          uVar12 = fn_82981738(param_1,iVar9);
          *(undefined4 *)(iVar11 + 0x14) = uVar12;
          *(undefined4 *)(iVar11 + 0x28) = 2;
          *(undefined4 *)(iVar11 + 0x2c) = *(undefined4 *)(iVar5 + 8);
          *(int *)(iVar11 + 0x30) = iVar9;
          if (iVar9 == 0) {
            return 0xffffffff8007000e;
          }
          piVar25 = (int *)(*piVar25 + 0xc);
        }
      }
      piVar26 = piStack0000004c;
      param_6 = iVar22;
      uVar27 = uVar23;
    } while (uVar23 < 7);
    *param_7 = iVar8;
  }
  if (piVar26 == (int *)0x0) {
    return 0;
  }
  uVar7 = fn_82930318(0x14);
  if ((uVar7 & 0xffffffff) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = fn_829304E0(uVar7,0,0,0xffffffff8204e254);
  }
  if (iVar8 != 0) {
    uVar7 = fn_82930318(0x40);
    if ((uVar7 & 0xffffffff) == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = fn_829334D8(uVar7,2,*(undefined4 *)((int)uVar13 * 0xe4 + iVar14),iStack00000034);
    }
    *(int *)(iVar8 + 8) = iVar14;
    if (iVar14 != 0) {
      *piVar26 = iVar8;
      return 0;
    }
  }
  return 0xffffffff8007000e;
}
/* @@ end fn_82983718 */

/* @@ begin fn_82984260 */
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82931D48();
extern int fn_8297F548();
extern int fn_8297F6B8();
extern int fn_8297F800();
extern longlong fn_82981738();
extern undefined8 fn_82981C40();
extern unsigned int uStack_6c;
extern unsigned int uStack_9c;


longlong fn_82984260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint auStack_c0 [4];
  undefined1 auStack_b0 [20];
  undefined4 uStack_9c;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  
  lVar7 = 0;
  uVar3 = ((longlong (*)())fn_82981738)();
  uVar4 = fn_82981738(param_1,param_3);
  iVar5 = fn_8297F6B8(param_1,param_2,param_3);
  if (iVar5 == 0) {
    bVar1 = false;
    bVar2 = false;
    fn_82931D48(auStack_b0);
    fn_82931D48(auStack_80);
    uVar8 = 0;
    if ((uVar3 & 0xffffffff) != 0) {
      while ((uVar8 & 0xffffffff) < (uVar4 & 0xffffffff)) {
        iVar5 = fn_82981C40(param_1,param_2,uVar8,auStack_b0);
        if (((iVar5 < 0) || (iVar5 = fn_82981C40(param_1,param_3,uVar8,auStack_80), iVar5 < 0)) ||
           (iVar5 = fn_8297F800(param_1,auStack_b0,auStack_80,auStack_c0), iVar5 < 0)) {
          bVar1 = true;
LAB_82984370:
          bVar2 = true;
        }
        else {
          uVar6 = (ulonglong)auStack_c0[0];
          iVar5 = fn_8297F548(param_1,uStack_9c,uVar6);
          if (iVar5 != 0) {
            bVar1 = true;
          }
          iVar5 = fn_8297F548(param_1,uVar6,uStack_6c);
          if (iVar5 != 0) goto LAB_82984370;
        }
        if (((bVar1) && (bVar2)) ||
           (uVar8 = uVar8 + 1, (uVar3 & 0xffffffff) <= (uVar8 & 0xffffffff))) break;
      }
    }
    if ((uVar4 & 0xffffffff) < (uVar3 & 0xffffffff)) {
      lVar7 = 4;
    }
    if (bVar1) {
      lVar7 = lVar7 + 0x200;
    }
    if (bVar2) {
      lVar7 = lVar7 + 0x10000;
    }
    if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
      lVar7 = lVar7 + 0x800000;
    }
  }
  else {
    lVar7 = 0;
  }
  return lVar7;
}
/* @@ end fn_82984260 */

/* @@ begin fn_829843D0 */
extern void fn_82980C18(void *p, void *q, int code, const char *msg);
extern undefined8 fn_829814B0(void *p, void *q, int x);

int fn_829843D0(unsigned int *p, int *q, Node_829843D0 *n)
{
  unsigned int fl = q[4];
  Ctx_829843D0 *c = (Ctx_829843D0 *)p;
  if ((fl & 0x200) != 0) {
    fn_829814B0(p, n, 1);
  }
  if (n != 0 && n->kind == 9 && n->dim == 2) {
    if ((fl & 0xc00) == 0) {
      fl = c->f4->f3c | fl;
    }
    if ((fl & 0xc00) == 0) {
      if ((c->f0 & 8) != 0) {
        fl = fl | 0x400;
      } else if ((c->f0 & 0x10) != 0) {
        fl = fl | 0x800;
      }
    }
    if ((fl & 0x400) != 0) {
      n->bits.m = 1;
    }
    if ((fl & 0x800) != 0) {
      n->bits.m = 2;
    }
  } else {
    if ((fl & 0xc00) != 0) {
      fn_82980C18(p, p + 10, 0xc05, "non-matrix types cannot be declared 'row_major' or 'column_major'");
      return 0x80004005;
    }
  }
  return 0;
}
/* @@ end fn_829843D0 */

/* @@ begin fn_829844C0 */
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern void fn_82980C18(Compiler *c, int a, int b, const char *fmt, ...);
extern void fn_829836D0(void *log, const char *fmt, ...);


undefined8 fn_829844C0(int param_1,int param_2,int param_3)

{
  int iVar4;
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar5;
  byte bVar6;
  
  if ((*(uint *)(param_2 + 0x10) & *(uint *)(param_3 + 0x10)) != 0) {
    fn_82980C18(param_1,param_1 + 0x28,0xbe8,0xffffffff8204e318);
  }
  if ((*(int *)(param_2 + 0x14) != 0) && (iVar4 = *(int *)(param_3 + 0x14), iVar4 != 0)) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(iVar4 + 0x10);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(iVar4 + 0x18);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(iVar4 + 0x20);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(iVar4 + 0x28);
    fn_829836D0(param_1,0xffffffff82029464);
  }
  uVar5 = *(uint *)(param_2 + 0x10) | *(uint *)(param_3 + 0x10);
  *(uint *)(param_2 + 0x10) = uVar5;
  if (((uVar5 & 0x80000) != 0) && ((uVar5 & 0x160000) != 0)) {
    fn_82980C18(param_1,param_1 + 0x28,0xbe8,0xffffffff8204e2c8);
  }
  uVar5 = *(uint *)(param_2 + 0x10);
  bVar6 = (uVar5 & 0x1000) != 0;
  if ((uVar5 & 0x2000) != 0) {
    bVar6 = bVar6 + 1;
  }
  if ((uVar5 & 0x4000) != 0) {
    bVar6 = bVar6 + 1;
  }
  if ((uVar5 & 0x8000) != 0) {
    bVar6 = bVar6 + 1;
  }
  if ((uVar5 & 0x10000) != 0) {
    bVar6 = bVar6 + 1;
  }
  if (1 < bVar6) {
    fn_82980C18(param_1,param_1 + 0x28,0xc0b,0xffffffff8204e2ac);
  }
  if ((*(int *)(param_2 + 0x14) == 0) && (*(int *)(param_3 + 0x14) != 0)) {
    iVar4 = fn_82930458();
    *(int *)(param_2 + 0x14) = iVar4;
    if (iVar4 != 0) goto LAB_82984620;
LAB_82984614:
    uVar1 = 0xffffffff8007000e;
  }
  else {
LAB_82984620:
    if (*(int *)(param_2 + 0x1c) == 0) {
      iVar4 = fn_82930458(*(undefined4 *)(param_3 + 0x1c));
      *(int *)(param_2 + 0x1c) = iVar4;
joined_r0x829846a0:
      if (iVar4 == 0) goto LAB_82984614;
    }
    else if (*(int **)(param_3 + 0x1c) != (int *)0x0) {
      lVar2 = (**(code **)(**(int **)(param_3 + 0x1c) + 4))();
      if (lVar2 == 0) goto LAB_82984614;
      uVar3 = fn_82930318(0x14);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_829304E0(uVar3,*(undefined4 *)(param_2 + 0x1c),lVar2,0xffffffff8204de78);
      }
      *(int *)(param_2 + 0x1c) = iVar4;
      goto joined_r0x829846a0;
    }
    uVar1 = 0;
  }
  return uVar1;
}
/* @@ end fn_829844C0 */

/* @@ begin fn_829846B0 */
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_82931D48();
extern int fn_8297F6B8();
extern undefined8 fn_82981668();
extern longlong fn_82981738();
extern undefined8 fn_82981C40();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_60;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_90;


bool fn_829846B0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  if (param_4 == 0) {
    if (param_2 == (undefined1 *)0x0) {
      if (param_3 != (undefined1 *)0x0) {
        return false;
      }
      return true;
    }
  }
  else if (param_2 == (undefined1 *)0x0) {
    return true;
  }
  if (param_3 == (undefined1 *)0x0) {
    return false;
  }
  fn_82931D48(auStack_70);
  fn_82931D48(auStack_a0);
  puVar5 = param_2;
  if (*(int *)(param_2 + 4) != 9) {
    uStack_60 = 4;
    uStack_54 = 1;
    uStack_50 = fn_82981738(param_1,param_2);
    puVar5 = auStack_70;
    if ((param_4 != 0) && (iVar2 = fn_82981668(param_1,param_2), iVar2 != 0)) {
      uStack_60 = 1;
    }
  }
  puVar7 = param_3;
  if (*(int *)(param_3 + 4) != 9) {
    uStack_90 = 4;
    uStack_84 = 1;
    uStack_80 = fn_82981738(param_1,param_3);
    puVar7 = auStack_a0;
    if ((param_4 != 0) && (iVar2 = fn_82981668(param_1,param_3), iVar2 != 0)) {
      uStack_90 = 1;
    }
  }
  iVar2 = *(int *)(puVar5 + 0x10);
  if ((iVar2 == 4) || (iVar3 = *(int *)(puVar7 + 0x10), iVar3 == 4)) {
    uVar6 = (longlong)*(int *)(puVar5 + 0x20) * (longlong)*(int *)(puVar5 + 0x1c);
    if (param_4 == 0) {
      if (iVar2 != *(int *)(puVar7 + 0x10)) {
        return false;
      }
      if ((uVar6 & 0xffffffff) !=
          ((longlong)*(int *)(puVar7 + 0x20) * (longlong)*(int *)(puVar7 + 0x1c) & 0xffffffffU)) {
        return false;
      }
      uVar8 = 0;
      if ((uVar6 & 0xffffffff) == 0) {
        return true;
      }
      do {
        iVar2 = fn_82981C40(param_1,param_2,uVar8,auStack_70);
        if (iVar2 < 0) {
          return false;
        }
        iVar2 = fn_82981C40(param_1,param_3,uVar8,auStack_a0);
        if (iVar2 < 0) {
          return false;
        }
        iVar2 = fn_8297F6B8(param_1,auStack_70,auStack_a0);
        if (iVar2 == 0) {
          return false;
        }
        uVar8 = uVar8 + 1;
      } while ((uVar8 & 0xffffffff) < (uVar6 & 0xffffffff));
      return true;
    }
    if (((longlong)*(int *)(puVar7 + 0x20) * (longlong)*(int *)(puVar7 + 0x1c) & 0xffffffffU) <
        (uVar6 & 0xffffffff)) {
      return false;
    }
    uVar8 = 0;
    if ((uVar6 & 0xffffffff) == 0) {
      return true;
    }
    do {
      iVar2 = fn_82981C40(param_1,param_2,uVar8,auStack_70);
      if (iVar2 < 0) {
        return false;
      }
      iVar2 = fn_82981C40(param_1,param_3,uVar8,auStack_a0);
      if (iVar2 < 0) {
        return false;
      }
      iVar2 = fn_829846B0(param_1,auStack_70,auStack_a0,1);
      if (iVar2 == 0) {
        return false;
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < (uVar6 & 0xffffffff));
    return true;
  }
  if (iVar2 == 0) {
LAB_829847e4:
    if (iVar3 == 3) {
      return false;
    }
    return true;
  }
  if (iVar2 == 1) {
    if (iVar3 == 0) {
      return true;
    }
    if (iVar3 == 1) {
LAB_82984808:
      if (*(uint *)(puVar7 + 0x20) < *(uint *)(puVar5 + 0x20)) {
        return false;
      }
      return true;
    }
    if (iVar3 == 2) {
      uVar4 = *(uint *)(puVar7 + 0x1c);
      if ((uVar4 == 1) && (*(uint *)(puVar7 + 0x20) < *(uint *)(puVar5 + 0x20))) {
        return false;
      }
      iVar2 = *(int *)(puVar7 + 0x20);
      if ((iVar2 == 1) && (uVar4 < *(uint *)(puVar5 + 0x20))) {
        return false;
      }
      if (uVar4 == 1) {
        return true;
      }
      if (iVar2 == 1) {
        return true;
      }
      iVar3 = *(int *)(puVar5 + 0x20);
LAB_8298486c:
      if (uVar4 * iVar2 != iVar3) {
        return false;
      }
      return true;
    }
    goto LAB_829847e4;
  }
  if (iVar2 == 2) {
    if (iVar3 == 0) {
      return true;
    }
    if (iVar3 == 1) {
      uVar4 = *(uint *)(puVar5 + 0x1c);
      if ((uVar4 == 1) && (*(uint *)(puVar7 + 0x20) < *(uint *)(puVar5 + 0x20))) {
        return false;
      }
      iVar2 = *(int *)(puVar5 + 0x20);
      if ((iVar2 == 1) && (*(uint *)(puVar7 + 0x20) < uVar4)) {
        return false;
      }
      if (uVar4 == 1) {
        return true;
      }
      if (iVar2 == 1) {
        return true;
      }
      iVar3 = *(int *)(puVar7 + 0x20);
      goto LAB_8298486c;
    }
    if (iVar3 == 2) {
      if (*(uint *)(puVar7 + 0x1c) < *(uint *)(puVar5 + 0x1c)) {
        return false;
      }
      goto LAB_82984808;
    }
    goto LAB_829847e4;
  }
  if (iVar2 != 3) {
    return true;
  }
  if (iVar3 != 3) {
    return false;
  }
  iVar2 = *(int *)(puVar7 + 0x14);
  if (iVar2 == 0x16) {
    return true;
  }
  iVar3 = *(int *)(puVar5 + 0x14);
  if ((0x2e < iVar3) && (iVar3 < 0x33)) {
    if (iVar3 == iVar2) {
      return true;
    }
    return iVar2 == 0x2f;
  }
  if (iVar2 == 0x18) {
    if (((iVar3 == 0x18) || (iVar3 == 0x19)) ||
       ((iVar3 == 0x1b || (((iVar3 == 0x1d || (iVar3 == 0x1e)) || (iVar3 == 0x1a))))))
    goto LAB_829849c8;
    bVar1 = iVar3 == 0x1c;
  }
  else {
    if ((iVar2 == 0x21) || (iVar2 == 0x2f)) {
      if ((((iVar3 != 0x21) && (iVar3 != 0x22)) && (iVar3 != 0x23)) &&
         ((iVar3 != 0x24 && (iVar3 != 0x25)))) {
        return false;
      }
      goto LAB_829849c8;
    }
    bVar1 = iVar3 == iVar2;
  }
  if (!bVar1) {
    return false;
  }
LAB_829849c8:
  iVar2 = fn_8297F6B8(param_1,*(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar7 + 0x18));
  if (iVar2 == 0) {
    return false;
  }
  return true;
}
/* @@ end fn_829846B0 */

/* @@ begin fn_82984B00 */
extern unsigned int *auStack_150;
extern unsigned int *auStack_250;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2b0;
extern int fn_82931D48();
extern int fn_8297F6B8();
extern void fn_82980C18(Compiler *c, int a, int b, const char *fmt, ...);
extern undefined8 fn_82981668();
extern longlong fn_82981738();
extern char * fn_82981820();
extern undefined8 fn_82981C40();
extern bool fn_829846B0();
extern unsigned int uStack_260;
extern unsigned int uStack_264;
extern unsigned int uStack_270;
extern unsigned int uStack_290;
extern unsigned int uStack_294;
extern unsigned int uStack_2a0;


void fn_82984B00(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined1 *param_4,
                  undefined1 *param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar6;
  ulonglong uVar5;
  undefined1 *puVar9;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 auStack_2b0 [16];
  undefined4 uStack_2a0;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined1 auStack_280 [16];
  undefined4 uStack_270;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_250 [256];
  undefined1 auStack_150 [336];
  
  if ((param_6 != 0) || (param_4 == (undefined1 *)0x0)) goto LAB_82984f00;
  if (param_5 != (undefined1 *)0x0) {
    fn_82931D48(auStack_2b0);
    fn_82931D48(auStack_280);
    puVar6 = param_4;
    if (*(int *)(param_4 + 4) != 9) {
      uStack_2a0 = 4;
      uStack_294 = 1;
      uStack_290 = fn_82981738(param_1,param_4);
      iVar2 = fn_82981668(param_1,param_4);
      puVar6 = auStack_2b0;
      if (iVar2 != 0) {
        uStack_2a0 = 1;
      }
    }
    puVar9 = param_5;
    if (*(int *)(param_5 + 4) != 9) {
      uStack_270 = 4;
      uStack_264 = 1;
      uStack_260 = fn_82981738(param_1,param_5);
      iVar2 = fn_82981668(param_1,param_5);
      puVar9 = auStack_280;
      if (iVar2 != 0) {
        uStack_270 = 1;
      }
    }
    iVar2 = *(int *)(puVar6 + 0x10);
    if ((iVar2 != 4) && (iVar3 = *(int *)(puVar9 + 0x10), iVar3 != 4)) {
      if (iVar2 == 0) {
LAB_82984c00:
        bVar1 = iVar3 == 3;
        goto LAB_82984efc;
      }
      if (iVar2 == 1) {
        if (iVar3 != 0) {
          if (iVar3 == 1) {
            if (*(uint *)(puVar9 + 0x20) < *(uint *)(puVar6 + 0x20)) goto LAB_82984c30;
          }
          else {
            if (iVar3 != 2) goto LAB_82984c00;
            uVar4 = *(uint *)(puVar9 + 0x1c);
            if (((uVar4 == 1) && (*(uint *)(puVar9 + 0x20) < *(uint *)(puVar6 + 0x20))) ||
               ((iVar2 = *(int *)(puVar9 + 0x20), iVar2 == 1 && (uVar4 < *(uint *)(puVar6 + 0x20))))
               ) goto LAB_82984c30;
            if ((uVar4 != 1) && (iVar2 != 1)) {
              iVar3 = *(int *)(puVar6 + 0x20);
LAB_82984ce0:
              if (uVar4 * iVar2 != iVar3) goto LAB_82984c30;
            }
          }
        }
      }
      else if (iVar2 == 2) {
        if (iVar3 != 0) {
          if (iVar3 == 1) {
            uVar4 = *(uint *)(puVar6 + 0x1c);
            if (((uVar4 != 1) || (*(uint *)(puVar6 + 0x20) <= *(uint *)(puVar9 + 0x20))) &&
               ((iVar2 = *(int *)(puVar6 + 0x20), iVar2 != 1 || (uVar4 <= *(uint *)(puVar9 + 0x20)))
               )) {
              if ((uVar4 != 1) && (iVar2 != 1)) {
                iVar3 = *(int *)(puVar9 + 0x20);
                goto LAB_82984ce0;
              }
              goto LAB_82984f00;
            }
          }
          else {
            if (iVar3 != 2) goto LAB_82984c00;
            if ((*(uint *)(puVar6 + 0x1c) <= *(uint *)(puVar9 + 0x1c)) &&
               (*(uint *)(puVar6 + 0x20) <= *(uint *)(puVar9 + 0x20))) goto LAB_82984f00;
          }
          goto LAB_82984c30;
        }
      }
      else if (iVar2 == 3) {
        if (iVar3 != 3) goto LAB_82984c30;
        iVar2 = *(int *)(puVar9 + 0x14);
        if (iVar2 != 0x16) {
          iVar3 = *(int *)(puVar6 + 0x14);
          if ((iVar3 < 0x2f) || (0x32 < iVar3)) {
            if (iVar2 == 0x18) {
              if ((((iVar3 != 0x18) && (iVar3 != 0x19)) &&
                  ((iVar3 != 0x1b && ((iVar3 != 0x1d && (iVar3 != 0x1e)))))) && (iVar3 != 0x1a)) {
                bVar1 = iVar3 == 0x1c;
LAB_82984e48:
                if (!bVar1) goto LAB_82984c30;
              }
            }
            else if ((iVar2 == 0x21) || (iVar2 == 0x2f)) {
              if ((iVar3 != 0x21) && (((iVar3 != 0x22 && (iVar3 != 0x23)) && (iVar3 != 0x24)))) {
                bVar1 = iVar3 == 0x25;
                goto LAB_82984e48;
              }
            }
            else if (iVar3 != iVar2) goto LAB_82984c30;
            iVar2 = fn_8297F6B8(param_1,*(undefined4 *)(puVar6 + 0x18),
                                  *(undefined4 *)(puVar9 + 0x18));
            if (iVar2 == 0) goto LAB_82984c30;
          }
          else if (iVar3 != iVar2) {
            uVar4 = (uint)LZCOUNT(iVar2 + -0x2f) >> 5;
            goto LAB_82984ef8;
          }
        }
      }
LAB_82984f00:
      uVar8 = 0xffffffff82196582;
      goto LAB_82984c38;
    }
    uVar5 = (longlong)*(int *)(puVar6 + 0x20) * (longlong)*(int *)(puVar6 + 0x1c);
    if ((uVar5 & 0xffffffff) <=
        ((longlong)*(int *)(puVar9 + 0x20) * (longlong)*(int *)(puVar9 + 0x1c) & 0xffffffffU)) {
      uVar7 = 0;
      if ((uVar5 & 0xffffffff) != 0) {
        do {
          iVar2 = fn_82981C40(param_1,param_4,uVar7,auStack_2b0);
          if (((iVar2 < 0) || (iVar2 = fn_82981C40(param_1,param_5,uVar7,auStack_280), iVar2 < 0))
             || (iVar2 = fn_829846B0(param_1,auStack_2b0,auStack_280,1), iVar2 == 0))
          goto LAB_82984c30;
          uVar7 = uVar7 + 1;
        } while ((uVar7 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      uVar4 = 1;
LAB_82984ef8:
      bVar1 = uVar4 == 0;
LAB_82984efc:
      if (!bVar1) goto LAB_82984f00;
    }
  }
LAB_82984c30:
  uVar8 = 0xffffffff8204e384;
LAB_82984c38:
  fn_82981820(param_1,auStack_250,0xff,param_4);
  fn_82981820(param_1,auStack_150,0xff,param_5);
  if ((param_3 & 0xffffffff) == 0) {
    fn_82980C18(param_1,param_2,0xbc9,0xffffffff8204e360,uVar8,auStack_150,auStack_250);
  }
  else {
    fn_82980C18(param_1,param_2,0xbc9,0xffffffff8204e334,param_3,uVar8,auStack_150,auStack_250);
  }
  return;
}
/* @@ end fn_82984B00 */

/* @@ begin fn_82984F30 */
extern int fn_8297F800();
extern undefined8 fn_829814B0();
extern longlong fn_82981738();
extern bool fn_829846B0();


undefined8
fn_82984F30(undefined8 param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 *param_5,
             undefined4 *param_6)

{
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar1;
  int *piVar6;
  longlong lVar2;
  int aiStack_50;
  
  if ((param_4 == (undefined4 *)0x0) || (param_5 == (undefined4 *)0x0)) {
    return 0xffffffff80004005;
  }
  *param_4 = 0;
  *param_5 = 0;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_2 != (int *)0x0) {
    if (param_3 == (int *)0x0) {
      return 0xffffffff80004005;
    }
    uVar3 = fn_82981738(param_1,param_2);
    uVar4 = fn_82981738(param_1,param_3);
    if ((((uVar3 < uVar4) ||
         (iVar5 = fn_829846B0(param_1,param_2,param_3,0), piVar6 = param_2, iVar5 == 0)) &&
        (iVar5 = fn_829846B0(param_1,param_3,param_2,0), piVar6 = param_3, iVar5 == 0)) &&
       (iVar5 = fn_829846B0(param_1,param_2,param_3,0), piVar6 = param_2, iVar5 == 0)) {
      return 0xffffffff80004005;
    }
    uVar1 = fn_8297F800(param_1,param_2,param_3,&aiStack_50);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (piVar6[5] != aiStack_50) {
      piVar6 = (int *)(**(code **)(*piVar6 + 4))(piVar6);
      if (piVar6 == (int *)0x0) {
        return 0xffffffff8007000e;
      }
      piVar6[5] = aiStack_50;
    }
    if (param_6 != (undefined4 *)0x0) {
      lVar2 = (**(code **)(*piVar6 + 4))(piVar6);
      *param_6 = (int)lVar2;
      if (lVar2 == 0) {
        return 0xffffffff8007000e;
      }
      fn_829814B0(param_1,lVar2,1);
    }
    *param_4 = piVar6;
    *param_5 = piVar6;
    return 0;
  }
  if (param_3 != (int *)0x0) {
    return 0xffffffff80004005;
  }
  return 0;
}
/* @@ end fn_82984F30 */

/* @@ begin fn_829850D0 */
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_829334D8();
extern int fn_82933528();
extern void fn_82983380();


int fn_829850D0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 2;
  iVar2 = (int)param_3;
  if (iVar2 < 6) {
    if (iVar2 < 2) {
      if ((param_3 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else if ((param_3 & 0xffffffff) == 1) goto LAB_82985114;
    }
    else {
      iVar4 = 1;
    }
  }
  else if (5 < iVar2) {
    if (iVar2 < 10) {
LAB_82985114:
      iVar4 = 2;
    }
    else if (iVar2 < 0xe) {
      iVar4 = 3;
    }
  }
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82933088(uVar1,0,0,0,0,1,param_6);
  }
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = fn_82930318(0x28);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82931D88(uVar1,0,param_3,0,1,1,0x200);
  }
  *(int *)(iVar2 + 0x10) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  if (iVar4 == 3) {
    uVar1 = fn_82930318(0x40);
    if ((uVar1 & 0xffffffff) != 0) {
      iVar4 = fn_82933528(param_1,uVar1,3);
      goto LAB_82985220;
    }
  }
  else {
    uVar1 = fn_82930318(0x40);
    if ((uVar1 & 0xffffffff) != 0) {
      iVar4 = fn_829334D8(uVar1,iVar4,param_4,param_6);
      goto LAB_82985220;
    }
  }
  iVar4 = 0;
LAB_82985220:
  *(int *)(iVar2 + 0x20) = iVar4;
  if (iVar4 != 0) {
    uVar1 = fn_82930318(0x14);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_829304E0(uVar1,*(undefined4 *)(iVar2 + 0x20),0,0xffffffff8204e390);
    }
    if (iVar4 != 0) {
      *(int *)(iVar2 + 0x20) = iVar4;
      fn_82983380(param_2,iVar2);
      return iVar2;
    }
  }
  return 0;
}
/* @@ end fn_829850D0 */

/* @@ begin fn_82985350 */
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_82933578();
extern void fn_82983380();


int fn_82985350(undefined8 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_2 != 0) {
    uVar3 = fn_82930318(0x50);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82933088(uVar3,0,0,0,0,1,param_2 + 0x10);
    }
    if (iVar4 != 0) {
      uVar3 = fn_82930318(0x28);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = fn_82931D88(uVar3,3,0x17,0,1,1,0x200);
      }
      *(int *)(iVar4 + 0x10) = iVar5;
      if (iVar5 != 0) {
        uVar3 = fn_82930318(0x40);
        if ((uVar3 & 0xffffffff) == 0) {
          iVar5 = 0;
        }
        else {
          pcVar2 = *(char **)(param_2 + 0x18);
          pcVar6 = pcVar2;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          iVar5 = fn_82933578(uVar3,5,pcVar2,(int)pcVar6 - (int)pcVar2,param_2 + 0x10);
        }
        *(int *)(iVar4 + 0x20) = iVar5;
        if (iVar5 != 0) {
          uVar3 = fn_82930318(0x14);
          if ((uVar3 & 0xffffffff) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = fn_829304E0(uVar3,*(undefined4 *)(iVar4 + 0x20),0,0xffffffff8204e390);
          }
          if (iVar5 != 0) {
            *(int *)(iVar4 + 0x20) = iVar5;
            fn_82983380(param_1,iVar4);
            return iVar4;
          }
        }
      }
    }
  }
  return 0;
}
/* @@ end fn_82985350 */

/* @@ begin fn_829854A0 */
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_82933578();
extern void fn_82983380();


int fn_829854A0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82933088(uVar1,0,0,0,0,1,param_2);
  }
  if (iVar2 != 0) {
    uVar1 = fn_82930318(0x28);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82931D88(uVar1,3,0x16,0,1,1,0x200);
    }
    *(int *)(iVar2 + 0x10) = iVar3;
    if (iVar3 != 0) {
      uVar1 = fn_82930318(0x40);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82933578(uVar1,5,0,0,param_2);
      }
      *(int *)(iVar2 + 0x20) = iVar3;
      if (iVar3 != 0) {
        uVar1 = fn_82930318(0x14);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_829304E0(uVar1,*(undefined4 *)(iVar2 + 0x20),0,0xffffffff8204e390);
        }
        if (iVar3 != 0) {
          *(int *)(iVar2 + 0x20) = iVar3;
          fn_82983380(param_1,iVar2);
          return iVar2;
        }
      }
    }
  }
  return 0;
}
/* @@ end fn_829854A0 */

/* @@ begin fn_829855C8 */
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82933088();
extern void fn_82983380();


int fn_829855C8(undefined8 param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  for (; *(int *)(param_2 + 4) != 3; param_2 = *(int *)(param_2 + 8)) {
  }
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82933088(uVar1,0,0,0,0,1,param_2 + 0x10);
  }
  if (iVar2 == 0) {
LAB_82985634:
    iVar2 = 0;
  }
  else {
    if (param_3 != (int *)0x0) {
      iVar3 = (**(code **)(*param_3 + 4))(param_3);
      *(int *)(iVar2 + 0x20) = iVar3;
      if (iVar3 == 0) goto LAB_82985634;
    }
    piVar6 = (int *)(iVar2 + 0x10);
    for (iVar3 = *(int *)(iVar2 + 0x20); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar5 = *(int *)(iVar3 + 8);
      if (((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0xe)) && (*(int *)(iVar5 + 0x10) != 0)) {
        uVar1 = fn_82930318(0x14);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_829304E0(uVar1,0,0,0xffffffff8204e398);
        }
        *piVar6 = iVar4;
        if (iVar4 == 0) goto LAB_82985634;
        iVar5 = fn_82930458(*(undefined4 *)(iVar5 + 0x10));
        *(int *)(*piVar6 + 8) = iVar5;
        if (iVar5 == 0) goto LAB_82985634;
        piVar6 = (int *)(*piVar6 + 0xc);
      }
    }
    fn_82983380(param_1,iVar2);
  }
  return iVar2;
}
/* @@ end fn_829855C8 */

/* @@ begin fn_82985718 */
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_829334D8();
extern void fn_82980C18(Compiler *c, int a, int b, const char *fmt, ...);
extern longlong fn_82981738();
extern void fn_82983380();


int fn_82985718(undefined8 param_1,int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar11;
  longlong lVar9;
  int iVar12;
  ulonglong uVar10;
  int iVar13;
  char *pcVar15;
  ulonglong uVar14;
  int iVar16;
  char *pcVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  int *piVar23;
  byte *pbVar24;
  byte *pbVar25;
  longlong lVar26;
  byte *pbVar27;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_3 + 4) != 3) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (param_2[1] != 0xe) {
    return 0;
  }
  iVar12 = param_2[4];
  iVar20 = param_3 + 0x10;
  uVar8 = fn_82930318(0x50);
  if ((uVar8 & 0xffffffff) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = fn_82933088(uVar8,0,0x1d,0,0,1,iVar20);
  }
  if (iVar11 == 0) {
    return 0;
  }
  if (iVar12 != 0) {
    if (*(int *)(iVar12 + 4) == 1) {
      lVar26 = 0;
      do {
        iVar13 = *(int *)(iVar12 + 8);
        if ((iVar13 != 0) && (*(int *)(iVar13 + 4) == 6)) {
          pcVar17 = *(char **)(param_3 + 0x18);
          pcVar15 = *(char **)(*(int *)(iVar13 + 0x14) + 0x18);
          do {
            cVar1 = *pcVar17;
            cVar2 = *pcVar15;
            if (cVar1 == '\0') break;
            pcVar17 = pcVar17 + 1;
            pcVar15 = pcVar15 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            piVar23 = *(int **)(*(int *)(iVar13 + 0x18) + 0x30);
            if (piVar23 != (int *)0x0) {
              iVar12 = (**(code **)(*piVar23 + 4))();
              *(int *)(iVar11 + 0x10) = iVar12;
              if (iVar12 == 0) {
                return 0;
              }
            }
            uVar8 = fn_82930318(0x40);
            if ((uVar8 & 0xffffffff) == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = fn_829334D8(uVar8,2,lVar26,iVar20);
            }
            *(int *)(iVar11 + 0x24) = iVar12;
            goto LAB_82985c60;
          }
          lVar9 = fn_82981738(param_1,*(undefined4 *)(*(int *)(iVar13 + 0x18) + 0x30));
          lVar26 = lVar9 + lVar26;
        }
        iVar12 = *(int *)(iVar12 + 0xc);
      } while (iVar12 != 0);
    }
    else if (*(int *)(iVar12 + 4) == 9) {
      pbVar27 = *(byte **)(param_3 + 0x18);
      uVar5 = *(uint *)(iVar12 + 0x1c);
      uVar6 = *(uint *)(iVar12 + 0x20);
      uVar21 = *(uint *)(iVar12 + 0x24) & 0x200;
      pbVar24 = pbVar27;
      do {
        pbVar18 = pbVar24;
        pbVar24 = pbVar18 + 1;
      } while (*pbVar18 != 0);
      bVar3 = *pbVar27;
      if (bVar3 == 0x5f) {
        if (*(int *)(iVar12 + 0x10) != 2) goto LAB_82985828;
        if ((pbVar18 <= pbVar27 + 1) || (uVar8 = 3, pbVar27[1] != 0x6d)) {
          uVar8 = 2;
        }
      }
      else {
        if (bVar3 < 0x61) goto LAB_82985828;
        if (((bVar3 < 99) || (bVar3 == 0x67)) || (bVar3 == 0x72)) {
          if ((*(int *)(iVar12 + 0x10) != 0) && (*(int *)(iVar12 + 0x10) != 1)) goto LAB_82985828;
          uVar8 = 1;
        }
        else {
          if (((bVar3 < 0x77) || (0x7a < bVar3)) ||
             ((*(int *)(iVar12 + 0x10) != 0 && (*(int *)(iVar12 + 0x10) != 1)))) goto LAB_82985828;
          uVar8 = 0;
        }
      }
      uVar22 = 0;
      if (pbVar27 < pbVar18) {
        pbVar25 = pbVar27 + 2;
        pbVar24 = pbVar27 + 3;
        piVar23 = (int *)(iVar11 + 0x24);
        do {
          if (3 < (uVar22 & 0xffffffff)) break;
          uVar19 = 0;
          uVar14 = 0;
          if (uVar8 == 0) {
            bVar3 = *pbVar27;
            if (bVar3 == 0x77) {
LAB_82985afc:
              uVar14 = 3;
            }
            else if (bVar3 == 0x78) {
LAB_82985ac0:
              uVar14 = 0;
            }
            else {
              if (bVar3 != 0x79) {
                if (bVar3 == 0x7a) goto LAB_82985aec;
                goto LAB_82985828;
              }
LAB_82985af4:
              uVar14 = 1;
            }
LAB_82985b00:
            pbVar25 = pbVar25 + 1;
            pbVar24 = pbVar24 + 1;
            pbVar27 = pbVar27 + 1;
            uVar19 = 0;
          }
          else {
            if (uVar8 == 1) {
              bVar3 = *pbVar27;
              if (bVar3 == 0x61) goto LAB_82985afc;
              if (bVar3 == 0x62) {
LAB_82985aec:
                uVar14 = 2;
                goto LAB_82985b00;
              }
              if (bVar3 == 0x67) goto LAB_82985af4;
              if (bVar3 == 0x72) goto LAB_82985ac0;
              goto LAB_82985828;
            }
            if (uVar8 < 3) {
              if ((pbVar18 <= pbVar25) || (*pbVar27 != 0x5f)) goto LAB_82985828;
              bVar3 = pbVar27[1];
              if (((char)bVar3 < '1') || ('9' < (char)bVar3)) goto LAB_82985828;
              bVar4 = *pbVar25;
              if (((char)bVar4 < '1') || ('9' < (char)bVar4)) goto LAB_82985828;
              uVar19 = (int)(char)bVar3 - 0x31;
              uVar14 = (longlong)(char)bVar4 - 0x31;
              pbVar27 = pbVar27 + 3;
              pbVar24 = pbVar24 + 3;
              pbVar25 = pbVar25 + 3;
            }
            else if (uVar8 == 3) {
              if (((pbVar18 <= pbVar24) || (*pbVar27 != 0x5f)) || (pbVar27[1] != 0x6d))
              goto LAB_82985828;
              bVar3 = *pbVar25;
              if (((char)bVar3 < '0') || ('9' < (char)bVar3)) goto LAB_82985828;
              bVar4 = *pbVar24;
              if (((char)bVar4 < '0') || ('9' < (char)bVar4)) goto LAB_82985828;
              uVar19 = (int)(char)bVar3 - 0x30;
              uVar14 = (longlong)(char)bVar4 - 0x30;
              pbVar27 = pbVar27 + 4;
              pbVar24 = pbVar24 + 4;
              pbVar25 = pbVar25 + 4;
            }
          }
          if ((uVar5 <= uVar19) || ((ulonglong)uVar6 <= (uVar14 & 0xffffffff))) goto LAB_82985828;
          uVar10 = fn_82930318(0x14);
          if ((uVar10 & 0xffffffff) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = fn_829304E0(uVar10,0,0,0xffffffff8204e3a0);
          }
          *piVar23 = iVar13;
          if (iVar13 == 0) {
            return 0;
          }
          uVar10 = fn_82930318(0x40);
          if ((uVar10 & 0xffffffff) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = fn_829334D8(uVar10,2,(longlong)(int)uVar19 * (longlong)(int)uVar6 + uVar14,
                                  iVar20);
          }
          *(int *)(*piVar23 + 8) = iVar13;
          if (iVar13 == 0) {
            return 0;
          }
          uVar22 = uVar22 + 1;
          piVar23 = (int *)(*piVar23 + 0xc);
        } while (pbVar27 < pbVar18);
        if ((pbVar27 < pbVar18) || (4 < (uVar22 & 0xffffffff))) goto LAB_82985828;
      }
      iVar13 = *(int *)(iVar11 + 0x24);
      do {
        iVar7 = iVar13;
        if ((iVar7 == 0) || (uVar21 != 0)) goto LAB_82985c14;
        iVar13 = *(int *)(iVar7 + 0xc);
        if (iVar13 != 0) {
          iVar16 = iVar13;
          do {
            if (*(int *)(*(int *)(iVar7 + 8) + 0x18) == *(int *)(*(int *)(iVar16 + 8) + 0x18)) {
              uVar21 = 1;
              break;
            }
            iVar16 = *(int *)(iVar16 + 0xc);
          } while (iVar16 != 0);
        }
      } while( true );
    }
  }
  goto LAB_82985828;
LAB_82985c14:
  uVar8 = fn_82930318(0x28);
  if ((uVar8 & 0xffffffff) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = fn_82931D88(uVar8,(uVar22 - 1) - ((uVar22 - 2) + (ulonglong)(uVar22 - 1 == 0)),
                          *(undefined4 *)(iVar12 + 0x14),0,1,uVar22,
                          -(ulonglong)(uVar21 != 0) & 0x200);
  }
  *(int *)(iVar11 + 0x10) = iVar12;
LAB_82985c60:
  if (iVar12 == 0) {
    return 0;
  }
  iVar12 = (**(code **)(*param_2 + 4))(param_2);
  *(int *)(iVar11 + 0x20) = iVar12;
  if (iVar12 != 0) {
    fn_82983380(param_1,iVar11);
    return iVar11;
  }
LAB_82985828:
  fn_82980C18(param_1,iVar20,0xbca,0xffffffff8204e3a8,*(undefined4 *)(param_3 + 0x18));
  return 0;
}
/* @@ end fn_82985718 */

/* @@ begin fn_82985CA0 */
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_82933578();
extern void fn_82983380();


int fn_82985CA0(int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 4) == 0x1d) {
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x1c) = 1;
    return param_2;
  }
  if (*(int *)(param_2 + 4) != 0x10) {
    return 0;
  }
  if (*(uint **)(param_2 + 0x30) == (uint *)0x0) {
    return 0;
  }
  if (*(uint *)(param_2 + 0x34) < 4) {
    return 0;
  }
  uVar1 = **(uint **)(param_2 + 0x30);
  if ((uVar1 & 0xffffff00) == 0x102a1100) {
    if ((uVar1 & 1) == 1) goto LAB_82985d4c;
    if ((uVar1 & 1) != 0) goto LAB_82985d28;
  }
  else {
LAB_82985d28:
    if ((uVar1 & 0xffff0000) == 0xfffe0000) {
LAB_82985d4c:
      uVar5 = 0x2b;
      goto LAB_82985d50;
    }
    if ((uVar1 & 0xffff0000) != 0xffff0000) {
      return 0;
    }
  }
  uVar5 = 0x2a;
LAB_82985d50:
  uVar2 = fn_82930318(0x50);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82933088(uVar2,0,0,0,0,1,param_2 + 0x10);
  }
  if (iVar3 != 0) {
    uVar2 = fn_82930318(0x28);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82931D88(uVar2,3,uVar5,0,1,1,0x200);
    }
    *(int *)(iVar3 + 0x10) = iVar4;
    if (iVar4 != 0) {
      uVar2 = fn_82930318(0x40);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_82933578(uVar2,5,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34)
                             ,param_2 + 0x10);
      }
      *(int *)(iVar3 + 0x20) = iVar4;
      if (iVar4 != 0) {
        uVar2 = fn_82930318(0x14);
        if ((uVar2 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_829304E0(uVar2,*(undefined4 *)(iVar3 + 0x20),0,0xffffffff8204e390);
        }
        if (iVar4 != 0) {
          *(int *)(iVar3 + 0x20) = iVar4;
          fn_82983380(param_1,iVar3);
          return iVar3;
        }
      }
    }
  }
  return 0;
}
/* @@ end fn_82985CA0 */

/* @@ begin fn_82985E60 */
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_829334D8();
extern void fn_82983380();


int fn_82985E60(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82933088(uVar1,0,0,0,0,1,param_1 + 0x28);
  }
  if (iVar2 != 0) {
    uVar1 = fn_82930318(0x28);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82931D88(uVar1,3,0x21,0,1,1,0x200);
    }
    *(int *)(iVar2 + 0x10) = iVar3;
    if (iVar3 != 0) {
      uVar1 = fn_82930318(0x40);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_829334D8(uVar1,4,0,param_1 + 0x28);
      }
      if (iVar3 != 0) {
        *(int *)(iVar2 + 0x20) = iVar3;
        if ((param_2 & 0xffffffff) != 0) {
          iVar4 = fn_82930458(param_2);
          *(int *)(iVar3 + 0x18) = iVar4;
          if (iVar4 == 0) {
            return 0;
          }
        }
        uVar1 = fn_82930318(0x14);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_829304E0(uVar1,*(undefined4 *)(iVar2 + 0x20),0,0xffffffff8204e390);
        }
        if (iVar3 != 0) {
          *(int *)(iVar2 + 0x20) = iVar3;
          fn_82983380(param_1,iVar2);
          return iVar2;
        }
      }
    }
  }
  return 0;
}
/* @@ end fn_82985E60 */

/* @@ begin fn_82985FA0 */
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_829334D8();
extern void fn_82983380();


int fn_82985FA0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82933088(uVar1,0,0,0,0,1,param_1 + 0x28);
  }
  if (iVar2 != 0) {
    uVar1 = fn_82930318(0x28);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82931D88(uVar1,3,0x2f,0,1,1,0x200);
    }
    *(int *)(iVar2 + 0x10) = iVar3;
    if (iVar3 != 0) {
      uVar1 = fn_82930318(0x40);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_829334D8(uVar1,4,0,param_1 + 0x28);
      }
      if (iVar3 != 0) {
        *(int *)(iVar2 + 0x20) = iVar3;
        if ((param_2 & 0xffffffff) != 0) {
          iVar4 = fn_82930458(param_2);
          *(int *)(iVar3 + 0x18) = iVar4;
          if (iVar4 == 0) {
            return 0;
          }
        }
        uVar1 = fn_82930318(0x14);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_829304E0(uVar1,*(undefined4 *)(iVar2 + 0x20),0,0xffffffff8204e390);
        }
        if (iVar3 != 0) {
          *(int *)(iVar2 + 0x20) = iVar3;
          fn_82983380(param_1,iVar2);
          return iVar2;
        }
      }
    }
  }
  return 0;
}
/* @@ end fn_82985FA0 */

/* @@ begin fn_829860E0 */
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8297FA50();
extern int fn_8297FBF0();
extern int fn_82980150();
extern int fn_82980328();
extern int fn_829803A8();
extern void fn_82980C18(Compiler *c, int a, int b, const char *fmt, ...);
extern void fn_82981DF8();
extern int fn_82F6A7A0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


longlong fn_829860E0(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint uStack_80;
  undefined4 uStack_7c;
  
  if (((param_2 & 0xffffffff) == 0) || (iVar7 = (int)param_2, *(int *)(iVar7 + 4) != 0xe)) {
    return -0x7fffbffb;
  }
  uVar13 = *(int *)(iVar7 + 0x18) * *(int *)(iVar7 + 0x14);
  uVar4 = fn_8297FA50(param_1,*(undefined4 *)(iVar7 + 0x10));
  if (uVar13 != uVar4) {
    return -0x7fffbffb;
  }
  iVar1 = *(int *)(iVar7 + 0x1c);
  if (1 < iVar1) {
    if (iVar1 < 4) {
      return -0x7fffbffb;
    }
    if (0x19 < iVar1) {
      if (iVar1 < 0x1c) {
        return -0x7fffbffb;
      }
      if (iVar1 == 0x1f) {
        return -0x7fffbffb;
      }
      if (iVar1 == 0x20) {
        lVar18 = ((int (*)())fn_82981DF8)(param_1,param_2,param_3);
        return lVar18;
      }
      if (iVar1 == 0x22) {
        return -0x7fffbffb;
      }
    }
  }
  iVar1 = *(int *)(iVar7 + 0x20);
  uVar12 = 0;
  uVar11 = 0;
  uVar14 = 0;
  uVar15 = 0;
  iVar17 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xe)) {
    uVar14 = (longlong)*(int *)(iVar1 + 0x18) * (longlong)*(int *)(iVar1 + 0x14);
    uVar12 = fn_8265C940((uVar14 & 0xfffffff) << 4,0x24810000);
    iVar17 = iVar1;
    if (uVar12 != 0) goto LAB_829861c0;
LAB_829861fc:
    lVar18 = -0x7ff8fff2;
    goto LAB_829866a0;
  }
LAB_829861c0:
  iVar1 = *(int *)(iVar7 + 0x24);
  iVar16 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xe)) {
    uVar15 = (longlong)*(int *)(iVar1 + 0x18) * (longlong)*(int *)(iVar1 + 0x14);
    uVar11 = fn_8265C940((uVar15 & 0xfffffff) << 4,0x24810000);
    iVar16 = iVar1;
    if (uVar11 == 0) goto LAB_829861fc;
  }
  if (*(int *)(iVar7 + 0x28) == 0) {
    uVar9 = uVar12;
    iVar1 = iVar17;
    if (iVar16 != 0) {
      lVar18 = fn_829860E0(param_1,iVar16,uVar11);
      goto joined_r0x82986278;
    }
  }
  else {
    uVar9 = uVar11;
    iVar1 = iVar16;
    if (iVar17 != 0) {
      lVar18 = fn_829860E0(param_1,iVar17,uVar12);
joined_r0x82986278:
      if (lVar18 < 0) goto LAB_829866a0;
    }
  }
  if ((iVar1 != 0) && (lVar18 = fn_829860E0(param_1,iVar1,uVar9), lVar18 < 0)) goto LAB_829866a0;
  uVar4 = *(uint *)(iVar7 + 0x1c);
  if (uVar4 < 2) {
    if (iVar17 == 0) {
      iVar7 = *(int *)(iVar7 + 0x20);
      if (iVar7 == 0) {
LAB_82986698:
        lVar18 = -0x7fffbffb;
        goto LAB_829866a0;
      }
      if (*(int *)(iVar7 + 4) == 0xf) {
        if ((*(int *)(iVar7 + 0x10) == 6) || (*(int *)(iVar7 + 0x10) == 7)) goto LAB_82986698;
        lVar18 = fn_82980150(param_1,param_3,iVar7 + 0x10,param_2 + 0x30);
        if (lVar18 < 0) goto LAB_829866a0;
      }
      else {
        if ((iVar7 == 0) || (*(int *)(iVar7 + 4) != 1)) goto LAB_82986698;
        do {
          iVar1 = *(int *)(iVar7 + 8);
          if (iVar1 != 0) {
            if (*(int *)(iVar1 + 4) == 0xf) {
              if ((*(int *)(iVar1 + 0x10) == 6) || (*(int *)(iVar1 + 0x10) == 7)) goto LAB_82986698;
              lVar18 = fn_82980150(param_1,param_3,iVar1 + 0x10,param_2 + 0x30);
              if (lVar18 < 0) goto LAB_829866a0;
              param_3 = param_3 + 0x10;
            }
            else if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xe)) {
              lVar18 = fn_829860E0(param_1,iVar1,param_3);
              if (lVar18 < 0) goto LAB_829866a0;
              param_3 = ((longlong)*(int *)(*(int *)(iVar7 + 8) + 0x18) *
                         (longlong)*(int *)(*(int *)(iVar7 + 8) + 0x14) & 0xfffffffU) * 0x10 +
                        param_3;
            }
          }
          iVar7 = *(int *)(iVar7 + 0xc);
        } while (iVar7 != 0);
      }
    }
    else if ((uVar14 & 0xffffffff) == 1) {
      uVar14 = 0;
      if (uVar13 != 0) {
        do {
          lVar18 = fn_82980150(param_1,param_3,uVar12);
          if (lVar18 < 0) goto LAB_829866a0;
          uVar14 = uVar14 + 1;
          param_3 = param_3 + 0x10;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
      }
    }
    else if ((((ulonglong)uVar13 == (uVar14 & 0xffffffff)) ||
             (*(uint *)(iVar17 + 0x14) < *(uint *)(iVar7 + 0x14))) ||
            (uVar4 = *(uint *)(iVar7 + 0x18), *(uint *)(iVar17 + 0x18) < uVar4)) {
      uVar14 = 0;
      if (uVar13 != 0) {
        lVar6 = uVar12 - param_3;
        do {
          lVar18 = fn_82980150(param_1,param_3,lVar6 + param_3);
          if (lVar18 < 0) goto LAB_829866a0;
          uVar14 = uVar14 + 1;
          param_3 = param_3 + 0x10;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
      }
    }
    else {
      uVar14 = 0;
      if (*(uint *)(iVar7 + 0x14) != 0) {
        do {
          uVar15 = 0;
          if (uVar4 != 0) {
            do {
              lVar18 = fn_82980150(param_1,((longlong)(int)uVar4 * (longlong)(int)uVar14 + uVar15
                                             & 0xfffffff) * 0x10 + param_3,
                                     ((longlong)*(int *)(iVar17 + 0x18) * (longlong)(int)uVar14 +
                                      uVar15 & 0xfffffff) * 0x10 + uVar12);
              if (lVar18 < 0) goto LAB_829866a0;
              uVar4 = *(uint *)(iVar7 + 0x18);
              uVar15 = uVar15 + 1;
            } while ((uVar15 & 0xffffffff) < (ulonglong)uVar4);
          }
          uVar14 = uVar14 + 1;
        } while ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(iVar7 + 0x14));
      }
    }
  }
  else if (uVar4 == 0x1c) {
    lVar6 = param_2 + 0x30;
    lVar18 = fn_82980328(param_1,&uStack_80,uVar11,lVar6);
    if (lVar18 < 0) goto LAB_829866a0;
    uVar15 = (longlong)(int)uStack_80 * (longlong)(int)uVar13;
    if ((uVar14 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
      fn_82980C18(param_1,lVar6,0xbd6,0xffffffff8202dee8);
      goto LAB_82986698;
    }
    uVar14 = 0;
    if (uVar13 != 0) {
      do {
        lVar18 = fn_82980150(param_1,param_3,(uVar15 + uVar14 & 0xfffffff) * 0x10 + uVar12,lVar6);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar14 = uVar14 + 1;
        param_3 = param_3 + 0x10;
      } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
    }
  }
  else if (uVar4 == 0x1d) {
    iVar7 = *(int *)(iVar7 + 0x24);
    if (*(int *)(iVar7 + 4) == 0xf) {
      lVar18 = fn_82980328(param_1,&uStack_80,iVar7 + 0x10,param_2 + 0x30);
      if (lVar18 < 0) goto LAB_829866a0;
      uVar14 = 0;
      if (uVar13 != 0) {
        lVar6 = ((ulonglong)uStack_80 & 0xfffffff) * 0x10 + uVar12;
        do {
          lVar18 = fn_82980150(param_1,param_3,lVar6);
          if (lVar18 < 0) goto LAB_829866a0;
          uVar14 = uVar14 + 1;
          lVar6 = lVar6 + 0x10;
          param_3 = param_3 + 0x10;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
      }
    }
    else {
      if (*(int *)(iVar7 + 4) != 1) goto LAB_82986698;
      uVar14 = 0;
      if (uVar13 != 0) {
        do {
          lVar18 = fn_82980328(param_1,&uStack_80,(ulonglong)*(uint *)(iVar7 + 8) + 0x10);
          if ((lVar18 < 0) ||
             (lVar18 = fn_82980150(param_1,param_3,
                                     ((ulonglong)uStack_80 & 0xfffffff) * 0x10 + uVar12), lVar18 < 0
             )) goto LAB_829866a0;
          uVar14 = uVar14 + 1;
          iVar7 = *(int *)(iVar7 + 0xc);
          param_3 = param_3 + 0x10;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
      }
    }
  }
  else if (uVar4 == 0x1e) {
    uVar15 = 0;
    if ((uVar14 & 0xffffffff) != 0) {
      uVar10 = ((ulonglong)uVar13 & 0xfffffff) * 0x10 + uVar11;
      param_3 = param_3 - uVar11;
      uVar9 = uVar11;
      dVar22 = lbl_82005710;
      do {
        lVar18 = fn_8297FBF0(param_1,&uStack_80,uVar9 + (uVar12 - uVar11));
        if (lVar18 < 0) goto LAB_829866a0;
        uVar5 = uVar9;
        if ((double)CONCAT44(uStack_80,uStack_7c) == dVar22) {
          uVar5 = uVar10;
        }
        lVar18 = fn_82980150(param_1,uVar9 + param_3,uVar5);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar15 = uVar15 + 1;
        uVar9 = uVar9 + 0x10;
        uVar10 = uVar10 + 0x10;
      } while ((uVar15 & 0xffffffff) < (uVar14 & 0xffffffff));
    }
  }
  else {
    uVar10 = 0;
    uVar8 = 3;
    uVar9 = uVar12;
    if ((uVar14 & 0xffffffff) != 0) {
      do {
        lVar18 = fn_8297FBF0(param_1,uVar9 + 8);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar10 = uVar10 + 1;
        *(undefined4 *)uVar9 = (int)uVar8;
        uVar9 = uVar9 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar14 & 0xffffffff));
    }
    uVar10 = 0;
    uVar9 = uVar11;
    if ((uVar15 & 0xffffffff) != 0) {
      do {
        lVar18 = fn_8297FBF0(param_1,uVar9 + 8);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar10 = uVar10 + 1;
        *(undefined4 *)uVar9 = (int)uVar8;
        uVar9 = uVar9 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    if (((iVar17 != 0) && ((uVar14 & 0xffffffff) != (ulonglong)uVar13)) ||
       ((iVar16 != 0 && ((uVar15 & 0xffffffff) != (ulonglong)uVar13)))) goto LAB_82986698;
    uVar4 = 0;
    if (uVar13 != 0) {
      lVar18 = uVar11 + 8;
      dVar22 = lbl_82005758;
      dVar23 = lbl_82005710;
      do {
        pdVar2 = (double *)lVar18;
        dVar19 = dVar23;
        if ((uVar12 & 0xffffffff) != 0) {
          dVar19 = *(double *)(((int)uVar12 - (int)uVar11) + (int)pdVar2);
        }
        dVar21 = dVar23;
        if ((uVar11 & 0xffffffff) != 0) {
          dVar21 = *pdVar2;
        }
        dVar20 = dVar19;
        dVar3 = dVar23;
        switch(*(undefined4 *)(iVar7 + 0x1c)) {
        case 4:
          dVar21 = dVar23;
          goto code_r0x829863e8;
        case 5:
          dVar20 = -dVar19;
          break;
        case 6:
          break;
        default:
          goto LAB_82986698;
        case 8:
          dVar20 = dVar21 * dVar19;
          break;
        case 9:
          if (dVar21 == dVar23) goto LAB_82986698;
          dVar20 = dVar19 / dVar21;
          break;
        case 10:
          if (dVar21 == dVar23) goto LAB_82986698;
          dVar20 = (double)fn_82F6A7A0();
          break;
        case 0xb:
          dVar20 = dVar21 + dVar19;
          break;
        case 0xc:
          dVar20 = dVar19 - dVar21;
          break;
        case 0xf:
          dVar20 = dVar22;
          if (dVar19 < dVar21) break;
          goto code_r0x829864e0;
        case 0x10:
          dVar20 = dVar22;
          if (dVar19 <= dVar21) goto code_r0x829864e0;
          break;
        case 0x11:
          dVar20 = dVar22;
          if (dVar21 < dVar19) goto code_r0x829864e0;
          break;
        case 0x12:
          dVar20 = dVar22;
          if (dVar19 < dVar21) goto code_r0x829864e0;
          break;
        case 0x13:
code_r0x829863e8:
          dVar20 = dVar22;
          if (dVar19 != dVar21) {
code_r0x829864e0:
            dVar20 = dVar23;
          }
          break;
        case 0x14:
          dVar3 = dVar19;
          goto code_r0x829864dc;
        case 0x18:
          if (dVar19 == dVar23) goto code_r0x829864e0;
code_r0x829864dc:
          dVar20 = dVar22;
          if (dVar21 != dVar3) break;
          goto code_r0x829864e0;
        case 0x19:
          dVar20 = dVar22;
          if (dVar19 == dVar23) goto code_r0x829864dc;
        }
        uVar4 = uVar4 + 1;
        *(double *)(((int)param_3 - (int)uVar11) + (int)pdVar2) = dVar20;
        lVar18 = lVar18 + 0x10;
      } while (uVar4 < uVar13);
    }
    uVar14 = 0;
    if (uVar13 != 0) {
      do {
        lVar18 = fn_829803A8(*(undefined8 *)((int)param_3 + 8),param_1);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar14 = uVar14 + 1;
        param_3 = param_3 + 0x10;
      } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
    }
  }
  lVar18 = 0;
LAB_829866a0:
  fn_8265C990(uVar11,0x24810000);
  fn_8265C990(uVar12,0x24810000);
  return lVar18;
}
/* @@ end fn_829860E0 */
