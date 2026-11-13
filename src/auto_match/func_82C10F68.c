unsigned __int64 fn_82C10F68(int param_1,int *param_2,int *param_3,char *param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  *param_4 = '\0';
  *param_2 = param_1;
  iVar1 = 0;
  *param_3 = 0;
  *(unsigned char *)(param_1 + 0x200) = 0;
  do {
    if (*(int *)(iVar1 + param_1) != 0) {
      *param_3 = *(int *)(iVar1 + param_1);
      *(char *)(param_1 + 0x200) = (char)uVar2 + '\x01';
      *param_4 = (char)uVar2;
      return 0;
    }
    uVar2 = uVar2 + 1 & 0xff;
    iVar1 = uVar2 << 2;
  } while (uVar2 < 0x7f);
  return 0xffffffff80500016;
}

