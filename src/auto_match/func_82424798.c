extern unsigned int *auStack_30;
extern int fn_8233EB88();
extern int fn_82424AD0();
extern int fn_8265CA20();
extern int fn_82F63CA0();


unsigned int * fn_82424798(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar5;
  int iVar4;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned char auStack_30 [48];
  
  if (param_1 != param_2) {
    uVar7 = *param_2;
    uVar6 = (unsigned __int64)uVar7;
    uVar3 = (int)(param_2[1] - uVar7) >> 2;
    if (uVar3 == 0) {
      fn_8233EB88(auStack_30,param_1,*param_1,param_1[1]);
    }
    else {
      uVar1 = *param_1;
      uVar2 = (int)(param_1[1] - uVar1) >> 2;
      if (uVar2 < uVar3) {
        if ((unsigned int)((int)(param_1[2] - uVar1) >> 2) < uVar3) {
          if (uVar1 != 0) {
            fn_8265CA20();
          }
          cVar5 = fn_82424AD0(param_1,(int)(param_2[1] - *param_2) >> 2);
          if (cVar5 == '\0') {
            return param_1;
          }
          uVar9 = (unsigned __int64)*param_2;
          uVar7 = *param_1;
          iVar8 = param_2[1] - *param_2;
        }
        else {
          uVar9 = ((unsigned __int64)uVar2 & 0x3fffffff) * 4 + uVar6;
          fn_82F63CA0(uVar1,uVar6,((int)((int)uVar9 - uVar7) >> 2) << 2);
          uVar7 = param_1[1];
          iVar8 = param_2[1] - (int)uVar9;
        }
        iVar8 = (iVar8 >> 2) * 4;
        iVar4 = fn_82F63CA0(uVar7,uVar9,iVar8);
        uVar7 = iVar4 + iVar8;
      }
      else {
        fn_82F63CA0(uVar1,uVar6,((int)(param_2[1] - uVar7) >> 2) << 2);
        uVar7 = ((int)(param_2[1] - *param_2) >> 2) * 4 + *param_1;
      }
      param_1[1] = uVar7;
    }
  }
  return param_1;
}

