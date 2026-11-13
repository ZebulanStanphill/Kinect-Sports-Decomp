extern int fn_827E3D60();


unsigned __int64 fn_827E4F58(int *param_1,int *param_2)

{
  unsigned int uVar1;
  
  uVar1 = (*(int (**)())(*param_1 + 0x1c))();
  fn_827E3D60(uVar1,param_2);
  *(int **)(*param_2 + 0x24) = param_1;
  return 0;
}

