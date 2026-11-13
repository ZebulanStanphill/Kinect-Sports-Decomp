extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478(iVar2);


void fn_82BF8D78(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xe4;
  fn_82BE5340(iVar2);
  while (*(int *)(param_1 + 0xec) != 0) {
    puVar1 = (unsigned int *)fn_82BE5378(iVar2);
    if (puVar1 != (unsigned int *)0x0) {
      (*(int (**)())*puVar1)(puVar1,1);
    }
    fn_82BE5350(iVar2);
  }
  fn_82BE5478(iVar2);
  return;
}

