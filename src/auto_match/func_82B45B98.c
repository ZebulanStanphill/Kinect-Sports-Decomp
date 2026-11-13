extern int fn_82AA66A8();
extern int fn_82B458E0();
extern int fn_82B45B10();


void fn_82B45B98(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  char cVar2;
  unsigned int uVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdff);
  }
  if (*(int *)(param_2 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdff);
  }
  cVar2 = fn_82B458E0(param_1,*(unsigned int *)(param_2 + 8));
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdff);
  }
  uVar1 = fn_82B45B10(param_1,*(unsigned int *)(param_2 + 0xc));
  *param_4 = uVar1;
  return;
}

