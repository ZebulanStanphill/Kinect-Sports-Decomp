extern int fn_82D7E470();


int fn_82A694E8(int param_1,int param_2)

{
  int uVar1;
  short sVar2;
  int iVar4;
  unsigned short uVar5;
  int iVar6;
  unsigned int auStack_50;

  uVar1 = 0;
  for (sVar2 = 0; sVar2 < *(unsigned short *)(param_1 + 0x22); sVar2++) {
    auStack_50 = 0;
    iVar4 = sVar2 * 0x6f0 + param_2;
    *(unsigned short *)(iVar4 + 0xb6) = 2;
    for (uVar5 = 0; uVar5 < 2; uVar5++) {
      iVar6 = uVar5 * 0x38 + iVar4 + 200;
      uVar1 = fn_82D7E470(iVar6,0x20,0,&auStack_50,0);
      if (uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_82D7E470(param_1,iVar6);
      if (uVar1 < 0) {
        return uVar1;
      }
    }
  }
  return uVar1;
}
