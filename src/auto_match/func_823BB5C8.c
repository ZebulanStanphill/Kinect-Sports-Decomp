extern int fn_8223C478();
extern int fn_823B4970();
extern int fn_828E9D40();
extern int fn_828E9D78();
extern int fn_828E9D90();
extern int fn_828E9DB8();


void fn_823BB5C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int lVar3;
  
  uVar1 = fn_828E9D78(*param_3);
  fn_8223C478(param_2,7,0);
  fn_828E9DB8(param_2,uVar1,7);
  uVar2 = fn_828E9D90(*param_3);
  lVar3 = uVar2 & 7;
  if (lVar3 != 0) {
    lVar3 = 8 - lVar3;
  }
  fn_8223C478(param_2,3,0);
  fn_828E9DB8(param_2,lVar3,3);
  fn_828E9D40(*param_3);
  fn_823B4970(param_2,*param_3,uVar2,0);
  fn_8223C478(param_2,lVar3,0);
  fn_828E9DB8(param_2,0,lVar3);
  return;
}

