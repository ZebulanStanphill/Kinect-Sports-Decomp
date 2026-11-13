extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_826438C0();
extern int fn_82A1EFC0();


void fn_825D5998(int *param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_40 [4];
  unsigned int auStack_3c [15];
  
  fn_82520158(0xffffffff821c9860,auStack_40,0);
  fn_82520158(0xffffffff821c9880,auStack_3c,0);
  uVar1 = fn_8251F720(auStack_40,0);
  iVar2 = fn_82631830();
  *param_1 = iVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(auStack_3c,0);
  iVar2 = fn_82631488();
  param_1[1] = iVar2;
  fn_8251FA58(uVar1);
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    auStack_3c[0] = 0x10;
    uVar1 = fn_82631BF8(0xffffffff831bfcb4);
    fn_826438C0(*param_1,0,uVar1,auStack_3c,0);
    fn_8262FEC8(uVar1);
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(param_1 + 2,0,0x60);
  }
  return;
}

