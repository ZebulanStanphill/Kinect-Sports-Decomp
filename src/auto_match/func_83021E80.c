extern int fn_82A1DDC0();
extern int XMemSet();
extern int fn_82FA5100();
extern int fn_82FA52E0();
extern int fn_8303A930();
extern int fn_8303AA38();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC770;


unsigned __int64 fn_83021E80(int param_1,int param_2)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  float afStack_30;

  if (*(int *)(param_1 + 0x28) != 0) {
    fn_82FA52E0(lbl_831BC770);
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  uVar3 = 0;
  for (uVar4 = *(unsigned int *)(param_1 + 0x20); uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
    uVar3 = uVar3 + 1;
  }
  lVar5 = (uVar3 & 0xfffffff) << 4;
  uVar3 = fn_82FA5100(lbl_831BC770,lVar5,1);
  *(int *)(param_1 + 0x28) = (int)uVar3;
  if ((uVar3 & 0xffffffff) == 0) {
    uVar2 = 0x34;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x60);
    *(float *)(param_1 + 0x14) = fVar1;
    *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_2 + 100);
    afStack_30 = lbl_821AAD20;
    *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_2 + 0x68);
    *(unsigned char *)(param_1 + 0x2d) = *(unsigned char *)(param_2 + 0x6c);
    uVar3 = fn_8303A930((double)fVar1,uVar3,*(unsigned char *)(param_1 + 0x24),&afStack_30);
    *(char *)(param_1 + 0x25) = (char)uVar3;
    if (7 < *(unsigned int *)(param_1 + 0x1c)) {
      if ((uVar3 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
        XMemSet(*(unsigned int *)(param_1 + 0x28),0,lVar5);
      }
      fn_8303AA38((double)afStack_30,uVar3,param_1 + 4);
    }
    fn_82A1DDC0(*(unsigned int *)(param_1 + 0x28),param_2,lVar5);
    uVar2 = 1;
  }
  return uVar2;
}
