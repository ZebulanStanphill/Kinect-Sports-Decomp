extern unsigned int *auStack_50;
extern int fn_82CE5088();


void fn_82DF5758(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned char auStack_50 [64];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3c) * 4 + *(int *)(param_1 + 0x38) + -4);
  if (*(char *)(iVar1 + 0x28) == '\x01') {
    iVar1 = (int)*(char *)(iVar1 + 0x20) + iVar1 + 0x10;
  }
  else {
    iVar1 = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE5088(auStack_50,iVar1 + 0xf0,param_3);
}

