extern unsigned int *auStack_30;
extern int fn_82A8BE08();
extern int fn_82A8C0E0();
extern int fn_82A8C850();
extern int fn_82A8CCB8();
extern unsigned int lbl_8315FA80;


unsigned __int64 fn_82A8CD48(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  char cVar3;
  __int64 lVar4;
  unsigned int auStack_30;
  
  auStack_30 = 0;
  uVar2 = fn_82A8C850(&auStack_30);
  *param_1 = (unsigned int)uVar2;
  if (((uVar2 & 0xffffffff) < 0x49) &&
     (cVar3 = fn_82A8CCB8(&auStack_30,param_2,param_1[1],uVar2,0x60), cVar3 != '\0')) {
    if (lbl_8315FA80 != 1) {
      uVar2 = (unsigned __int64)*param_1;
      if (-1 < (__int64)(uVar2 - 1)) {
        lVar4 = (uVar2 - 1) * 0x60;
        do {
          iVar1 = param_1[1] + (int)lVar4;
          *(float *)(iVar1 + 0x18) = -*(float *)(iVar1 + 0x18);
          iVar1 = param_1[1] + (int)lVar4;
          *(float *)(iVar1 + 0x20) = -*(float *)(iVar1 + 0x20);
          *(float *)(iVar1 + 0x24) = -*(float *)(iVar1 + 0x24);
          lVar4 = lVar4 + -0x60;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    fn_82A8BE08(param_1);
    fn_82A8C0E0();
    return 1;
  }
  *param_1 = 0;
  return 0;
}

