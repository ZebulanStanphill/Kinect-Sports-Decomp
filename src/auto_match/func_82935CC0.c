extern int fn_82F68CC0();


int fn_82935CC0(unsigned char *param_1,unsigned int param_2,unsigned char *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned char *pbVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  
  uVar1 = *param_4;
  uVar3 = 0;
  pbVar2 = param_3;
  if (uVar1 != 0) {
    do {
      if (uVar1 - uVar3 < param_2) break;
      lVar4 = 0;
      if (param_2 * 8 != 0) {
        pbVar6 = param_1;
        pbVar5 = pbVar2;
        do {
          lVar4 = (unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar5;
          if (lVar4 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != param_1 + param_2 * 8);
      }
      if ((int)lVar4 == 0) {
        return uVar3 << 3;
      }
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 8;
    } while (uVar3 < uVar1);
  }
  fn_82F68CC0(param_3 + uVar1 * 8,param_1);
  *param_4 = uVar1 + param_2;
  return uVar1 * 8;
}

