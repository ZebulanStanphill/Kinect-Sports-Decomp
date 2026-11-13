extern int fn_82FA5060();
extern int fn_8304F0A8();
extern int fn_8304FC90();
extern int fn_83050FC0();
extern int fn_830510E0();
extern int fn_830516C8();
extern unsigned int lbl_8217DFA0;
extern unsigned int lbl_8217E068;
extern unsigned int lbl_831BC978;


unsigned int *
fn_83053D80(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  
  *param_5 = 0;
  puVar2 = (unsigned int *)fn_82FA5060(lbl_831BC978,0xc0);
  if (puVar2 == (unsigned int *)0x0) {
    fn_8304F0A8(param_1,*(unsigned char *)(param_3 + 0x10));
    puVar2 = (unsigned int *)fn_82FA5060(lbl_831BC978,0xc0);
    if (puVar2 == (unsigned int *)0x0) goto LAB_83053e64;
  }
  fn_83050FC0(puVar2);
  puVar2[0x1e] = &lbl_8217DFA0;
  *puVar2 = &lbl_8217E068;
  uVar1 = *(unsigned int *)(param_1 + 0x84);
  puVar2[0x2c] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  iVar3 = fn_830510E0(puVar2,param_1,param_2,param_3,param_4,uVar1);
  if (iVar3 == 1) {
    fn_830516C8(param_1,puVar2);
    *param_5 = puVar2 + 0x1e;
    return puVar2;
  }
  fn_8304FC90(puVar2);
LAB_83053e64:
  *param_5 = 0;
  return (unsigned int *)0x0;
}

