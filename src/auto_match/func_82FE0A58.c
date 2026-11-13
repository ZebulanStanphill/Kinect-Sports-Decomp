extern int fn_82FE3FB8();


void fn_82FE0A58(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  
  if ((*(char *)(param_1 + 0x170) != '\0') && (*(char *)(param_1 + 0xcc) != '\0')) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0x28 + *(int *)(param_1 + 0xd8);
      if (*(int *)(iVar1 + 0x24) == 2) {
        fn_82FE3FB8(iVar1,param_2,param_3);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(unsigned char *)(param_1 + 0xcc));
  }
  return;
}

