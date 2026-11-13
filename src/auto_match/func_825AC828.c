extern int fn_8223C610();
extern int fn_828B57E8();


void fn_825AC828(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = fn_8223C610(param_2,0x20,0,0);
  *(unsigned int *)(param_1 + 0x80) = uVar1;
  fn_828B57E8(param_1 + 0x84,*(unsigned int *)(param_1 + 0x6c),param_2);
  return;
}

