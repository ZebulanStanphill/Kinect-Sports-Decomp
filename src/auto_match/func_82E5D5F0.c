extern int fn_82E627B8();


__int64 fn_82E5D5F0(unsigned int *param_1,int *param_2)

{
  __int64 lVar1;
  int iVar2;
  __int64 lVar3;
  int *piStack_40;
  int *piStack_3c;
  int *apiStack_38 [2];
  __int64 alStack_30;
  
  if ((param_1 == (unsigned int *)0x0) || (param_2 == (int *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    apiStack_38[0] = (int *)0x0;
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x0;
    lVar1 = (**(int (***)())*param_1)(param_1,0xffffffff82154c18,apiStack_38);
    if (((-1 < lVar1) &&
        (lVar1 = (**(int (***)())(*apiStack_38[0] + 0x24))
                           (apiStack_38[0],0xffffffff8202e618,&piStack_3c), -1 < lVar1)) &&
       (lVar1 = (**(int (***)())(*piStack_3c + 0x14))(), -1 < lVar1)) {
      lVar3 = 0;
      while (iVar2 = (**(int (***)())(*piStack_3c + 0xc))(piStack_3c,1,&piStack_40,0), iVar2 == 0) {
        alStack_30 = 0;
        lVar1 = (**(int (***)())(*piStack_40 + 0x14))(piStack_40,0,&alStack_30);
        if (lVar1 < 0) goto LAB_82e5d744;
        lVar3 = alStack_30 + lVar3;
        if (piStack_40 != (int *)0x0) {
          (**(int (***)())(*piStack_40 + 8))();
          piStack_40 = (int *)0x0;
        }
      }
      lVar1 = (**(int (***)())(*param_2 + 0x10))(param_2,0xffffffff82154aa8,0,&piStack_40);
      if (-1 < lVar1) {
        lVar1 = fn_82E627B8(piStack_40,lVar3);
      }
    }
LAB_82e5d744:
    if (apiStack_38[0] != (int *)0x0) {
      (**(int (***)())(*apiStack_38[0] + 8))();
      apiStack_38[0] = (int *)0x0;
    }
    if (piStack_3c != (int *)0x0) {
      (**(int (***)())(*piStack_3c + 8))();
      piStack_3c = (int *)0x0;
    }
    if (piStack_40 != (int *)0x0) {
      (**(int (***)())(*piStack_40 + 8))();
    }
  }
  return lVar1;
}

