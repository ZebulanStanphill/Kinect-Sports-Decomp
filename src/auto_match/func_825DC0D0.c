extern int fn_825DC128();
extern int fn_825DCE60();
extern int fn_82A1DD38();


unsigned __int64 fn_825DC0D0(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  fn_82A1DD38(param_1 + 0x378,param_2 + 0x9c,0x124);
  *(unsigned int *)(param_1 + 0x828) = 0x18;
  fn_825DC128(uVar1,param_1,param_2);
  fn_825DCE60(uVar1,param_1);
  return 1;
}

