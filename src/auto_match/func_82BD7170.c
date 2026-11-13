typedef unsigned char bool;
extern int fn_82BD6260();
extern int fn_82BD6990();
extern int fn_82BDC780();
extern int fn_82F68CC0();
extern int fn_831430AC();
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_82BD7170(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  int *piVar4;
  char in_RESERVE;
  unsigned char bVar5;
  
  fn_82BD6990();
  lVar3 = fn_831430AC(param_2,0xf,param_1 + 0xc);
  bVar5 = (lVar3 == 0) << 1;
  if (-1 < lVar3) {
    puVar2 = (unsigned int *)param_1;
    lVar3 = fn_82BDC780(puVar2[2],param_2);
    *puVar2 = (int)param_2;
    puVar2[1] = 0;
    fn_82BD6260(puVar2[0x27]);
    puVar2[0x34] = 0x26404;
    do {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(1,0,param_1 + 0x54);
        *(unsigned int *)(param_1 + 0x54) = uVar1;
        bVar5 = 2;
      }
    } while (!(bool)(bVar5 >> 1 & 1));
    fn_82F68CC0(param_1 + 0x60,0xffffffff820e8748,0x36);
    if (-1 < (int)lVar3) {
      return lVar3;
    }
  }
  piVar4 = (int *)(param_1 + 0xc);
  if (*piVar4 != 0) {
    XamVoiceClose();
    *piVar4 = 0;
  }
  return lVar3;
}

