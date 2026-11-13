extern int fn_82CE0990();
extern int fn_82CE0BB0();


unsigned __int64 fn_830B3840(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82CE0990(*param_2,param_3,0x10);
  if ((iVar2 == -1) && (iVar2 = fn_82CE0BB0(), iVar2 != 0x2733)) {
    uVar1 = 0xffffffff8004000c;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

