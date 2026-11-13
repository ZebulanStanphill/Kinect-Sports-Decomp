extern int fn_82E7BC68();


int fn_82E44140(int param_1,unsigned int param_2)

{
  int uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = fn_82E7BC68(param_1 + 8,0,param_2);
  return uVar1;
}

