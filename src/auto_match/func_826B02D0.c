typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_826824B0();
extern int fn_82683270();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696B20();
extern int fn_82697610();
extern int fn_826ABE30();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


void fn_826B02D0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char cVar7;
  int iVar6;
  char *pcVar8;
  unsigned __int64 uVar9;
  int *piVar10;
  struct { int first; int second; } stack_pair_70;

  unsigned char bStack_68;
  struct { int first; int second; } stack_pair_60;

  unsigned char bStack_58;
  unsigned char auStack_50 [16];
  char acStack_40 [16];

  fn_82695DA0(acStack_40,*(unsigned int *)(*param_1 + 8));
  uVar1 = *param_1;
  uVar4 = (unsigned __int64)*(unsigned int *)(uVar1 + 8) - 0x10;
  if ((unsigned __int64)*(unsigned int *)(uVar1 + 8) <= (unsigned __int64)*(unsigned int *)(uVar1 + 0xc)) {
    uVar4 = (unsigned __int64)*(unsigned int *)(uVar1 + 0x14);
  }
  uVar5 = fn_82697610(uVar4);
  uVar1 = *param_1;
  piVar10 = (int *)(uVar1 + 8);
  if (*(int *)(uVar1 + 8) - 0x20U < *(unsigned int *)(uVar1 + 0xc)) {
    fn_82683270(piVar10,2);
  }
  else {
    fn_82696330();
    *piVar10 = *piVar10 + -0x10;
    fn_82696330();
    *piVar10 = *piVar10 + -0x10;
  }
  if ((acStack_40[0] == '\b') || (bVar3 = false, acStack_40[0] == '\v')) {
    bVar3 = true;
  }
  if (bVar3) {
    fn_82696B20(&stack_pair_60.first,acStack_40,*param_1);
    iVar6 = 0;
    if (stack_pair_60.first != 0) {
      auStack_50[0] = 0;
      cVar7 = (**(int (***)())(*(int *)(stack_pair_60.first + 0x10) + 0x2c))
                        (stack_pair_60.first + 0x10,*param_1 + 0x78,
                         (unsigned __int64)*(unsigned int *)(*param_1 + 0x78) + 0x130,auStack_50);
      if (cVar7 == '\0') {
        if ((*(unsigned char *)((int)param_1 + 0x36) & 0x80) != 0) {
          fn_826ABE30(param_1 + 9,0xffffffff820078a0);
        }
      }
      else {
        iVar6 = fn_82696958(auStack_50,*param_1);
        if (iVar6 != 0) {
          piVar10 = (int *)(iVar6 + 0x10);
          (**(int (***)())(*(int *)(iVar6 + 0x10) + 0x44))(piVar10,(unsigned __int64)*param_1 + 0x78,uVar5,0);
          uVar4 = 0;
          if (0 < (int)uVar5) {
            do {
              uVar1 = *param_1;
              pcVar8 = (char *)0x0;
              uVar9 = (__int64)(*(int *)(uVar1 + 8) - *(int *)(uVar1 + 0xc) >> 4) +
                      ((unsigned __int64)*(unsigned int *)(uVar1 + 0x1c) - 1 & 0x7ffffff) * 0x20;
              if ((uVar4 & 0xffffffff) <= (uVar9 & 0xffffffff)) {
                uVar2 = (int)uVar9 - (int)uVar4;
                pcVar8 = (char *)(*(int *)((uVar2 >> 3 & 0x1ffffffc) + *(int *)(uVar1 + 0x18)) +
                                 (uVar2 & 0x1f) * 0x10);
              }
              if ((*pcVar8 == '\b') || (bVar3 = false, *pcVar8 == '\v')) {
                bVar3 = true;
              }
              if (bVar3) {
                fn_82696B20(&stack_pair_70.first);
                iVar6 = 0;
                if (stack_pair_70.first != 0) {
                  (**(int (***)())(*piVar10 + 0x44))(piVar10,(unsigned __int64)*param_1 + 0x78,uVar4);
                  iVar6 = stack_pair_70.first;
                }
                if (((bStack_68 & 2) == 0) && (iVar6 != 0)) {
                  fn_826824B0(iVar6);
                }
                stack_pair_70.first = 0;
                if (((bStack_68 & 1) == 0) && (stack_pair_70.second != 0)) {
                  fn_826824B0();
                }
                stack_pair_70.second = 0;
              }
              uVar4 = uVar4 + 1;
            } while ((int)uVar4 < (int)uVar5);
          }
        }
      }
      fn_82696330(auStack_50);
      iVar6 = stack_pair_60.first;
    }
    if (((bStack_58 & 2) == 0) && (iVar6 != 0)) {
      fn_826824B0(iVar6);
    }
    stack_pair_60.first = 0;
    if (((bStack_58 & 1) == 0) && (stack_pair_60.second != 0)) {
      fn_826824B0();
    }
    stack_pair_60.second = 0;
  }
  else if ((*(unsigned char *)((int)param_1 + 0x36) & 0x80) != 0) {
    fn_826ABE30(param_1 + 9,0xffffffff82007864);
  }
  fn_82683270((unsigned __int64)*param_1 + 8,uVar5);
  fn_82696330(acStack_40);
  return;
}
