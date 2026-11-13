typedef unsigned char bool;
extern int fn_82FEF648();
extern int fn_82FF1438();
extern unsigned int lbl_8217BB40;
extern unsigned int lbl_83264574;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fn_82FF2D40(double param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,char param_5,
                  unsigned int *param_6)

{
  int iVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  RtlEnterCriticalSection(0xffffffff83264580);
  iVar3 = 0;
  dVar5 = (double)lbl_8217BB40;
  for (iVar1 = lbl_83264574; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if (((((param_3 == 0) || (*(int *)(iVar1 + 0x70) == param_3)) &&
         ((dVar4 = (double)*(float *)(iVar1 + 0xdc), dVar4 < dVar5 ||
          ((param_5 != '\0' && (dVar4 == dVar5)))))) && ((*(unsigned char *)(iVar1 + 0xda) & 0x20) == 0)) &&
       (cVar2 = fn_82FEF648(iVar1,param_4), cVar2 != '\0')) {
      dVar5 = dVar4;
      iVar3 = iVar1;
    }
  }
  if ((param_1 < dVar5) || ((param_5 != '\0' && (param_1 == dVar5)))) {
    iVar3 = 0;
  }
  else if (iVar3 != 0) {
    *param_6 = *(unsigned int *)(iVar3 + 0x68);
    fn_82FF1438(iVar3,(int)param_4 == 0);
  }
  RtlLeaveCriticalSection(0xffffffff83264580);
  return iVar3 != 0;
}

