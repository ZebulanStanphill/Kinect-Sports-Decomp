extern int fn_82243568();
extern int fn_8236D750();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


void fn_8224F2B8(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  uVar1 = fn_82897B18(param_3);
  fn_82897600(param_2,param_1,uVar1);
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_2 + 0xc);
  fn_82898220(param_1,param_2,param_3,*(unsigned int *)(param_2 + 4));
  uVar1 = fn_8236D750(param_3);
  fn_82243568(param_1 + 4,0,uVar1,0);
  return;
}

