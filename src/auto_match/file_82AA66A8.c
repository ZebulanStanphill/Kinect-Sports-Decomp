/* file_82AA66A8: functions fn_82AA66A8..fn_82AA7010, grouped as one unit because they appear
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

/* @@ end of shared declarations */

/* @@ begin fn_82AA66A8 */
extern void __cdecl __va_start(va_list *, ...);
extern __declspec(noreturn) void fn_82AA64F8(int ctx, int code, va_list ap);

__declspec(noreturn) void fn_82AA66A8(int ctx, int code, ...)
{
  va_list ap;
  __va_start(&ap, code);
  fn_82AA64F8(ctx, code, ap);
}
/* @@ end fn_82AA66A8 */

/* @@ begin fn_82AA66E0 */
extern void __cdecl __va_start(va_list *, ...);
extern int fn_82F6EDE8(char *buf, unsigned int size, const char *fmt, va_list ap);
extern __declspec(noreturn) void fn_82AA66A8(int ctx, int code, ...);

void fn_82AA66E0(int ctx, const char *fmt, ...)
{
  va_list ap;
  char buf[0x100];
  __va_start(&ap, fmt);
  fn_82F6EDE8(buf, sizeof(buf), fmt, ap);
  fn_82AA66A8(ctx, 0xdd6, buf);
}
/* @@ end fn_82AA66E0 */

/* @@ begin fn_82AA6740 */
extern int fn_82935258();


undefined4 * fn_82AA6740(undefined4 *param_1,unsigned int param_2)

{
  int iVar1;
  
  fn_82935258();
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)((uint)param_1 & 0xfffff000);
    *param_1 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 **)(iVar1 + 0xc) = param_1;
  }
  return param_1;
}
/* @@ end fn_82AA6740 */

/* @@ begin fn_82AA6798 */
extern int fn_8265C990();


void fn_82AA6798(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x9c);
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) break;
    puVar2 = (uint *)(uVar1 & 0xfffffffe);
    *(uint *)(puVar2[1] & 0xfffffffe) = *puVar2;
    *(uint *)(*puVar2 & 0xfffffffe) = puVar2[1];
    fn_8265C990(uVar1,0x618d0000);
  }
  return;
}
/* @@ end fn_82AA6798 */

/* @@ begin fn_82AA6808 */
extern int fn_8265C990();
extern void fn_82AA6798();


void fn_82AA6808(int param_1)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x84);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    fn_8265C990(iVar2,0xffffffffa08d0000);
    iVar2 = iVar1;
  }
  fn_82AA6798(param_1);
  return;
}
/* @@ end fn_82AA6808 */

/* @@ begin fn_82AA6868 */
extern int fn_82F691F0();


void fn_82AA6868(int param_1)

{
  if ((ulonglong)*(uint *)(param_1 + 0x84) == 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x84) + 8;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x84);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1,0,0x84);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0((ulonglong)*(uint *)(param_1 + 0x84) + 8,0,0xff8);
}
/* @@ end fn_82AA6868 */

/* @@ begin fn_82AA68E0 */
extern int *fn_8265C940(int size, unsigned int flags);
extern __declspec(noreturn) void fn_82AA66A8(int ctx, int code, ...);

void fn_82AA68E0(int param_1)
{
    int *p;

    p = fn_8265C940(0x1000, 0xe08d0000);
    if (p == 0) {
        fn_82AA66A8(*(int *)(param_1 + 0x94), 0xdbd);
    }
    p[0] = param_1;
    p[1] = 0;
}
/* @@ end fn_82AA68E0 */

/* @@ begin fn_82AA6940 */
extern int fn_82635978();
extern int fn_8265C990();
extern undefined4 * fn_82AA6740();
extern void fn_82AA6808();
extern unsigned int iStack00000014;


void fn_82AA6940(int param_1)

{
  int iStack00000014;
  
  iStack00000014 = param_1;
  if (*(int *)(param_1 + 0x304) != 0) {
    fn_82AA6740(*(int *)(param_1 + 0x304),1);
    *(undefined4 *)(param_1 + 0x304) = 0;
  }
  if (*(int *)(param_1 + 0x300) != 0) {
    fn_82635978();
    *(undefined4 *)(param_1 + 0x300) = 0;
  }
  fn_82AA6808(param_1 + 0x32c);
  fn_82AA6808(param_1 + 0x3cc);
  fn_8265C990(*(undefined4 *)(param_1 + 0x310),0x24810000);
  *(undefined4 *)(param_1 + 0x310) = 0;
  return;
}
/* @@ end fn_82AA6940 */

/* @@ begin fn_82AA6DC0 */
extern int fn_828FCDD8();
extern void fn_82AA6940();
extern unsigned int iStack_1c;


int fn_82AA6DC0(int *param_1)

{
  int iVar1;
  int *piStack00000014;
  int iStack_1c;
  
  iVar1 = param_1[1];
  if ((*(uint *)(iVar1 + 0x28) & 0x10000000) != 0) {
    if (*param_1 != *(int *)(iVar1 + 0x34)) {
      *param_1 = *(int *)(iVar1 + 0x34);
      piStack00000014 = param_1;
      fn_82AA6940(iVar1,0xffffffff80004005);
      fn_828FCDD8(iVar1);
      piStack00000014[1] = 0;
      *(undefined1 *)(piStack00000014 + 2) = 0;
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x9b0) = 0x8000ffff;
  }
  iStack_1c = *(int *)(iVar1 + 0x9b0);
  if (-1 < iStack_1c) {
    iStack_1c = -0x7fff0001;
  }
  return iStack_1c;
}
/* @@ end fn_82AA6DC0 */

/* @@ begin fn_82AA6EA0 */
extern int fn_828FCDD8();
extern void fn_82AA6940();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;


undefined4 fn_82AA6EA0(int param_1,undefined4 param_2)

{
  int iStack00000014;
  undefined4 uStack0000001c;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  if (*(char *)(param_1 + 8) != '\0') {
    fn_82AA6940(*(undefined4 *)(param_1 + 4),param_2);
  }
  if (*(int *)(iStack00000014 + 4) != 0) {
    fn_828FCDD8(*(undefined4 *)(iStack00000014 + 4));
  }
  return uStack0000001c;
}
/* @@ end fn_82AA6EA0 */

/* @@ begin fn_82AA6F30 */
extern int fn_82BA02A8();
extern int fn_82F691F0();


void fn_82AA6F30(uint *param_1)

{
  fn_82BA02A8();
  *param_1 = (uint)(param_1 + 1) | 1;
  param_1[1] = (uint)param_1 | 1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0xcb,0,0x84);
}
/* @@ end fn_82AA6F30 */

/* @@ begin fn_82AA7010 */
extern int fn_82A9F198();
extern __declspec(noreturn) void fn_82AA66A8(int ctx, int code, ...);
extern void fn_82AA6868();
extern int fn_82AA6A30();
extern int fn_82B43380();
extern int fn_82B44EB0();
extern int fn_82B5EA40();
extern int fn_82B61D78();


void fn_82AA7010(int param_1,ulonglong param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  uint uVar2;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  uint *in_stack_00000064;
  
  if (param_4 != 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x800;
  }
  *(int *)(param_1 + 0x34) = (int)param_3;
  *(int *)(param_1 + 0x30) = (int)param_2;
  *(uint **)(param_1 + 0x38) = in_stack_00000064;
  if (in_stack_00000064 != (uint *)0x0) {
    uVar2 = in_stack_00000064[4];
    *(uint *)(param_1 + 0x318) = uVar2;
    if (0x40 < uVar2) {
      fn_82AA66A8(param_1,0xe05,0x40);
    }
    if ((param_2 & 0xffff0000) == 0xffff0000) {
      *(uint *)(param_1 + 800) = in_stack_00000064[8];
      *(uint *)(param_1 + 0x324) = in_stack_00000064[9];
      uVar2 = in_stack_00000064[0xc];
    }
    else {
      *(uint *)(param_1 + 800) = in_stack_00000064[10];
      *(uint *)(param_1 + 0x324) = in_stack_00000064[0xb];
      uVar2 = in_stack_00000064[0xd];
    }
    *(uint *)(param_1 + 0x328) = uVar2;
    if ((*in_stack_00000064 & 0x80) != 0) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x1000;
    }
    if ((in_stack_00000064 != (uint *)0x0) && ((*in_stack_00000064 & 2) != 0)) {
      fn_82A9F198(in_stack_00000064[5],param_6,param_2);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x30) & 0xffff0000;
  if (uVar2 != 0xffff0000) {
    if ((*(uint **)(param_1 + 0x38) == (uint *)0x0) || ((**(uint **)(param_1 + 0x38) & 0x20) != 0))
    {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x10;
    }
    if (uVar2 != 0xffff0000) goto LAB_82aa7160;
  }
  if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) && ((**(uint **)(param_1 + 0x38) & 0x40) != 0)) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x40;
  }
LAB_82aa7160:
  lVar1 = fn_82B61D78(param_1,param_5,param_7);
  if (lVar1 == 0) {
    fn_82AA66A8(param_1,0xdad,param_6);
  }
  fn_82B5EA40();
  fn_82B44EB0(param_1);
  uVar2 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4) &
                    0xfffffffe) + 4);
  if (((uVar2 & 1) == 0) && (uVar2 != 0)) {
    fn_82B43380(param_1);
  }
  fn_82AA6868(param_1 + 0x3cc);
  fn_82AA6A30(param_1,param_2,param_3,in_stack_00000054,in_stack_0000005c,in_stack_00000064);
  return;
}
/* @@ end fn_82AA7010 */
