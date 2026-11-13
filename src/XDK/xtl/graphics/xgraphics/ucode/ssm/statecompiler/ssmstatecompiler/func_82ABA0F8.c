extern int fn_82AA0750();
extern int fn_82AB15D0();
extern int fn_82AB7010();
extern int fn_82AB7C30();
extern int fn_82AB81E8();
extern int fn_82B6D410();
extern int fn_82B7BA30();
extern int fn_82B7F3D8();
extern int fn_82B7F430();


unsigned __int64
fn_82ABA0F8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,char param_4,unsigned int *param_5,
             unsigned __int64 param_6)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  lVar1 = fn_82B6D410(*(unsigned int *)(param_1 + 0xc),0);
  if (lVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d76cc,0xffffffff820d7628,0x1e9);
    uVar2 = 0x10;
  }
  else {
    fn_82AA0750(param_2,param_4 != '\0',param_3);
    fn_82AB81E8(*(unsigned int *)(param_1 + 0x28));
    fn_82AB81E8(*(unsigned int *)(param_1 + 0x2c));
    uVar3 = *(unsigned int *)(param_1 + 0x28);
    uVar2 = fn_82B7F430(lVar1);
    fn_82AB7010(uVar2,uVar3);
    uVar3 = *(unsigned int *)(param_1 + 0x2c);
    uVar2 = fn_82B7F3D8(lVar1);
    fn_82AB7010(uVar2,uVar3);
    fn_82B7BA30(*(unsigned int *)(param_1 + 0x18),param_2,lVar1,param_6);
    if (param_4 == '\0') {
      uVar3 = fn_82B7F430();
    }
    else {
      uVar3 = fn_82B7F3D8(lVar1);
    }
    *param_5 = uVar3;
    uVar2 = fn_82AB7C30(uVar3);
  }
  return uVar2;
}

