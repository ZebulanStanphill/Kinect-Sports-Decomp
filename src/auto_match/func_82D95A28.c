extern int fn_82CE5410();
extern int fn_82DBBD28();
extern int fn_82DBBF60();


void fn_82D95A28(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned short *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  iVar3 = fn_82DBBD28(param_1,0x18);
  if (iVar3 == 0) {
    iVar3 = fn_82CE5410();
    puVar4 = (unsigned short *)(**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x40)
    ;
    if (puVar4 == (unsigned short *)0x0) {
      puVar4 = (unsigned short *)0x0;
    }
    else {
      *puVar4 = 0x18;
      puVar4[8] = 0x40;
    }
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(puVar4 + 0x10) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(puVar4 + 0x18) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    fn_82DBBF60(param_1,*(unsigned int *)(param_1 + 8));
  }
  else {
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (unsigned int *)(iVar3 + 0x30U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
  }
  return;
}

