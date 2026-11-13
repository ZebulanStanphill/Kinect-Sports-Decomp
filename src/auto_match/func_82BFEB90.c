extern int fn_82C00008();


int fn_82BFEB90(int *param_1,int param_2)

{
  int uVar1;
  int *piStack_30;
  int * apiStack_2c;
  
  apiStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  uVar1 = (*(int (**)())(*param_1 + 0x74))(param_1,&apiStack_2c);
  if (uVar1 >= 0) {
    if (apiStack_2c != (int *)0x0) {
      uVar1 = (*(int (**)())(*apiStack_2c + 0x40))(apiStack_2c,0,&piStack_30,0);
    }
    if ((uVar1 >= 0) && (piStack_30 != (int *)0x0)) {
      uVar1 = fn_82C00008(piStack_30,param_2);
    }
  }
  if (apiStack_2c != (int *)0x0) {
    (*(int (**)())(*apiStack_2c + 8))(apiStack_2c);
    apiStack_2c = (int *)0x0;
  }
  if (piStack_30 != (int *)0x0) {
    (*(int (**)())(*piStack_30 + 8))(piStack_30);
  }
  return uVar1;
}

