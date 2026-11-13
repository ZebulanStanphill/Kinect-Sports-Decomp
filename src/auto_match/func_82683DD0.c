extern int fn_826BD078();


unsigned __int64 fn_82683DD0(char *param_1)

{
  unsigned int iVar2;
  unsigned __int64 uVar1;
  
  if ((((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
      (param_1 = param_1, iVar2 = fn_826BD078(&param_1), iVar2 == 0x2f)) ||
     (iVar2 == 0x5c)) {
code_r0x82683e34:
    uVar1 = 1;
  }
  else {
    while (iVar2 != 0) {
      if (iVar2 == 0x3a) {
        iVar2 = fn_826BD078(&param_1);
        if ((iVar2 == 0x2f) || (iVar2 == 0x5c)) goto code_r0x82683e34;
      }
      else if ((iVar2 == 0x2f) || (iVar2 == 0x5c)) break;
      iVar2 = fn_826BD078(&param_1);
    }
    uVar1 = 0;
  }
  return uVar1;
}

