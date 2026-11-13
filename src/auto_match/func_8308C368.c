extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_831BCF54;


__int64 fn_8308C368(unsigned int *param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned short *puVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned short *puVar9;
  __int64 lVar8;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  
  uVar2 = param_1[1];
  uVar10 = uVar2 + param_5;
  iVar3 = fn_82CE5410();
  uVar11 = (unsigned int)uVar10;
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar11) {
    uVar6 = ((unsigned __int64)param_1[2] & 0x3fffffff) << 1;
    if ((int)uVar6 <= (int)uVar11) {
      uVar6 = uVar10;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1,uVar6,4);
  }
  param_1[1] = uVar11;
  lVar4 = (uVar10 & 0x3fffffff) * 4 + (unsigned __int64)*param_1;
  lVar7 = ((unsigned __int64)uVar2 & 0x3fffffff) * 4 + (unsigned __int64)*param_1;
  uVar1 = *(unsigned short *)((int)((param_5 & 0xffffffff) << 2) + param_4 + -4);
  dataCacheBlockTouch(lVar4 + -4);
  dataCacheBlockTouch(lVar4 + -0x204);
  dataCacheBlockTouch(lVar7 + -4);
  dataCacheBlockTouch(lVar4 + -0x204);
  puVar9 = (unsigned short *)(lVar7 + -4);
  puVar5 = (unsigned short *)(lVar4 + -4);
  *puVar5 = *puVar9;
  *(unsigned short *)((int)lVar4 + -2) = *(unsigned short *)((int)lVar7 + -2);
  lVar4 = lVar4 + -8;
  iVar3 = (int)lVar4;
  *(short *)(*(int *)(&lbl_831BCF54 + ((*puVar9 & 1) + param_3 * 2) * 4) +
             (unsigned int)*(unsigned short *)((int)lVar7 + -2) * 0x10 + param_2) =
       (short)((int)((int)puVar5 - *param_1) >> 2);
  lVar8 = lVar7 + -8;
  if (uVar1 < *(unsigned short *)lVar8) {
    lVar7 = lVar7 + -0x208;
    do {
      *(unsigned int *)lVar4 = *(unsigned int *)(unsigned short *)lVar8;
      dataCacheBlockTouch(lVar7);
      *(short *)(*(int *)(&lbl_831BCF54 + ((*(unsigned short *)lVar8 & 1) + param_3 * 2) * 4) +
                 (unsigned int)*(unsigned short *)((int)lVar7 + 0x202) * 0x10 + param_2) =
           (short)((int)((int)(unsigned int *)lVar4 - *param_1) >> 2);
      dataCacheBlockTouch(lVar7);
      lVar7 = lVar7 + -4;
      lVar8 = lVar8 + -4;
      lVar4 = lVar4 + -4;
      iVar3 = (int)lVar4;
    } while (uVar1 < *(unsigned short *)lVar8);
  }
  return (__int64)((int)(iVar3 - *param_1) >> 2) + 1;
}

