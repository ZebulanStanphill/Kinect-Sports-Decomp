extern int fn_82A53EC0();
extern int fn_82C397B8();


unsigned __int64 fn_82C3A170(int *param_1)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  short sVar5;
  unsigned short uVar6;
  int iVar7;
  
  iVar2 = *param_1;
  uVar4 = 0;
  if (*(short *)((int)param_1 + 0x96) < *(short *)(iVar2 + 0x244)) {
    do {
      uVar4 = 0;
      iVar3 = *param_1;
      iVar7 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar2 + 0x248)) * 0x6f0 +
              *(int *)(iVar2 + 0x140);
      if (*(int *)(iVar7 + 0x28) != 0) {
        uVar4 = fn_82C397B8(param_1,iVar7,0,*(unsigned int *)(iVar7 + 0x24));
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        uVar1 = *(unsigned short *)(iVar3 + 0x2da);
        uVar6 = *(unsigned short *)(iVar7 + 0x1ea);
        if (*(unsigned short *)(iVar7 + 0x1ea) < uVar1) {
          uVar6 = uVar1;
        }
        *(unsigned short *)(iVar3 + 0x2da) = uVar6;
      }
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      if (*(int *)(iVar2 + 0x3c) == 1) {
        param_1[0x42] = param_1[0x42] - (param_1[0x42] & 7U);
      }
      *(unsigned short *)(iVar2 + 0xca) = 0;
      fn_82A53EC0(param_1);
      sVar5 = *(short *)((int)param_1 + 0x96) + 1;
      *(short *)((int)param_1 + 0x96) = sVar5;
    } while (sVar5 < *(short *)(iVar2 + 0x244));
  }
  return uVar4;
}

