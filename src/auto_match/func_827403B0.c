extern int fn_826824B0();
extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826B32D0();
extern int fn_826C0B08();
extern int fn_8273FF78();
extern unsigned int lbl_82012338;
extern unsigned int lbl_8201238C;


unsigned int * fn_827403B0(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  
  fn_826C0B08();
  param_1[0xc] = 0;
  *param_1 = &lbl_8201238C;
  param_1[4] = &lbl_82012338;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  fn_8273FF78(param_1,param_3);
  piVar3 = (int *)(param_2 + 0x78);
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0xc);
  fn_826829A0(param_1 + 4,piVar3,uVar1);
  uVar2 = fn_826B32D0(param_2,*(unsigned int *)(*(int *)(param_2 + 0x78) + 0x28c),
                            *(int *)(param_2 + 0x78) + 0x3c,0,0xffffffffffffffff);
  if (param_1[0xe] != 0) {
    fn_826824B0(param_1[0xe]);
  }
  param_1[0xe] = uVar2;
  uVar2 = fn_826B32D0(param_2,*(unsigned int *)(*piVar3 + 0x28c),*piVar3 + 0x48,0,
                            0xffffffffffffffff);
  if (param_1[0xf] != 0) {
    fn_826824B0(param_1[0xf]);
  }
  param_1[0xf] = uVar2;
  uVar2 = fn_826B32D0(param_2,*(unsigned int *)(*piVar3 + 0x28c),*piVar3 + 0x44,0,
                            0xffffffffffffffff);
  if (param_1[0x10] != 0) {
    fn_826824B0(param_1[0x10]);
  }
  param_1[0x10] = uVar2;
  return param_1;
}

