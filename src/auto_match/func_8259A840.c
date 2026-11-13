extern int fn_823AB478();
extern int fn_82522D98();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A264D0();
extern unsigned int lbl_83265988;


unsigned __int64 fn_8259A840(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int aiStack_50 [12];
  
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar1 + 1);
  aiStack_50[1] = 0;
  iVar3 = *(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar3 = lbl_83265988;
  }
  uVar2 = fn_823AB478(iVar3);
  iVar3 = fn_82A264D0(uVar2,*(unsigned int *)(param_1 + 0x98),*(unsigned int *)(param_1 + 0x94),0,
                          999,aiStack_50 + 2,aiStack_50);
  if ((iVar3 == 0) && (aiStack_50[0] != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(aiStack_50[2]);
  }
  fn_82A1BB18();
  fn_8259C738(param_1 + 0x60);
  return 0;
}

