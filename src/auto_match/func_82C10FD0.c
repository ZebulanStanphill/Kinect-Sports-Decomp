#define true 1


unsigned __int64 fn_82C10FD0(int param_1,unsigned __int64 param_2,int *param_3,char *param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  *param_3 = 0;
  *param_4 = '\0';
  uVar2 = (unsigned int)*(unsigned char *)(param_1 + 0x200);
  while( true ) {
    if (0x7e < uVar2) {
      return 0xffffffff80500016;
    }
    iVar1 = *(int *)(uVar2 * 4 + param_1);
    if (iVar1 != 0) break;
    uVar2 = uVar2 + 1 & 0xff;
  }
  *param_3 = iVar1;
  *(char *)(param_1 + 0x200) = (char)uVar2 + '\x01';
  *param_4 = (char)uVar2;
  return 0;
}

