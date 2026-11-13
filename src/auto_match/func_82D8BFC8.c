extern unsigned int *auStack_30;
extern int fn_82CE5410();
extern int fn_82D80C48();
extern int fn_82D89BD8();
extern unsigned int iStack_28;
extern unsigned int iStack_2c;


void fn_82D8BFC8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_30 [4];
  int iStack_2c;
  int iStack_28;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(*(int *)(param_1 + 8) + 0x94) == 0)) {
    fn_82D89BD8(param_1);
    (**(int (***)())(*(int *)(param_1 + 0xe0) + 0x50))(param_1 + 0xe0,param_2,param_3);
  }
  else {
    auStack_30[0] = 0x1c;
    iStack_2c = param_1;
    iVar3 = fn_82CE5410();
    iStack_28 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x20);
    puVar1 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + iStack_28 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (unsigned int *)(in_r0 + (int)param_2 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(iStack_28 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    fn_82D80C48(*(unsigned int *)(param_1 + 8),auStack_30);
  }
  return;
}

