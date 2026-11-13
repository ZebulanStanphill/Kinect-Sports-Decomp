extern unsigned int *auStack_70;
extern int fn_8256D798();
extern int fn_82599418();
extern int fn_825D61E0();
extern int fn_827D9EA8();
extern int fn_827DA090();
extern int fn_827DBA00();
extern unsigned int lbl_8326B7C8;


unsigned __int64
fn_825809D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned char auStack_70 [112];
  
  uVar1 = fn_827D9EA8();
  fn_827DBA00(lbl_8326B7C8,param_1,uVar1,0,param_4,param_2,0,param_3);
  fn_82599418();
  fn_827DA090(auStack_70,param_1);
  uVar1 = fn_825D61E0(0);
  fn_8256D798(auStack_70,1,0);
  return uVar1;
}

