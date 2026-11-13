extern int fn_826E6618();


unsigned __int64 fn_82683F30(int param_1,char *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_826E6618(*(int *)(param_1 + 4),param_2,*(unsigned int *)(param_1 + 0xc) | param_3);
  }
  return uVar1;
}

