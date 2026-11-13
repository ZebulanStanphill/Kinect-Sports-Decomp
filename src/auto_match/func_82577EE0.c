extern int fn_825C86C0();
extern unsigned int lbl_82195690;


unsigned __int64 fn_82577EE0(int *param_1,float *param_2,float *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  
  iVar4 = 0;
  uVar3 = 0;
  if (param_4 != (int *)0x0) {
    param_4[1] = 0;
    *param_4 = 0;
  }
  *param_3 = lbl_82195690;
  if ((*param_1 == 0) && (0 < param_1[2])) {
    piVar5 = param_1 + 3;
    do {
      iVar1 = *piVar5;
      if ((iVar1 != 0) &&
         (dVar6 = (double)fn_825C86C0((double)*param_2,(double)param_2[1],(double)param_2[2],
                                            iVar1), (double)*param_3 < dVar6)) {
        *param_3 = (float)dVar6;
        uVar3 = 1;
        if (param_4 != (int *)0x0) {
          iVar2 = *(int *)(*(int *)(iVar1 + 0x54) + 0x278);
          *param_4 = iVar1;
          param_4[1] = iVar2;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < param_1[2]);
  }
  return uVar3;
}

