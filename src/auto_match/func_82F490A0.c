extern int fn_82F64CE0();
extern int fn_82F70368();
extern unsigned int lbl_8326181C;


unsigned char fn_82F490A0(unsigned __int64 param_1)

{
  int iVar2;
  __int64 lVar1;
  unsigned int uVar3;
  unsigned char bVar4;
  
  bVar4 = 1;
  uVar3 = (unsigned int)lbl_8326181C;
  iVar2 = fn_82F64CE0();
  if (uVar3 + 4 == iVar2) {
    lVar1 = fn_82F70368(param_1,0xffffffff821655a0,uVar3);
    bVar4 = -(lVar1 != 0) & 1;
  }
  return bVar4;
}

