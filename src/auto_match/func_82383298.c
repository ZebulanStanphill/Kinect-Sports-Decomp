extern int fn_82359C18();
extern int fn_82390848();
extern int fn_8265CA20();


void fn_82383298(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)*param_1;
  if (uVar1 != 0) {
    fn_82390848(uVar1 + 0x7c);
    fn_82359C18(uVar1 + 0x60);
    fn_82359C18(uVar1 + 0x48);
    fn_82359C18(uVar1 + 0x30);
    fn_82359C18(uVar1 + 0x18);
    fn_82359C18(uVar1);
    fn_8265CA20(uVar1);
  }
  return;
}

