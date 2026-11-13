extern int fn_82311AB8();
extern int fn_82F622E0();
extern int fn_82F69290();
extern unsigned int lbl_82167E64;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82195530;


__int64 fn_823B3BA8(double param_1,int *param_2)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  float fVar4;
  float fVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned char **appuStack_20 [8];
  
  puVar2 = (unsigned int *)*param_2;
  uVar9 = 0;
  uVar7 = 0;
  if ((int)(puVar2[1] - *puVar2) >> 5 != 0) {
    iVar8 = 0;
    uVar6 = 0;
    fVar4 = lbl_82195530;
    do {
      uVar3 = *puVar2;
      if (((unsigned __int64)(unsigned int)((int)(puVar2[1] - uVar3) >> 5) <= (uVar9 & 0xffffffff)) ||
         (fVar5 = ABS((float)((double)*(float *)(iVar8 + uVar3 + 0x10) - param_1)),
         (unsigned __int64)(unsigned int)((int)(puVar2[1] - uVar3) >> 5) <= (uVar9 & 0xffffffff)))
      goto fn_82F622E0;
      fVar1 = *(float *)(iVar8 + uVar3 + 0x10);
      if (((float)(param_1 - (double)lbl_8218EC10) <= fVar1) &&
         (uVar7 = uVar9, fVar1 <= (float)(param_1 + (double)lbl_8218EC10))) break;
      uVar7 = uVar6;
      if (fVar5 < fVar4) {
        uVar7 = uVar9;
        fVar4 = fVar5;
      }
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 0x20;
      uVar6 = uVar7;
    } while ((uVar9 & 0xffffffff) < (unsigned __int64)(unsigned int)((int)(puVar2[1] - *puVar2) >> 5));
  }
  if ((uVar7 & 0xffffffff) < (unsigned __int64)(unsigned int)((int)(puVar2[1] - *puVar2) >> 5)) {
    return (uVar7 & 0x7ffffff) * 0x20 + (unsigned __int64)*puVar2;
  }
fn_82F622E0:
  fn_82311AB8(appuStack_20,0xffffffff821ae698);
  appuStack_20[0] = &lbl_82167E64;
                    /* WARNING: Subroutine does not return */
  fn_82F69290(appuStack_20,0xffffffff821dda18);
}

