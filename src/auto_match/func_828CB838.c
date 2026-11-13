extern unsigned int *auStack_bc;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_828B5A20();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


unsigned __int64 fn_828CB838(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_f0 [16];
  unsigned int auStack_e0 [4];
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
  iVar1 = param_2[1];
  uVar2 = (**(int (***)())(*param_2 + 0x1c))(auStack_f0,param_2);
  uVar2 = fn_828B5A20(auStack_e0,uVar2,1,iVar1);
  uVar3 = fn_82240158(&puStack_c0,0xffffffff82026494);
  fn_8223B728(uVar3,uVar2);
  if (0xf < uStack_cc) {
    fn_8265CA20(auStack_e0[0]);
  }
  uStack_d0 = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff;
  uStack_cc = 0xf;
  fn_828B55B0(auStack_f0);
  fn_822403C8(param_1,auStack_bc);
  fn_8223DBE8(appuStack_70);
  appuStack_70[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_70);
  return param_1;
}

