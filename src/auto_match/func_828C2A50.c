extern unsigned int *auStack_100;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_e0;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8265CA20();
extern int fn_828BBCD8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned __int64 fn_828C2A50(unsigned __int64 param_1,__int64 param_2,char param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_100 [4];
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int auStack_e0;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned char *puStack_c0;
  unsigned char auStack_bc [76];
  unsigned char **appuStack_70 [28];
  
  puStack_c0 = &lbl_821AA8E0;
  appuStack_70[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_70,auStack_bc,0);
  *(unsigned char ***)(auStack_bc + *(int *)(puStack_c0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_bc,2);
  if (param_3 == '\0') {
    uVar1 = fn_828BBCD8(auStack_100,param_2 + 8,0);
    uVar2 = fn_82240158(&puStack_c0,0xffffffff82026080);
    uVar1 = fn_8223B728(uVar2,uVar1);
    uVar1 = fn_82240158(uVar1,0xffffffff82196824);
    uVar1 = fn_8223B728(uVar1,param_2 + 0xc);
    fn_82240158(uVar1,0xffffffff821c27b4);
    if (0xf < uStack_ec) {
      fn_8265CA20(auStack_100[0]);
    }
    uStack_f0 = 0;
    auStack_100[0] = auStack_100[0] & 0xffffff;
    uStack_ec = 0xf;
  }
  else {
    uVar1 = fn_828BBCD8(&auStack_e0,param_2 + 8,0);
    uVar2 = fn_82240158(&puStack_c0,0xffffffff82026088);
    uVar1 = fn_8223B728(uVar2,uVar1);
    uVar1 = fn_82240158(uVar1,0xffffffff82023cb8);
    uVar1 = fn_8223B728(uVar1,param_2 + 0xc);
    fn_82240158(uVar1,0xffffffff82025514);
    if (0xf < uStack_cc) {
      fn_8265CA20(auStack_e0);
    }
    uStack_d0 = 0;
    auStack_e0 = auStack_e0 & 0xffffff;
    uStack_cc = 0xf;
  }
  fn_822403C8(param_1,auStack_bc);
  fn_8223DBE8(appuStack_70);
  appuStack_70[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_70);
  return param_1;
}

