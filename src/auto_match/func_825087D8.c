extern int fn_825200A8();


unsigned __int64 fn_825087D8(void)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar2 = -0x7cd7c1c4;
  lVar3 = lVar2;
  do {
    uVar1 = fn_825200A8(lVar3);
    if ((int)uVar1 != 0) {
      return 1;
    }
    lVar3 = lVar3 + 4;
  } while ((int)lVar3 < (int)lVar2 + 8);
  return uVar1;
}

