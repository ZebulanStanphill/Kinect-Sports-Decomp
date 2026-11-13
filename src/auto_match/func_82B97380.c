extern int fn_82B8FD40();
extern int fn_82B90110();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202EE5C;


void fn_82B97380(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned short uVar1;
  float *pfVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  unsigned short *puVar7;
  unsigned int uVar8;
  unsigned int uVar10;
  __int64 lVar9;
  
  fVar6 = lbl_8202EE5C;
  fVar5 = lbl_82002AE0;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar8 = *(int *)(param_1 + 0x68) * 2 + uVar10;
  if (uVar10 < uVar8) {
    puVar7 = (unsigned short *)(uVar10 - 2);
    lVar9 = (unsigned __int64)((uVar8 - uVar10) - 1 >> 1) + 1;
    do {
      puVar7 = puVar7 + 1;
      uVar1 = *puVar7;
      pfVar2 = (float *)param_4;
      pfVar2[2] = fVar5;
      pfVar2[3] = fVar5;
      cVar3 = (char)uVar1;
      cVar4 = (char)((unsigned short)uVar1 >> 8);
      *pfVar2 = (float)(__int64)(char)((cVar3 == -0x80) + cVar3) * fVar6;
      pfVar2[1] = (float)(__int64)(char)((cVar4 == -0x80) + cVar4) * fVar6;
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

