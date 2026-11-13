extern int fn_82F6FA38();


unsigned __int64 fn_82F81260(void)

{
  int iVar1;
  
  iVar1 = fn_82F6FA38();
  if (*(int (***)())(iVar1 + 0x6c) != (int (**)())0x0) {
    (**(int (***)())(iVar1 + 0x6c))();
  }
  KeBugCheck(0xffffffffc0000144);
  return 1;
}

