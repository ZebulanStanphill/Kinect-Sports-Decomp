#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern int fn_8289DF30();
extern int fn_828A22D0();
extern int fn_828A44B8();
extern int fn_828A7138();
extern int fn_828A80B0();
extern int fn_828E4C40();
extern int fn_828E4FC8();
extern unsigned int iStack_bc;
extern unsigned int iStack_c4;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_b0;


void fn_828E51D0(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  struct { int first; int second; } stack_pair_d0;

  unsigned char *puStack_c8;
  int iStack_c4;
  unsigned int *puStack_c0;
  int iStack_bc;
  unsigned int uStack_b0;
  unsigned int *puStack_ac;
  unsigned char *puStack_a8;
  unsigned int *puStack_a4;
  unsigned char auStack_a0 [4];
  unsigned char auStack_9c [80];
  unsigned int uStack_4c;
  unsigned char *puStack_48;
  unsigned int uStack_44;
  unsigned __int64 uStack_40;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  puStack_c0 = (unsigned int *)0x0;
  iStack_bc = 0;
  RtlEnterCriticalSection(param_1 + 3);
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 4) == 1)) {
    stack_pair_d0.first = param_1[2];
    if ((int *)stack_pair_d0.first == (int *)**(unsigned int **)*param_1) {
      stack_pair_d0.first = *(int *)**(unsigned int **)*param_1;
    }
    fn_828A7138(param_1,0,&stack_pair_d0.first,1);
  }
  fn_828A22D0(&puStack_c0,param_1);
  RtlLeaveCriticalSection(param_1 + 3);
  puVar2 = puStack_c0;
  uStack_40 = CONCAT44(param_2,param_3);
  puStack_48 = auStack_9c;
  uStack_4c = 10;
  puStack_c8 = auStack_a0;
  auStack_a0[0] = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  piVar1 = (int *)*puStack_c0;
  stack_pair_d0.first = *piVar1;
  stack_pair_d0.second = stack_pair_d0.first;
  iStack_c4 = stack_pair_d0.first;
  fn_828E4C40(&stack_pair_d0.first);
  puStack_a8 = auStack_a0;
  puStack_ac = *(unsigned int **)*puVar2;
  uStack_b0 = *puStack_ac;
  puStack_a4 = puStack_ac;
  fn_828E4C40(&uStack_b0);
  fn_828E4FC8(puVar2[2],CONCAT44(uStack_b0,puStack_ac),CONCAT44(puStack_a8,puStack_a4),
                CONCAT44(stack_pair_d0.first,stack_pair_d0.second),CONCAT44(puStack_c8,iStack_c4));
  if (uStack_38 < uStack_34) {
    fn_828A80B0(param_1,piVar1);
  }
  fn_828A44B8(auStack_a0);
  if (iStack_bc != 0) {
    fn_8289DF30();
  }
  return;
}

