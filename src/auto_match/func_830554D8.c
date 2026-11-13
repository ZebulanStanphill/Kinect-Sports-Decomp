extern int fn_82FA5060();
extern int fn_8304F0A8();
extern int fn_8304FC90();
extern int fn_83050FC0();
extern int fn_830510E0();
extern int fn_830516C8();
extern int fn_83055280();
extern unsigned int lbl_8217E11C;
extern unsigned int lbl_8217E150;
extern unsigned int lbl_831BC978;


unsigned int *
fn_830554D8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  
  *param_5 = 0;
  puVar2 = (unsigned int *)fn_82FA5060(lbl_831BC978,0xc0);
  if (puVar2 == (unsigned int *)0x0) {
    fn_8304F0A8(param_1,*(unsigned char *)(param_3 + 0x10));
    iVar3 = fn_82FA5060(lbl_831BC978,0xc0);
    if ((iVar3 == 0) || (puVar2 = (unsigned int *)fn_83055280(), puVar2 == (unsigned int *)0x0))
    goto LAB_830555d8;
  }
  else {
    fn_83050FC0();
    *puVar2 = &lbl_8217E150;
    puVar2[0x1e] = &lbl_8217E11C;
    *(unsigned char *)(puVar2 + 0x2e) = *(unsigned char *)(puVar2 + 0x2e) & 0xbf;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x84);
  *(unsigned __int64 *)(puVar2 + 0x2c) = 0;
  *(unsigned char *)(puVar2 + 0x2e) = *(unsigned char *)(puVar2 + 0x2e) & 0x7f;
  iVar3 = fn_830510E0(puVar2,param_1,param_2,param_3,param_4,uVar1);
  if (iVar3 == 1) {
    fn_830516C8(param_1,puVar2);
    *param_5 = puVar2 + 0x1e;
    return puVar2;
  }
  fn_8304FC90(puVar2);
LAB_830555d8:
  *param_5 = 0;
  return (unsigned int *)0x0;
}

