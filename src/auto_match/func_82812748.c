typedef unsigned char bool;
extern int fn_82812348();
extern int fn_828132A8();
extern int fn_82813AE0();
extern int iRam8320a3f0;
extern unsigned int uRam8320a3f4;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82812748(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  char in_RESERVE;
  unsigned char bVar5;
  int aiStack_30 [12];
  
  uVar4 = 0;
  iVar2 = fn_82812348(0xffffffff8320a3f4,0);
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *(char *)(param_1 + 0x78) == '\0';
  bVar5 = bVar1 << 1;
  if (bVar1) {
    if (iRam8320a3f0 == 1) {
      cVar3 = fn_82813AE0(param_1 + 8,aiStack_30);
      bVar5 = (cVar3 == '\0') << 1;
      if (cVar3 == '\0') {
        cVar3 = fn_82813AE0(param_1 + 0x48,aiStack_30);
        bVar5 = (cVar3 == '\0') << 1;
        if (cVar3 == '\0') {
          cVar3 = fn_82813AE0(param_1 + 0x88,aiStack_30);
          bVar5 = (cVar3 == '\0') << 1;
          if (cVar3 == '\0') goto LAB_828127d4;
          *(unsigned char *)(aiStack_30[0] + 0x15) = 0;
        }
      }
    }
    else {
      if ((iRam8320a3f0 < 2) || (3 < iRam8320a3f0)) goto LAB_828127d4;
      cVar3 = fn_82813AE0(param_1 + 8,aiStack_30);
      bVar5 = (cVar3 == '\0') << 1;
      if (cVar3 == '\0') {
        cVar3 = fn_82813AE0(param_1 + 0x48,aiStack_30);
        bVar5 = (cVar3 == '\0') << 1;
        if (cVar3 == '\0') goto LAB_828127d4;
      }
    }
    fn_828132A8(aiStack_30[0]);
    uVar4 = 1;
  }
LAB_828127d4:
  do {
    if (in_RESERVE != '\0') {
      uRam8320a3f4 = storeWordConditionalIndexed((unsigned __int64)uRam8320a3f4 - 1,0,0xffffffff8320a3f4);
      bVar5 = 2;
    }
  } while (!(bool)(bVar5 >> 1 & 1));
  return uVar4;
}

