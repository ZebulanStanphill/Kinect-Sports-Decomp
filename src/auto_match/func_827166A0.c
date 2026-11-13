extern int fn_827157E0();
extern int fn_82715CF8();
extern int fn_82716398();
extern int memmove();


void fn_827166A0(unsigned int *param_1,unsigned int param_2,int param_3)

{
  int lVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar3 = param_1[1];
  uVar2 = uVar3 + 1;
  fn_82716398(param_1,param_1,uVar2);
  if (uVar2 > uVar3) {
    fn_82715CF8(uVar3 * 0x4c + *param_1,uVar2 - uVar3);
  }
  if (param_2 < (param_1[1] - 1 & 0xffffffff)) {
    lVar1 = param_2 * 0x4c + *param_1;
    memmove(lVar1 + 0x4c,lVar1,((param_1[1] - param_2) + -1) * 0x4c);
  }
  lVar1 = param_2 * 0x4c + *param_1;
  if (lVar1 != 0) {
    fn_827157E0(lVar1,param_3);
  }
  return;
}

