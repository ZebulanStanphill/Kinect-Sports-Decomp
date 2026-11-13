extern int fn_825602B8();


unsigned char fn_82560708(void)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  do {
    iVar1 = fn_825602B8(uVar3);
    if (iVar1 != 0) {
      uVar2 = uVar2 + 1;
    }
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 0xffffffff) < 2);
  return -(1 < uVar2) & 1;
}

