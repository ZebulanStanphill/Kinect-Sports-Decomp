extern int fn_8252AD10();


unsigned __int64 fn_8252ACC0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  do {
    iVar1 = fn_8252AD10(param_1,param_2,lVar3);
    if (iVar1 != 0) {
      uVar2 = 1;
    }
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < 2);
  return uVar2;
}

