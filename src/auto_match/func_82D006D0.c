extern int fn_82A1E478();


unsigned char fn_82D006D0(unsigned int *param_1)

{
  int aiStack_10;
  
  if (*param_1 == 0) {
    return 2;
  }
  fn_82A1E478(*param_1,&aiStack_10);
  return aiStack_10 == 0x103;
}

