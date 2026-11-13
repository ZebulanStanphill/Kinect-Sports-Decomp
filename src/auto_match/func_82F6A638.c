extern int fn_82A1BB18();
extern int fn_82D7E470();
extern int fn_82F6A5B8();
extern int fn_82F6F8D8();
extern int fn_82F6F8E0();
extern int fn_82F6F8F0();
extern int fn_82F6FA78();
extern int fn_8306C3B8();
extern int fn_82A1F470();


unsigned __int64 fn_82F6A638(unsigned int *param_1)

{
  int iVar2;
  unsigned int uVar1;
  unsigned int uVar3;
  
  fn_82D7E470();
  fn_82F6F8E0();
  iVar2 = fn_82F6F8D8();
  if (iVar2 == 0) {
    uVar1 = fn_82F6F8E0();
    iVar2 = fn_82F6F8F0(uVar1,param_1);
    if (iVar2 == 0) {
      fn_82A1F470();
                    /* WARNING: Subroutine does not return */
      fn_8306C3B8();
    }
    uVar3 = fn_82A1BB18();
    *param_1 = uVar3;
  }
  else {
    *(unsigned int *)(iVar2 + 0x54) = param_1[0x15];
    *(unsigned int *)(iVar2 + 0x58) = param_1[0x16];
    *(unsigned int *)(iVar2 + 4) = param_1[1];
    fn_82F6FA78(param_1);
  }
  fn_82F6A5B8();
  return 0;
}

