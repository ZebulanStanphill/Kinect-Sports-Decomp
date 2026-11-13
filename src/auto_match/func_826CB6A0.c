extern int fn_826C59F8();
extern int fn_826C8590();
extern int fn_827583F8();


void fn_826CB6A0(void)

{
  int iVar1;
  
  iVar1 = fn_826C59F8();
  if (iVar1 != 0) {
    fn_826C8590(iVar1,1);
    fn_827583F8(*(unsigned int *)(iVar1 + 0x1b8));
  }
  return;
}

