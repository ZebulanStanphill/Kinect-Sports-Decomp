extern int fn_82F65350();
extern int fn_8300E568();
extern int fn_8300E790();
extern float lbl_8209AB30;
extern unsigned int lbl_8217BB90;


unsigned int fn_8300E980(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if ((param_4 & 0xffffffff) == (unsigned __int64)*param_1) {
    if (*(char *)((int)param_1 + 10) == '\0') {
      iVar1 = fn_8300E568(param_1,param_1[1]);
    }
    else {
      iVar1 = fn_8300E790(param_1,param_3,param_4);
    }
    if (iVar1 != 0) {
      if ((*(unsigned short *)(param_1 + 2) < 100) || (*(unsigned short *)(iVar1 + 10) < 100)) {
        dVar3 = (double)(__int64)
                        (int)((unsigned int)*(unsigned short *)(iVar1 + 10) * (unsigned int)*(unsigned short *)(param_1 + 2)) *
                lbl_8209AB30;
        iVar2 = fn_82F65350();
        if (dVar3 <= (double)(__int64)iVar2 * lbl_8217BB90) {
          return 0;
        }
      }
      return *(unsigned int *)(iVar1 + 4);
    }
  }
  return 0;
}

