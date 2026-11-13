extern int fn_82BE5240();
extern int fn_82BF1C20();


unsigned __int64 fn_82BF1098(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar4;
  unsigned __int64 uVar3;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  
  if (((param_2 & 0xffffffff) == 0) || ((int)param_3 == 0)) {
    uVar3 = 0x1f6;
  }
  else {
    pbVar4 = (unsigned char *)fn_82BF1C20(param_2,param_3);
    pbVar6 = *(unsigned char **)(param_1 + 0x6c);
    pbVar5 = pbVar4 + 0x14;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar6;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar4 != pbVar5);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82BE5240(param_1,0x1f6,0xffffffff82196582);
    }
  }
  return uVar3;
}

