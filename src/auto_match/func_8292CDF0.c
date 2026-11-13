extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82005328;


void fn_8292CDF0(int param_1,int param_2,int param_3,__int64 param_4)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  unsigned int uVar5;
  __int64 lVar4;
  unsigned int uVar6;
  unsigned char *pbVar7;
  
  fVar3 = lbl_82005328;
  uVar6 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar5 = *(int *)(param_1 + 0x68) * 2 + uVar6;
  if (uVar6 < uVar5) {
    pbVar7 = (unsigned char *)(uVar6 - 2);
    lVar4 = (unsigned __int64)((uVar5 - uVar6) - 1 >> 1) + 1;
    do {
      fVar1 = (float)pbVar7[3] * fVar3;
      pfVar2 = (float *)param_4;
      pfVar2[2] = fVar1;
      pfVar2[1] = fVar1;
      *pfVar2 = fVar1;
      pbVar7 = pbVar7 + 2;
      pfVar2[3] = (float)*pbVar7 * fVar3;
      param_4 = param_4 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) *
                                             -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82925600(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

