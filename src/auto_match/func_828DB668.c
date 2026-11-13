extern int fn_82424AD0();
extern int fn_8265CA20();
extern int fn_828DB5B0();
extern int memmove();


unsigned int * fn_828DB668(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  char cVar6;
  int iVar5;
  int iVar7;
  unsigned __int64 uVar8;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar4 = (int)(param_2[1] - uVar1) >> 2;
    if (uVar4 == 0) {
      uVar1 = *param_1;
      if (uVar1 != param_1[1]) {
        memmove(uVar1,param_1[1],0);
        param_1[1] = uVar1;
      }
    }
    else {
      uVar2 = *param_1;
      uVar3 = (int)(param_1[1] - uVar2) >> 2;
      if (uVar3 < uVar4) {
        if ((unsigned int)((int)(param_1[2] - uVar2) >> 2) < uVar4) {
          if (uVar2 != 0) {
            fn_8265CA20(uVar2);
          }
          cVar6 = fn_82424AD0(param_1,(int)(param_2[1] - *param_2) >> 2);
          if (cVar6 == '\0') {
            return param_1;
          }
          uVar8 = (unsigned __int64)*param_2;
          uVar1 = *param_1;
          iVar7 = param_2[1] - *param_2;
        }
        else {
          uVar8 = ((unsigned __int64)uVar3 & 0x3fffffff) * 4 + (unsigned __int64)uVar1;
          fn_828DB5B0((unsigned __int64)uVar1,uVar8);
          uVar1 = param_1[1];
          iVar7 = param_2[1] - (int)uVar8;
        }
        iVar7 = (iVar7 >> 2) * 4;
        iVar5 = memmove(uVar1,uVar8,iVar7);
        param_1[1] = iVar5 + iVar7;
      }
      else {
        fn_828DB5B0();
        param_1[1] = ((int)(param_2[1] - *param_2) >> 2) * 4 + *param_1;
      }
    }
  }
  return param_1;
}

