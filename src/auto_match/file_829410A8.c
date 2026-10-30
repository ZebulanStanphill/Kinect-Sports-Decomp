/* file_829410A8: functions fn_829410A8..fn_82949650, grouped as one unit because they appear
 * to come from one original source file.
 *
 * The game was built with link-time code generation. Once a variadic function
 * that uses va_start has been compiled, every call to it reserves an outgoing
 * parameter area of 8*(n+8) bytes instead of 8*max(n,8), so its callers have a
 * larger frame and cannot tail-call. Those callers only match when the
 * variadic function is defined in the same unit, as it was in the original
 * file (see CONTRIBUTING.md).
 *
 * Compiled as one unit with /O1 /Oi. Each function's declarations and
 * code sit between its @@ begin/end markers, in address order; km/try.py
 * replaces one region with a candidate to test it in place. */

typedef char *va_list;
typedef struct Emitter {
  char pad[0x5fc];
  char *text;
  unsigned int length;
  unsigned int unk604;
  unsigned int indent;
} Emitter;
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
#define ZEXT48(x) ((U64)((U32)(x)))
typedef struct Obj { char pad[0x608]; int depth; } Obj;
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))

/* @@ end of shared declarations */

/* @@ begin fn_829410A8 */
extern void __cdecl __va_start(va_list *, ...);
extern int fn_828F5960(char *buf, unsigned int size, const char *fmt, va_list ap);
extern int fn_82940C38(Emitter *e, unsigned int size);
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern unsigned int strlen(const char *s);

int fn_829410A8(Emitter *e, const char *fmt, ...)
{
  va_list ap;
  char buf[0x800];
  unsigned int n;
  int hr;
  __va_start(&ap, fmt);
  fn_828F5960(buf, sizeof(buf), fmt, ap);
  buf[sizeof(buf) - 1] = 0;
  n = strlen(buf);
  hr = fn_82940C38(e, n);
  if (hr >= 0) {
    memcpy(e->text + e->length, buf, n);
    e->length += n;
    hr = 0;
  }
  return hr;
}
/* @@ end fn_829410A8 */

/* @@ begin fn_82941178 */
extern int fn_829410A8(Emitter *e, const char *fmt, ...);

int fn_82941178(Emitter *e)
{
  unsigned int i;
  for (i = 0; i < e->indent; i++) {
    int hr = fn_829410A8(e, "    ");
    if (hr < 0) {
      return hr;
    }
  }
  return 0;
}
/* @@ end fn_82941178 */

/* @@ begin fn_829411D0 */
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8
fn_829411D0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5
             ,ulonglong param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x718) != 0) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_a0,0x20,param_3,uVar2,uVar2);
      fn_828F6FA8(auStack_c0,0x20,param_4,uVar2,uVar2);
      uVar1 = fn_829410A8(param_1,0xffffffff82034748,auStack_a0,param_2,auStack_c0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((param_5 & 0xffffffff) != 0) {
        fn_828F6FA8(auStack_80,0x20,param_5,uVar2,uVar2);
        uVar1 = fn_829410A8(param_1,0xffffffff821ce420,auStack_80);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      if ((param_6 & 0xffffffff) != 0) {
        fn_828F6FA8(auStack_80,0x20,param_6,uVar2,uVar2);
        uVar1 = fn_829410A8(param_1,0xffffffff821ce420,auStack_80);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      uVar1 = fn_829410A8(param_1,0xffffffff82034754);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x718));
  }
  return 0;
}
/* @@ end fn_829411D0 */

/* @@ begin fn_82941320 */
extern int fn_828F5960();
extern int fn_828F6FA8();
extern unsigned int lbl_8315B5D8;
extern unsigned int lbl_8315B5E4;
extern unsigned int lbl_8315B610;
extern unsigned int lbl_8315B624;
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_82941320(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             ulonglong param_5,longlong param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uStack00000028;
  ulonglong uStack00000030;
  longlong lStack00000038;
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  
  uVar2 = ((param_2 & 0xffffffff) >> 0x14 & 0x700 | param_2 & 0x1800) >> 8;
  if (uVar2 < 0xf) {
    if (uVar2 == 0xe) {
      uStack00000040 = 0xffffffff8315b5d8;
      param_6 = -0x7dfd0000;
      param_5 = param_2 & 0x7ff;
      uVar1 = 0xffffffff82034774;
      uStack00000028 = ZEXT48(lbl_8315B610);
      goto fn_828F6FA8;
    }
    if (1 < uVar2) {
      if (uVar2 == 3) {
        uStack00000040 = 0xffffffff8315b5d8;
        param_6 = -0x7dfd0000;
        param_5 = param_2 & 0x7ff;
        uVar1 = 0xffffffff82034788;
        uStack00000028 = ZEXT48(lbl_8315B5E4);
        goto fn_828F6FA8;
      }
      if ((uVar2 < 5) || (6 < uVar2)) goto code_r0x829413d4;
    }
  }
  else if (uVar2 != 0xf) {
    if (uVar2 == 0x13) {
      param_2 = 0xffffffff8315b5d8;
      uStack00000040 = 0xffffffff82030000;
      uVar1 = 0xffffffff8203475c;
      uStack00000028 = ZEXT48(lbl_8315B624);
      goto fn_828F6FA8;
    }
code_r0x829413d4:
    param_6 = uVar2 << 2;
    uStack00000040 = 0xffffffff8315b5d8;
    uVar2 = param_2 & 0x7ff;
    param_2 = 0xffffffff82030000;
    param_5 = uVar2 + param_5;
    uVar1 = 0xffffffff82034768;
    uStack00000028 = (ulonglong)*(uint *)((int)&lbl_8315B5D8 + (int)param_6);
    goto fn_828F6FA8;
  }
  uStack00000040 = 0xffffffff8315b5d8;
  param_6 = -0x7dfd0000;
  param_5 = param_2 & 0x7ff;
  uVar1 = 0xffffffff82034798;
  uStack00000028 = (ulonglong)*(uint *)((int)&lbl_8315B5D8 + (int)(uVar2 << 2));
fn_828F6FA8:
  if ((param_4 & 0xffffffff) < 0x80000000) {
    uStack00000030 = param_5;
    lStack00000038 = param_6;
    uStack00000048 = param_2;
    uVar1 = fn_828F5960(param_3,param_4,uVar1,&stack0x00000028);
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}
/* @@ end fn_82941320 */

/* @@ begin fn_82941418 */
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82941418(int *param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = ((int (*)())fn_82941178)();
  if (((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820347b4), -1 < (int)uVar1)) &&
     (uVar1 = (**(code **)(*param_1 + 0x184))
                        (param_1,0xffffffff820347ac,(param_2 & 0xffffffff) >> 0x10 & 1,
                         (param_2 & 0xffffffff) >> 0x11 & 1,(param_2 & 0xffffffff) >> 0x12 & 1,
                         (param_2 & 0xffffffff) >> 0x13 & 1), -1 < (int)uVar1)) {
    uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}
/* @@ end fn_82941418 */

/* @@ begin fn_829414C0 */
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_829414C0(int *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((param_1[0x1c5] != 0) && (uVar2 = 0, param_1[0x1c6] != 0)) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347c0,uVar2);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = (**(code **)(*param_1 + 0x1b4))(param_1,0xffffffff82034404,uVar2);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
  }
  return 0;
}
/* @@ end fn_829414C0 */

/* @@ begin fn_82941580 */
extern unsigned int *auStack_60;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82941580(int *param_1,uint param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_60 [96];
  
  if (param_2 != 0) {
    if ((param_2 & 0x550000) == 0) {
      cVar2 = ((param_2 & 0xaa0000) == 0) + '\x02';
    }
    else {
      cVar2 = '\x01';
    }
    uVar3 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_60,0x20,0xffffffff820347d0,uVar3);
        uVar1 = fn_829410A8(param_1,0xffffffff820347c0,uVar3);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_60,cVar2,cVar2,cVar2,cVar2);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
  }
  return 0;
}
/* @@ end fn_82941580 */

/* @@ begin fn_82941680 */
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8
fn_82941680(int *param_1,undefined8 param_2,uint param_3,int param_4,int param_5,ulonglong param_6
             )

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  if ((param_3 != 0) && (uVar4 = 0, param_1[0x1c6] != 0)) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_b0,0x20,0xffffffff820347dc,uVar4);
      fn_828F6FA8(auStack_d0,0x20,param_2,uVar4,uVar4);
      uVar1 = 0xffffffff820347e8;
      if (param_4 == 0) {
        uVar1 = 0xffffffff820347d0;
      }
      fn_828F6FA8(auStack_f0,0x20,uVar1,uVar4);
      puVar2 = auStack_b0;
      if (param_5 == 0) {
        puVar2 = auStack_d0;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,puVar2);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((param_6 & 0xffffffff) == 0) {
        puVar2 = auStack_b0;
      }
      else {
        fn_828F6FA8(auStack_90,0x20,param_6,uVar4,uVar4);
        puVar2 = auStack_90;
      }
      if ((param_3 & 0xd000000) == 0) {
        puVar3 = auStack_d0;
      }
      else {
        puVar3 = puVar2;
        puVar2 = auStack_d0;
      }
      uVar1 = (**(code **)(*param_1 + 400))(param_1,puVar3,puVar2,auStack_f0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
  }
  return 0;
}
/* @@ end fn_82941680 */

/* @@ begin fn_82941800 */
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82941800(int *param_1,undefined8 param_2,int param_3,int param_4,ulonglong param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  if ((param_3 != 0xf0000) && (uVar3 = 0, param_1[0x1c6] != 0)) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_b0,0x20,0xffffffff820347dc,uVar3);
      fn_828F6FA8(auStack_90,0x20,param_2,uVar3,uVar3);
      puVar2 = auStack_b0;
      if (param_4 == 0) {
        puVar2 = auStack_90;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,puVar2);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((param_5 & 0xffffffff) == 0) {
        puVar2 = auStack_b0;
      }
      else {
        fn_828F6FA8(auStack_70,0x20,param_5,uVar3,uVar3);
        puVar2 = auStack_70;
      }
      uVar1 = (**(code **)(*param_1 + 400))(param_1,auStack_90,puVar2,0xffffffff820347fc);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
  }
  return 0;
}
/* @@ end fn_82941800 */

/* @@ begin fn_82941938 */
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82941938(int *param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  if ((param_1[0x1c5] != 0) && (uVar3 = 0, param_1[0x1c6] != 0)) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_d0,0x20,0xffffffff820347dc,uVar3);
      fn_828F6FA8(auStack_b0,0x20,param_2,uVar3,uVar3);
      fn_828F6FA8(auStack_70,0x20,0xffffffff820347e8,uVar3);
      puVar2 = auStack_d0;
      if (param_3 == 0) {
        puVar2 = auStack_b0;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,puVar2);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((param_4 & 0xffffffff) == 0) {
        puVar2 = auStack_d0;
      }
      else {
        fn_828F6FA8(auStack_90,0x20,param_4,uVar3,uVar3);
        puVar2 = auStack_90;
      }
      uVar1 = (**(code **)(*param_1 + 400))(param_1,auStack_b0,puVar2,auStack_70);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
  }
  return 0;
}
/* @@ end fn_82941938 */

/* @@ begin fn_82941A88 */
extern unsigned int *auStack_70;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82941A88(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auStack_70 [96];
  
  uVar1 = ((int (*)())fn_82941178)();
  if (-1 < (int)uVar1) {
    fn_828F6FA8(auStack_70,0x40,0xffffffff82034810,param_3,param_4);
    uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,auStack_70,param_2);
    if (((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))
       && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) {
      uVar1 = fn_829410A8(param_1,0xffffffff82034804,param_4);
      uVar1 = (int)uVar1 >> 0x1f & uVar1;
    }
  }
  return uVar1;
}
/* @@ end fn_82941A88 */

/* @@ begin fn_82941B40 */
extern unsigned int *auStack_70;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82941B40(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auStack_70 [96];
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((((-1 < (int)uVar1) &&
       (uVar1 = fn_829410A8(param_1,0xffffffff82034820,param_4), -1 < (int)uVar1)) &&
      (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
     (uVar1 = fn_829410A8(param_1,0xffffffff820347f4,param_2), -1 < (int)uVar1)) {
    fn_828F6FA8(auStack_70,0x40,0xffffffff82034810,param_3,param_4);
    uVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,auStack_70);
    if (-1 < (int)uVar1) {
      uVar1 = fn_829410A8(param_1,0xffffffff82034818);
      uVar1 = (int)uVar1 >> 0x1f & uVar1;
    }
  }
  return uVar1;
}
/* @@ end fn_82941B40 */

/* @@ begin fn_82941C10 */
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82941C10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = ((int (*)())fn_82941178)();
  if (((-1 < (int)uVar1) &&
      (uVar1 = fn_829410A8(param_1,0xffffffff82034828,param_3,param_4,param_2), -1 < (int)uVar1))
     && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) {
    uVar1 = fn_829410A8(param_1,0xffffffff82034804,param_4);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}
/* @@ end fn_82941C10 */

/* @@ begin fn_82941C90 */
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82941C90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = ((int (*)())fn_82941178)();
  if (((-1 < (int)uVar1) &&
      (uVar1 = fn_829410A8(param_1,0xffffffff82034820,param_4), -1 < (int)uVar1)) &&
     (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) {
    uVar1 = fn_829410A8(param_1,0xffffffff82034838,param_2,param_3,param_4);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}
/* @@ end fn_82941C90 */

/* @@ begin fn_82941D10 */
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82941D10(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x210))
                    (param_1,0xffffffff82034404,0xffffffff82034414,0xffffffff82034428);
  if (-1 < (int)uVar1) {
    if ((param_1[param_1[0x1c4] + 0x1a3] == 2) || (param_1[param_1[0x1c4] + 0x1a3] == 3)) {
      uVar1 = (**(code **)(*param_1 + 0x234))(param_1,0xffffffff8203484c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = 0xffffffff821bab90;
    }
    else {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff8203485c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = (**(code **)(*param_1 + 0x1cc))(param_1,0xffffffff82034404,0xffffffff8203484c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = 0xffffffff82034818;
    }
    uVar1 = fn_829410A8(param_1,uVar1);
    if (-1 < (int)uVar1) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
/* @@ end fn_82941D10 */

/* @@ begin fn_82941E30 */
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82941E30(int *param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = ((int (*)())fn_82941178)();
  if (((-1 < (int)uVar1) &&
      (uVar1 = fn_829410A8(param_1,0xffffffff820347f4,param_2), -1 < (int)uVar1)) &&
     (uVar1 = (**(code **)(*param_1 + 0x188))(param_1), -1 < (int)uVar1)) {
    uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}
/* @@ end fn_82941E30 */

/* @@ begin fn_82941EC0 */
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_8295EBC8();


void fn_82941EC0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x21c))();
  if ((((((-1 < iVar1) &&
         (iVar1 = (**(code **)(*param_1 + 0x238))(param_1,0xffffffff82034404,1,1), -1 < iVar1)) &&
        (iVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,0xffffffff82034404,0xffffffff820347fc),
        -1 < iVar1)) &&
       ((iVar1 = fn_82941178(param_1), -1 < iVar1 &&
        (iVar1 = fn_829410A8(param_1,0xffffffff82034878), -1 < iVar1)))) &&
      ((iVar1 = (**(code **)(*param_1 + 0x1ec))(param_1), -1 < iVar1 &&
       ((iVar1 = fn_829410A8(param_1,0xffffffff82034874), -1 < iVar1 &&
        (iVar1 = fn_82941178(param_1), -1 < iVar1)))))) &&
     (iVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < iVar1)) {
    param_1[0x1c5] = param_1[0x1c5] + 1;
    param_1[param_1[0x1c4] + 0x1a4] = 1;
    param_1[0x1c4] = param_1[0x1c4] + 1;
    param_1[0x182] = param_1[0x182] + 1;
    fn_8295EBC8(param_1);
  }
  return;
}
/* @@ end fn_82941EC0 */

/* @@ begin fn_82942028 */
extern unsigned int *auStack_70;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_8295EEB8();


void fn_82942028(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [112];
  
  if (param_1[param_1[0x1c4] + 0x1a3] == 0) {
    param_1[0x182] = param_1[0x182] + -1;
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034894);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    uVar2 = 0xffffffff82034880;
  }
  else {
    if (param_1[param_1[0x1c4] + 0x1a3] != 1) goto LAB_82942280;
    param_1[0x182] = param_1[0x182] + -1;
    iVar1 = ((int (*)())fn_82941178)();
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034894);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff820347b4);
    if (iVar1 < 0) {
      return;
    }
    fn_828F6FA8(auStack_70,0x40,0xffffffff82034888,0xffffffff82034414,0xffffffff82034428);
    iVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,auStack_70);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff820347a8);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff8203485c);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x1cc))(param_1,0xffffffff820347fc,0xffffffff82034404);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff820347a8);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,0xffffffff82034404,0xffffffff820347fc);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034878);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x1ec))(param_1);
    if (iVar1 < 0) {
      return;
    }
    uVar2 = 0xffffffff82034874;
  }
  iVar1 = fn_829410A8(param_1,uVar2);
  if (iVar1 < 0) {
    return;
  }
  iVar1 = fn_82941178(param_1);
  if (iVar1 < 0) {
    return;
  }
  iVar1 = fn_829410A8(param_1,0xffffffff82034870);
  if (iVar1 < 0) {
    return;
  }
  param_1[0x182] = param_1[0x182] + 1;
LAB_82942280:
  fn_8295EEB8(param_1);
  return;
}
/* @@ end fn_82942028 */

/* @@ begin fn_82942290 */
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_8295EF20();


void fn_82942290(int *param_1)

{
  int iVar1;
  
  if (param_1[param_1[0x1c4] + 0x1a3] == 0) {
    param_1[0x182] = param_1[0x182] + -1;
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034898);
  }
  else {
    if (param_1[param_1[0x1c4] + 0x1a3] != 1) goto LAB_82942318;
    param_1[0x1c5] = param_1[0x1c5] + -1;
    param_1[0x182] = param_1[0x182] + -1;
    iVar1 = ((int (*)())fn_82941178)();
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034898);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x220))(param_1);
  }
  if (iVar1 < 0) {
    return;
  }
LAB_82942318:
  param_1[0x1c4] = param_1[0x1c4] + -1;
  fn_8295EF20(param_1);
  return;
}
/* @@ end fn_82942290 */

/* @@ begin fn_82942370 */
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_8295D9B8();
extern int fn_8295DA20();


void fn_82942370(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x1c5] = param_1[0x1c5] + -1;
  iVar1 = (**(code **)(*param_1 + 0x234))(param_1,0xffffffff820347fc);
  if ((-1 < iVar1) &&
     (iVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,0xffffffff82034404,0xffffffff820347fc),
     -1 < iVar1)) {
    param_1[0x182] = param_1[0x182] + -1;
    iVar1 = fn_82941178(param_1);
    if (((-1 < iVar1) && (iVar1 = fn_829410A8(param_1,0xffffffff82034898), -1 < iVar1)) &&
       ((((param_2 == 0 || (iVar1 = (**(code **)(*param_1 + 0x228))(param_1), -1 < iVar1)) &&
         (iVar1 = (**(code **)(*param_1 + 0x230))(param_1), -1 < iVar1)) &&
        (iVar1 = (**(code **)(*param_1 + 0x220))(param_1), -1 < iVar1)))) {
      param_1[0x1c4] = param_1[0x1c4] + -1;
      if (param_2 == 0) {
        fn_8295D9B8(param_1);
      }
      else {
        fn_8295DA20();
      }
    }
  }
  return;
}
/* @@ end fn_82942370 */

/* @@ begin fn_82942498 */
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_8295DA88();


void fn_82942498(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x238))(param_1,0xffffffff8203484c,0,0);
  if ((((-1 < iVar1) && (iVar1 = fn_82941178(param_1), -1 < iVar1)) &&
      (iVar1 = fn_829410A8(param_1,0xffffffff8203485c), -1 < iVar1)) &&
     ((iVar1 = (**(code **)(*param_1 + 0x1cc))(param_1,0xffffffff82034404,0xffffffff8203484c),
      -1 < iVar1 && (iVar1 = fn_829410A8(param_1,0xffffffff82034818), -1 < iVar1)))) {
    fn_8295DA88(param_1);
  }
  return;
}
/* @@ end fn_82942498 */

/* @@ begin fn_82942568 */
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();


undefined8
fn_82942568(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar1 = 0x73a00000;
  if (param_2 == 0) {
    uVar1 = 0x73900000;
  }
  fn_82936290(auStack_80,0x20,0xffffffff820347dc);
  uVar1 = (**(code **)(*param_1 + 0x1e4))(param_1,uVar1,auStack_80,param_4,param_5);
  if ((((-1 < (int)uVar1) && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
      (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)) &&
     ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,3,3,3,3), -1 < (int)uVar1
      && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))) {
    uVar2 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_60,0x20,param_3,uVar2,uVar2);
        fn_828F6FA8(auStack_80,0x20,0xffffffff820347dc,uVar2);
        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_60);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 400))(param_1,auStack_80,0xffffffff820348a0,auStack_80);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = 0;
  }
  return uVar1;
}
/* @@ end fn_82942568 */

/* @@ begin fn_82942720 */
extern unsigned int *auStack_110;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82F65390();


undefined8 fn_82942720(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  uVar1 = ((int (*)())fn_82941178)();
  if (((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
       && (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,3,0,0,0),
          -1 < (int)uVar1)) &&
      ((uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1 &&
       (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)))) &&
     ((uVar1 = fn_829410A8(param_1,0xffffffff820348d0), -1 < (int)uVar1 &&
      ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,1,0,0), -1 < (int)uVar1
       && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))))) {
    uVar4 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_110,0x20,param_4,uVar4,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_f0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 400))
                          (param_1,0xffffffff820348a0,auStack_110,0xffffffff820348c8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = fn_82941178(param_1);
    if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
        && (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,0,3,0),
           -1 < (int)uVar1)) &&
       (((uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1 &&
         (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
        ((uVar1 = fn_829410A8(param_1,0xffffffff820348d0), -1 < (int)uVar1 &&
         ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,1,0,0),
          -1 < (int)uVar1 && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))))
        )))) {
      iVar2 = fn_82F65390(param_3,0xffffffff820348b4,7);
      if (iVar2 == 0) {
        uVar1 = 0xffffffff820347dc;
      }
      else {
        uVar1 = 0xffffffff820347e8;
      }
      fn_82936290(auStack_b0,0x20,uVar1);
      uVar4 = 0;
      uVar3 = 0;
      if (param_1[0x1c6] != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_110,0x20,param_4,uVar4,uVar4);
          fn_828F6FA8(auStack_d0,0x20,auStack_b0,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_d0);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = (**(code **)(*param_1 + 400))
                            (param_1,0xffffffff820348a0,auStack_110,0xffffffff820348c8);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar3 = param_1[0x1c6];
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
      }
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_90,0x20,param_2,uVar4,uVar4);
          fn_828F6FA8(auStack_110,0x20,param_3,uVar4,uVar4);
          fn_828F6FA8(auStack_d0,0x20,auStack_b0,uVar4);
          fn_828F6FA8(auStack_f0,0x20,0xffffffff820348bc,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_90);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = (**(code **)(*param_1 + 0x208))(param_1,auStack_110,auStack_d0,auStack_f0);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
/* @@ end fn_82942720 */

/* @@ begin fn_82942B98 */
extern unsigned int *auStack_100;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82942B98(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [160];
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
      && (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,3,3,3,3),
         -1 < (int)uVar1)) && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))
  {
    uVar4 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_c0,3,3,3,3);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = fn_82941178(param_1);
    if (((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
       && ((uVar1 = (**(code **)(*param_1 + 0x19c))(param_1,0xffffffff820348a0,7), -1 < (int)uVar1
           && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))) {
      uVar4 = 0;
      if (param_1[0x1c6] != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
          fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_c0,1,1,1,1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
      }
      uVar1 = fn_82941178(param_1);
      if (((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)
          ) && (((uVar1 = (**(code **)(*param_1 + 0x198))(param_1,0xffffffff820348a0,0),
                 -1 < (int)uVar1 &&
                 (((uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1 &&
                   (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
                  (uVar1 = fn_829410A8(param_1,0xffffffff820348d0), -1 < (int)uVar1)))) &&
                ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820348f0,0,0,0,0),
                 -1 < (int)uVar1 &&
                 (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))))) {
        uVar4 = 0;
        if (param_1[0x1c6] != 0) {
          do {
            uVar1 = fn_82941178(param_1);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
            uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar1 = (**(code **)(*param_1 + 0x1f0))(param_1,auStack_100,0xffffffff820348a0);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
        }
        uVar1 = fn_82941178(param_1);
        if (((-1 < (int)uVar1) &&
            (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)) &&
           ((uVar1 = (**(code **)(*param_1 + 0x1d4))(param_1,0xffffffff820348a0,0xffffffff820348c8),
            -1 < (int)uVar1 && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))
           )) {
          uVar4 = 0;
          uVar3 = 0;
          if (param_1[0x1c6] != 0) {
            do {
              uVar1 = fn_82941178(param_1);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
              uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar3 = param_1[0x1c6];
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
          }
          uVar4 = 0;
          uVar2 = 0;
          if (uVar3 != 0) {
            do {
              uVar1 = fn_82941178(param_1);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
              uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = (**(code **)(*param_1 + 500))(param_1,auStack_100,0xffffffff820348a0);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar2 = param_1[0x1c6];
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
          }
          uVar4 = 0;
          uVar3 = 0;
          if (uVar2 != 0) {
            do {
              uVar1 = fn_82941178(param_1);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              fn_828F6FA8(auStack_e0,0x20,0xffffffff820347e8,uVar4);
              fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
              uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = (**(code **)(*param_1 + 0x204))(param_1,auStack_e0,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar3 = param_1[0x1c6];
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
          }
          uVar4 = 0;
          if (uVar3 != 0) {
            do {
              uVar1 = fn_82941178(param_1);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
              uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = (**(code **)(*param_1 + 0x1fc))(param_1,auStack_100);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
          }
          uVar1 = fn_82941178(param_1);
          if ((((-1 < (int)uVar1) &&
               (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)) &&
              (uVar1 = (**(code **)(*param_1 + 0x188))(param_1), -1 < (int)uVar1)) &&
             (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)) {
            uVar4 = 0;
            if (param_1[0x1c6] != 0) {
              do {
                uVar1 = fn_82941178(param_1);
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
                fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
                uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_c0,1,1,1,1);
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                uVar4 = uVar4 + 1;
              } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
            }
            fn_82936290(auStack_100,0x20,0xffffffff820347e8);
            uVar1 = (**(code **)(*param_1 + 0x1e4))
                              (param_1,0x73a00000,auStack_100,0xffffffff820348a0,auStack_100);
            if (-1 < (int)uVar1) {
              uVar4 = 0;
              uVar3 = 0;
              if (param_1[0x1c6] != 0) {
                do {
                  uVar1 = fn_82941178(param_1);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
                  fn_828F6FA8(auStack_e0,0x20,0xffffffff820347dc,uVar4);
                  uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_e0);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar1 = (**(code **)(*param_1 + 0x1dc))(param_1,auStack_c0,1);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar3 = param_1[0x1c6];
                  uVar4 = uVar4 + 1;
                } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
              }
              uVar4 = 0;
              if (uVar3 != 0) {
                do {
                  uVar1 = fn_82941178(param_1);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  fn_828F6FA8(auStack_e0,0x20,0xffffffff820347e8,uVar4);
                  fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
                  uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar1 = (**(code **)(*param_1 + 400))
                                    (param_1,0xffffffff820348a0,auStack_100,auStack_e0);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                  if ((int)uVar1 < 0) {
                    return uVar1;
                  }
                  uVar4 = uVar4 + 1;
                } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
              }
              uVar1 = fn_82941178(param_1);
              if ((((-1 < (int)uVar1) &&
                   (uVar1 = fn_829410A8(param_1,0xffffffff820348d0), -1 < (int)uVar1)) &&
                  ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,1,0,0),
                   -1 < (int)uVar1 &&
                   ((uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1 &&
                    (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)))))) &&
                 ((uVar1 = fn_829410A8(param_1,0xffffffff820348e4), -1 < (int)uVar1 &&
                  ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,3,3,3,3),
                   -1 < (int)uVar1 &&
                   (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))))) {
                uVar4 = 0;
                if (param_1[0x1c6] != 0) {
                  do {
                    uVar1 = fn_82941178(param_1);
                    if ((int)uVar1 < 0) {
                      return uVar1;
                    }
                    fn_828F6FA8(auStack_e0,0x20,0xffffffff820347dc,uVar4);
                    fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
                    uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                    if ((int)uVar1 < 0) {
                      return uVar1;
                    }
                    uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_e0,1,1,1,1);
                    if ((int)uVar1 < 0) {
                      return uVar1;
                    }
                    uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                    if ((int)uVar1 < 0) {
                      return uVar1;
                    }
                    uVar4 = uVar4 + 1;
                  } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
                }
                fn_82936290(auStack_100,0x20,0xffffffff820347e8);
                uVar1 = (**(code **)(*param_1 + 0x1e4))
                                  (param_1,0x73a00000,auStack_100,0xffffffff820348a0,auStack_100);
                if (-1 < (int)uVar1) {
                  uVar4 = 0;
                  uVar3 = 0;
                  if (param_1[0x1c6] != 0) {
                    do {
                      uVar1 = fn_82941178(param_1);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      fn_828F6FA8(auStack_e0,0x20,0xffffffff820347e8,uVar4);
                      fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
                      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar1 = (**(code **)(*param_1 + 400))
                                        (param_1,0xffffffff820348a0,auStack_100,auStack_e0);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar3 = param_1[0x1c6];
                      uVar4 = uVar4 + 1;
                    } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
                  }
                  uVar4 = 0;
                  if (uVar3 != 0) {
                    do {
                      uVar1 = fn_82941178(param_1);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      fn_828F6FA8(auStack_e0,0x20,0xffffffff820347dc,uVar4);
                      fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
                      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_e0);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar1 = (**(code **)(*param_1 + 400))
                                        (param_1,0xffffffff820348a0,auStack_e0,auStack_100);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                      if ((int)uVar1 < 0) {
                        return uVar1;
                      }
                      uVar4 = uVar4 + 1;
                    } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
                  }
                  uVar1 = fn_82941178(param_1);
                  if ((((-1 < (int)uVar1) &&
                       (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)) &&
                      (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,1,1,0),
                      -1 < (int)uVar1)) &&
                     (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)) {
                    uVar4 = 0;
                    uVar3 = 0;
                    if (param_1[0x1c6] != 0) {
                      do {
                        uVar1 = fn_82941178(param_1);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        fn_828F6FA8(auStack_e0,0x20,0xffffffff820347dc,uVar4);
                        fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
                        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar1 = (**(code **)(*param_1 + 400))
                                          (param_1,auStack_100,auStack_e0,0xffffffff820348c8);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar3 = param_1[0x1c6];
                        uVar4 = uVar4 + 1;
                      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
                    }
                    uVar4 = 0;
                    if (uVar3 != 0) {
                      do {
                        uVar1 = fn_82941178(param_1);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        fn_828F6FA8(auStack_a0,0x20,param_2,uVar4,uVar4);
                        fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
                        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_a0);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar1 = (**(code **)(*param_1 + 400))
                                          (param_1,0xffffffff820348dc,auStack_100,0xffffffff820348a0
                                          );
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
                        if ((int)uVar1 < 0) {
                          return uVar1;
                        }
                        uVar4 = uVar4 + 1;
                      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
                    }
                    uVar1 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}
/* @@ end fn_82942B98 */

/* @@ begin fn_829439C0 */
extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82F65390();


undefined8
fn_829439C0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  iVar1 = fn_82F65390(param_3,0xffffffff820348f8,7);
  if ((iVar1 == 0) || (iVar1 = fn_82F65390(param_4,0xffffffff820348f8,7), iVar1 == 0)) {
    iVar1 = fn_82F65390(param_3,0xffffffff820348b4,7);
    if ((iVar1 == 0) || (iVar1 = fn_82F65390(param_4,0xffffffff820348b4,7), iVar1 == 0)) {
      uVar2 = 0xffffffff820347dc;
    }
    else {
      uVar2 = 0xffffffff820347e8;
    }
  }
  else {
    uVar2 = 0xffffffff820348bc;
  }
  fn_82936290(auStack_110,0x20,uVar2);
  uVar4 = 0;
  uVar3 = 0;
  if (param_1[0x1c6] != 0) {
    do {
      uVar2 = fn_82941178(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      fn_828F6FA8(auStack_d0,0x20,param_4,uVar4,uVar4);
      fn_828F6FA8(auStack_b0,0x20,param_5,uVar4,uVar4);
      fn_828F6FA8(auStack_f0,0x20,auStack_110,uVar4);
      uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_f0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = (**(code **)(*param_1 + 0x200))(param_1,auStack_b0,auStack_d0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar3 = param_1[0x1c6];
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      uVar2 = fn_82941178(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      fn_828F6FA8(auStack_70,0x20,param_3,uVar4,uVar4);
      fn_828F6FA8(auStack_d0,0x20,param_4,uVar4,uVar4);
      fn_828F6FA8(auStack_90,0x20,param_2,uVar4,uVar4);
      fn_828F6FA8(auStack_f0,0x20,auStack_110,uVar4);
      uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_90);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = (**(code **)(*param_1 + 0x208))(param_1,auStack_f0,auStack_70,auStack_d0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
  }
  return 0;
}
/* @@ end fn_829439C0 */

/* @@ begin fn_82943C38 */
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();
extern undefined8 fn_82941320();
extern int fn_8295D6A8();


void fn_82943C38(undefined8 param_1,ulonglong param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  ((undefined8 (*)())fn_82941320)(param_1,param_2 & 0xffffffff000007ff | 0xa0000000,auStack_80,0x40,0);
  fn_828F6FA8(auStack_a0,0x20,auStack_80,0,0);
  uVar3 = 0;
  pfVar2 = param_3;
  while( true ) {
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034900,auStack_a0,uVar3,(double)*pfVar2);
    if (iVar1 < 0) break;
    uVar3 = uVar3 + 1;
    pfVar2 = pfVar2 + 1;
    if (3 < (uVar3 & 0xffffffff)) {
      fn_8295D6A8(param_1,param_2,param_3);
      return;
    }
  }
  return;
}
/* @@ end fn_82943C38 */

/* @@ begin fn_82943CF0 */
extern int fn_829410A8();


undefined8
fn_82943CF0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,uint param_5
             ,ulonglong param_6)

{
  undefined8 uVar1;
  
  if ((((param_3 & 0xffffffff) == (param_4 & 0xffffffff)) &&
      ((param_3 & 0xffffffff) == (ulonglong)param_5)) &&
     ((param_3 & 0xffffffff) == (param_6 & 0xffffffff))) {
    if ((param_3 & 0xffffffff) == 0) {
      uVar1 = 0xffffffff82034928;
    }
    else if ((param_3 & 0xffffffff) == 1) {
      uVar1 = 0xffffffff82034938;
    }
    else if ((param_3 & 0xffffffff) < 3) {
      uVar1 = 0xffffffff82034948;
    }
    else {
      if ((param_3 & 0xffffffff) != 3) {
        return 0xffffffff80004005;
      }
      uVar1 = 0xffffffff82034958;
    }
    uVar1 = fn_829410A8(param_1,uVar1,param_2);
  }
  else {
    uVar1 = fn_829410A8(param_1,0xffffffff82034914,param_2,
                          (((((((param_3 | param_4 | (ulonglong)param_5 | param_6) & 0xfffffffc |
                               param_3 & 0xffffffff) & 0x3fffffff) << 2 | param_4 & 0xffffffff) &
                            0x3fffffff) << 2 | (ulonglong)param_5) & 0x3fffffff) << 2 | param_6);
  }
  return uVar1;
}
/* @@ end fn_82943CF0 */

/* @@ begin fn_82943DC8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943DC8(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vand(%s, %s)", param_2, param_3);
}
/* @@ end fn_82943DC8 */

/* @@ begin fn_82943E00 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943E00(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vandc(%s, %s)", param_2, param_3);
}
/* @@ end fn_82943E00 */

/* @@ begin fn_82943E38 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943E38(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vor(%s, %s)", param_2, param_3);
}
/* @@ end fn_82943E38 */

/* @@ begin fn_82943E70 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943E70(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vxor(%s, %s)", param_2, param_3);
}
/* @@ end fn_82943E70 */

/* @@ begin fn_82943EA8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943EA8(void *param_1)
{
  fn_829410A8(param_1, "__vspltisw(0)");
}
/* @@ end fn_82943EA8 */

/* @@ begin fn_82943ED0 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943ED0(void *param_1)
{
  fn_829410A8(param_1, "__vspltisw(-1)");
}
/* @@ end fn_82943ED0 */

/* @@ begin fn_82943EF8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943EF8(void *param_1, const char *param_2, const char *param_3, const char *param_4)
{
  fn_829410A8(param_1, "__vsel(%s, %s, %s)", param_2, param_3, param_4);
}
/* @@ end fn_82943EF8 */

/* @@ begin fn_82943F30 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943F30(void *param_1, const char *param_2)
{
  fn_829410A8(param_1, "__vrfin(%s)", param_2);
}
/* @@ end fn_82943F30 */

/* @@ begin fn_82943F60 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943F60(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vcfux(%s, %d)", param_2, param_3);
}
/* @@ end fn_82943F60 */

/* @@ begin fn_82943F98 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943F98(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vctuxs(%s, %d)", param_2, param_3);
}
/* @@ end fn_82943F98 */

/* @@ begin fn_82943FD0 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82943FD0(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vcfsx(%s, %d)", param_2, param_3);
}
/* @@ end fn_82943FD0 */

/* @@ begin fn_82944008 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82944008(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vctsxs(%s, %d)", param_2, param_3);
}
/* @@ end fn_82944008 */

/* @@ begin fn_82944040 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82944040(void *param_1, const char *param_2)
{
  fn_829410A8(param_1, "__vupkhsh(%s)", param_2);
}
/* @@ end fn_82944040 */

/* @@ begin fn_82944070 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82944070(void *param_1, const char *param_2)
{
  fn_829410A8(param_1, "__vupklsh(%s)", param_2);
}
/* @@ end fn_82944070 */

/* @@ begin fn_829440A0 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_829440A0(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vspltb(%s, %d)", param_2, param_3);
}
/* @@ end fn_829440A0 */

/* @@ begin fn_829440D8 */
extern int fn_829410A8();


void fn_829440D8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_829410A8(param_1,0xffffffff82034a88,param_3,param_2);
  return;
}
/* @@ end fn_829440D8 */

/* @@ begin fn_82944108 */
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82944108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((((-1 < (int)uVar1) &&
       (uVar1 = fn_829410A8(param_1,0xffffffff82034b0c,param_2), -1 < (int)uVar1)) &&
      (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
     (((uVar1 = fn_829410A8(param_1,0xffffffff82034ae4,param_2), -1 < (int)uVar1 &&
       (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
      ((uVar1 = fn_829410A8(param_1,0xffffffff82034ac8,param_2), -1 < (int)uVar1 &&
       (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)))))) {
    uVar1 = fn_829410A8(param_1,0xffffffff82034a9c,param_3);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}
/* @@ end fn_82944108 */

/* @@ begin fn_829441D8 */
extern int fn_829410A8();
extern int fn_82941178();


uint fn_829441D8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((((((-1 < (int)uVar1) &&
         (uVar1 = fn_829410A8(param_1,0xffffffff82034be0,param_2), -1 < (int)uVar1)) &&
        (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
       ((uVar1 = fn_829410A8(param_1,0xffffffff82034bb8,param_3,param_3), -1 < (int)uVar1 &&
        (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)))) &&
      ((uVar1 = fn_829410A8(param_1,0xffffffff82034b94,param_2), -1 < (int)uVar1 &&
       ((uVar1 = fn_82941178(param_1), -1 < (int)uVar1 &&
        (uVar1 = fn_829410A8(param_1,0xffffffff82034b70,param_2), -1 < (int)uVar1)))))) &&
     ((uVar1 = fn_82941178(param_1), -1 < (int)uVar1 &&
      ((uVar1 = fn_829410A8(param_1,0xffffffff82034b4c,param_2), -1 < (int)uVar1 &&
       (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)))))) {
    uVar1 = fn_829410A8(param_1,0xffffffff82034b28,param_2);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}
/* @@ end fn_829441D8 */

/* @@ begin fn_82944300 */
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82944300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = fn_829410A8(param_1,0xffffffff82034c1c,param_3,param_2);
  if ((-1 < (int)uVar1) && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) {
    uVar1 = fn_829410A8(param_1,0xffffffff82034c08,param_3,param_2);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}
/* @@ end fn_82944300 */

/* @@ begin fn_82944368 */
extern int fn_829410A8();


void fn_82944368(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  fn_829410A8(param_1,0xffffffff82034c34,param_2,param_2,(-param_3 & 3U) << 2);
  return;
}
/* @@ end fn_82944368 */

/* @@ begin fn_829443A8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_829443A8(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vminfp(%s, %s)", param_2, param_3);
}
/* @@ end fn_829443A8 */

/* @@ begin fn_829443E0 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_829443E0(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vmaxfp(%s, %s)", param_2, param_3);
}
/* @@ end fn_829443E0 */

/* @@ begin fn_82944418 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82944418(void *param_1, const char *param_2)
{
  fn_829410A8(param_1, "__vlogefp(%s)", param_2);
}
/* @@ end fn_82944418 */

/* @@ begin fn_82944448 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82944448(void *param_1, const char *param_2)
{
  fn_829410A8(param_1, "__vexptefp(%s)", param_2);
}
/* @@ end fn_82944448 */

/* @@ begin fn_82944478 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82944478(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vsubfp(%s, %s)", param_2, param_3);
}
/* @@ end fn_82944478 */

/* @@ begin fn_829444B0 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_829444B0(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vmulfp(%s, %s)", param_2, param_3);
}
/* @@ end fn_829444B0 */

/* @@ begin fn_829444E8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_829444E8(void *param_1, const char *param_2, const char *param_3, const char *param_4)
{
  fn_829410A8(param_1, "__vmaddfp(%s, %s, %s)", param_2, param_3, param_4);
}
/* @@ end fn_829444E8 */

/* @@ begin fn_82944520 */
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8
fn_82944520(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [112];
  
  uVar4 = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x718) != 0) {
    uVar3 = 0xffffffff82034d04;
    do {
      fn_828F6FA8(auStack_90,0x20,param_4,uVar4,uVar4);
      fn_828F6FA8(auStack_b0,0x20,param_5,uVar4,uVar4);
      fn_828F6FA8(auStack_d0,0x20,param_3,uVar4,uVar4);
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_d0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = uVar3;
      if (param_2 < 0x74400001) {
        if (param_2 != 0x74400000) {
          if (param_2 == 0x73900000) goto LAB_82944714;
          uVar1 = 0xffffffff82034cf8;
          if (((param_2 != 0x73a00000) && (uVar1 = uVar3, param_2 != 0x73b00000)) &&
             (param_2 != 0x73c00000)) {
            return 0xffffffff80004005;
          }
        }
      }
      else if ((param_2 != 0x74500000) && (uVar1 = 0xffffffff82034cf8, param_2 != 0x74600000)) {
        if (param_2 != 0x74700000) {
          return 0xffffffff80004005;
        }
LAB_82944714:
        uVar1 = 0xffffffff82034cec;
      }
      uVar1 = fn_829410A8(param_1,uVar1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff82034d10,auStack_90,auStack_b0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar2 = *(uint *)(param_1 + 0x718);
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
  }
  if (((param_2 == 0x73b00000) || (param_2 == 0x74400000)) && (uVar4 = 0, uVar2 != 0)) {
    do {
      fn_828F6FA8(auStack_d0,0x20,param_3,uVar4,uVar4);
      uVar3 = fn_82941178(param_1);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar3 = fn_829410A8(param_1,0xffffffff82034cd4,auStack_d0,auStack_d0,auStack_d0);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x718));
  }
  return 0;
}
/* @@ end fn_82944520 */

/* @@ begin fn_82944730 */
extern int fn_82941178(void *);
extern int fn_829410A8(Emitter *e, const char *fmt, ...);
void fn_82944730(void *p, const char *a,const char *b) { if(fn_82941178(p)>=0) fn_829410A8(p,"__vcmpequwR(%s, %s, &p->xCondition);\r\n",a,b); }
/* @@ end fn_82944730 */

/* @@ begin fn_82944778 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82944778(void *param_1)
{
  fn_829410A8(param_1, "(((p->xCondition) & 0x80) != 0x80)");
}
/* @@ end fn_82944778 */

/* @@ begin fn_829447A0 */
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_829447A0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
      && (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820348f0,0,0,0,0),
         -1 < (int)uVar1)) && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))
  {
    uVar2 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_80,0x20,param_2,uVar2,uVar2);
        fn_828F6FA8(auStack_60,0x20,param_3,uVar2,uVar2);
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_80);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 0x1d4))(param_1,auStack_60,0xffffffff820348a0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = 0;
  }
  return uVar1;
}
/* @@ end fn_829447A0 */

/* @@ begin fn_82944908 */
extern unsigned int *auStack_100;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82944908(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
      && (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,3,3,3,3),
         -1 < (int)uVar1)) && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))
  {
    uVar4 = 0;
    uVar3 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034de0,auStack_100,auStack_c0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
    }
    uVar4 = 0;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
        fn_828F6FA8(auStack_e0,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034dc0,auStack_e0,auStack_c0,auStack_100,
                              0xffffffff820348a0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
    }
    uVar4 = 0;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
        fn_828F6FA8(auStack_e0,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034da0,auStack_100,auStack_100,auStack_e0,
                              auStack_100);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
    }
    uVar4 = 0;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
        fn_828F6FA8(auStack_e0,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034dc0,auStack_e0,auStack_c0,auStack_100,
                              0xffffffff820348a0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
    }
    uVar4 = 0;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
        fn_828F6FA8(auStack_e0,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034da0,auStack_100,auStack_100,auStack_e0,
                              auStack_100);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
    }
    uVar4 = 0;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
        fn_828F6FA8(auStack_e0,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034d84,auStack_e0,auStack_100,auStack_100);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
    }
    uVar4 = 0;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_c0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_a0,0x20,0xffffffff820347dc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034de0,auStack_a0,auStack_c0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_80,0x20,param_2,uVar4,uVar4);
        fn_828F6FA8(auStack_a0,0x20,0xffffffff820347dc,uVar4);
        fn_828F6FA8(auStack_100,0x20,0xffffffff820347e8,uVar4);
        fn_828F6FA8(auStack_e0,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034d68,auStack_80,auStack_a0,auStack_100,
                              auStack_100);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = 0;
  }
  return uVar1;
}
/* @@ end fn_82944908 */

/* @@ begin fn_82944DF8 */
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82944DF8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar3 = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x718) != 0) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_80,0x20,param_3,uVar3,uVar3);
      fn_828F6FA8(auStack_a0,0x20,0xffffffff820347e8,uVar3);
      uVar1 = fn_829410A8(param_1,0xffffffff82034e10,auStack_a0,auStack_80);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar2 = *(uint *)(param_1 + 0x718);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)uVar2);
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_60,0x20,param_2,uVar3,uVar3);
      fn_828F6FA8(auStack_80,0x20,param_3,uVar3,uVar3);
      fn_828F6FA8(auStack_a0,0x20,0xffffffff820347e8,uVar3);
      uVar1 = fn_829410A8(param_1,0xffffffff82034df4,auStack_60,auStack_80,auStack_a0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x718));
  }
  return 0;
}
/* @@ end fn_82944DF8 */

/* @@ begin fn_82944F40 */
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82944F40(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff82034e58), -1 < (int)uVar1))
      && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
     (((uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1 &&
       (uVar1 = (**(code **)(*param_1 + 0x198))(param_1,0xffffffff820348a0,1), -1 < (int)uVar1)) &&
      (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))) {
    uVar4 = 0;
    uVar3 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_b0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034e40,auStack_f0,auStack_b0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
    }
    uVar4 = 0;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_b0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_90,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034e24,auStack_90,auStack_b0,0xffffffff820348a0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
    }
    uVar4 = 0;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_d0,0x20,0xffffffff820347dc,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034e24,auStack_d0,auStack_f0,auStack_f0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
    }
    uVar4 = 0;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_d0,0x20,0xffffffff820347dc,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820347e8,uVar4);
        fn_828F6FA8(auStack_90,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034dc0,auStack_d0,auStack_90,auStack_d0,
                              0xffffffff820348a0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_70,0x20,param_2,uVar4,uVar4);
        fn_828F6FA8(auStack_d0,0x20,0xffffffff820347dc,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034da0,auStack_70,auStack_f0,auStack_d0,auStack_f0
                             );
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = 0;
  }
  return uVar1;
}
/* @@ end fn_82944F40 */

/* @@ begin fn_829452B0 */
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_829452B0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
      && (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820348f0,1,1,1,1),
         -1 < (int)uVar1)) && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))
  {
    uVar2 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_80,0x20,param_2,uVar2,uVar2);
        fn_828F6FA8(auStack_60,0x20,param_3,uVar2,uVar2);
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_80);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 0x1c8))(param_1,auStack_60,0xffffffff820348a0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = 0;
  }
  return uVar1;
}
/* @@ end fn_829452B0 */

/* @@ begin fn_82945418 */
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82945418(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff82034e58), -1 < (int)uVar1)) {
    uVar4 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_e0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_120,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034e9c,auStack_120,auStack_e0,auStack_e0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = fn_82941178(param_1);
    if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
        && (uVar1 = (**(code **)(*param_1 + 0x198))(param_1,0xffffffff820348a0,1), -1 < (int)uVar1))
       && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)) {
      uVar4 = 0;
      uVar3 = 0;
      if (param_1[0x1c6] != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_120,0x20,0xffffffff820347e8,uVar4);
          fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff82034e40,auStack_100,auStack_120);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar3 = param_1[0x1c6];
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
      }
      uVar4 = 0;
      uVar2 = 0;
      if (uVar3 != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
          fn_828F6FA8(auStack_c0,0x20,0xffffffff82034e90,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff82034e24,auStack_c0,auStack_100,auStack_100);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar2 = param_1[0x1c6];
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
      }
      uVar4 = 0;
      uVar3 = 0;
      if (uVar2 != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_120,0x20,0xffffffff820347e8,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff82034e24,auStack_120,auStack_120,
                                0xffffffff820348a0);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar3 = param_1[0x1c6];
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
      }
      uVar4 = 0;
      uVar2 = 0;
      if (uVar3 != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_120,0x20,0xffffffff820347e8,uVar4);
          fn_828F6FA8(auStack_c0,0x20,0xffffffff82034e90,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff82034dc0,auStack_c0,auStack_120,auStack_c0,
                                0xffffffff820348a0);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar2 = param_1[0x1c6];
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
      }
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_e0,0x20,param_3,uVar4,uVar4);
          fn_828F6FA8(auStack_120,0x20,0xffffffff820347e8,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff82034e9c,auStack_120,auStack_e0,auStack_e0);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
      }
      uVar1 = fn_82941178(param_1);
      if ((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff82034e74), -1 < (int)uVar1))
      {
        uVar4 = 0;
        uVar3 = 0;
        if (param_1[0x1c6] != 0) {
          do {
            uVar1 = fn_82941178(param_1);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
            fn_828F6FA8(auStack_c0,0x20,0xffffffff82034e90,uVar4);
            uVar1 = fn_829410A8(param_1,0xffffffff82034da0,auStack_100,auStack_100,auStack_c0,
                                  auStack_100);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar3 = param_1[0x1c6];
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
        }
        uVar4 = 0;
        uVar2 = 0;
        if (uVar3 != 0) {
          do {
            uVar1 = fn_82941178(param_1);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            fn_828F6FA8(auStack_e0,0x20,param_3,uVar4,uVar4);
            fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
            uVar1 = fn_829410A8(param_1,0xffffffff82034e24,auStack_100,auStack_e0,auStack_100);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar2 = param_1[0x1c6];
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
        }
        uVar4 = 0;
        uVar3 = 0;
        if (uVar2 != 0) {
          do {
            uVar1 = fn_82941178(param_1);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            fn_828F6FA8(auStack_a0,0x20,0xffffffff820347dc,uVar4);
            fn_828F6FA8(auStack_120,0x20,0xffffffff820347e8,uVar4);
            uVar1 = fn_829410A8(param_1,0xffffffff82034d84,auStack_a0,auStack_120,
                                  0xffffffff820348a0);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar3 = param_1[0x1c6];
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
        }
        uVar4 = 0;
        if (uVar3 != 0) {
          do {
            uVar1 = fn_82941178(param_1);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            fn_828F6FA8(auStack_80,0x20,param_2,uVar4,uVar4);
            fn_828F6FA8(auStack_a0,0x20,0xffffffff820347dc,uVar4);
            fn_828F6FA8(auStack_120,0x20,0xffffffff820347e8,uVar4);
            fn_828F6FA8(auStack_100,0x20,0xffffffff820348bc,uVar4);
            uVar1 = fn_829410A8(param_1,0xffffffff82034d68,auStack_80,auStack_100,auStack_120,
                                  auStack_a0);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
        }
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
/* @@ end fn_82945418 */

/* @@ begin fn_82945A10 */
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();
extern undefined8 fn_82941320();
extern int fn_8295D6A8();


void fn_82945A10(undefined8 param_1,ulonglong param_2,float *param_3)

{
  int iVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  iVar1 = ((int (*)())fn_82941178)();
  if (-1 < iVar1) {
    ((undefined8 (*)())fn_82941320)(param_1,param_2 & 0xffffffff000007ff | 0xa0000000,auStack_60,0x40,0);
    fn_828F6FA8(auStack_80,0x20,auStack_60,0,0);
    iVar1 = fn_829410A8(param_1,0xffffffff82034eb8,auStack_80,(double)*param_3,(double)param_3[1],
                          (double)param_3[2],(double)param_3[3]);
    if (-1 < iVar1) {
      fn_8295D6A8(param_1,param_2,param_3);
    }
  }
  return;
}
/* @@ end fn_82945A10 */

/* @@ begin fn_82945AD0 */
extern int fn_829410A8();


undefined8
fn_82945AD0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5,ulonglong param_6)

{
  undefined8 uVar1;
  
  if ((((param_3 & 0xffffffff) == (param_4 & 0xffffffff)) &&
      ((param_3 & 0xffffffff) == (param_5 & 0xffffffff))) &&
     ((param_3 & 0xffffffff) == (param_6 & 0xffffffff))) {
    if ((param_3 & 0xffffffff) == 0) {
      uVar1 = 0xffffffff82034f00;
    }
    else if ((param_3 & 0xffffffff) == 1) {
      uVar1 = 0xffffffff82034f14;
    }
    else if ((param_3 & 0xffffffff) < 3) {
      uVar1 = 0xffffffff82034f28;
    }
    else {
      if ((param_3 & 0xffffffff) != 3) {
        return 0xffffffff80004005;
      }
      uVar1 = 0xffffffff82034f3c;
    }
    uVar1 = fn_829410A8(param_1,uVar1,param_2);
  }
  else {
    uVar1 = fn_829410A8(param_1,0xffffffff82034edc,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}
/* @@ end fn_82945AD0 */

/* @@ begin fn_82945B88 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945B88(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMVectorAndInt(%s, %s)", param_2, param_3);
}
/* @@ end fn_82945B88 */

/* @@ begin fn_82945BC0 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945BC0(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMVectorAndCInt(%s, %s)", param_2, param_3);
}
/* @@ end fn_82945BC0 */

/* @@ begin fn_82945BF8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945BF8(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMVectorOrInt(%s, %s)", param_2, param_3);
}
/* @@ end fn_82945BF8 */

/* @@ begin fn_82945C30 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945C30(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMVectorXorInt(%s, %s)", param_2, param_3);
}
/* @@ end fn_82945C30 */

/* @@ begin fn_82945C68 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945C68(void *param_1)
{
  fn_829410A8(param_1, "XMVectorZero()");
}
/* @@ end fn_82945C68 */

/* @@ begin fn_82945C90 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945C90(void *param_1)
{
  fn_829410A8(param_1, "XMVectorTrueInt()");
}
/* @@ end fn_82945C90 */

/* @@ begin fn_82945CB8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945CB8(void *param_1, const char *param_2, const char *param_3, const char *param_4)
{
  fn_829410A8(param_1, "XMVectorSelect(%s, %s, %s)", param_2, param_3, param_4);
}
/* @@ end fn_82945CB8 */

/* @@ begin fn_82945CF0 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945CF0(void *param_1, const char *param_2)
{
  fn_829410A8(param_1, "XMVectorRound(%s)", param_2);
}
/* @@ end fn_82945CF0 */

/* @@ begin fn_82945D20 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945D20(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMConvertVectorUIntToFloat(%s, %d)", param_2, param_3);
}
/* @@ end fn_82945D20 */

/* @@ begin fn_82945D58 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945D58(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMConvertVectorFloatToUInt(%s, %d)", param_2, param_3);
}
/* @@ end fn_82945D58 */

/* @@ begin fn_82945D90 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945D90(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMConvertVectorIntToFloat(%s, %d)", param_2, param_3);
}
/* @@ end fn_82945D90 */

/* @@ begin fn_82945DC8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945DC8(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMConvertVectorFloatToInt(%s, %d)", param_2, param_3);
}
/* @@ end fn_82945DC8 */

/* @@ begin fn_82945E00 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945E00(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "__vpkswss(%s, %s)", param_2, param_3);
}
/* @@ end fn_82945E00 */

/* @@ begin fn_82945E38 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945E38(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMStoreFloat4A16((XMFLOAT4A16*)%s, %s)", param_2, param_3);
}
/* @@ end fn_82945E38 */

/* @@ begin fn_82945E70 */
extern int fn_82941178(void *);
extern int fn_829410A8(Emitter *e, const char *fmt, ...);
void fn_82945E70(void *p,const char *a,const char *b) { if(fn_82941178(p)>=0) fn_829410A8(p,"%s = XMLoadFloat4((XMFLOAT4*)%s);\r\n",b,a); }
/* @@ end fn_82945E70 */

/* @@ begin fn_82945EB8 */
extern int fn_82941178(void *);
extern int fn_829410A8(Emitter *e, const char *fmt, ...);
void fn_82945EB8(void *p,const char *a,const char *b) { if(fn_82941178(p)>=0) fn_829410A8(p,"XMStoreFloat4((XMFLOAT4*)%s, %s);\r\n",a,b); }
/* @@ end fn_82945EB8 */

/* @@ begin fn_82945F00 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945F00(void *param_1, const char *param_2)
{
  fn_829410A8(param_1, "__lvx(%s, 0)", param_2);
}
/* @@ end fn_82945F00 */

/* @@ begin fn_82945F30 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945F30(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMVectorRotateRight(%s, %d)", param_2, param_3);
}
/* @@ end fn_82945F30 */

/* @@ begin fn_82945F68 */
extern int fn_829410A8();


void fn_82945F68(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  fn_829410A8(param_1,0xffffffff82034c34,param_2,param_2,-param_3 & 0xf);
  return;
}
/* @@ end fn_82945F68 */

/* @@ begin fn_82945FA8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945FA8(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMVectorMinimize(%s, %s)", param_2, param_3);
}
/* @@ end fn_82945FA8 */

/* @@ begin fn_82945FE0 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82945FE0(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMVectorMaximize(%s, %s)", param_2, param_3);
}
/* @@ end fn_82945FE0 */

/* @@ begin fn_82946018 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82946018(void *param_1, const char *param_2)
{
  fn_829410A8(param_1, "XMVectorLogEst(%s)", param_2);
}
/* @@ end fn_82946018 */

/* @@ begin fn_82946048 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82946048(void *param_1, const char *param_2)
{
  fn_829410A8(param_1, "XMVectorExpEst(%s)", param_2);
}
/* @@ end fn_82946048 */

/* @@ begin fn_82946078 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82946078(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMVectorSubtract(%s, %s)", param_2, param_3);
}
/* @@ end fn_82946078 */

/* @@ begin fn_829460B0 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_829460B0(void *param_1, const char *param_2, const char *param_3)
{
  fn_829410A8(param_1, "XMVectorMultiply(%s, %s)", param_2, param_3);
}
/* @@ end fn_829460B0 */

/* @@ begin fn_829460E8 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_829460E8(void *param_1, const char *param_2, const char *param_3, const char *param_4)
{
  fn_829410A8(param_1, "XMVectorMultilyAdd(%s, %s, %s)", param_2, param_3, param_4);
}
/* @@ end fn_829460E8 */

/* @@ begin fn_82946120 */
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8
fn_82946120(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x718) != 0) {
    do {
      fn_828F6FA8(auStack_90,0x20,param_4,uVar2,uVar2);
      fn_828F6FA8(auStack_b0,0x20,param_5,uVar2,uVar2);
      fn_828F6FA8(auStack_d0,0x20,param_3,uVar2,uVar2);
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_d0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if (param_2 < 0x74400001) {
        uVar1 = 0xffffffff82035200;
        if (param_2 != 0x74400000) {
          if (param_2 == 0x73900000) {
LAB_829462a8:
            uVar1 = 0xffffffff820351d8;
          }
          else {
            if (param_2 == 0x73a00000) goto LAB_829462b0;
            if ((param_2 != 0x73b00000) && (uVar1 = 0xffffffff82035214, param_2 != 0x73c00000)) {
              return 0xffffffff80004005;
            }
          }
        }
      }
      else {
        uVar1 = 0xffffffff82035214;
        if (param_2 != 0x74500000) {
          if (param_2 != 0x74600000) {
            if (param_2 != 0x74700000) {
              return 0xffffffff80004005;
            }
            goto LAB_829462a8;
          }
LAB_829462b0:
          uVar1 = 0xffffffff820351f0;
        }
      }
      uVar1 = fn_829410A8(param_1,uVar1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff82034d10,auStack_90,auStack_b0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x718));
  }
  return 0;
}
/* @@ end fn_82946120 */

/* @@ begin fn_829462C8 */
extern int fn_82941178(void *);
extern int fn_829410A8(Emitter *e, const char *fmt, ...);
void fn_829462C8(void *p,const char *a,const char *b) { if(fn_82941178(p)>=0) fn_829410A8(p,"p->xCondition = XMVector4EqualIntR(%s, %s);\r\n",a,b); }
/* @@ end fn_829462C8 */

/* @@ begin fn_82946310 */
extern int fn_829410A8(void *e, const char *fmt, ...);

void fn_82946310(void *param_1)
{
  fn_829410A8(param_1, "XMComparisonAnyFalse(p->xCondition)");
}
/* @@ end fn_82946310 */

/* @@ begin fn_82946338 */
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82946338(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar3 = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x718) != 0) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_80,0x20,param_3,uVar3,uVar3);
      fn_828F6FA8(auStack_a0,0x20,0xffffffff820347e8,uVar3);
      uVar1 = fn_829410A8(param_1,0xffffffff8203529c,auStack_a0,auStack_80);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar2 = *(uint *)(param_1 + 0x718);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)uVar2);
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_60,0x20,param_2,uVar3,uVar3);
      fn_828F6FA8(auStack_80,0x20,param_3,uVar3,uVar3);
      fn_828F6FA8(auStack_a0,0x20,0xffffffff820347e8,uVar3);
      uVar1 = fn_829410A8(param_1,0xffffffff82035278,auStack_60,auStack_80,auStack_a0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x718));
  }
  return 0;
}
/* @@ end fn_82946338 */

/* @@ begin fn_82946480 */
extern int fn_828F9A60();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82960C40();
extern int fn_82F68CC0();


longlong fn_82946480(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piStack_30;
  int *apiStack_2c [11];
  
  lVar3 = ((int (*)())fn_82941178)();
  if (((((-1 < (int)lVar3) &&
        (lVar3 = fn_829410A8(param_1,0xffffffff82035370), -1 < (int)lVar3)) &&
       (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)) &&
      (((lVar3 = fn_829410A8(param_1,0xffffffff82035360), -1 < (int)lVar3 &&
        (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)) &&
       ((lVar3 = fn_829410A8(param_1,0xffffffff82035354), -1 < (int)lVar3 &&
        ((lVar3 = fn_82941178(param_1), -1 < (int)lVar3 &&
         (lVar3 = fn_829410A8(param_1,0xffffffff82035328,param_1 + 0x7f), -1 < (int)lVar3)))))
       ))) && ((lVar3 = fn_82941178(param_1), -1 < (int)lVar3 &&
               (lVar3 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)lVar3)))) {
    param_1[0x182] = param_1[0x182] + 1;
    lVar3 = fn_82941178(param_1);
    if (((((-1 < (int)lVar3) &&
          (lVar3 = fn_829410A8(param_1,0xffffffff82035314), -1 < (int)lVar3)) &&
         (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)) &&
        (((lVar3 = fn_829410A8(param_1,0xffffffff82035300), -1 < (int)lVar3 &&
          (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)) &&
         (((lVar3 = fn_829410A8(param_1,0xffffffff820352e8), -1 < (int)lVar3 &&
           ((lVar3 = fn_82941178(param_1), -1 < (int)lVar3 &&
            (lVar3 = fn_829410A8(param_1,0xffffffff820352d4), -1 < (int)lVar3)))) &&
          (lVar3 = fn_82941178(param_1), -1 < (int)lVar3)))))) &&
       (((lVar3 = fn_829410A8(param_1,0xffffffff820352b8), -1 < (int)lVar3 &&
         (lVar3 = fn_82960C40(param_1,&piStack_30), -1 < (int)lVar3)) &&
        (lVar3 = (**(code **)(*param_1 + 0x180))(param_1), -1 < (int)lVar3)))) {
      param_1[0x182] = param_1[0x182] + -1;
      lVar3 = fn_829410A8(param_1,0xffffffff82034894);
      if (-1 < (int)lVar3) {
        if (piStack_30 != (int *)0x0) {
          (**(code **)(*piStack_30 + 8))();
          piStack_30 = (int *)0x0;
        }
        lVar3 = fn_828F9A60(param_1[0x180],apiStack_2c);
        if (-1 < lVar3) {
          iVar1 = param_1[0x180];
          iVar2 = param_1[0x17f];
          uVar4 = (**(code **)(*apiStack_2c[0] + 0xc))();
          fn_82F68CC0(uVar4,iVar2,iVar1);
          *param_2 = apiStack_2c[0];
        }
      }
    }
  }
  return lVar3;
}
/* @@ end fn_82946480 */

/* @@ begin fn_829466F8 */
extern int fn_82941178(Obj *o);
extern int fn_829410A8(Obj *o, const char *fmt, ...);

int fn_829466F8(Obj *o)
{
    int hr;
    o->depth--;
    hr = fn_82941178(o);
    if (hr >= 0) {
        hr = fn_829410A8(o, "}\r\n\r\n");
        if (hr >= 0) {
            hr = 0;
        }
    }
    return hr;
}
/* @@ end fn_829466F8 */

/* @@ begin fn_82946750 */
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82946750(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = fn_829410A8(param_1,0xffffffff821bab90);
  if ((((-1 < (int)uVar1) && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
      (uVar1 = fn_829410A8(param_1,0xffffffff82035388,*(undefined4 *)(param_1 + 0x718)),
      -1 < (int)uVar1)) &&
     ((uVar1 = fn_82941178(param_1), -1 < (int)uVar1 &&
      (uVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)uVar1)))) {
    uVar1 = 0;
    *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
  }
  return uVar1;
}
/* @@ end fn_82946750 */

/* @@ begin fn_829467F0 */
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_829467F0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = ((int (*)())fn_82941178)();
  if ((((-1 < (int)uVar1) &&
       (uVar1 = fn_829410A8(param_1,0xffffffff820353d0,*(undefined4 *)(param_1 + 0x718)),
       -1 < (int)uVar1)) && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
     (uVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)uVar1)) {
    uVar1 = 0;
    *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
  }
  return uVar1;
}
/* @@ end fn_829467F0 */

/* @@ begin fn_82946878 */
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82946878(int *param_1,uint param_2,int *param_3)

{
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar7 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (param_2 != 0) {
    do {
      if (*param_3 != 0) {
        uVar2 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(*param_3 + 0x6c));
        uVar3 = (**(code **)(*param_1 + 0x74))(param_1,*(undefined4 *)(*param_3 + 0x6c));
        switch(uVar2) {
        case 0:
          return 1;
        case 1:
          uVar4 = 0;
          break;
        case 2:
          uVar4 = 1;
          break;
        case 3:
          uVar4 = 2;
          break;
        case 4:
          uVar4 = 3;
          break;
        case 5:
          uVar4 = 4;
          break;
        case 6:
          uVar4 = 5;
          break;
        case 7:
          uVar4 = 6;
          break;
        case 8:
          uVar4 = 7;
          break;
        case 9:
          uVar4 = 8;
          break;
        case 10:
          uVar4 = 9;
          break;
        case 0xb:
          uVar4 = 10;
          break;
        case 0xc:
          uVar4 = 0xb;
          break;
        case 0xd:
          uVar4 = 0xc;
          break;
        case 0xe:
          uVar4 = 0xd;
          break;
        default:
          return 0xffffffff80004005;
        case 0x11:
        case 0x12:
          uVar4 = 0x80000000;
        }
        if ((uVar4 < uVar7) || ((uVar4 == uVar7 && (uVar3 < uVar5)))) {
          uVar7 = uVar4;
          uVar5 = uVar3;
        }
      }
      uVar6 = uVar6 + 1;
      param_3 = param_3 + 1;
    } while (uVar6 < param_2);
  }
  uVar1 = fn_82941178(param_1);
  if ((((-1 < (int)uVar1) &&
       (uVar1 = fn_829410A8(param_1,0xffffffff820354f4,0xffffffff82035534), -1 < (int)uVar1))
      && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
     (uVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)uVar1)) {
    param_1[0x182] = param_1[0x182] + 1;
    uVar1 = fn_82941178(param_1);
    if (((-1 < (int)uVar1) &&
        (uVar1 = fn_829410A8(param_1,0xffffffff820354a8), -1 < (int)uVar1)) &&
       ((uVar1 = fn_82941178(param_1), -1 < (int)uVar1 &&
        (uVar1 = fn_829410A8(param_1,0xffffffff82035430,param_1[0x1c6]), -1 < (int)uVar1)))) {
      param_1[0x182] = param_1[0x182] + -1;
      uVar1 = fn_82941178(param_1);
      if ((-1 < (int)uVar1) &&
         (uVar1 = fn_829410A8(param_1,0xffffffff82034898), -1 < (int)uVar1)) {
        uVar1 = (**(code **)(*param_1 + 0x178))(param_1);
      }
    }
  }
  return uVar1;
}
/* @@ end fn_82946878 */

/* @@ begin fn_82946AD8 */
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82946AD8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x68c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82941178(param_1);
    if ((((-1 < (int)uVar1) &&
         (uVar1 = fn_829410A8(param_1,0xffffffff82035628), -1 < (int)uVar1)) &&
        (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
       (uVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)uVar1)) {
      *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
      uVar1 = fn_82941178(param_1);
      if (((-1 < (int)uVar1) &&
          (uVar1 = fn_829410A8(param_1,0xffffffff820355e0), -1 < (int)uVar1)) &&
         ((uVar1 = fn_82941178(param_1), -1 < (int)uVar1 &&
          (uVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)uVar1)))) {
        uVar1 = 0;
        *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
        if (*(int *)(param_1 + 0x68c) != 0) {
          puVar3 = (undefined4 *)(param_1 + 0x60c);
          do {
            uVar2 = fn_82941178(param_1);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_829410A8(param_1,0xffffffff82035548,*puVar3,puVar3[1]);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_82941178(param_1);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_829410A8(param_1,0xffffffff82035588,*puVar3,puVar3[1]);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar1 = uVar1 + 1;
            puVar3 = puVar3 + 2;
          } while (uVar1 < *(uint *)(param_1 + 0x68c));
        }
        *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + -1;
        uVar1 = fn_82941178(param_1);
        if ((-1 < (int)uVar1) &&
           (uVar1 = fn_829410A8(param_1,0xffffffff82034894), -1 < (int)uVar1)) {
          *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + -1;
          uVar1 = fn_82941178(param_1);
          if (-1 < (int)uVar1) {
            uVar1 = fn_829410A8(param_1,0xffffffff82034898);
            uVar1 = (int)uVar1 >> 0x1f & uVar1;
          }
        }
      }
    }
  }
  return uVar1;
}
/* @@ end fn_82946AD8 */

/* @@ begin fn_82946CB8 */
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();
extern undefined8 fn_82941320();
extern int fn_8295D848();


void fn_82946CB8(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  ((undefined8 (*)())fn_82941320)(param_1,param_2 & 0xffffffff000007ff | 0xf0000000,auStack_80,0x40,0);
  fn_828F6FA8(auStack_a0,0x20,auStack_80,0,0);
  uVar3 = 0;
  puVar2 = param_3;
  while( true ) {
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82035644,auStack_a0,uVar3,*puVar2);
    if (iVar1 < 0) break;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    if (3 < (uVar3 & 0xffffffff)) {
      fn_8295D848(param_1,param_2,param_3);
      return;
    }
  }
  return;
}
/* @@ end fn_82946CB8 */

/* @@ begin fn_82946D68 */
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d4;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82941418();
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int lbl_8315B5D8;
extern unsigned int uStack_b4;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


undefined8 fn_82946D68(int *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar8;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  uint uStack_b4;
  uint auStack_b0 [4];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar8 = (**(code **)(*param_1 + 0x70))(param_1,param_2[0x1b]);
  uVar5 = (**(code **)(*param_1 + 0x74))(param_1,param_2[0x1b]);
  if (param_1[0x57] != 0) {
    return 0;
  }
  uStack_dc = 0;
  uVar13 = 0;
  switch(uVar8) {
  case 0:
    return 1;
  case 1:
    uVar15 = 0;
    break;
  case 2:
    uVar15 = 1;
    break;
  case 3:
    uVar15 = 2;
    break;
  case 4:
    uVar15 = 3;
    break;
  case 5:
    uVar15 = 4;
    break;
  case 6:
    uVar15 = 5;
    break;
  case 7:
    uVar15 = 6;
    break;
  case 8:
    uVar15 = 7;
    break;
  case 9:
    uVar15 = 8;
    break;
  case 10:
    uVar15 = 9;
    break;
  case 0xb:
    uVar15 = 10;
    break;
  case 0xc:
    uVar15 = 0xb;
    break;
  case 0xd:
    uVar15 = 0xc;
    break;
  case 0xe:
    uVar15 = 0xd;
    break;
  default:
    return 0xffffffff80004005;
  case 0x11:
    uVar13 = 1;
    uStack_dc = 1;
  case 0x12:
    uVar15 = 0xffffffff80000000;
  }
  iVar12 = *(int *)(param_1[4] + param_2[1] * 4);
  if ((*(uint *)(iVar12 + 4) & 0x10) == 0) {
    uVar6 = (**(code **)(*param_1 + 0x158))(param_1,param_2,auStack_d4,&uStack_d8,&uStack_dc);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uStack_dc = 0;
  }
  else {
    uStack_dc = (int)(param_1[0x1c] << 7 | (uint)param_1[0x1c] >> 0x19) >> 0x1f | uVar13;
    uVar6 = (**(code **)(*param_1 + 0x15c))(param_1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
  }
  lVar9 = 0;
  uVar13 = 0;
  auStack_b0[1] = 0xffffffff;
  auStack_b0[2] = 0xffffffff;
  auStack_b0[3] = 0xffffffff;
  if (param_1[2] != 0) {
    iVar1 = param_1[5];
    iVar11 = 0;
    uVar2 = param_2[1];
    uVar3 = param_1[2];
    do {
      iVar4 = *(int *)(iVar11 + iVar1);
      if (((uVar2 == *(uint *)(iVar4 + 4)) && (param_2[2] == *(uint *)(iVar4 + 8))) &&
         (param_2[3] == *(uint *)(iVar4 + 0xc))) {
        auStack_b0[*(int *)(iVar4 + 0x10)] = uVar13;
      }
      uVar13 = uVar13 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar13 < uVar3);
  }
  puVar14 = &uStack_b4;
  puVar10 = auStack_b0;
  lVar16 = 4;
  do {
    if (*puVar10 != 0xffffffff) {
      puVar14 = puVar14 + 1;
      *puVar14 = *puVar10;
      lVar9 = lVar9 + 1;
    }
    puVar10 = puVar10 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  uVar6 = (**(code **)(*param_1 + 0x144))(param_1,auStack_b0,lVar9,&uStack_e0,uStack_dc);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar7 = (**(code **)(*param_1 + 0x6c))(param_1,4,0);
  if ((uVar15 & 0x7fffffff) == (uVar7 & 0xffffffff)) {
    uStack_e0 = uStack_e0 | 0xf0000;
  }
  uStack_e0 = uStack_e0 & 0xffefffff;
  if (((param_1[0x1c] & 0x1000000U) == 0) &&
     (((param_1[0x33] & 0x20U) != 0 || ((*param_2 & 0x2000000) != 0)))) {
    uStack_e0 = uStack_e0 | 0x200000;
  }
  fn_828F6FA8(auStack_a0,0x20,0xffffffff8203579c,(&lbl_8315B5D8)[uStack_d8 & 0x1f]);
  if ((*(uint *)(iVar12 + 4) & 0x10) == 0) {
    if (param_4 != 0) {
      return 0;
    }
  }
  else if (param_4 != 0) {
    param_1[param_1[0x1a3] * 2 + 0x183] = (int)uVar5;
    param_1[(param_1[0x1a3] + 0xc2) * 2] = (int)uVar15;
    param_1[0x1a3] = param_1[0x1a3] + 1;
    uVar6 = fn_82941178(param_1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uVar6 = fn_829410A8(param_1,0xffffffff82035760,uVar5,uVar15);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uVar6 = fn_82941178(param_1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff82035708,uVar5,uVar15);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if ((uStack_e0 & 0xf0000) == 0xf0000) {
      fn_82936290(auStack_60,0x20,auStack_a0);
    }
    else {
      fn_82936290(auStack_60,0x20,0xffffffff820356fc);
      uVar5 = fn_82941418(param_1,uStack_e0);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    uVar5 = (**(code **)(*param_1 + 0x1c4))(param_1,0xffffffff820356ec,auStack_60);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff821bab90);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if ((uStack_e0 & 0xf0000) == 0xf0000) {
      return 0;
    }
    uVar5 = fn_82941178(param_1);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff820347f4,auStack_a0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 400))(param_1,auStack_a0,auStack_60,0xffffffff820347fc);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = 0xffffffff820347a8;
    goto code_r0x82947224;
  }
  uVar6 = fn_82941178(param_1);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar6 = fn_829410A8(param_1,0xffffffff820356b0,uVar5,uVar15);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar6 = fn_82941178(param_1);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar5 = fn_829410A8(param_1,0xffffffff82035658,uVar5,uVar15);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar15 = (ulonglong)uStack_e0;
  if ((uStack_e0 & 0xf0000) == 0xf0000) {
code_r0x82947364:
    fn_82936290(auStack_80,0x20,auStack_a0);
  }
  else {
    uStack_d0 = 0xffffffff;
    puVar14 = &uStack_cc;
    lVar9 = 4;
    do {
      uVar13 = puVar14[-1] + 1;
      *puVar14 = uVar13;
      for (; (uVar13 < 4 && ((uVar15 & 0x10000) == 0)); uVar15 = uVar15 >> 1) {
        uVar13 = *puVar14 + 1;
        *puVar14 = uVar13;
      }
      puVar14 = puVar14 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    iVar12 = 1;
    puVar14 = &uStack_cc;
    lVar9 = 4;
    do {
      if (3 < *puVar14) {
        *puVar14 = iVar12 - 1;
      }
      iVar12 = iVar12 + 1;
      puVar14 = puVar14 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if ((((uStack_cc == 0) && (iStack_c8 == 1)) && (iStack_c4 == 2)) && (iStack_c0 == 3))
    goto code_r0x82947364;
    fn_82936290(auStack_80,0x20,0xffffffff820356fc);
    uVar5 = fn_82941178(param_1);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff820347f4,auStack_80);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x184))
                      (param_1,auStack_a0,uStack_cc,iStack_c8,iStack_c4,iStack_c0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff820347a8);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x1c0))(param_1,0xffffffff820356ec,auStack_80);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar5 = 0xffffffff821bab90;
code_r0x82947224:
  uVar5 = fn_829410A8(param_1,uVar5);
  if (-1 < (int)uVar5) {
    return 0;
  }
  return uVar5;
}
/* @@ end fn_82946D68 */

/* @@ begin fn_82947448 */
extern unsigned int *auStack_60;
extern int fn_828F6FA8();
extern int fn_829379A8();
extern undefined8 fn_82941320();
extern unsigned int lbl_8315B5D8;
extern unsigned int lbl_8315B5E4;


void fn_82947448(int param_1,ulonglong param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 *param_6)

{
  ulonglong uVar1;
  undefined1 auStack_60 [96];
  
  if ((param_2 & 0x2000) == 0) {
    ((undefined8 (*)())fn_82941320)(param_1,param_2,param_4,param_5,0);
  }
  else {
    fn_828F6FA8(auStack_60,0x20,0xffffffff820357f0,lbl_8315B5E4);
    if (param_6 == (undefined4 *)0x0) {
      uVar1 = ((param_2 & 0xffffffff) >> 0x14 & 0x700 | param_2 & 0x1800) >> 8;
      fn_828F6FA8(param_4,param_5,0xffffffff820357dc,
                        *(undefined4 *)((int)&lbl_8315B5D8 + (int)(uVar1 << 2)),auStack_60,
                        *(undefined4 *)(*(int *)(param_3 * 4 + *(int *)(param_1 + 0x14)) + 0x10));
      if ((uVar1 < 2) || ((4 < uVar1 && ((uVar1 < 7 || (uVar1 == 0xf)))))) {
        fn_829379A8(param_4,param_5,0xffffffff820357d4);
      }
    }
    else {
      fn_828F6FA8(param_4,param_5,0xffffffff820357b4,
                        *(undefined4 *)
                         ((int)&lbl_8315B5D8 +
                         ((uint)(((param_2 & 0xffffffff) >> 0x14 & 0x700 | param_2 & 0xfffff8ff) >>
                                6) & 0x7c)),auStack_60,
                        *(undefined4 *)(*(int *)(param_3 * 4 + *(int *)(param_1 + 0x14)) + 0x10),
                        *param_6);
    }
  }
  return;
}
/* @@ end fn_82947448 */

/* @@ begin fn_82947568 */
extern unsigned int *auStack_1d0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern void fn_82947448();
extern int _blkmov();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000003c;
extern unsigned int lbl_820347A8;
extern unsigned int stack0x00000000;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


/* WARNING: Removing unreachable block (ram,0x8294779c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_82947568(int *param_1, int param_2, ulonglong param_3, uint *param_4, int param_5, int param_6, undefined4 param_7, uint param_8, undefined4 in_stack_00000054, uint in_stack_0000005c, undefined4 in_stack_00000064, uint in_stack_0000006c, uint in_stack_00000074)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  char *pcVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar20;
  longlong lVar19;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  longlong lVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  int iStack0000001c;
  int iStack0000003c;
  undefined4 uStack00000044;
  uint uStack0000004c;





  int aiStack_1e0 [2];
  undefined *apuStack_1d8 [2];
  uint auStack_1d0 [100];
  
  uVar8 = ZEXT48(&stack0x00000000);
  uVar21 = 0;
  bVar5 = false;
  bVar6 = false;
  uVar28 = 0;
  iStack0000001c = param_2;
  iStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  if ((param_3 & 0xffffffff) != 0) {
    do {
      iVar20 = (int)((uVar28 & 0x3fffffff) << 2);
      lVar25 = (uVar28 & 0x7ffffff) * 0x20 + (uVar8 - 0x180);
      fn_82947448(param_1,CONCAT44(*(undefined4 *)(iVar20 + (int)param_4),
                                     *(undefined4 *)(iVar20 + (int)param_4)) & 0xfffffffff0ffffff,
                    *(undefined4 *)(iVar20 + param_5),lVar25,0x20,
                    -(uint)(uVar28 == 1) & in_stack_00000074);
      if (((*(uint *)(iVar20 + (int)param_4) >> 0x14 & 0x700 |
           *(uint *)(iVar20 + (int)param_4) & 0x1800) == 0x200) &&
         ((*(uint *)(iVar20 + (int)param_4) & 0x2000) == 0)) {
        fn_828F6FA8(uVar8 - 0x1a0,0x20,lVar25,0,0);
        fn_82936290(lVar25,0x20,uVar8 - 0x1a0);
      }
      uVar28 = uVar28 + 1;
    } while ((uVar28 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  uVar28 = param_3 - 1;
  uVar29 = 0;
  do {
    uVar22 = 1;
    if ((uVar28 & 0xffffffff) != 0) {
      iVar12 = 0;
      uVar13 = 1;
      lVar25 = uVar8 - 0x180;
      uVar24 = *(uint *)((int)apuStack_1d8 + uVar29);
      iVar20 = *(int *)((int)aiStack_1e0 + uVar29);
      uVar27 = uVar28;
      puVar23 = param_4;
      do {
        if ((((iVar20 == 0) && (*(int *)((int)puVar23 + (param_6 - (int)param_4)) != 0xe40000)) ||
            ((iVar20 == 1 && ((*puVar23 & 0xf000000) != 0)))) &&
           ((uVar13 & 0xffffffff) < (param_3 & 0xffffffff))) {
          lVar16 = param_3 - uVar13;
          lVar9 = lVar25;
          puVar14 = puVar23;
          do {
            puVar14 = puVar14 + 1;
            lVar9 = lVar9 + 0x20;
            lVar11 = lVar9;
            lVar17 = lVar25;
            if (((iVar20 == 0) &&
                (*(int *)(iVar12 + param_6) == *(int *)((param_6 - (int)param_4) + (int)puVar14)))
               || ((iVar20 == 1 &&
                   (((*(uint *)(iVar12 + (int)param_4) ^ *puVar14) & 0xf000000) == 0)))) {
              do {
                cVar1 = *(char *)lVar17;
                pcVar15 = (char *)lVar11;
                if (cVar1 == '\0') break;
                lVar11 = lVar11 + 1;
                lVar17 = lVar17 + 1;
              } while (cVar1 == *pcVar15);
              if (cVar1 == *pcVar15) {
                uVar22 = uVar22 + 1;
              }
            }
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (uVar24 < uVar22) {
          uVar24 = uVar22;
        }
        uVar27 = uVar27 - 1;
        uVar13 = uVar13 + 1;
        iVar12 = iVar12 + 4;
        puVar23 = puVar23 + 1;
        lVar25 = lVar25 + 0x20;
      } while (uVar27 != 0);
      *(uint *)((int)apuStack_1d8 + uVar29) = uVar24;
    }
    uVar29 = uVar29 + 4;
  } while (uVar29 < 8);
  aiStack_1e0[1] = 1;
  aiStack_1e0[0] = 0;
  apuStack_1d8[0] = &lbl_820347A8;
  uVar27 = param_3;
  puVar23 = param_4;
  if ((param_3 & 0xffffffff) != 0) {
    do {
      uVar29 = *puVar23 & 0xf000000;
      if ((uVar29 == 0x1000000) || (uVar29 == 0xc000000)) {
        bVar5 = true;
      }
      else if (uVar29 == 0xb000000) {
        bVar6 = true;
      }
      uVar27 = uVar27 - 1;
      puVar23 = puVar23 + 1;
    } while (uVar27 != 0);
    if (bVar5) {
      uVar10 = fn_82941178(param_1);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = fn_829410A8(param_1,0xffffffff820348a8);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820348f0,0,0,0,0);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
    }
    if (bVar6) {
      uVar10 = fn_82941178(param_1);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = fn_829410A8(param_1,0xffffffff820348d0);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820348f0,1,1,1,1);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      uVar10 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
    }
  }
  auStack_1d0[4] = 0;
  lVar25 = 2;
  auStack_1d0[0] = 0;
  lVar9 = uVar8 - 0x1e0;
  auStack_1d0[1] = 1;
  auStack_1d0[2] = 2;
  auStack_1d0[6] = 0;
  do {
    auStack_1d0[8] = 0;
    auStack_1d0[10] = 0;
    if ((uVar28 & 0xffffffff) != 0) {
      iVar20 = *(int *)lVar9;
      iVar12 = 0;
      uVar13 = 1;
      lVar16 = uVar8 - 0x180;
      uVar27 = uVar28;
      puVar23 = param_4;
      do {
        if ((((iVar20 == 0) && (*(int *)((int)puVar23 + (param_6 - (int)param_4)) != 0xe40000)) ||
            ((iVar20 == 1 && ((*puVar23 & 0xf000000) != 0)))) &&
           ((uVar13 & 0xffffffff) < (param_3 & 0xffffffff))) {
          lVar17 = param_3 - uVar13;
          lVar11 = lVar16;
          puVar14 = puVar23;
          do {
            puVar14 = puVar14 + 1;
            lVar11 = lVar11 + 0x20;
            lVar19 = lVar11;
            lVar18 = lVar16;
            if (((iVar20 == 0) &&
                (*(int *)(iVar12 + param_6) == *(int *)((int)puVar14 + (param_6 - (int)param_4))))
               || ((iVar20 == 1 &&
                   (((*(uint *)(iVar12 + (int)param_4) ^ *puVar14) & 0xf000000) == 0)))) {
              do {
                cVar1 = *(char *)lVar18;
                pcVar15 = (char *)lVar19;
                if (cVar1 == '\0') break;
                lVar19 = lVar19 + 1;
                lVar18 = lVar18 + 1;
              } while (cVar1 == *pcVar15);
              if (cVar1 == *pcVar15) {
                *(undefined4 *)((int)auStack_1d0 + iVar12 + 0x20) = 1;
                *(undefined4 *)((int)auStack_1d0 + (0x20 - (int)param_4) + (int)puVar14) = 1;
              }
            }
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        uVar27 = uVar27 - 1;
        uVar13 = uVar13 + 1;
        iVar12 = iVar12 + 4;
        puVar23 = puVar23 + 1;
        lVar16 = lVar16 + 0x20;
      } while (uVar27 != 0);
    }
    if ((param_3 & 0xffffffff) != 0) {
      iVar20 = *(int *)lVar9;
      iVar12 = (int)auStack_1d0 + (0x10 - (int)param_4);
      uVar27 = param_3;
      puVar23 = param_4;
      do {
        if ((((iVar20 == 0) && (*(int *)((param_6 - (int)param_4) + (int)puVar23) != 0xe40000)) ||
            ((iVar20 == 1 && ((*puVar23 & 0xf000000) != 0)))) &&
           (*(int *)((int)auStack_1d0 + (0x20 - (int)param_4) + (int)puVar23) == 0)) {
          *(int *)(iVar12 + (int)puVar23) = *(int *)(iVar12 + (int)puVar23) + 1;
        }
        puVar23 = puVar23 + 1;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    lVar25 = lVar25 + -1;
    lVar9 = lVar9 + 4;
  } while (lVar25 != 0);
  if ((uVar28 & 0xffffffff) != 0) {
    iVar20 = 0;
    uVar27 = 1;
    do {
      if ((uVar27 & 0xffffffff) < (param_3 & 0xffffffff)) {
        lVar25 = param_3 - uVar27;
        iVar12 = iVar20;
        do {
          uVar29 = *(uint *)((int)auStack_1d0 + iVar20 + 0x10);
          uVar22 = *(uint *)((int)auStack_1d0 + iVar12 + 0x14);
          if (uVar22 < uVar29) {
            *(uint *)((int)auStack_1d0 + iVar20 + 0x10) = uVar22;
            *(uint *)((int)auStack_1d0 + iVar12 + 0x14) = uVar29;
            uVar3 = *(undefined4 *)((int)auStack_1d0 + iVar20);
            *(undefined4 *)((int)auStack_1d0 + iVar20) =
                 *(undefined4 *)((int)auStack_1d0 + iVar12 + 4);
            *(undefined4 *)((int)auStack_1d0 + iVar12 + 4) = uVar3;
          }
          lVar25 = lVar25 + -1;
          iVar12 = iVar12 + 4;
        } while (lVar25 != 0);
      }
      uVar28 = uVar28 - 1;
      uVar27 = uVar27 + 1;
      iVar20 = iVar20 + 4;
    } while (uVar28 != 0);
  }
  if ((param_3 & 0xffffffff) != 0) {
    _blkmov(uVar8 - 0x1c0,uVar8 - 0x1d0,(param_3 & 0x3fffffff) << 2);
  }
  lVar25 = uVar8 - 0x1e0;
  do {
    uVar28 = 0;
    if ((param_3 & 0xffffffff) != 0) {
      iVar20 = *(int *)lVar25;
      lVar9 = uVar8 - 0x1d0;
      do {
        iVar12 = iStack0000003c;
        puVar23 = (uint *)lVar9;
        if (((iVar20 == 0) && (uVar29 = *puVar23, *(int *)(uVar29 * 4 + iStack0000003c) == 0xe40000)
            ) || ((iVar20 == 1 && (uVar29 = *puVar23, (param_4[uVar29] & 0xf000000) == 0)))) {
          lVar16 = ((ulonglong)uVar29 & 0x7ffffff) * 0x20;
          fn_82936290(lVar16 + (uVar8 - 0x120),0x20,lVar16 + (uVar8 - 0x180));
        }
        else {
          uVar27 = 0;
          if ((uVar28 & 0xffffffff) != 0) {
            lVar16 = uVar8 - 0x1d0;
            do {
              if (iVar20 == 0) {
                uVar22 = *(uint *)lVar16;
                uVar29 = *puVar23;
                if (*(int *)(uVar29 * 4 + iStack0000003c) != *(int *)(uVar22 * 4 + iStack0000003c))
                goto LAB_82947c0c;
LAB_82947c38:
                lVar11 = ((ulonglong)uVar29 & 0x7ffffff) * 0x20;
                lVar17 = ((ulonglong)uVar22 & 0x7ffffff) * 0x20 + (uVar8 - 0x180);
                lVar19 = lVar11 + (uVar8 - 0x180);
                do {
                  cVar1 = *(char *)lVar19;
                  pcVar15 = (char *)lVar17;
                  if (cVar1 == '\0') break;
                  lVar19 = lVar19 + 1;
                  lVar17 = lVar17 + 1;
                } while (cVar1 == *pcVar15);
                if (cVar1 == *pcVar15) {
                  iVar4 = (int)((uVar27 & 0x3fffffff) << 2);
                  fn_82936290(lVar11 + (uVar8 - 0x120),0x20,
                               ((ulonglong)*(uint *)((int)auStack_1d0 + iVar4) & 0x7ffffff) * 0x20 +
                               (uVar8 - 0x120));
                  iVar7 = (int)((param_3 & 0xffffffff) << 2);
                  uVar3 = *(undefined4 *)((int)auStack_1d0 + iVar7 + 0xc);
                  *(undefined4 *)((int)auStack_1d0 + iVar7 + 0xc) =
                       *(undefined4 *)((int)auStack_1d0 + iVar4 + 0x10);
                  *(undefined4 *)((int)auStack_1d0 + iVar4 + 0x10) = uVar3;
                  break;
                }
              }
              else {
LAB_82947c0c:
                if (iVar20 == 1) {
                  uVar22 = *(uint *)lVar16;
                  uVar29 = *puVar23;
                  if (((param_4[uVar29] ^ param_4[uVar22]) & 0xf000000) == 0) goto LAB_82947c38;
                }
              }
              uVar27 = uVar27 + 1;
              lVar16 = lVar16 + 4;
            } while ((uVar27 & 0xffffffff) < (uVar28 & 0xffffffff));
            if ((uVar27 & 0xffffffff) < (uVar28 & 0xffffffff)) goto LAB_82947f1c;
          }
          if (((uVar21 == 1) || ((iVar20 == 1 && (*(int *)(*puVar23 * 4 + iVar12) == 0xe40000)))) ||
             ((iVar20 == 0 && ((param_4[*puVar23] & 0xf000000) == 0)))) {
            bVar5 = true;
            bVar6 = true;
            if (iStack0000001c == 0) goto LAB_82947d2c;
            uVar29 = *puVar23;
            lVar11 = ((ulonglong)uVar29 & 0x7ffffff) * 0x20;
            lVar16 = lVar11 + (uVar8 - 0x120);
            fn_82936290(lVar16,0x20);
          }
          else {
            bVar6 = false;
LAB_82947d2c:
            bVar5 = bVar6;
            uVar29 = *puVar23;
            if (((param_4[uVar29] >> 0x14 & 0x700 | param_4[uVar29] & 0x1800) != 0x200) ||
               (uVar10 = 0xffffffff820357f8, (param_4[uVar29] & 0x2000) != 0)) {
              uVar10 = 0xffffffff82035804;
            }
            lVar11 = ((ulonglong)uVar29 & 0x7ffffff) * 0x20;
            lVar16 = lVar11 + (uVar8 - 0x120);
            fn_828F6FA8(lVar16,0x20,uVar10,uVar29);
          }
          if ((((param_4[uVar29] >> 0x14 & 0x700 | param_4[uVar29] & 0x1800) != 0x200) ||
              ((param_4[uVar29] & 0x2000) != 0)) || ((iStack0000001c != 0 && (bVar5)))) {
            uVar22 = param_1[0x1c6];
          }
          else {
            uVar22 = 1;
          }
          uVar27 = 0;
          if (uVar22 != 0) {
            do {
              uVar10 = fn_82941178(param_1);
              if ((int)uVar10 < 0) {
                return uVar10;
              }
              fn_828F6FA8(uVar8 - 0x1a0,0x20,lVar11 + (uVar8 - 0x180),uVar27,uVar27);
              fn_828F6FA8(uVar8 - 0xc0,0x20,lVar16,uVar27,uVar27);
              uVar10 = fn_829410A8(param_1,0xffffffff820347f4,uVar8 - 0xc0);
              if ((int)uVar10 < 0) {
                return uVar10;
              }
              if (iVar20 == 0) {
                uVar24 = *(uint *)(uVar29 * 4 + iStack0000003c);
                uVar10 = (**(code **)(*param_1 + 0x184))
                                   (param_1,uVar8 - 0x1a0,uVar24 >> 0x10 & 3,uVar24 >> 0x12 & 3,
                                    uVar24 >> 0x14 & 3,uVar24 >> 0x16 & 3);
                iVar12 = (int)uVar10;
              }
              else {
                uVar10 = 0xffffffff820348a0;
                if ((param_4[uVar29] & 0xf000000) == 0x1000000) {
                  pcVar2 = *(code **)(*param_1 + 0x1d4);
                }
                else if ((param_4[uVar29] & 0xf000000) == 0xb000000) {
                  pcVar2 = *(code **)(*param_1 + 0x1c8);
                  uVar10 = 0xffffffff820348c8;
                }
                else {
                  pcVar2 = *(code **)(*param_1 + 0x1d0);
                }
                uVar10 = (*pcVar2)(param_1,uVar8 - 0x1a0,uVar10);
                iVar12 = (int)uVar10;
              }
              if (iVar12 < 0) {
                return uVar10;
              }
              uVar10 = fn_829410A8(param_1,apuStack_1d8[0]);
              if ((int)uVar10 < 0) {
                return uVar10;
              }
              uVar27 = uVar27 + 1;
            } while ((uVar27 & 0xffffffff) < (ulonglong)uVar22);
          }
        }
LAB_82947f1c:
        uVar28 = uVar28 + 1;
        lVar9 = lVar9 + 4;
      } while ((uVar28 & 0xffffffff) < (param_3 & 0xffffffff));
      iVar20 = 0;
      uVar28 = param_3;
      do {
        puVar26 = (undefined4 *)((int)auStack_1d0 + iVar20);
        lVar9 = ((ulonglong)*(uint *)((int)auStack_1d0 + iVar20) & 0x7ffffff) * 0x20;
        fn_82936290(lVar9 + (uVar8 - 0x180),0x20,lVar9 + (uVar8 - 0x120));
        uVar28 = uVar28 - 1;
        iVar12 = iVar20 + 0x10;
        iVar20 = iVar20 + 4;
        *puVar26 = *(undefined4 *)((int)auStack_1d0 + iVar12);
      } while (uVar28 != 0);
    }
    uVar21 = uVar21 + 1;
    lVar25 = lVar25 + 4;
    if (1 < uVar21) {
      if (uStack0000004c < 0x80000000) {
        fn_82936290(uStack00000044,uStack0000004c,uVar8 - 0x180);
      }
      if ((1 < (param_3 & 0xffffffff)) && (in_stack_0000005c < 0x80000000)) {
        fn_82936290(in_stack_00000054,in_stack_0000005c,uVar8 - 0x160);
      }
      if ((2 < (param_3 & 0xffffffff)) && (in_stack_0000006c < 0x80000000)) {
        fn_82936290(in_stack_00000064,in_stack_0000006c,uVar8 - 0x140);
      }
      return 0;
    }
  } while( true );
}
/* @@ end fn_82947568 */

/* @@ begin fn_82947FF0 */
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_cc;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern undefined8 fn_82947568();


undefined8 fn_82947FF0(int *param_1,undefined8 param_2,int param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uVar4 = ((int (*)())fn_82941178)();
  if ((((-1 < (int)uVar4) &&
       (uVar4 = fn_829410A8(param_1,0xffffffff820347b4), -1 < (int)uVar4)) &&
      (uVar4 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,2,1,1,1), -1 < (int)uVar4)
      ) && (uVar4 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar4)) {
    uVar5 = *(uint *)param_1[0x41];
    uVar2 = uVar5 & 0xfffff;
    uVar4 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*(int *)((uint *)param_1[0x41])[2] * 4 + param_1[5]),
                       auStack_d0,auStack_c0);
    if ((-1 < (int)uVar4) &&
       (uVar4 = (**(code **)(*param_1 + 0x14c))
                          (param_1,*(undefined4 *)(param_1[0x41] + 8),uVar2,0xf0000,auStack_b0),
       -1 < (int)uVar4)) {
      iVar3 = (uVar5 & 0xfffff) * 4;
      uVar4 = (**(code **)(*param_1 + 0x148))
                        (param_1,*(undefined4 *)
                                  (*(int *)(*(int *)(param_1[0x41] + 8) + iVar3) * 4 + param_1[5]),
                         auStack_cc,auStack_bc);
      if ((-1 < (int)uVar4) &&
         ((uVar4 = (**(code **)(*param_1 + 0x14c))
                             (param_1,*(int *)(param_1[0x41] + 8) + iVar3,uVar2,0xf0000,auStack_ac),
          -1 < (int)uVar4 &&
          (uVar4 = ((undefined8 (*)())fn_82947568)(param_1,0,2,auStack_d0,auStack_c0,auStack_b0,auStack_f0,0x20),
          -1 < (int)uVar4)))) {
        fn_82936290(auStack_80,0x20,0xffffffff820347dc);
        uVar4 = (**(code **)(*param_1 + 0x1e4))
                          (param_1,*(uint *)param_1[0x41] & 0xfff00000,auStack_80,auStack_f0,
                           auStack_a0);
        if (-1 < (int)uVar4) {
          uVar6 = 0;
          uVar5 = 0;
          if (param_1[0x1c6] != 0) {
            do {
              uVar4 = fn_82941178(param_1);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              fn_828F6FA8(auStack_a0,0x20,0xffffffff820347e8,uVar6);
              uVar4 = fn_829410A8(param_1,0xffffffff820347f4,auStack_a0);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar4 = (**(code **)(*param_1 + 0x1e0))(param_1,0xffffffff820347fc,uVar6);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar4 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar5 = param_1[0x1c6];
              uVar6 = uVar6 + 1;
            } while ((uVar6 & 0xffffffff) < (ulonglong)uVar5);
          }
          uVar6 = 0;
          if (uVar5 != 0) {
            do {
              fn_828F6FA8(auStack_f0,0x20,0xffffffff820347dc,uVar6);
              fn_828F6FA8(auStack_a0,0x20,0xffffffff820347e8,uVar6);
              uVar4 = fn_82941178(param_1);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar4 = fn_829410A8(param_1,0xffffffff820347f4,auStack_f0);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              if (param_3 == 0) {
                pcVar1 = *(code **)(*param_1 + 0x1cc);
              }
              else {
                pcVar1 = *(code **)(*param_1 + 0x1d0);
              }
              uVar4 = (*pcVar1)(param_1,auStack_f0,auStack_a0);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar4 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar6 = uVar6 + 1;
            } while ((uVar6 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
          }
          if ((param_4 == 0) ||
             (uVar4 = (**(code **)(*param_1 + 0x234))(param_1,0xffffffff820347fc), -1 < (int)uVar4))
          {
            uVar6 = 0;
            if (param_1[0x1c6] != 0) {
              do {
                fn_828F6FA8(auStack_f0,0x20,0xffffffff820347dc,uVar6);
                uVar4 = fn_82941178(param_1);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                uVar4 = fn_829410A8(param_1,0xffffffff820347f4,param_2);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                if (param_3 == 0) {
                  pcVar1 = *(code **)(*param_1 + 0x1d0);
                }
                else {
                  pcVar1 = *(code **)(*param_1 + 0x1c8);
                }
                uVar4 = (*pcVar1)(param_1,param_2,auStack_f0);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                uVar4 = fn_829410A8(param_1,0xffffffff820347a8);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                uVar6 = uVar6 + 1;
              } while ((uVar6 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
            }
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}
/* @@ end fn_82947FF0 */

/* @@ begin fn_82948438 */
extern unsigned int *auStack_100;
extern unsigned int *auStack_10c;
extern unsigned int *auStack_110;
extern unsigned int *auStack_114;
extern unsigned int *auStack_118;
extern unsigned int *auStack_11c;
extern unsigned int *auStack_120;
extern unsigned int *auStack_128;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern undefined8 fn_82941320();
extern int fn_82941418();
extern undefined8 fn_829414C0();
extern undefined8 fn_82941800();
extern undefined8 fn_82941938();
extern undefined8 fn_82947568();
extern int fn_8295E5E8();
extern unsigned int iStack_130;
extern unsigned int uStack_12c;


void fn_82948438(int *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uVar1 = *(uint *)param_1[0x41];
  uVar2 = uVar1 & 0xfffff;
  iVar4 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(*(int *)((uint *)param_1[0x41])[4] * 4 + param_1[5]),
                     &uStack_12c,0,auStack_128);
  if (iVar4 < 0) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x144))
                    (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                     *(undefined4 *)(param_1[0x41] + 0xc),&iStack_130,auStack_128[0]);
  if (iVar4 < 0) {
    return;
  }
  if ((*(uint *)param_1[0x41] & 0xfff00000) != 0x10f00000) {
    iVar4 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*(int *)((uint *)param_1[0x41])[2] * 4 + param_1[5]),
                       auStack_120,auStack_110);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = (**(code **)(*param_1 + 0x14c))
                      (param_1,*(undefined4 *)(param_1[0x41] + 8),uVar2,iStack_130,auStack_118);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = (uVar1 & 0xfffff) * 4;
    iVar5 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)
                                (*(int *)(*(int *)(param_1[0x41] + 8) + iVar4) * 4 + param_1[5]),
                       auStack_11c,auStack_10c);
    if (iVar5 < 0) {
      return;
    }
    iVar4 = (**(code **)(*param_1 + 0x14c))
                      (param_1,*(int *)(param_1[0x41] + 8) + iVar4,uVar2,iStack_130,auStack_114);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = ((undefined8 (*)())fn_82947568)(param_1,0,2,auStack_120,auStack_110,auStack_118,auStack_c0,0x20);
    if (iVar4 < 0) {
      return;
    }
  }
  if (iStack_130 == 0xf0000) {
LAB_82948628:
    bVar3 = false;
    if (param_1[0x1c5] == 0) goto LAB_8294863c;
  }
  else {
    iVar4 = ((uint (*)())fn_82941418)(param_1);
    if (iVar4 < 0) {
      return;
    }
    if (iStack_130 == 0xf0000) goto LAB_82948628;
  }
  bVar3 = true;
LAB_8294863c:
  if ((*(uint *)param_1[0x41] & 0xfff00000) == 0x10f00000) {
    uVar6 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        iVar4 = fn_82941178(param_1);
        if (iVar4 < 0) {
          return;
        }
        if (bVar3) {
          fn_828F6FA8(auStack_100,0x20,0xffffffff820347dc,uVar6);
        }
        else {
          ((undefined8 (*)())fn_82941320)(param_1,uStack_12c,auStack_80,0x40,0);
          fn_828F6FA8(auStack_100,0x20,auStack_80,uVar6,uVar6);
        }
        iVar4 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
        if (iVar4 < 0) {
          return;
        }
        iVar4 = (**(code **)(*param_1 + 0x18c))(param_1);
        if (iVar4 < 0) {
          return;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
  }
  else {
    if (bVar3) {
      fn_82936290(auStack_100,0x20,0xffffffff820347dc);
    }
    else {
      ((undefined8 (*)())fn_82941320)(param_1,uStack_12c,auStack_100,0x20,0);
    }
    iVar4 = (**(code **)(*param_1 + 0x1e4))
                      (param_1,*(uint *)param_1[0x41] & 0xfff00000,auStack_100,auStack_c0,auStack_a0
                      );
    if (iVar4 < 0) {
      return;
    }
  }
  if (bVar3) {
    iVar4 = fn_829414C0(param_1);
    if (iVar4 < 0) {
      return;
    }
    ((undefined8 (*)())fn_82941320)(param_1,uStack_12c,auStack_e0,0x20,0);
    iVar4 = fn_82941800(param_1,auStack_e0,iStack_130,param_1[0x1c5] != 0,0);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = fn_82941938(param_1,auStack_e0,0,0);
    if (iVar4 < 0) {
      return;
    }
  }
  iVar4 = fn_829410A8(param_1,0xffffffff821bab90);
  if (-1 < iVar4) {
    fn_8295E5E8(param_1);
  }
  return;
}
/* @@ end fn_82948438 */

/* @@ begin fn_82948820 */
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();
extern void fn_82947448();
extern int fn_8295EDC8();
extern unsigned int uStack_90;


void fn_82948820(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStack_90;
  undefined4 auStack_8c [3];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [72];
  
  iVar1 = ((int (*)())fn_82941178)();
  if ((-1 < iVar1) &&
     (iVar1 = (**(code **)(*param_1 + 0x148))
                        (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                         auStack_8c,&uStack_90), -1 < iVar1)) {
    fn_82947448(param_1,auStack_8c[0],uStack_90,auStack_60,0x40,0);
    fn_828F6FA8(auStack_80,0x20,auStack_60,0,0);
    if ((int)param_2 == 0) {
      uVar2 = 0xffffffff82035824;
    }
    else {
      uVar2 = 0xffffffff82035828;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82035814,auStack_80,uVar2);
    if (((-1 < iVar1) && (iVar1 = fn_82941178(param_1), -1 < iVar1)) &&
       (iVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < iVar1)) {
      param_1[param_1[0x1c4] + 0x1a4] = 0;
      param_1[0x1c4] = param_1[0x1c4] + 1;
      param_1[0x182] = param_1[0x182] + 1;
      fn_8295EDC8(param_1,param_2);
    }
  }
  return;
}
/* @@ end fn_82948820 */

/* @@ begin fn_82948968 */
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();
extern void fn_82947448();
extern int fn_8295FD80();
extern int fn_8295FE50();
extern unsigned int uStack_90;


void fn_82948968(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_90;
  undefined4 auStack_8c [3];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  iVar1 = (**(code **)(*param_1 + 0x21c))();
  if ((((-1 < iVar1) && (iVar1 = (**(code **)(*param_1 + 0x22c))(param_1), -1 < iVar1)) &&
      ((param_2 == 0 || (iVar1 = (**(code **)(*param_1 + 0x224))(param_1), -1 < iVar1)))) &&
     ((iVar1 = (**(code **)(*param_1 + 0x234))(param_1,0xffffffff820347fc), -1 < iVar1 &&
      (iVar1 = (**(code **)(*param_1 + 0x148))
                         (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                          auStack_8c,&uStack_90), -1 < iVar1)))) {
    fn_82947448(param_1,auStack_8c[0],uStack_90,auStack_60,0x40,0);
    fn_828F6FA8(auStack_80,0x20,auStack_60,0,0);
    iVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,0xffffffff82034404,0xffffffff820347fc);
    if ((-1 < iVar1) &&
       ((iVar1 = fn_82941178(param_1), -1 < iVar1 &&
        (iVar1 = fn_829410A8(param_1,0xffffffff8203587c,auStack_80), -1 < iVar1)))) {
      if (param_2 == 0) {
        iVar1 = fn_829410A8(param_1,0xffffffff82015e28);
      }
      else {
        iVar1 = fn_829410A8(param_1,0xffffffff8203586c,auStack_80);
      }
      if (((-1 < iVar1) &&
          (iVar1 = fn_829410A8(param_1,0xffffffff82035854,auStack_80), -1 < iVar1)) &&
         (iVar1 = (**(code **)(*param_1 + 0x1ec))(param_1), -1 < iVar1)) {
        iVar1 = fn_829410A8(param_1,0xffffffff82035840);
        if (-1 < iVar1) {
          if (param_2 == 0) {
            iVar1 = fn_829410A8(param_1,0xffffffff82034874);
          }
          else {
            iVar1 = fn_829410A8(param_1,0xffffffff8203582c,auStack_80);
          }
          if (((-1 < iVar1) && (iVar1 = fn_82941178(param_1), -1 < iVar1)) &&
             (iVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < iVar1)) {
            param_1[0x1c5] = param_1[0x1c5] + 1;
            param_1[param_1[0x1c4] + 0x1a4] = 2;
            param_1[0x1c4] = param_1[0x1c4] + 1;
            param_1[0x182] = param_1[0x182] + 1;
            if (param_2 == 0) {
              fn_8295FD80(param_1);
            }
            else {
              fn_8295FE50();
            }
          }
        }
      }
    }
  }
  return;
}
/* @@ end fn_82948968 */

/* @@ begin fn_82948BF8 */
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern undefined8 fn_82941320();
extern int fn_82941418();
extern undefined8 fn_829414C0();
extern undefined8 fn_82941580();
extern undefined8 fn_82941680();
extern undefined8 fn_82941800();
extern undefined8 fn_82941938();
extern undefined8 fn_82947568();
extern unsigned int iStack_104;
extern unsigned int iStack_110;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_fc;


uint fn_82948BF8(int *param_1,int param_2,undefined8 param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  bool bVar6;
  int iStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  if (param_4 == (uint *)0x0) {
    param_4 = &uStack_10c;
  }
  else {
    uStack_10c = *param_4;
  }
  uVar2 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                     &uStack_108,param_4,&uStack_fc);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = (**(code **)(*param_1 + 0x144))
                    (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                     *(undefined4 *)(param_1[0x41] + 0xc),&iStack_110,uStack_fc);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar5 = 0;
  if (((iStack_110 != 0xf0000) || (uStack_10c != 0)) || (bVar1 = false, param_1[0x1c5] != 0)) {
    bVar1 = true;
  }
  bVar6 = (uStack_10c & 0xff0000) != 0;
  if (iStack_110 == 0xf0000) {
    if (param_1[0x1c5] != 0) {
      uVar2 = fn_829414C0(param_1);
      goto LAB_82948ce8;
    }
    if (bVar6) {
      uVar2 = ((undefined8 (*)())fn_82941580)(param_1);
      goto LAB_82948ce8;
    }
  }
  else {
    uVar2 = fn_82941418(param_1,iStack_110);
LAB_82948ce8:
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  if (bVar1) {
    fn_82936290(auStack_b0,0x20,0xffffffff820347dc);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    ((undefined8 (*)())fn_82941320)(param_1,uStack_108,auStack_b0,0x20,0);
    puVar4 = auStack_b0;
  }
  uVar2 = (**(code **)(*param_1 + 0x148))
                    (param_1,*(undefined4 *)
                              (*(int *)(*(int *)(param_1[0x41] + 8) + param_2 * 4) * 4 + param_1[5])
                     ,&uStack_100,auStack_f8);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = (**(code **)(*param_1 + 0x14c))
                    (param_1,*(int *)(param_1[0x41] + 8) + param_2 * 4,param_3,iStack_110,
                     &iStack_104);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = ((undefined8 (*)())fn_82947568)(param_1,puVar4,1,&uStack_100,auStack_f8,&iStack_104,auStack_f0,0x20);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if (!bVar1) {
    if (((iStack_104 == 0xe40000) && ((uStack_100 & 0xf000000) == 0)) && (param_1[0x1c6] != 0)) {
      do {
        uVar2 = fn_82941178(param_1);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        fn_828F6FA8(auStack_70,0x20,auStack_b0,uVar5,uVar5);
        fn_828F6FA8(auStack_90,0x20,auStack_f0,uVar5,uVar5);
        uVar2 = fn_829410A8(param_1,0xffffffff82035898,auStack_70,auStack_90);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    goto LAB_82948ffc;
  }
  ((undefined8 (*)())fn_82941320)(param_1,uStack_108,auStack_d0,0x20,0);
  if (param_1[0x1c5] == 0) {
LAB_82948e58:
    if (iStack_110 != 0xf0000) {
      if ((uStack_10c != 0) || (uVar3 = 0, param_1[0x1c5] != 0)) {
        uVar3 = 1;
      }
      uVar2 = fn_82941800(param_1,auStack_d0,iStack_110,uVar3,auStack_f0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
  }
  else if (iStack_110 != 0xf0000) {
    uVar2 = fn_829414C0(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    goto LAB_82948e58;
  }
  if ((param_1[0x1c5] != 0) &&
     (uVar2 = fn_82941938(param_1,auStack_d0,uStack_10c,
                                -(uint)(iStack_110 == 0xf0000) & (uint)auStack_f0), (int)uVar2 < 0))
  {
    return uVar2;
  }
  if (uStack_10c != 0) {
    if ((bVar6) &&
       (((iStack_110 != 0xf0000 || (param_1[0x1c5] != 0)) &&
        (uVar2 = fn_82941580(param_1,uStack_10c), (int)uVar2 < 0)))) {
      return uVar2;
    }
    puVar4 = (undefined1 *)0x0;
    if ((iStack_110 == 0xf0000) && (param_1[0x1c5] == 0)) {
      puVar4 = auStack_f0;
    }
    uVar2 = fn_82941680(param_1,auStack_d0,uStack_10c,bVar6,0,puVar4);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
LAB_82948ffc:
  uVar2 = fn_829410A8(param_1,0xffffffff821bab90);
  return (int)uVar2 >> 0x1f & uVar2;
}
/* @@ end fn_82948BF8 */

/* @@ begin fn_82949020 */
extern unsigned int *auStack_110;
extern unsigned int *auStack_11c;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_cf;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern undefined8 fn_82941320();
extern int fn_82941418();
extern undefined8 fn_829414C0();
extern undefined8 fn_82941580();
extern undefined8 fn_82941680();
extern undefined8 fn_82941800();
extern undefined8 fn_82941938();
extern undefined8 fn_82947568();
extern unsigned int iStack_120;
extern unsigned int uStack_d0;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;


undefined8 fn_82949020(int *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  int iStack_120;
  uint auStack_11c [3];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [4];
  undefined4 uStack_ec;
  undefined1 auStack_e8 [4];
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 uStack_d0;
  undefined1 auStack_cf [31];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  uVar2 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                     &uStack_ec,auStack_11c,&uStack_e4);
  if ((-1 < (int)uVar2) &&
     (uVar2 = (**(code **)(*param_1 + 0x144))
                        (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                         *(undefined4 *)(param_1[0x41] + 0xc),&iStack_120,uStack_e4),
     -1 < (int)uVar2)) {
    if ((iStack_120 != 0xf0000) || ((auStack_11c[0] != 0 || (bVar6 = false, param_1[0x1c5] != 0))))
    {
      bVar6 = true;
    }
    ((undefined8 (*)())fn_82941320)(param_1,uStack_ec,auStack_b0,0x20,0);
    if ((bVar6) && (uVar5 = 0, param_1[0x1c6] != 0)) {
      do {
        uVar2 = fn_82941178(param_1);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        fn_828F6FA8(auStack_cf,0x1f,auStack_b0,uVar5,uVar5);
        uStack_d0 = 0x26;
        fn_828F6FA8(auStack_110,0x20,0xffffffff820348bc,uVar5);
        uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,&uStack_d0);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar2 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                       auStack_e8,auStack_f0);
    if ((((-1 < (int)uVar2) &&
         (uVar2 = (**(code **)(*param_1 + 0x14c))
                            (param_1,((uint *)param_1[0x41])[2],*(uint *)param_1[0x41] & 0xfffff,
                             iStack_120,auStack_e0), -1 < (int)uVar2)) &&
        (uVar2 = ((undefined8 (*)())fn_82947568)(param_1,0,1,auStack_e8,auStack_f0,auStack_e0,auStack_90,0x20),
        -1 < (int)uVar2)) &&
       ((iStack_120 == 0xf0000 || (uVar2 = ((uint (*)())fn_82941418)(param_1), -1 < (int)uVar2)))) {
      uVar5 = 0;
      uVar4 = 0;
      if (param_1[0x1c6] != 0) {
        do {
          uVar2 = fn_82941178(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          fn_828F6FA8(auStack_70,0x20,auStack_90,uVar5,uVar5);
          fn_828F6FA8(auStack_110,0x20,0xffffffff820347dc,uVar5);
          uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = (**(code **)(*param_1 + 0x194))(param_1,auStack_70);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar4 = param_1[0x1c6];
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < (ulonglong)uVar4);
      }
      uVar5 = 0;
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          uVar2 = fn_82941178(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          fn_828F6FA8(auStack_110,0x20,0xffffffff820347dc,uVar5);
          uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = (**(code **)(*param_1 + 0x1a4))(param_1,auStack_110,0);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar3 = param_1[0x1c6];
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < (ulonglong)uVar3);
      }
      if (bVar6) {
        uVar5 = 0;
        if (uVar3 != 0) {
          do {
            uVar2 = fn_82941178(param_1);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            fn_828F6FA8(auStack_110,0x20,0xffffffff820348bc,uVar5);
            uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            if ((uVar5 & 1) == 0) {
              pcVar1 = *(code **)(*param_1 + 0x1ac);
            }
            else {
              pcVar1 = *(code **)(*param_1 + 0x1b0);
            }
            uVar2 = (*pcVar1)(param_1,auStack_110);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar5 = uVar5 + 1;
          } while ((uVar5 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
        }
        uVar2 = fn_829414C0(param_1);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        fn_82936290(&uStack_d0,0x20,0xffffffff820348bc);
        uVar2 = fn_82941800(param_1,&uStack_d0,iStack_120,1,0);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar2 = fn_82941938(param_1,&uStack_d0,1,0);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        if (auStack_11c[0] != 0) {
          bVar6 = (auStack_11c[0] & 0xff0000) != 0;
          if ((bVar6) && (uVar2 = fn_82941580(param_1,auStack_11c[0]), (int)uVar2 < 0)) {
            return uVar2;
          }
          uVar2 = fn_82941680(param_1,&uStack_d0,auStack_11c[0],bVar6,1,0);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
        }
      }
      uVar5 = 0;
      uVar4 = 0;
      if (param_1[0x1c6] != 0) {
        do {
          uVar2 = fn_82941178(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          fn_828F6FA8(auStack_110,0x20,0xffffffff820347dc,uVar5);
          uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,auStack_110,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar4 = param_1[0x1c6];
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < (ulonglong)uVar4);
      }
      uVar5 = 0;
      if (uVar4 != 0) {
        do {
          uVar2 = fn_82941178(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          fn_828F6FA8(auStack_cf,0x1f,auStack_b0,uVar5,uVar5);
          uStack_d0 = 0x26;
          fn_828F6FA8(auStack_110,0x20,0xffffffff820347dc,uVar5);
          uVar2 = (**(code **)(*param_1 + 0x1bc))(param_1,&uStack_d0,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}
/* @@ end fn_82949020 */

/* @@ begin fn_82949650 */
extern unsigned int *auStack_110;
extern unsigned int *auStack_118;
extern unsigned int *auStack_11c;
extern unsigned int *auStack_120;
extern unsigned int *auStack_128;
extern unsigned int *auStack_12c;
extern unsigned int *auStack_130;
extern unsigned int *auStack_138;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82936290();
extern int fn_829410A8();
extern undefined8 fn_829411D0();
extern undefined8 fn_82941320();
extern int fn_82941418();
extern undefined8 fn_829414C0();
extern undefined8 fn_82941580();
extern undefined8 fn_82941680();
extern undefined8 fn_82941800();
extern undefined8 fn_82941938();
extern undefined8 fn_82947568();
extern unsigned int iStack_14c;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_150;


uint fn_82949650(int *param_1,code *param_2,undefined8 param_3,int *param_4,undefined8 param_5,
                  int *param_6,int *param_7,int *param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  uint *in_stack_0000007c;
  uint uStack_150;
  int iStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined4 auStack_138 [2];
  undefined1 auStack_130 [4];
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  puVar4 = (undefined1 *)0x0;
  puVar2 = (undefined1 *)0x0;
  puVar3 = (undefined1 *)0x0;
  uVar5 = 0;
  uVar1 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(*param_4 * 4 + param_1[5]),&uStack_13c,&uStack_150,
                     auStack_138);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar1 = (**(code **)(*param_1 + 0x144))(param_1,param_4,param_5,&iStack_14c,auStack_138[0]);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (in_stack_0000007c == (uint *)0x0) {
    iVar6 = param_1[0x1c7];
    if (param_1[0x1c7] == 0) {
      iVar6 = iStack_14c;
    }
  }
  else {
    iStack_14c = 0x10000 << (*in_stack_0000007c & 0x3f);
    iVar6 = iStack_14c;
  }
  if (param_6 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*param_6 * 4 + param_1[5]),&uStack_148,auStack_120);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x14c))(param_1,param_6,in_stack_00000054,iVar6,auStack_130);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    puVar4 = auStack_90;
    uVar5 = 1;
  }
  if (param_7 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*param_7 * 4 + param_1[5]),&uStack_144,auStack_11c);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x14c))(param_1,param_7,in_stack_00000054,iVar6,auStack_12c);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    puVar2 = auStack_b0;
    uVar5 = 2;
  }
  if (param_8 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*param_8 * 4 + param_1[5]),&uStack_140,auStack_118);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x14c))(param_1,param_8,in_stack_00000054,iVar6,auStack_128);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    puVar3 = auStack_d0;
    uVar5 = 3;
  }
  uStack_148 = uStack_148 ^ in_stack_0000005c;
  uStack_144 = uStack_144 ^ in_stack_00000064;
  uStack_140 = uStack_140 ^ in_stack_0000006c;
  uVar1 = ((undefined8 (*)())fn_82947568)(param_1,0,uVar5,&uStack_148,auStack_120,auStack_130,auStack_90,0x20);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (iStack_14c == 0xf0000) {
LAB_82949920:
    if ((uStack_150 == 0) && (param_1[0x1c5] == 0)) {
      bVar7 = false;
      ((undefined8 (*)())fn_82941320)(param_1,uStack_13c,auStack_f0,0x20,0);
      goto LAB_82949954;
    }
  }
  else {
    uVar1 = ((uint (*)())fn_82941418)(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (iStack_14c == 0xf0000) goto LAB_82949920;
  }
  bVar7 = true;
  fn_82936290(auStack_f0,0x20,0xffffffff820347dc);
LAB_82949954:
  if (param_2 == (code *)0x0) {
    fn_829411D0(param_1,param_3,auStack_f0,puVar4,puVar2,puVar3);
  }
  else {
    (*param_2)(param_1,auStack_f0,puVar4,puVar2,puVar3);
  }
  if (bVar7) {
    uVar1 = fn_829414C0(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    ((undefined8 (*)())fn_82941320)(param_1,uStack_13c,auStack_110,0x20,0);
    if ((uStack_150 != 0) || (uVar5 = 0, param_1[0x1c5] != 0)) {
      uVar5 = 1;
    }
    uVar1 = fn_82941800(param_1,auStack_110,iStack_14c,uVar5,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_82941938(param_1,auStack_110,uStack_150,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (uStack_150 != 0) {
      bVar7 = (uStack_150 & 0xff0000) != 0;
      if ((bVar7) && (uVar1 = fn_82941580(param_1,uStack_150), (int)uVar1 < 0)) {
        return uVar1;
      }
      uVar1 = fn_82941680(param_1,auStack_110,uStack_150,bVar7,0,0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
  }
  uVar1 = fn_829410A8(param_1,0xffffffff821bab90);
  return (int)uVar1 >> 0x1f & uVar1;
}
/* @@ end fn_82949650 */
