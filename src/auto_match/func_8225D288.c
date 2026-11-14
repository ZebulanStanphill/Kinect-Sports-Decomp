extern unsigned int *auStack_30;
extern int fn_8225DD28();
extern int fn_82526608();
extern int fn_8265C9E0();
extern int fn_828EB518();
extern int fn_828EBF50();
extern int fn_82A1DD38();
extern int XMemSet();
extern unsigned int uRam00000404;
extern unsigned int uRam00000408;


unsigned int fn_8225D288(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_30 [12];
  
  uVar4 = 4;
  while (iVar2 = fn_828EB518(uVar4), iVar2 != 0) {
    uVar4 = uVar4 + 1;
    if (7 < (uVar4 & 0xffffffff)) {
      return 0;
    }
  }
  if ((uVar4 & 0xffffffff) == 0xfe) {
    return 0;
  }
  auStack_30[0] = fn_828EBF50(param_2,uVar4);
  iVar2 = fn_8265C9E0(0x410);
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 0x404) = 0;
    *(unsigned int *)(iVar2 + 0x408) = 0;
    *(unsigned int *)(iVar2 + 0x40c) = 3;
                    /* WARNING: Subroutine does not return */
    XMemSet(iVar2,0,1000);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_82A1DD38(0,param_3,1000);
    uRam00000404 = 1;
    uRam00000408 = 1;
  }
  puVar3 = (unsigned int *)fn_82526608(param_1 + 0x48,auStack_30);
  uVar1 = auStack_30[0];
  *puVar3 = 0;
  fn_8225DD28(param_1,uVar4,auStack_30[0]);
  return uVar1;
}

