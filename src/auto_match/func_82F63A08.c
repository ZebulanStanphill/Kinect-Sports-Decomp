typedef unsigned char bool;
#define false 0
extern int fn_82F68240();
extern int fn_82F6B2A0();
extern unsigned int lbl_82015610;
extern unsigned int lbl_82015618;


double fn_82F63A08(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned int *param_4)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  double dVar5;
  
  puVar3 = (unsigned int *)fn_82F68240();
  uVar2 = *puVar3;
  puVar3 = (unsigned int *)fn_82F68240();
  *puVar3 = 0;
  dVar5 = (double)fn_82F6B2A0(param_1,param_2);
  puVar3 = (unsigned int *)fn_82F68240();
  *param_4 = *puVar3;
  puVar3 = (unsigned int *)fn_82F68240();
  bVar1 = (int)param_3 < 0;
  *puVar3 = uVar2;
  lVar4 = param_3;
  if (0 < (int)param_3) {
    lVar4 = 0;
    do {
      dVar5 = dVar5 * lbl_82015618;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar1 = false;
  }
  if (bVar1) {
    lVar4 = -lVar4;
    do {
      dVar5 = dVar5 * lbl_82015610;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return dVar5;
}

