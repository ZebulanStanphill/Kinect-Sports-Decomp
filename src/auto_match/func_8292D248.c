extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;
extern unsigned int lbl_8202EE5C;


void fn_8292D248(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned int uVar1;
  float *pfVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  unsigned int uVar9;
  __int64 lVar8;
  unsigned int uVar10;
  unsigned char *pbVar11;
  
  fVar7 = lbl_8202EE5C;
  fVar6 = lbl_82005328;
  fVar5 = lbl_82002AE0;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar9 = *(int *)(param_1 + 0x68) * 4 + uVar10;
  if (uVar10 < uVar9) {
    pbVar11 = (unsigned char *)(uVar10 - 3);
    lVar8 = (unsigned __int64)((uVar9 - uVar10) - 1 >> 2) + 1;
    do {
      uVar1 = *(unsigned int *)(pbVar11 + 3);
      pfVar2 = (float *)param_4;
      pfVar2[2] = fVar5;
      cVar3 = (char)((unsigned int)uVar1 >> 8);
      cVar4 = (char)uVar1;
      pfVar2[1] = (float)(__int64)(char)((cVar3 == -0x80) + cVar3) * fVar7;
      *pfVar2 = (float)(__int64)(char)((cVar4 == -0x80) + cVar4) * fVar7;
      pbVar11 = pbVar11 + 4;
      pfVar2[3] = (float)*pbVar11 * fVar6;
      param_4 = param_4 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
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

