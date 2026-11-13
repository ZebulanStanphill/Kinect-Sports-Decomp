extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_82379660();
extern int fn_8255DA40();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1B64;
extern unsigned int lbl_831D1B68;
extern unsigned int lbl_831D1B6C;
extern unsigned int lbl_831D1B70;
extern unsigned int lbl_831D1B74;


double fn_82379818(int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float fVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char auStack_40 [8];
  float fStack_38;
  
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  fVar3 = lbl_8218EC10;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  *param_2 = 0;
  *param_3 = 0;
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  *param_4 = 0;
  if (fVar3 <= ABS(fStack_38)) {
    dVar5 = (double)((lbl_831D1B74 - fStack_38) / fStack_38);
    if ((double)ltcg_pool_0_0f < dVar5) {
      iVar4 = fn_82379660(dVar5,auStack_40,param_1);
      dVar7 = (double)*(float *)(iVar4 + 4);
      if (*param_1 == 0) {
        dVar6 = (double)lbl_821CA460;
      }
      else {
        dVar6 = (double)fn_8255DA40(*param_1);
      }
      if ((dVar7 < (double)(float)((double)lbl_831D1B6C + dVar6)) ||
         ((double)(float)((double)lbl_831D1B70 + dVar6) <= dVar7)) {
        if ((dVar7 < (double)(float)((double)lbl_831D1B64 - dVar6)) ||
           ((double)(float)((double)lbl_831D1B68 + dVar6) <= dVar7)) {
          if (dVar7 < (double)(float)((double)lbl_831D1B64 - dVar6)) {
            *param_4 = 1;
          }
        }
        else {
          *param_3 = 1;
        }
      }
      else {
        *param_2 = 1;
      }
    }
  }
  else {
    dVar5 = (double)lbl_82192734;
  }
  return dVar5;
}

