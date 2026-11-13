extern int fn_82F65390();


unsigned char fn_82820158(__int64 param_1)

{
  int iVar2;
  __int64 lVar1;
  unsigned char bVar3;
  
  iVar2 = fn_82F65390(param_1,0xffffffff8201ebb8,4);
  if (iVar2 == 0) {
    lVar1 = fn_82F65390(param_1 + 4,0xffffffff8201ebc0,0x10);
    bVar3 = -(lVar1 != 0) & 2;
  }
  else {
    bVar3 = 1;
  }
  return bVar3;
}

