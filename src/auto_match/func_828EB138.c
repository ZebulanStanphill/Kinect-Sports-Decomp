typedef unsigned char bool;
extern int fn_828B30E8();
extern int fn_828B3DF8();
extern int fn_82CE1210();


unsigned char fn_828EB138(int param_1,unsigned __int64 *param_2)

{
  int iVar1;
  unsigned char bVar2;
  bool bVar3;
  int aiStack_30;
  
  iVar1 = fn_82CE1210(*(unsigned int *)(param_1 + 0x70),*param_2,&aiStack_30);
  bVar3 = aiStack_30 == 0;
  fn_828B3DF8(&aiStack_30,param_1 + 0x5c,param_2);
  if (aiStack_30 == *(int *)(param_1 + 0x60)) {
    bVar2 = -(iVar1 != 0 || bVar3) & 2;
  }
  else if (iVar1 != 0 || bVar3) {
    bVar2 = 1;
  }
  else {
    fn_828B30E8(&aiStack_30,param_1 + 0x5c);
    bVar2 = 0;
  }
  return bVar2;
}

