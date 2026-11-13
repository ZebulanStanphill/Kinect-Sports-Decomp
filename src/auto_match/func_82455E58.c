extern unsigned int *auStack_40;
extern int fn_82321D30();
extern int fn_82F63108();


void fn_82455E58(int param_1,unsigned __int64 param_2)

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
  unsigned char auStack_40 [16];
  
  if ((param_2 & 0xffffffff) == 0) {
    pcVar1 = *(int (***)())(**(int **)(param_1 + 0x24) + 4);
  }
  else {
    if ((param_2 & 0xffffffff) != 1) goto LAB_82455ecc;
    pcVar1 = *(int (***)())(**(int **)(param_1 + 0x24) + 8);
  }
  iVar4 = (*pcVar1)();
  iVar5 = fn_82321D30(auStack_40,*(unsigned int *)(iVar4 + 0x5b0),iVar4);
  puVar2 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)(iVar4 + 0x730U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
LAB_82455ecc:
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(param_1 + 0x38) + 4))(*(int **)(param_1 + 0x38),param_2);
  }
  return;
}

