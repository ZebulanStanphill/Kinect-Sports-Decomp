extern unsigned int *auStack_50;
extern int fn_82C3CD68();
extern unsigned int uStack_60;


unsigned __int64 fn_82C1D908(unsigned __int64 param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned __int64 *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char *pbVar3;
  __int64 lVar4;
  unsigned char *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uStack_60;
  __int64 lStack_58;
  unsigned char auStack_50 [80];
  
  lVar4 = 0;
  if ((((param_2 == (unsigned char *)0x0) || ((param_3 & 0xffffffff) == 0)) || (param_4 == (unsigned __int64 *)0x0)
      ) || ((param_1 & 0xffffffff) == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uStack_60 = *param_4;
    if ((param_3 & 0xffffffff) != 0) {
      puVar5 = auStack_50 + -(int)param_2;
      do {
        uVar6 = param_3;
        if (0xf < (param_3 & 0xffffffff)) {
          uVar6 = 0x10;
        }
        lStack_58 = lVar4;
        fn_82C3CD68(param_1,auStack_50,&uStack_60,1);
        uVar7 = uVar6;
        pbVar3 = param_2;
        uVar1 = uVar6 & 0xffffffff;
        while (uVar1 != 0) {
          *pbVar3 = pbVar3[(int)puVar5] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          uVar7 = uVar7 - 1;
          uVar1 = uVar7;
        }
        param_3 = param_3 - uVar6;
        param_2 = param_2 + 0x10;
        puVar5 = puVar5 + -0x10;
        lVar4 = lVar4 + 1;
      } while (param_3 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

