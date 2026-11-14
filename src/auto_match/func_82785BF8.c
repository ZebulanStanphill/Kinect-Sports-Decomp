#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_827856F0();
extern int cos();
extern int fn_82F65018();
extern int fn_82F65E18();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8201559C;
extern unsigned int uStack_118;
extern unsigned int uStack_120;


void fn_82785BF8(unsigned __int64 param_1,float *param_2,float *param_3,unsigned __int64 param_4,
                  float *param_5,unsigned __int64 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  unsigned __int64 uStack_120;
  unsigned int uStack_118;
  
  iVar5 = fn_82F6A530();
  if ((param_6 & 0xff) == 0) {
    fVar1 = *param_5;
    fVar2 = param_5[3];
  }
  else {
    fVar1 = param_5[1];
    fVar2 = param_5[4];
  }
  fVar3 = (*param_2 - *param_3) * (float)((double)lbl_82002AE0 / extraout_f1);
  fVar4 = (param_3[1] - param_2[1]) * (float)((double)lbl_82002AE0 / extraout_f1);
  dVar15 = (double)(fVar3 * fVar2);
  dVar14 = (double)(fVar4 * fVar2);
  dVar13 = (double)(fVar3 * fVar1);
  dVar12 = (double)(fVar4 * fVar1);
  dVar9 = (double)fn_82F65018(-dVar15,-dVar14);
  dVar11 = (double)(float)dVar9;
  dVar10 = (double)(float)((double)(float)(dVar11 + (double)lbl_8201559C) - dVar11);
  dVar9 = (double)fn_82F65E18((double)(param_5[5] /
                                       (*(float *)(iVar5 + 0x28) * 0.25f + param_5[5])));
  iVar7 = (int)(dVar10 / (double)((float)dVar9 * lbl_82005344)) + 1;
  uStack_120 = (__int64)iVar7;
  dVar9 = (double)(float)((double)(float)(dVar10 / (double)uStack_120) + dVar11);
  if ((param_6 & 0xff) == 0) {
    uStack_118 = *(unsigned int *)(iVar5 + 0x10);
    uStack_120 = CONCAT44((float)((double)*param_2 - dVar12),(float)((double)param_2[1] - dVar13));
    piVar8 = (int *)(iVar5 + 0x40);
    fn_827856F0(piVar8,&uStack_120);
    iVar6 = *(int *)(iVar5 + 0x40) + -1;
    *(int *)(iVar5 + 100) = iVar6;
    *(int *)(iVar5 + 0x60) = iVar6;
    if ((*(char *)((int)param_5 + 0x36) != '\0') || (*(char *)((int)param_5 + 0x37) != '\0')) {
      uStack_118 = 0xffffffff;
      uStack_120 = CONCAT44((float)((double)*param_2 - dVar14),(float)((double)param_2[1] - dVar15))
      ;
      fn_827856F0(piVar8,&uStack_120);
      iVar6 = *piVar8 + -1;
    }
    *(int *)(iVar5 + 0x6c) = iVar6;
    *(int *)(iVar5 + 0x68) = iVar6;
  }
  else {
    *(unsigned int *)(iVar5 + 0x60) = *(unsigned int *)(iVar5 + 100);
    *(unsigned int *)(iVar5 + 0x68) = *(unsigned int *)(iVar5 + 0x6c);
  }
  if (iVar7 < 1) {
    fn_82F6A57C();
    return;
  }
                    /* WARNING: Subroutine does not return */
  cos(dVar9);
}

