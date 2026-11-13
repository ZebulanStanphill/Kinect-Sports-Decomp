extern int fn_82243568();
extern int fn_8236D750();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


void fn_825169D8(int param_1)

{
  unsigned int uVar1;
  int lVar2;
  int sub = param_1 + 0x48;
  
  lVar2 = *(unsigned int *)(param_1 + 0x10) + 0x34;
  uVar1 = fn_82897B18(lVar2);
  fn_82897600(param_1,sub,uVar1);
  *(unsigned int *)(sub + 0x28) = *(unsigned int *)(param_1 + 0xc);
  fn_82898220(sub,param_1,lVar2,*(unsigned int *)(param_1 + 4));
  uVar1 = fn_8236D750(lVar2);
  fn_82243568(sub + 4,0,uVar1,0);
  return;
}

