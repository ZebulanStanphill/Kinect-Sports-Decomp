extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E810();
extern int fn_82BD5520();
extern int fn_8306C308();
extern int fn_8306C348();
extern int fn_8306C3B8();
extern int fn_8306C3E0();
extern unsigned int uStack_20;


void fn_82BD5D48(int param_1)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uStack_20;
  
  uStack_20 = 0xfffffffffffe7960;
  lVar1 = fn_8306C3E0(0,0,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_8306C3B8(1);
  }
  iVar2 = fn_8306C348(lVar1,&uStack_20,10,0,0,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_8306C3B8(1);
  }
  fn_82A1E810(*(unsigned int *)(param_1 + 0x110));
  while (*(int *)(param_1 + 0x10c) != 3) {
    fn_82A1E650(lVar1,0xffffffffffffffff);
    fn_82BD5520(param_1);
  }
  fn_8306C308();
  fn_82A1E658(lVar1);
                    /* WARNING: Subroutine does not return */
  fn_8306C3B8(0);
}

