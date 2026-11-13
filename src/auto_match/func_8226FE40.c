extern int fn_8226FDB8();
extern int fn_82270B70();


unsigned __int64 fn_8226FE40(unsigned int param_1)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82270B70();
  if ((((param_1 & 0xffffffff) != 0) && (iVar3 = fn_8226FDB8(param_1,0), iVar3 == 0)) ||
     (uVar1 = 1, *(int *)(iVar2 + 0xa0) != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

