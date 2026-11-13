extern int fn_82A43408();
extern int fn_82F68CC0();


unsigned __int64
fn_82A509A8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4,unsigned __int64 param_5)

{
  unsigned char *pbVar1;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  
  pbVar1 = *(unsigned char **)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4) * 4;
  lVar4 = 0;
  if (iVar3 != 0) {
    pbVar6 = pbVar1;
    pbVar5 = param_4;
    do {
      lVar4 = (unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar5;
      if (lVar4 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != pbVar1 + iVar3);
  }
  if ((int)lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82F68CC0(pbVar1,param_4);
    uVar2 = fn_82A43408(param_1,param_5);
  }
  return uVar2;
}

