extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;


void fn_8292CD20(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned char bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned char *pbVar9;
  
  fVar5 = lbl_82005328;
  fVar4 = lbl_82002AE0;
  uVar8 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar6 = *(int *)(param_1 + 0x68) + uVar8;
  if (uVar8 < uVar6) {
    iVar7 = uVar6 - uVar8;
    pbVar9 = (unsigned char *)(uVar8 - 1);
    do {
      pbVar9 = pbVar9 + 1;
      bVar1 = *pbVar9;
      pfVar3 = (float *)param_4;
      pfVar3[3] = fVar4;
      fVar2 = (float)bVar1 * fVar5;
      pfVar3[2] = fVar2;
      pfVar3[1] = fVar2;
      *pfVar3 = fVar2;
      param_4 = param_4 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
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

