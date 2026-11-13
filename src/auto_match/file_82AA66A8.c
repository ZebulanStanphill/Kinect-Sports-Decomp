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
#define true 1
typedef int (*code)();

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


unsigned int * fn_82AA6740(unsigned int *param_1,unsigned int param_2)

{
  int iVar1;
  
  fn_82935258();
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)((unsigned int)param_1 & 0xfffff000);
    *param_1 = *(unsigned int *)(iVar1 + 0xc);
    *(unsigned int **)(iVar1 + 0xc) = param_1;
  }
  return param_1;
}
/* @@ end fn_82AA6740 */

/* @@ begin fn_82AA6798 */
extern int fn_8265C990();


void fn_82AA6798(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  while( true ) {
    uVar1 = *(unsigned int *)(param_1 + 0x9c);
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) break;
    puVar2 = (unsigned int *)(uVar1 & 0xfffffffe);
    *(unsigned int *)(puVar2[1] & 0xfffffffe) = *puVar2;
    *(unsigned int *)(*puVar2 & 0xfffffffe) = puVar2[1];
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
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x84) == 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x84) + 8;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x84);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1,0,0x84);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0((unsigned __int64)*(unsigned int *)(param_1 + 0x84) + 8,0,0xff8);
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
extern unsigned int * fn_82AA6740();
extern void fn_82AA6808();
extern unsigned int iStack00000014;


void fn_82AA6940(int param_1)

{
  int iStack00000014;
  
  iStack00000014 = param_1;
  if (*(int *)(param_1 + 0x304) != 0) {
    fn_82AA6740(*(int *)(param_1 + 0x304),1);
    *(unsigned int *)(param_1 + 0x304) = 0;
  }
  if (*(int *)(param_1 + 0x300) != 0) {
    fn_82635978();
    *(unsigned int *)(param_1 + 0x300) = 0;
  }
  fn_82AA6808(param_1 + 0x32c);
  fn_82AA6808(param_1 + 0x3cc);
  fn_8265C990(*(unsigned int *)(param_1 + 0x310),0x24810000);
  *(unsigned int *)(param_1 + 0x310) = 0;
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
  if ((*(unsigned int *)(iVar1 + 0x28) & 0x10000000) != 0) {
    if (*param_1 != *(int *)(iVar1 + 0x34)) {
      *param_1 = *(int *)(iVar1 + 0x34);
      piStack00000014 = param_1;
      fn_82AA6940(iVar1,0xffffffff80004005);
      fn_828FCDD8(iVar1);
      piStack00000014[1] = 0;
      *(unsigned char *)(piStack00000014 + 2) = 0;
      return 0;
    }
    *(unsigned int *)(iVar1 + 0x9b0) = 0x8000ffff;
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


unsigned int fn_82AA6EA0(int param_1,unsigned int param_2)

{
  int iStack00000014;
  unsigned int uStack0000001c;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  if (*(char *)(param_1 + 8) != '\0') {
    fn_82AA6940(*(unsigned int *)(param_1 + 4),param_2);
  }
  if (*(int *)(iStack00000014 + 4) != 0) {
    fn_828FCDD8(*(unsigned int *)(iStack00000014 + 4));
  }
  return uStack0000001c;
}
/* @@ end fn_82AA6EA0 */

/* @@ begin fn_82AA6F30 */
extern int fn_82BA02A8();
extern int fn_82F691F0();


void fn_82AA6F30(unsigned int *param_1)

{
  fn_82BA02A8();
  *param_1 = (unsigned int)(param_1 + 1) | 1;
  param_1[1] = (unsigned int)param_1 | 1;
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


void fn_82AA7010(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  __int64 lVar1;
  unsigned int uVar2;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int *in_stack_00000064;
  
  if (param_4 != 0) {
    *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x800;
  }
  *(int *)(param_1 + 0x34) = (int)param_3;
  *(int *)(param_1 + 0x30) = (int)param_2;
  *(unsigned int **)(param_1 + 0x38) = in_stack_00000064;
  if (in_stack_00000064 != (unsigned int *)0x0) {
    uVar2 = in_stack_00000064[4];
    *(unsigned int *)(param_1 + 0x318) = uVar2;
    if (0x40 < uVar2) {
      fn_82AA66A8(param_1,0xe05,0x40);
    }
    if ((param_2 & 0xffff0000) == 0xffff0000) {
      *(unsigned int *)(param_1 + 800) = in_stack_00000064[8];
      *(unsigned int *)(param_1 + 0x324) = in_stack_00000064[9];
      uVar2 = in_stack_00000064[0xc];
    }
    else {
      *(unsigned int *)(param_1 + 800) = in_stack_00000064[10];
      *(unsigned int *)(param_1 + 0x324) = in_stack_00000064[0xb];
      uVar2 = in_stack_00000064[0xd];
    }
    *(unsigned int *)(param_1 + 0x328) = uVar2;
    if ((*in_stack_00000064 & 0x80) != 0) {
      *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x1000;
    }
    if ((in_stack_00000064 != (unsigned int *)0x0) && ((*in_stack_00000064 & 2) != 0)) {
      fn_82A9F198(in_stack_00000064[5],param_6,param_2);
    }
  }
  uVar2 = *(unsigned int *)(param_1 + 0x30) & 0xffff0000;
  if (uVar2 != 0xffff0000) {
    if ((*(unsigned int **)(param_1 + 0x38) == (unsigned int *)0x0) || ((**(unsigned int **)(param_1 + 0x38) & 0x20) != 0))
    {
      *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x10;
    }
    if (uVar2 != 0xffff0000) goto LAB_82aa7160;
  }
  if ((*(unsigned int **)(param_1 + 0x38) != (unsigned int *)0x0) && ((**(unsigned int **)(param_1 + 0x38) & 0x40) != 0)) {
    *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x40;
  }
LAB_82aa7160:
  lVar1 = fn_82B61D78(param_1,param_5,param_7);
  if (lVar1 == 0) {
    fn_82AA66A8(param_1,0xdad,param_6);
  }
  fn_82B5EA40();
  fn_82B44EB0(param_1);
  uVar2 = *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4) &
                    0xfffffffe) + 4);
  if (((uVar2 & 1) == 0) && (uVar2 != 0)) {
    fn_82B43380(param_1);
  }
  fn_82AA6868(param_1 + 0x3cc);
  fn_82AA6A30(param_1,param_2,param_3,in_stack_00000054,in_stack_0000005c,in_stack_00000064);
  return;
}
/* @@ end fn_82AA7010 */
