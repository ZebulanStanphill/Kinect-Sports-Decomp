extern unsigned int lbl_821AAD20;


void fn_82677488(int param_1,int *param_2,unsigned __int64 param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  piVar4 = (int *)*param_2;
  if (piVar4 != (int *)0x0) {
    (**(int (***)())(*piVar4 + 0x40))(piVar4,param_3,param_2[7],param_2[8],0);
    uVar6 = lbl_821AAD20;
    puVar5 = *(unsigned __int64 **)(param_1 + 0xd8);
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    *(unsigned int *)(puVar5 + param_4 * 2 + 0xf1) = lbl_821AAD20;
    *(int *)(puVar5 + (param_4 + 0x78) * 2) = iVar1;
    *(int *)((int)puVar5 + param_4 * 0x10 + 0x784) = iVar2;
    uVar7 = param_4 + 1;
    *(int *)((int)puVar5 + param_4 * 0x10 + 0x78c) = iVar3;
    *puVar5 = 0x8000000000000000U >> ((unsigned __int64)(param_4 >> 2) & 0x7f) | *puVar5;
    iVar1 = param_2[4];
    iVar2 = param_2[5];
    puVar5 = *(unsigned __int64 **)(param_1 + 0xd8);
    iVar3 = param_2[6];
    *(unsigned int *)(puVar5 + uVar7 * 2 + 0xf1) = uVar6;
    *(int *)((int)puVar5 + uVar7 * 0x10 + 0x784) = iVar2;
    *(int *)((int)puVar5 + uVar7 * 0x10 + 0x78c) = iVar3;
    *(int *)(puVar5 + (param_4 + 0x79) * 2) = iVar1;
    *puVar5 = 0x8000000000000000U >> ((unsigned __int64)(uVar7 >> 2) & 0x7f) | *puVar5;
  }
  return;
}

