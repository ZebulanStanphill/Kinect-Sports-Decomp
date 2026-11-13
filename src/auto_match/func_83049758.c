extern int fn_830491F8();
extern int fn_8304D678();
extern int fn_8304D690();


unsigned __int64 fn_83049758(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  char acStack_30;
  
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3c);
  acStack_30 = '\0';
  uVar1 = fn_830491F8(param_1,param_2,&acStack_30);
  if (acStack_30 == '\0') {
    uVar3 = (unsigned __int64)*param_2;
    uVar2 = uVar4;
  }
  else {
    fn_8304D678(param_1,uVar4,*(unsigned int *)(param_1 + 0x24));
    uVar3 = ((unsigned __int64)*param_2 - (unsigned __int64)*(unsigned int *)(param_1 + 0x24)) +
            (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  }
  fn_8304D678(param_1,uVar2,uVar3 + uVar4);
  fn_8304D690(param_1,uVar4,*(unsigned int *)(param_1 + 0x34));
  return uVar1;
}

