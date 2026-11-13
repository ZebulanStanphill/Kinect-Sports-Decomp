unsigned __int64 fn_82F48680(unsigned int *param_1,unsigned short param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  iVar1 = (*(int (**)())(*param_1 + 0x50))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff80004001;
  }
  else if (param_1[4] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else {
    *(unsigned short *)(param_1 + 0x16) = param_2;
  }
  return uVar2;
}

