typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_826ABE30();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_826B0868(int *param_1)

{
  int iVar1;
  char *pcVar2;
  unsigned char *puVar3;
  bool bVar4;
  int *piVar6;
  char cVar7;
  unsigned __int64 uVar5;
  unsigned char uVar8;
  unsigned int uVar9;
  char *pcVar10;
  unsigned int *puVar11;
  struct { int first; int second; } stack_pair_50;

  unsigned char bStack_48;
  unsigned char auStack_40 [32];
  
  iVar1 = *param_1;
  pcVar2 = *(char **)(iVar1 + 8);
  pcVar10 = pcVar2 + -0x10;
  if (pcVar2 <= *(char **)(iVar1 + 0xc)) {
    pcVar10 = *(char **)(iVar1 + 0x14);
  }
  uVar8 = 0;
  if ((*pcVar2 == '\b') || (bVar4 = false, *pcVar2 == '\v')) {
    bVar4 = true;
  }
  if (bVar4) {
    fn_82696B20(&stack_pair_50.first);
    uVar8 = 0;
    if (stack_pair_50.first != 0) {
      piVar6 = (int *)fn_82696AD0(pcVar10,*param_1);
      if (piVar6 != (int *)0x0) {
        auStack_40[0] = 0;
        cVar7 = (**(int (***)())(*(int *)(stack_pair_50.first + 0x10) + 0x2c))
                          (stack_pair_50.first + 0x10,*param_1 + 0x78,
                           (unsigned __int64)*(unsigned int *)(*param_1 + 0x78) + 0x130,auStack_40);
        if (cVar7 == '\0') {
          uVar8 = 0;
          if ((*(unsigned char *)((int)param_1 + 0x36) & 0x80) != 0) {
            fn_826ABE30(param_1 + 9,0xffffffff820079b8);
          }
        }
        else {
          uVar5 = fn_82696958(auStack_40,*param_1);
          uVar8 = (**(int (***)())(*piVar6 + 0x48))(piVar6,*param_1,uVar5,1);
        }
        fn_82696330(auStack_40);
      }
    }
    if (((bStack_48 & 2) == 0) && (stack_pair_50.first != 0)) {
      fn_826824B0();
    }
    stack_pair_50.first = 0;
    if (((bStack_48 & 1) == 0) && (stack_pair_50.second != 0)) {
      fn_826824B0();
    }
    stack_pair_50.second = 0;
  }
  else if ((*(unsigned char *)((int)param_1 + 0x36) & 0x80) != 0) {
    fn_826ABE30(param_1 + 9,0xffffffff82007978);
  }
  iVar1 = *param_1;
  piVar6 = (int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 8) - 0x20U < *(unsigned int *)(iVar1 + 0xc)) {
    fn_82683270(piVar6,2);
  }
  else {
    fn_82696330();
    *piVar6 = *piVar6 + -0x10;
    fn_82696330();
    *piVar6 = *piVar6 + -0x10;
  }
  iVar1 = *param_1;
  puVar11 = (unsigned int *)(iVar1 + 8);
  uVar9 = *(int *)(iVar1 + 8) + 0x10;
  *puVar11 = uVar9;
  if (*(unsigned int *)(iVar1 + 0x10) <= uVar9) {
    fn_826826A8(puVar11);
  }
  puVar3 = (unsigned char *)*puVar11;
  if (puVar3 != (unsigned char *)0x0) {
    puVar3[4] = uVar8;
    *puVar3 = 2;
  }
  return;
}

