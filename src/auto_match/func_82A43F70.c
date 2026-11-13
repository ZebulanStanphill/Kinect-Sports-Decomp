extern int fn_82A43408();
extern int fn_82F68CC0();


unsigned __int64 fn_82A43F70(int param_1,int param_2,unsigned char *param_3,unsigned __int64 param_4)

{
  unsigned char *pbVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  pbVar1 = *(unsigned char **)(param_1 + 0xc);
  lVar3 = 0;
  if (param_2 * 4 != 0) {
    pbVar5 = pbVar1;
    pbVar4 = param_3;
    do {
      lVar3 = (unsigned __int64)*pbVar5 - (unsigned __int64)*pbVar4;
      if (lVar3 != 0) break;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != pbVar1 + param_2 * 4);
  }
  if ((int)lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82F68CC0(pbVar1,param_3);
    uVar2 = fn_82A43408(param_1,param_4);
  }
  return uVar2;
}

