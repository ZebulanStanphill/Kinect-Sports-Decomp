extern int fn_8240D930();
extern int fn_82610EF0();
extern int fn_8265CAA0();
extern int fn_82E1D550();
extern int fn_82E1DE08();
extern int fn_82E1E4A0();
extern int fn_82E1E590();
extern int fn_82E1E5E0();
extern int fn_82E1E680();
extern int fn_82E1EC90();
extern int fn_82E1EDA0();
extern int fn_82E20380();
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


void fn_82E1EE88(int param_1)

{
  unsigned int uVar1;
  int iVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char uStack_40;
  unsigned char uStack_3f;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    uStack_40 = 0xfe;
    uStack_3f = 0xff;
    fn_82E1EC90(param_1,&uStack_40,2);
  }
  iVar5 = fn_82E1D550();
  uVar1 = *(unsigned int *)(iVar5 + 8);
  uVar2 = fn_82E1DE08(uVar1,0xffffffff8214b90c,0xffffffff821a6774);
  uVar3 = fn_82E1DE08(uVar1,0xffffffff8214b7bc,0xffffffff821a6774);
  uVar4 = fn_82E20380();
  fn_82E1E680(param_1,0xffffffff8214ba74);
  fn_82E1E4A0(param_1,0xffffffff8214b90c,0xffffffff82005ea4,uVar2);
  fn_82E1E4A0(param_1,0xffffffff8214b7bc,0xffffffff82005ea4,uVar3);
  uVar2 = fn_82610EF0(*(unsigned int *)(param_1 + 0x54));
  fn_82E1E4A0(param_1,0xffffffff82023c40,0xffffffff82005ea4,uVar2);
  fn_82E1E4A0(param_1,0xffffffff8214ba68,0xffffffff82005ea4,uVar4);
  fn_82E1E4A0(param_1,0xffffffff8214ba48,0xffffffff82005ea4,0xffffffff8214ba58);
  fn_82E1D550();
  uVar2 = fn_8240D930();
  fn_82E1E5E0(param_1,0xffffffff8214ba38,0xffffffff8214b748,uVar2);
  fn_82E1E590(param_1,0xffffffff8214ba28,0xffffffff8202f488,
                (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x54) + 4) - 1);
  fn_82E1EDA0(param_1);
  if ((uVar4 & 0xffffffff) != 0) {
    fn_8265CAA0(uVar4);
  }
  return;
}

