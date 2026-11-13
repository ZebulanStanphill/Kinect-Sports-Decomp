extern int fn_8227F578();


void fn_8227E790(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  
  if (param_2 < (unsigned int)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2)) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    uVar4 = param_3[5];
    uVar5 = param_3[6];
    iVar8 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
    uVar6 = param_3[4];
    uVar7 = param_3[7];
    *(unsigned int *)(iVar8 + 0x74) = *param_3;
    *(unsigned int *)(iVar8 + 0x78) = uVar1;
    *(unsigned int *)(iVar8 + 0x7c) = uVar2;
    *(unsigned int *)(iVar8 + 0x80) = uVar3;
    *(unsigned int *)(iVar8 + 0x84) = uVar6;
    *(unsigned int *)(iVar8 + 0x88) = uVar4;
    *(unsigned int *)(iVar8 + 0x8c) = uVar5;
    *(unsigned int *)(iVar8 + 0x90) = uVar7;
    fn_8227F578(iVar8);
  }
  return;
}

