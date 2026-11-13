extern unsigned int *auStack_2c;
extern int fn_8245BC50();
extern unsigned int iStack_30;


void fn_8245BF00(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  int iStack_30;
  unsigned int auStack_2c;
  
  if (*(int *)(param_1 + 0x574) == 0) {
    RtlEnterCriticalSection();
    puVar6 = (unsigned int *)(param_1 + 0x568);
    iVar5 = 0;
    *(unsigned int *)(param_1 + 0x570) = 0;
    do {
      iVar3 = (**(int (***)())(*(int *)*puVar6 + 0xc))();
      if ((iVar3 != 0) && ((*(int *)(param_1 + 0x570) == 0 || (iVar5 == 1)))) {
        *(unsigned int *)(param_1 + 0x570) = *puVar6;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < 2);
    RtlLeaveCriticalSection(param_1);
    piVar1 = *(int **)(param_1 + 0x570);
    if (piVar1 == (int *)0x0) {
      return;
    }
    iStack_30 = 0;
    auStack_2c = 0;
    uVar4 = (**(int (***)())(*piVar1 + 8))(piVar1,&iStack_30,&auStack_2c);
    *(unsigned int *)(param_1 + 0x71c) = uVar4;
    if (iStack_30 == 0) {
      return;
    }
    uVar4 = 0;
    uVar2 = auStack_2c;
    iVar5 = iStack_30;
  }
  else {
    uVar4 = *(unsigned int *)(param_1 + 0x5c4);
    *(unsigned int *)(param_1 + 0x578) = 1;
    uVar2 = *(unsigned int *)(param_1 + 0x5d0);
    iVar5 = *(int *)(param_1 + 0x5cc);
  }
  fn_8245BC50(param_1,uVar4,iVar5,uVar2);
  return;
}

