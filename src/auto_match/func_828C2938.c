extern unsigned int *auStack_bc;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;


unsigned __int64 fn_828C2938(unsigned __int64 param_1,int param_2,char param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char *puStack_c0;
  unsigned char auStack_bc [76];
  unsigned char **appuStack_70 [16];
  
  puStack_c0 = &lbl_821AA8E0;
  appuStack_70[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_70,auStack_bc,0);
  *(unsigned char ***)(auStack_bc + *(int *)(puStack_c0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_bc,2);
  uVar1 = *(unsigned int *)(param_2 + 4);
  if (param_3 == '\0') {
    uVar2 = fn_82240158(&puStack_c0,0xffffffff82026058);
    uVar2 = fn_82520AC8(uVar2,uVar1);
    uVar2 = fn_82240158(uVar2,0xffffffff82196824);
    uVar2 = fn_8223B728(uVar2,param_2 + 8);
    uVar3 = 0xffffffff821c27b4;
  }
  else {
    uVar2 = fn_82240158(&puStack_c0,0xffffffff82026060);
    uVar2 = fn_82520AC8(uVar2,uVar1);
    uVar2 = fn_82240158(uVar2,0xffffffff82023cb8);
    uVar2 = fn_8223B728(uVar2,param_2 + 8);
    uVar3 = 0xffffffff82025514;
  }
  fn_82240158(uVar2,uVar3);
  fn_822403C8(param_1,auStack_bc);
  fn_8223DBE8(appuStack_70);
  appuStack_70[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_70);
  return param_1;
}

