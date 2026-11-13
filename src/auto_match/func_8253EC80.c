extern int fn_82D85148();
extern int fn_82D89BD8();
extern int fn_82D89C68();


void fn_8253EC80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7c0);
  if (*(int *)(param_1 + 0x7d4) == 0) {
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2c) != 0x14)) {
      *(int *)(param_1 + 0x7dc) = *(int *)(iVar1 + 0x2c);
      *(unsigned int *)(iVar1 + 0x2c) = 0x14;
      if ((*(int *)(iVar1 + 8) != 0) &&
         (fn_82D85148(*(int *)(iVar1 + 8),iVar1,0,1), *(char *)(iVar1 + 0xe8) != '\x05')) {
        fn_82D89C68(iVar1);
      }
    }
  }
  else if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2c) == 0x14)) {
    *(unsigned int *)(iVar1 + 0x2c) = *(unsigned int *)(param_1 + 0x7dc);
    if (*(int *)(iVar1 + 8) != 0) {
      fn_82D85148(*(int *)(iVar1 + 8),iVar1,0,1);
      fn_82D89BD8(iVar1);
    }
  }
  return;
}

