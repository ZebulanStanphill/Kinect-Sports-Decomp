extern int fn_82A2C1E8();
extern int fn_82F68CC0();


int fn_82A2C3E8(int param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  
  iVar11 = fn_82A2C1E8(param_2);
  if (iVar11 != 0) {
    uVar1 = *(unsigned short *)(param_1 + 0x36);
    *(unsigned char *)(iVar11 + 0x34) = *(unsigned char *)(param_1 + 0x34);
    *(unsigned short *)(iVar11 + 0x36) = uVar1;
    fn_82F68CC0(iVar11 + 0x50,param_1 + 0x50);
    if ((*(unsigned char *)(param_1 + 0x35) & 2) != 0) {
      *(unsigned char *)(iVar11 + 0x35) = *(unsigned char *)(iVar11 + 0x35) | 2;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x14);
    uVar3 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = *(unsigned int *)(param_1 + 0x1c);
    uVar5 = *(unsigned int *)(param_1 + 0x40);
    uVar6 = *(unsigned int *)(param_1 + 0x44);
    uVar7 = *(unsigned int *)(param_1 + 0x24);
    uVar8 = *(unsigned int *)(param_1 + 0x28);
    uVar9 = *(unsigned int *)(param_1 + 0x2c);
    uVar10 = *(unsigned int *)(param_1 + 0x30);
    *(unsigned int *)(iVar11 + 0x20) = *(unsigned int *)(param_1 + 0x20);
    *(unsigned int *)(iVar11 + 0x14) = uVar2;
    *(unsigned int *)(iVar11 + 0x18) = uVar3;
    *(unsigned int *)(iVar11 + 0x1c) = uVar4;
    *(unsigned int *)(iVar11 + 0x40) = uVar5;
    *(unsigned int *)(iVar11 + 0x44) = uVar6;
    *(unsigned int *)(iVar11 + 0x24) = uVar7;
    *(unsigned int *)(iVar11 + 0x28) = uVar8;
    *(unsigned int *)(iVar11 + 0x2c) = uVar9;
    *(unsigned int *)(iVar11 + 0x30) = uVar10;
    *(int *)(iVar11 + 0xc) = param_1;
    *(int *)(param_1 + 0xc) = iVar11;
  }
  return iVar11;
}

