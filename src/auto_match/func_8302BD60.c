extern int fn_8302BCE0();


unsigned __int64 fn_8302BD60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned char cVar2;
  
  if ((((param_2 != 0) || (param_3 != 0)) || (param_4 != 0)) || (*(unsigned int *)(param_1 + 0x18) != 0)) {
    cVar2 = fn_8302BCE0(param_1);
    if (cVar2 == '\0') {
      return 2;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(iVar1 + 0xc) = param_2;
    *(int *)(iVar1 + 0x10) = param_3;
    *(int *)(iVar1 + 0x14) = param_4;
  }
  return 1;
}

