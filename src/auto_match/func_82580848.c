extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_82599418();
extern int fn_825D61E0();
extern int fn_827D9FB0();
extern int fn_827DB6D0();
extern int fn_827DB868();
extern int fn_827DC748();
extern int fn_82811400();
extern unsigned int lbl_83156AA0;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82580848(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int auStack_b0 [4];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [128];
  
  uVar4 = 0;
  auStack_b0[0] = 0;
  iVar1 = *(int *)lbl_83156AA0;
  uVar2 = fn_82811400(auStack_a0,4);
  lVar3 = (**(int (***)())(iVar1 + 0xc))(lbl_83156AA0,0x68,uVar2);
  if (lVar3 != 0) {
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0;
    auStack_b0[0] = 0;
    fn_8256D3A8(auStack_80,param_2);
    uVar4 = fn_827D9FB0(lVar3,auStack_80,auStack_b0,&uStack_b4,&uStack_b8,&uStack_bc,
                              &uStack_c0);
    fn_8256D798(auStack_80,1,0);
  }
  uVar4 = fn_827DC748(lbl_8326B7C8,uVar4);
  *param_1 = (int)uVar4;
  if (param_3 == 0x40000000) {
    fn_827DB868();
  }
  else {
    fn_827DB6D0(lbl_8326B7C8,uVar4,2,0,0,0);
  }
  fn_82599418();
  fn_825D61E0(0);
  return;
}

