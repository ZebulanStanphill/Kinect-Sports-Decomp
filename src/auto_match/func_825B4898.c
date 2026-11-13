extern int fn_82522DF8();
extern int fn_82549798();
extern int fn_825B47E8();
extern unsigned int lbl_82195598;
extern unsigned int lbl_82195668;


int * fn_825B4898(int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  double dVar7;
  double dVar8;
  
  param_1[2] = (int)param_4;
  *param_1 = (int)param_2;
  lVar1 = (__int64)(0x1000 << ((int)param_2 - 1U & 0x3f)) * (__int64)param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = (int)lVar1;
  param_1[6] = 0;
  iVar2 = fn_82549798(lVar1,0x1000,param_4,0);
  param_1[3] = iVar2;
  lVar1 = param_2 * 0xc;
  iVar2 = fn_82522DF8(lVar1);
  param_1[7] = iVar2;
  uVar4 = (unsigned __int64)((unsigned int)param_1[1] >> 0xc);
  if ((param_2 & 0xffffffff) != 0) {
    iVar2 = 0;
    dVar8 = (double)lbl_82195668;
    dVar7 = lbl_82195598;
    do {
      puVar6 = (unsigned int *)(param_1[7] + iVar2);
      if (puVar6 != (unsigned int *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar3 = fn_82522DF8((__int64)
                                  (float)(__int64)((double)(float)((double)uVar4 * dVar8) + dVar7)
                                  & 0xffffffff);
        puVar6[2] = uVar3;
      }
      param_2 = param_2 - 1;
      iVar2 = iVar2 + 0xc;
      uVar4 = uVar4 >> 1;
    } while (param_2 != 0);
  }
  uVar4 = (unsigned __int64)(unsigned int)param_1[3];
  uVar5 = (unsigned __int64)(unsigned int)(0x1000 << (*param_1 - 1U & 0x3f));
  if (uVar4 < (uVar4 + (unsigned int)param_1[1] & 0xffffffff)) {
    do {
      fn_825B47E8((unsigned __int64)(unsigned int)param_1[7] + lVar1 + -0xc);
      uVar4 = uVar4 + uVar5;
    } while ((uVar4 & 0xffffffff) <
             ((unsigned __int64)(unsigned int)param_1[3] + (unsigned __int64)(unsigned int)param_1[1] & 0xffffffff));
  }
  return param_1;
}

