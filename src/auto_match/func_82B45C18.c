extern unsigned int *auStack_20;
extern int fn_82AA66A8();
extern int fn_82B45A50();


unsigned char fn_82B45C18(unsigned __int64 param_1,int param_2)

{
  char cVar1;
  unsigned char auStack_20;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe19);
  }
  if (*(int *)(param_2 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe19);
  }
  cVar1 = fn_82B45A50(param_1,*(unsigned int *)(param_2 + 8),&auStack_20);
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe19);
  }
  return auStack_20;
}

