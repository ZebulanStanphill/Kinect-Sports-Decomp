extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200DD28;


void fn_8292CEE0(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned short uVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  unsigned int uVar7;
  __int64 lVar6;
  unsigned int uVar8;
  unsigned short *puVar9;
  
  fVar5 = lbl_8200DD28;
  fVar4 = lbl_82002AE0;
  uVar8 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar7 = *(int *)(param_1 + 0x68) * 2 + uVar8;
  if (uVar8 < uVar7) {
    puVar9 = (unsigned short *)(uVar8 - 2);
    lVar6 = (unsigned __int64)((uVar7 - uVar8) - 1 >> 1) + 1;
    do {
      puVar9 = puVar9 + 1;
      uVar1 = *puVar9;
      pfVar3 = (float *)param_4;
      pfVar3[3] = fVar4;
      fVar2 = (float)uVar1 * fVar5;
      pfVar3[2] = fVar2;
      pfVar3[1] = fVar2;
      *pfVar3 = fVar2;
      param_4 = param_4 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
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

