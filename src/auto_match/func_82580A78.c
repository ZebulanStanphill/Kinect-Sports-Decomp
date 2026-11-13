extern unsigned int *auStack_100;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_82599418();
extern int fn_825D61E0();
extern int fn_827D9EA8();
extern int fn_827D9FB0();
extern int fn_827DA090();
extern int fn_827DB6D0();
extern int fn_827DBA00();
extern int fn_827DBD80();
extern int fn_827DC748();
extern int fn_82811400();
extern unsigned int lbl_83156AA0;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;


unsigned __int64
fn_82580A78(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_108;
  unsigned int uStack_104;
  unsigned int auStack_100 [4];
  unsigned char auStack_f0 [64];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [144];
  
  uStack_110 = 0;
  iVar1 = *(int *)lbl_83156AA0;
  uVar3 = fn_82811400(auStack_b0,4);
  lVar4 = (**(int (***)())(iVar1 + 0xc))(lbl_83156AA0,0x68,uVar3);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    auStack_100[0] = 0;
    uStack_108 = 0;
    uStack_104 = 0xffffffff;
    uStack_10c = 0;
    uStack_110 = 0;
    fn_8256D3A8(auStack_f0,param_2);
    uVar3 = fn_827D9FB0(lVar4,auStack_f0,&uStack_110,&uStack_10c,&uStack_104,&uStack_108,
                              auStack_100);
    fn_8256D798(auStack_f0,1,0);
  }
  uVar3 = fn_827DC748(lbl_8326B7C8,uVar3);
  uVar2 = lbl_8326B7C8;
  *param_1 = (int)uVar3;
  lVar4 = fn_827DB6D0(uVar2,uVar3,0,0,param_6,0);
  if (lVar4 == 0) {
    uVar5 = fn_827D9EA8(uVar3);
    lVar4 = fn_827DBA00(lbl_8326B7C8,uVar3,uVar5,0,0,0,param_3,param_4);
    if (lVar4 == 0) {
      lVar4 = fn_827DBD80(lbl_8326B7C8,uVar3,0,0,param_6,0);
    }
  }
  fn_82599418();
  fn_827DA090(auStack_90,uVar3);
  uVar3 = fn_825D61E0(lVar4);
  fn_8256D798(auStack_90,1,0);
  return uVar3;
}

