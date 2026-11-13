extern int fn_82C562F0();
extern int fn_82C563B0();
extern int fn_82CAD2F8();


unsigned __int64 fn_82CAD4C0(int param_1,int *param_2,int param_3,unsigned int *param_4,unsigned int param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  uVar6 = (unsigned __int64)(*param_4 >> 6);
  uVar4 = 0;
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6070) + 8;
  puVar2 = param_4;
  if (*param_4 >> 6 != 0) {
    do {
      uVar1 = puVar2[1] & 0x3f;
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      uVar6 = uVar6 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar6 != 0);
  }
  uVar1 = param_5 & 0xff;
  if (uVar1 < uVar4) {
    uVar4 = param_5;
  }
  if (0x7f < uVar1) {
    uVar4 = uVar1 + 0x80 & 0xff;
  }
  param_2[1] = param_3;
  *(char *)(param_2 + 2) = (char)uVar4;
  if (*param_2 != 0) {
    fn_82C563B0(lVar5);
    *param_2 = 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    uVar6 = fn_82C562F0(lVar5,(((unsigned __int64)(*param_4 >> 5) & 0x7fffffe) +
                                     (unsigned __int64)(unsigned int)(1 << (uVar4 & 0x3f)) & 0x7fffffff) << 1,
                              0xffffffff82196582);
  }
  else {
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 4) =
         ((*param_4 >> 5 & 0x7fffffe) + (1 << (uVar4 & 0x3f))) * 2 + *(unsigned int *)(param_1 + 4);
  }
  if ((uVar6 & 0xffffffff) == 0) {
    uVar3 = 5;
  }
  else {
    fn_82CAD2F8(uVar6,param_4,0,uVar4 & 0xff);
    *param_2 = (int)uVar6;
    uVar3 = 0;
  }
  return uVar3;
}

