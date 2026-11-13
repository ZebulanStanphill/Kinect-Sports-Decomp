extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E53908();
extern int fn_82EE2C00();


__int64 fn_82E53B10(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  int *piVar2;
  int * apiStack_40;
  
  fn_82E50CB8(param_1 + 0x18);
  if (param_2 == (unsigned int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    apiStack_40 = (int *)0x0;
    lVar1 = fn_82EE2C00(*(unsigned short *)(param_1 + 0x10),1,param_1 + 0x14,&apiStack_40);
    if (-1 < lVar1) {
      piVar2 = (int *)(param_1 + -0x4c);
      lVar1 = (**(int (***)())(*piVar2 + 0x80))(piVar2,apiStack_40);
      if ((-1 < lVar1) && (lVar1 = fn_82E53908(piVar2,apiStack_40), -1 < lVar1)) {
        *param_2 = apiStack_40;
        if (apiStack_40 == (int *)0x0) goto LAB_82e53b40;
        (**(int (***)())(*apiStack_40 + 4))();
      }
    }
    if (apiStack_40 != (int *)0x0) {
      (**(int (***)())(*apiStack_40 + 8))();
      apiStack_40 = (int *)0x0;
    }
  }
LAB_82e53b40:
  fn_82E50F10(param_1 + 0x18);
  return lVar1;
}

