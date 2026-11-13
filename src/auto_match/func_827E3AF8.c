extern int fn_827DC8B8();
extern int fn_827E8240();
extern int fn_827E8698();
extern int fn_82F6D570();


void fn_827E3AF8(int *param_1)

{
  int iVar1;
  int *piStack00000014;
  
  iVar1 = *param_1;
  piStack00000014 = param_1;
  if (iVar1 != 0) {
    fn_82F6D570(iVar1,0x40,*(unsigned int *)(iVar1 + -4),0xffffffff827e82f0);
    fn_827E8240(iVar1 + -4);
  }
  fn_827DC8B8(param_1 + 0x19);
  fn_827E8698(param_1 + 1);
  return;
}

