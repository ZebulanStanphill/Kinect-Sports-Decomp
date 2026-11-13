extern int fn_82CEDE90();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005748;


void fn_82CE7340(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = fn_82F6A548();
  uVar5 = (unsigned __int64)param_3[1];
  if ((unsigned __int64)param_3[1] < (unsigned __int64)*param_3) {
    uVar5 = (unsigned __int64)*param_3;
  }
  lVar3 = (uVar5 - param_3[1]) - (unsigned __int64)param_3[3];
  dVar7 = (double)(__int64)(int)lVar3;
  if (((param_4 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) == 0x7fffffff)) {
    param_4 = uVar5;
  }
  dVar8 = (double)(param_4 & 0xffffffff);
  uVar6 = (unsigned __int64)
          ((double)(lbl_82002AE0 -
                   (float)(dVar7 / (double)((unsigned __int64)param_3[1] + (unsigned __int64)param_3[3] &
                                           0xffffffff))) * dVar8);
  uVar4 = uVar6 & 0xffffffff;
  uVar2 = param_4;
  if (uVar4 <= (param_4 & 0xffffffff)) {
    uVar2 = uVar4;
  }
  dVar9 = (double)lbl_82005748;
  dVar10 = (double)(float)(dVar9 / (double)(uVar2 & 0xffffffff));
  fn_82CEDE90(param_2,0xffffffff82132a90,uVar1);
  fn_82CEDE90(param_2,0xffffffff82132a70,uVar5);
  if ((param_4 & 0xffffffff) < uVar5) {
    fn_82CEDE90(param_2,0xffffffff82132a44,uVar5 - param_4,
                      (double)((float)((double)(uVar5 - param_4 & 0xffffffff) * dVar9) /
                              (float)(uVar6 & 0xffffffff)));
    fn_82CEDE90(param_2,0xffffffff82132a24,param_4);
  }
  fn_82CEDE90(param_2,0xffffffff821329f8,lVar3,
                    (double)(float)((double)(float)(dVar7 * dVar9) / dVar8));
  fn_82CEDE90(param_2,0xffffffff821329d8,uVar4);
  fn_82CEDE90(param_2,0xffffffff821329ac,param_3[1],
                    (double)(float)((double)param_3[1] * dVar10));
  fn_82CEDE90(param_2,0xffffffff82132980,param_3[3],
                    (double)(float)((double)param_3[3] * dVar10));
  fn_82CEDE90(param_2,0xffffffff82132954,param_3[2],
                    (double)(float)((double)param_3[2] * dVar10));
  fn_82F6A594();
  return;
}

