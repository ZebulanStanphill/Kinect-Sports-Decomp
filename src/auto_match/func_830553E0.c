extern int fn_82FA5060();
extern int fn_8304F0A8();
extern int fn_8304FC90();
extern int fn_830500F0();
extern int fn_83050B90();
extern int fn_830516C8();
extern int fn_83055100();
extern unsigned int lbl_8217E0C0;
extern unsigned int lbl_8217E0F0;
extern unsigned int lbl_831BC978;


unsigned int *
fn_830553E0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  
  *param_4 = 0;
  puVar1 = (unsigned int *)fn_82FA5060(lbl_831BC978,0xa8);
  if (puVar1 == (unsigned int *)0x0) {
    fn_8304F0A8(param_1,100);
    iVar2 = fn_82FA5060(lbl_831BC978,0xa8);
    if (iVar2 == 0) {
      return (unsigned int *)0x0;
    }
    puVar1 = (unsigned int *)fn_83055100();
    if (puVar1 == (unsigned int *)0x0) {
      return (unsigned int *)0x0;
    }
  }
  else {
    fn_83050B90();
    *(unsigned char *)(puVar1 + 0x28) = 0;
    *puVar1 = &lbl_8217E0F0;
    puVar1[0x1e] = &lbl_8217E0C0;
  }
  iVar2 = fn_830500F0(puVar1,param_1,param_2,param_3);
  if (iVar2 != 1) {
    if (puVar1 != (unsigned int *)0x0) {
      fn_8304FC90(puVar1);
    }
    return (unsigned int *)0x0;
  }
  fn_830516C8(param_1,puVar1);
  puVar3 = puVar1 + 0x1e;
  if (puVar1 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  *param_4 = puVar3;
  return puVar1;
}

