extern int fn_82A3D4D8();
extern int fn_82A3D618();


void fn_82A3D700(int param_1,short param_2,int param_3,unsigned int param_4)

{
  short sVar1;
  unsigned short uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  unsigned __int64 uVar6;
  
  for (sVar4 = *(short *)(param_1 + 0x251c) >> 1; 0 < sVar4; sVar4 = sVar4 + -1) {
    param_1 = fn_82A3D618();
  }
  *(unsigned int *)(param_1 + 0x994) = param_4;
  do {
    sVar5 = param_2;
    sVar4 = *(short *)(param_1 + 0x99e);
    if ((int)sVar4 < *(int *)(param_1 + 0x2518)) {
      **(short **)(param_1 + 0x994) = sVar4;
      *(int *)(param_1 + 0x994) = *(int *)(param_1 + 0x994) + 2;
    }
    uVar2 = *(unsigned short *)((*(short *)(param_1 + 0x251c) + 0x4ce) * 2 + param_1);
    *(short *)(param_1 + 0x251c) = *(short *)(param_1 + 0x251c) + -1;
    *(unsigned short *)(param_1 + 0x99e) = uVar2;
    iVar3 = fn_82A3D618(param_1,1);
    sVar1 = *(short *)(iVar3 + 0x99e);
    if ((int)sVar1 < *(int *)(iVar3 + 0x2518)) {
      **(short **)(iVar3 + 0x994) = sVar1;
      *(int *)(iVar3 + 0x994) = *(int *)(iVar3 + 0x994) + 2;
    }
    uVar6 = (unsigned __int64)sVar5;
    *(short *)((int)((uVar6 & 0xffffffff) << 1) + param_3) =
         *(short *)(sVar1 * 2 + param_3) + *(short *)(sVar4 * 2 + param_3);
    *(short *)(iVar3 + 0x99e) = sVar5;
    param_1 = fn_82A3D618(iVar3,1);
    *(short *)((int)((uVar6 + 0x3c6 & 0xffffffff) << 2) + param_1) = sVar4;
    *(short *)((int)((uVar6 & 0xffffffff) << 2) + param_1 + 0xf1a) = sVar1;
    param_2 = sVar5 + 1;
  } while (1 < *(short *)(param_1 + 0x251c));
  *(unsigned int *)(param_1 + 0x994) = param_4;
  fn_82A3D4D8(param_1,sVar5);
  return;
}

