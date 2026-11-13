extern int fn_8223A9E0();
extern unsigned int lbl_82195518;


double fn_82239318(unsigned __int64 param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  lVar1 = fn_8223A9E0(param_1,0,4);
  lVar2 = fn_8223A9E0(param_1,4,10);
  if (lVar1 == 0) {
    dVar4 = lbl_82195518;
    if (lVar2 == 0) goto LAB_822393b0;
    lVar1 = 0x3f9;
    for (uVar3 = lVar2 << 0x2a; (uVar3 & 0xfff0000000000000) == 0; uVar3 = uVar3 << 1) {
      lVar1 = lVar1 + -1;
    }
    uVar3 = uVar3 & 0xfffffffffffff;
  }
  else {
    lVar1 = lVar1 + 0x3f8;
    uVar3 = lVar2 << 0x2a;
  }
  dVar4 = (double)(lVar1 << 0x34 | uVar3);
LAB_822393b0:
  return (double)(float)dVar4;
}

