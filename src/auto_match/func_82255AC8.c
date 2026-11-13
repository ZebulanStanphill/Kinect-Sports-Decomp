extern unsigned int *auStack_30;
extern unsigned int fn_8223C610();
extern int fn_8223C680();


void fn_82255AC8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int iVar1;
  unsigned char auStack_30;
  
  iVar1 = fn_8223C610(param_3,1,0,0);
  if (iVar1 != 0) {
    auStack_30 = 0;
  }
  else {
    auStack_30 = fn_8223C610(param_3,3,0,0);
  }
  if (param_4 != 0) {
    *(unsigned int *)(param_4 + 8) = 0;
    *(unsigned int *)(param_4 + 4) = 7;
    *(unsigned int *)(param_4 + 0xc) = 1;
    fn_8223C680(param_4,0,&auStack_30);
  }
  return;
}

