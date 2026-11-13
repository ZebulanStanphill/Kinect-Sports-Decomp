extern int memchr();


unsigned int fn_822C1928(unsigned int *param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned char *pbVar1;
  __int64 lVar2;
  unsigned char *pbVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  
  if ((param_4 != 0) || ((unsigned int)param_1[4] < param_3)) {
    if ((param_3 < (unsigned int)param_1[4]) && (uVar4 = param_1[4] - param_3, param_4 <= uVar4)) {
      pbVar7 = (unsigned char *)((uVar4 - param_4) + 1);
      puVar5 = param_1;
      if (0xf < (unsigned int)param_1[5]) {
        puVar5 = (unsigned int *)*param_1;
      }
      pbVar8 = (unsigned char *)((int)puVar5 + param_3);
      while (pbVar1 = (unsigned char *)memchr(pbVar8,*param_2,pbVar7), pbVar1 != (unsigned char *)0x0) {
        lVar2 = 0;
        if (param_4 != 0) {
          pbVar3 = param_2;
          pbVar6 = pbVar1;
          do {
            lVar2 = (unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar3;
            if (lVar2 != 0) break;
            pbVar6 = pbVar6 + 1;
            pbVar3 = pbVar3 + 1;
          } while (pbVar6 != pbVar1 + param_4);
        }
        if ((int)lVar2 == 0) {
          if (0xf < (unsigned int)param_1[5]) {
            param_1 = (unsigned int *)*param_1;
          }
          return (int)pbVar1 - (int)param_1;
        }
        pbVar7 = pbVar8 + (int)(pbVar7 + (-1 - (int)pbVar1));
        pbVar8 = pbVar1 + 1;
      }
    }
    param_3 = 0xffffffff;
  }
  return param_3;
}

