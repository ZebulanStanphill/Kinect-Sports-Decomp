extern int fn_8289F160();
extern unsigned int uStack_20;


unsigned int fn_8289F350(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uStack_20;
  int aiStack_1c;
  
  uStack_20 = param_2;
  fn_8289F160(&aiStack_1c,param_1 + 0x21c,&uStack_20);
  uVar1 = 0;
  if (aiStack_1c != *(int *)(param_1 + 0x220)) {
    uVar1 = *(unsigned int *)(aiStack_1c + 0x10);
  }
  return uVar1;
}

