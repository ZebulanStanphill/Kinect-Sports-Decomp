extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;


void fn_8292C6C8(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned char bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  unsigned int uVar6;
  __int64 lVar5;
  unsigned int uVar7;
  unsigned char *pbVar8;
  
  fVar3 = lbl_82005328;
  fVar2 = lbl_82002AE0;
  uVar7 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar6 = *(int *)(param_1 + 0x68) * 4 + uVar7;
  if (uVar7 < uVar6) {
    pbVar8 = (unsigned char *)(uVar7 - 3);
    lVar5 = (unsigned __int64)((uVar6 - uVar7) - 1 >> 2) + 1;
    do {
      pfVar4 = (float *)param_4;
      *pfVar4 = (float)pbVar8[6] * fVar3;
      pfVar4[1] = (float)pbVar8[5] * fVar3;
      pbVar8 = pbVar8 + 4;
      bVar1 = *pbVar8;
      pfVar4[3] = fVar2;
      pfVar4[2] = (float)bVar1 * fVar3;
      param_4 = param_4 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
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

