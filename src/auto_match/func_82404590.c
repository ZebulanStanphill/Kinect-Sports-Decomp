extern unsigned int *auStack_30;
extern int fn_82321D30();


void fn_82404590(int param_1,int param_2)

{
  int (**pcVar1)();
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_30 [16];
  
  iVar4 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0x80) + 0x3ec) + 0xc))();
  if (param_2 == 0) {
    pcVar1 = *(int (***)())(**(int **)(iVar4 + 0x24) + 4);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    pcVar1 = *(int (***)())(**(int **)(iVar4 + 0x24) + 8);
  }
  iVar4 = (*pcVar1)();
  iVar5 = fn_82321D30(auStack_30,*(unsigned int *)(iVar4 + 0x5b0),iVar4);
  puVar2 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)(iVar4 + 0x730U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  return;
}

