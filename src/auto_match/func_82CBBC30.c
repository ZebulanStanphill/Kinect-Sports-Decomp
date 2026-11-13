extern int fn_82C8FB00();
extern int fn_82C8FD40();
extern int fn_82CBA528();
extern int fn_82CBB1A8();
extern int fn_82CBB2B8();
extern int fn_82CBB438();
extern int fn_82CC4DB8();
extern int fn_82CDB3B8();
extern int fn_82F28610();
extern int lbl_83231E3C;


void fn_82CBBC30(int param_1)

{
  int iVar1;
  int lVar2;
  
  iVar1 = param_1 + 0x3e70;
  lVar2 = 2;
  do {
    fn_82CC4DB8(param_1,iVar1);
    lVar2 = lVar2 + -1;
    iVar1 = iVar1 + 0x8a0;
  } while (lVar2 != 0);
  if (lbl_83231E3C == 0) {
    *(int (***)())(param_1 + 0xc68) = fn_82CBB1A8;
    *(int (***)())(param_1 + 0xc70) = fn_82CBB2B8;
  }
  *(int (***)())(param_1 + 0xc6c) = fn_82CBA528;
  *(int (***)())(param_1 + 0xc70) = fn_82CBB2B8;
  *(int (***)())(param_1 + 0xc74) = fn_82CBB438;
  *(int (***)())(param_1 + 0xcac) = fn_82F28610;
  *(int (***)())(param_1 + 0xca4) = fn_82C8FB00;
  *(int (***)())(param_1 + 0xca8) = fn_82C8FD40;
  fn_82CDB3B8(param_1);
  return;
}

