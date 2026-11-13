extern int fn_82B8FD40();
extern int fn_82B90110();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202706C;
extern unsigned int lbl_8202EE50;


void fn_82B974A8(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned short uVar1;
  char cVar2;
  char cVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  unsigned int uVar9;
  __int64 lVar8;
  unsigned int uVar10;
  unsigned short *puVar11;
  
  fVar7 = lbl_8202EE50;
  fVar6 = lbl_8202706C;
  fVar5 = lbl_82002AE0;
  uVar10 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
           *(int *)(param_1 + 0x20);
  uVar9 = *(int *)(param_1 + 0x68) * 2 + uVar10;
  if (uVar10 < uVar9) {
    puVar11 = (unsigned short *)(uVar10 - 2);
    lVar8 = (unsigned __int64)((uVar9 - uVar10) - 1 >> 1) + 1;
    do {
      uVar1 = puVar11[1];
      pfVar4 = (float *)param_4;
      pfVar4[2] = fVar5;
      cVar2 = (char)((unsigned char)(((__int64)(short)uVar1 & 0xffffffffU) << 3) |
                    (unsigned char)((short)uVar1 >> 0xf) >> 5) >> 3;
      cVar3 = (char)(uVar1 >> 2) >> 3;
      *pfVar4 = (float)(__int64)(char)((cVar2 == -0x10) + cVar2) * fVar6;
      pfVar4[1] = (float)(__int64)(char)((cVar3 == -0x10) + cVar3) * fVar6;
      puVar11 = puVar11 + 1;
      pfVar4[3] = (float)(*puVar11 >> 10) * fVar7;
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

