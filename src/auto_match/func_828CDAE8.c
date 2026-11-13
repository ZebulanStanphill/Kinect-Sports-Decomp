extern int fn_8223C478();
extern int fn_823B4970();
extern int fn_828E9D40();
extern unsigned __int64 fn_828E9D90(int);
extern int fn_828E9DB8();



static void Write13(unsigned __int64 w,unsigned __int64 v) { fn_8223C478(w,13,0); fn_828E9DB8(w,v,13); }

void fn_828CDAE8(int param_1,unsigned __int64 param_2)

{
  unsigned char cVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = *(unsigned int *)(param_1 + 0x84);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,(unsigned __int64)uVar2,8);
  uVar2 = *(unsigned int *)(param_1 + 0x88);
  fn_8223C478(param_2,5,0);
  fn_828E9DB8(param_2,(unsigned __int64)uVar2,5);
  cVar1 = *(unsigned char *)(param_1 + 0x8c);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,cVar1 != '\0',1);
  param_1 = param_1 + 0x98;
  Write13(param_2,fn_828E9D90(param_1));
  uVar3 = fn_828E9D90(param_1);
  fn_828E9D40(param_1);
  fn_823B4970(param_2,param_1,uVar3,0);
  return;
}

