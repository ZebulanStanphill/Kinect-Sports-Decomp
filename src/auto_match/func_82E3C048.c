extern int fn_82E49560();
extern int fn_82E58BE8();
extern int fn_82E6ECE0();


int fn_82E3C048(int param_1,int *param_2)

{
  int lVar1;
  int iVar2;
  int * apiStack_30;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  else {
    *param_2 = 0;
    apiStack_30 = (int *)0x0;
    iVar2 = fn_82E58BE8(param_1 + 0xc0,param_2);
    if(iVar2 != 0) { lVar1=0; } else { lVar1=fn_82E49560(3,1,0,&apiStack_30); if(lVar1>=0) lVar1=fn_82E6ECE0(apiStack_30,0,param_2); }
    if (apiStack_30 != (int *)0x0) {
      (*(int (**)())(*apiStack_30 + 8))(apiStack_30);
      apiStack_30 = (int *)0x0;
    }
    if (((int)lVar1 < 0) && ((int *)*param_2 != (int *)0x0)) {
      (*(int (**)())(*(int *)*param_2 + 8))(*param_2);
      *param_2 = 0;
    }
  }
  return lVar1;
}

