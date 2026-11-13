unsigned int fn_828ED780(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = (**(int (***)())(*param_1 + 0x10))();
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) != '\x01')) {
    uVar2 = 0;
    if (param_4 != (unsigned char *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar2 = *(unsigned int *)(iVar1 + 0x10);
    if (param_4 != (unsigned char *)0x0) {
      *param_4 = 1;
    }
  }
  return uVar2;
}

