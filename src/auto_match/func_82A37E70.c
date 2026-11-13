typedef unsigned char bool;
extern int fn_82A34678();
extern int fn_82A37B08();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82A37E70(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  puVar2 = (unsigned int *)param_1;
  uVar6 = 0xffffffffffffffff;
  if (puVar2[3] != 0) {
    fn_82A37B08();
    for (piVar4 = (int *)puVar2[1]; (piVar4 != (int *)puVar2[2] && (*piVar4 != param_2));
        piVar4 = piVar4 + *(unsigned short *)(piVar4 + 1)) {
    }
    if (piVar4 != (int *)puVar2[2]) {
      uVar6 = fn_82A34678(*puVar2,piVar4 + 2,param_3);
    }
    do {
      puVar5 = (unsigned int *)(param_1 + 0x30);
      lVar3 = (unsigned __int64)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar3,0,param_1 + 0x30);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar3 == 0) {
      NtSetEvent(puVar2[0xb],0);
    }
  }
  return uVar6;
}

