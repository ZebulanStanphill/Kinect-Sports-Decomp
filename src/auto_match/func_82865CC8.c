extern unsigned int *auStack_40;
extern int fn_82297DB0();
extern int fn_828656E8();
extern int fn_82865C08();


unsigned int *
fn_82865CC8(unsigned int *param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned char auStack_40 [32];
  
  fn_82865C08(auStack_40,param_4,param_5);
  puVar3 = param_1;
  if (7 < (unsigned int)param_1[5]) {
    puVar3 = (unsigned int *)*param_1;
  }
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_3 - param_2 >> 1;
  }
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 - (int)puVar3 >> 1;
  }
  fn_828656E8(param_1,iVar1,iVar2,auStack_40,0,0xffffffffffffffff);
  fn_82297DB0(auStack_40,1,0);
  return param_1;
}

