extern unsigned int *auStack_60;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_8260D640();
extern int fn_827D50C0();
extern int fn_827D9EB0();
extern int fn_827DA090();
extern int fn_82A29DE8();
extern unsigned int uStack_8c;


unsigned __int64 fn_827DD7A8(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int ***apppuStack_a0 [5];
  unsigned int uStack_8c;
  unsigned char auStack_60 [96];
  
  uVar1 = *param_2;
  fn_8256D3A8(apppuStack_a0,*(unsigned int *)(param_1 + 8));
  uVar2 = fn_827DA090(auStack_60,uVar1);
  fn_8260D640(apppuStack_a0,uVar2,0,0xffffffffffffffff);
  fn_8256D798(auStack_60,1,0);
  if (uStack_8c < 0x10) {
    apppuStack_a0[0] = apppuStack_a0;
  }
  uVar2 = fn_82A29DE8(apppuStack_a0[0],0xffffffff80000000,1,0,3,0x60000000,0);
  fn_827D9EB0(uVar1,uVar2);
  if ((int)uVar2 == -1) {
    uVar1 = param_2[1];
    uVar2 = thunk_FUN_82a2b798();
    fn_827D50C0(uVar1,uVar2);
    uVar2 = thunk_FUN_82a2b798();
  }
  else {
    uVar2 = 0;
  }
  fn_8256D798(apppuStack_a0,1,0);
  return uVar2;
}

