extern int memcpy();


void fn_82DDFAB0(int param_1,char param_2,unsigned int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(char *)(iVar1 + 0x6d) = param_2;
  if (param_2 != '\0') {
    *(unsigned int *)(iVar1 + 0x68) = param_3;
  }
  *(char *)(iVar1 + 0x6c) = (char)*(unsigned int *)(param_1 + 0xac);
  memcpy(iVar1,param_1 + 0x44,0x68);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x70;
  return;
}

