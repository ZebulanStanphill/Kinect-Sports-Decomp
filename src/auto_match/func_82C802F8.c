unsigned __int64 fn_82C802F8(unsigned int *param_1)

{
  unsigned int iVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(*param_1 + 0x10);
  if ((((iVar1 != 0x56555949) && (iVar1 != 0x30323449)) && (iVar1 != 0x31313450)) &&
     (iVar1 != 0x32315659)) {
    return 2;
  }
  return 1;
}

