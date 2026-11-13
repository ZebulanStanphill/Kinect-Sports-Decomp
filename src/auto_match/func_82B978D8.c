extern int fn_82B8FD40();
extern int fn_82B90110();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015CF0;


void fn_82B978D8(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned int uVar1;
  float *pfVar2;
  short sVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar10;
  __int64 lVar9;
  
  fVar6 = lbl_82015CF0;
  fVar5 = lbl_82002AE0;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar8 = *(int *)(param_1 + 0x68) * 4 + uVar10;
  if (uVar10 < uVar8) {
    puVar7 = (unsigned int *)(uVar10 - 4);
    lVar9 = (unsigned __int64)((uVar8 - uVar10) - 1 >> 2) + 1;
    do {
      puVar7 = puVar7 + 1;
      uVar1 = *puVar7;
      pfVar2 = (float *)param_4;
      pfVar2[2] = fVar5;
      pfVar2[3] = fVar5;
      sVar3 = (short)uVar1;
      sVar4 = (short)((unsigned int)uVar1 >> 0x10);
      *pfVar2 = (float)(__int64)(short)((unsigned short)(sVar3 == -0x8000) + sVar3) * fVar6;
      pfVar2[1] = (float)(__int64)(short)((unsigned short)(sVar4 == -0x8000) + sVar4) * fVar6;
      param_4 = param_4 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) *
                                              -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82B90110(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

