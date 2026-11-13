extern int fn_8223AAC0();
extern int fn_82670230();
extern int fn_8267A538();


void fn_826768C8(int *param_1)

{
  char cVar1;
  
  param_1[7] = 0;
  cVar1 = fn_8223AAC0();
  if (cVar1 == '\0') {
    if (param_1[3] != 0) {
      *(int *)(param_1[2] + 4) = param_1[3];
      *(int *)param_1[3] = param_1[2];
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    (**(int (***)())(*param_1 + 0x44))(param_1);
    fn_8267A538(param_1,2);
    if (param_1[3] != 0) {
      *(int *)(param_1[2] + 4) = param_1[3];
      *(int *)param_1[3] = param_1[2];
      param_1[2] = 0;
      param_1[3] = 0;
    }
    fn_82670230(param_1);
  }
  return;
}

