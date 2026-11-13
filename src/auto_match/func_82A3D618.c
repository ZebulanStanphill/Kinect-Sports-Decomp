typedef unsigned char bool;


void fn_82A3D618(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  
  sVar5 = (short)param_2;
  sVar4 = sVar5 << 1;
  sVar2 = *(short *)((sVar5 + 0x4ce) * 2 + param_1);
  if (sVar4 <= *(short *)(param_1 + 0x251c)) {
    bVar1 = sVar4 < *(short *)(param_1 + 0x251c);
    do {
      iVar6 = (int)sVar4;
      if ((bVar1) &&
         (*(unsigned short *)(*(short *)((iVar6 + 0x4cf) * 2 + param_1) * 2 + *(int *)(param_1 + 0x990)) <
          *(unsigned short *)(*(short *)((iVar6 + 0x4ce) * 2 + param_1) * 2 + *(int *)(param_1 + 0x990)))) {
        iVar6 = (int)(short)(sVar4 + 1);
      }
      sVar7 = (short)iVar6;
      sVar3 = *(short *)((sVar7 + 0x4ce) * 2 + param_1);
      sVar5 = (short)param_2;
      if (*(unsigned short *)(sVar2 * 2 + *(int *)(param_1 + 0x990)) <=
          *(unsigned short *)(sVar3 * 2 + *(int *)(param_1 + 0x990))) break;
      sVar4 = sVar7 << 1;
      *(short *)(((short)param_2 + 0x4ce) * 2 + param_1) = sVar3;
      bVar1 = sVar4 < *(short *)(param_1 + 0x251c);
      sVar5 = sVar7;
      param_2 = iVar6;
    } while (sVar4 <= *(short *)(param_1 + 0x251c));
  }
  *(short *)((sVar5 + 0x4ce) * 2 + param_1) = sVar2;
  return;
}

