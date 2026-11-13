extern unsigned int *auStack_50;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_8260D640();
extern int fn_827DA090();
extern int fn_82A2A958();
extern unsigned int uStack_7c;


unsigned __int64 fn_827DDA18(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int **appuStack_90 [5];
  unsigned int uStack_7c;
  unsigned char auStack_50 [56];
  
  uVar1 = *param_2;
  fn_8256D3A8(appuStack_90,*(unsigned int *)(param_1 + 8));
  uVar2 = fn_827DA090(auStack_50,uVar1);
  fn_8260D640(appuStack_90,uVar2,0,0xffffffffffffffff);
  fn_8256D798(auStack_50,1,0);
  if (uStack_7c < 0x10) {
    appuStack_90[0] = appuStack_90;
  }
  iVar3 = fn_82A2A958(appuStack_90[0]);
  if (iVar3 == 0) {
    uVar2 = thunk_FUN_82a2b798();
  }
  else {
    uVar2 = 0;
  }
  fn_8256D798(appuStack_90,1,0);
  return uVar2;
}

