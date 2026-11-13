typedef unsigned char bool;
extern int fn_8263CBB0();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82C016D8(__int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar2 = (int)param_1;
  if (2 < *(unsigned int *)(iVar2 + 0x170)) {
    return 0xffffffff8000000a;
  }
  do {
    puVar3 = (unsigned int *)(param_1 + 0x170);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 + 1,0,param_1 + 0x170);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  (**(int (***)())(**(int **)(iVar2 + 0x2c) + 0x50))();
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(unsigned int *)(iVar2 + 0x38),0,0,0x80000000);
}

