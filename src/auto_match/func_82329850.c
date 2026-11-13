extern __int64 fn_8223A9E0();
extern int fn_8223C478();
extern unsigned int fn_8232A260(void *, float);
extern int fn_828E9F18();


void fn_82329850(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_30[1];
  
  uVar1 = fn_8232A260(auStack_30,*param_3);
  lVar2 = fn_8223A9E0(uVar1,0,1);
  uVar3 = fn_8223A9E0(uVar1,1,8);
  uVar4 = fn_8223A9E0(uVar1,9,0x18);
  fn_8223C478(param_2,0x21,0);
  fn_828E9F18(param_2,(lVar2 << 8 | uVar3) << 0x18 | uVar4,0x21);
  return;
}

