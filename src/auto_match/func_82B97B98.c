extern int fn_82B8FD40();
extern int fn_82B90110();
extern unsigned int lbl_82015CF0;


void fn_82B97B98(int param_1,int param_2,int param_3,__int64 param_4)

{
  short sVar1;
  float *pfVar2;
  short sVar3;
  short sVar4;
  float fVar5;
  unsigned __int64 *puVar6;
  unsigned int uVar7;
  unsigned int uVar10;
  __int64 lVar8;
  unsigned __int64 uVar9;
  
  fVar5 = lbl_82015CF0;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar7 = *(int *)(param_1 + 0x68) * 8 + uVar10;
  if (uVar10 < uVar7) {
    puVar6 = (unsigned __int64 *)(uVar10 - 8);
    lVar8 = (unsigned __int64)((uVar7 - uVar10) - 1 >> 3) + 1;
    do {
      puVar6 = puVar6 + 1;
      uVar9 = *puVar6;
      sVar1 = (short)((unsigned __int64)uVar9 >> 0x30);
      sVar4 = (short)((unsigned __int64)uVar9 >> 0x20);
      sVar3 = (short)((unsigned __int64)uVar9 >> 0x10);
      pfVar2 = (float *)param_4;
      pfVar2[1] = (float)(__int64)(short)((unsigned short)(sVar3 == -0x8000) + sVar3) * fVar5;
      *pfVar2 = (float)(__int64)(short)((unsigned short)((short)uVar9 == -0x8000) + (short)uVar9) * fVar5;
      pfVar2[2] = (float)(__int64)(short)((unsigned short)(sVar4 == -0x8000) + sVar4) * fVar5;
      pfVar2[3] = (float)(__int64)(short)((unsigned short)(sVar1 == -0x8000) + sVar1) * fVar5;
      param_4 = param_4 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
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

