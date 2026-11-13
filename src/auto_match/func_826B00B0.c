typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_82696CB8();
extern int fn_826ABE30();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_826B00B0(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar4;
  char cVar5;
  unsigned __int64 uVar3;
  char *pcVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  struct { int first; int second; } stack_pair_50;

  unsigned char bStack_48;
  unsigned char auStack_40;
  unsigned char auStack_30 [48];
  
  iVar1 = *param_1;
  uVar7 = *(unsigned int *)(iVar1 + 8);
  pcVar6 = (char *)(uVar7 - 0x10);
  if (uVar7 <= *(unsigned int *)(iVar1 + 0xc)) {
    pcVar6 = *(char **)(iVar1 + 0x14);
  }
  auStack_30[0] = 1;
  if ((*pcVar6 == '\b') || (bVar2 = false, *pcVar6 == '\v')) {
    bVar2 = true;
  }
  if (bVar2) {
    fn_82696B20(&stack_pair_50.first);
    if (stack_pair_50.first != 0) {
      piVar4 = (int *)fn_82696AD0(uVar7,*param_1);
      if (piVar4 != (int *)0x0) {
        auStack_40 = 0;
        cVar5 = (**(int (***)())(*(int *)(stack_pair_50.first + 0x10) + 0x2c))
                          (stack_pair_50.first + 0x10,*param_1 + 0x78,
                           (unsigned __int64)*(unsigned int *)(*param_1 + 0x78) + 0x130,&auStack_40);
        if (cVar5 == '\0') {
          if ((*(unsigned char *)((int)param_1 + 0x36) & 0x80) != 0) {
            fn_826ABE30(param_1 + 9,0xffffffff82007820);
          }
        }
        else {
          uVar3 = fn_82696958(&auStack_40,*param_1);
          cVar5 = (**(int (***)())(*piVar4 + 0x48))(piVar4,*param_1,uVar3,1);
          if (cVar5 != '\0') {
            fn_82696CB8(auStack_30,piVar4);
          }
        }
        fn_82696330(&auStack_40);
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
    fn_826ABE30(param_1 + 9,0xffffffff820077e4);
  }
  iVar1 = *param_1;
  piVar4 = (int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 8) - 0x20U < *(unsigned int *)(iVar1 + 0xc)) {
    fn_82683270(piVar4,2);
  }
  else {
    fn_82696330();
    *piVar4 = *piVar4 + -0x10;
    fn_82696330();
    *piVar4 = *piVar4 + -0x10;
  }
  iVar1 = *param_1;
  puVar8 = (unsigned int *)(iVar1 + 8);
  uVar7 = *(int *)(iVar1 + 8) + 0x10;
  *puVar8 = uVar7;
  if (*(unsigned int *)(iVar1 + 0x10) <= uVar7) {
    fn_826826A8(puVar8);
  }
  if (*puVar8 != 0) {
    fn_82695DA0(*puVar8,auStack_30);
  }
  fn_82696330(auStack_30);
  return;
}

