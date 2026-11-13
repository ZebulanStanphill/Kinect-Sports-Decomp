extern int fn_82FA5060();
extern int fn_8304F0A8();
extern int fn_8304FC90();
extern int fn_830500F0();
extern int fn_83050B90();
extern int fn_830516C8();
extern unsigned int lbl_8217E00C;
extern unsigned int lbl_8217E03C;
extern unsigned int lbl_831BC978;


unsigned int *
fn_83053C98(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  int iVar2;
  
  *param_4 = 0;
  puVar1 = (unsigned int *)fn_82FA5060(lbl_831BC978,0xb8);
  if (puVar1 == (unsigned int *)0x0) {
    fn_8304F0A8(param_1,100);
    puVar1 = (unsigned int *)fn_82FA5060(lbl_831BC978,0xb8);
    if (puVar1 == (unsigned int *)0x0) {
      return (unsigned int *)0x0;
    }
  }
  fn_83050B90(puVar1);
  puVar1[0x1e] = &lbl_8217E00C;
  *puVar1 = &lbl_8217E03C;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  iVar2 = fn_830500F0(puVar1,param_1,param_2,param_3);
  if (iVar2 != 1) {
    fn_8304FC90(puVar1);
    return (unsigned int *)0x0;
  }
  fn_830516C8(param_1,puVar1);
  *param_4 = puVar1 + 0x1e;
  return puVar1;
}

