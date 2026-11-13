extern int fn_82311AB8();
extern int fn_82F69290();
extern unsigned int lbl_82167E64;


unsigned __int64 fn_8260D428(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned char *param_4,unsigned int param_5)

{
  unsigned char *pbVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  unsigned char **appuStack_20 [8];
  
  if ((unsigned int)param_1[4] < param_2) {
    fn_82311AB8(appuStack_20,0xffffffff821961fc);
    appuStack_20[0] = &lbl_82167E64;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dda18);
  }
  uVar3 = param_1[4] - param_2;
  if (uVar3 < param_3) {
    param_3 = uVar3;
  }
  uVar3 = param_3;
  if (param_5 <= param_3) {
    uVar3 = param_5;
  }
  if (0xf < (unsigned int)param_1[5]) {
    param_1 = (unsigned int *)*param_1;
  }
  pbVar4 = (unsigned char *)((int)param_1 + param_2);
  uVar2 = 0;
  if (uVar3 != 0) {
    pbVar1 = pbVar4 + uVar3;
    do {
      uVar2 = (unsigned __int64)*pbVar4 - (unsigned __int64)*param_4;
      if (uVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      param_4 = param_4 + 1;
    } while (pbVar4 != pbVar1);
  }
  if ((uVar2 & 0xffffffff) == 0) {
    if (param_3 < param_5) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = (unsigned __int64)(param_5 != param_3);
    }
  }
  return uVar2;
}

