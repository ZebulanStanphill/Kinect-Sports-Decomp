extern int fn_8223A9E0();
extern unsigned int lbl_82195518;


double fn_822395B8(unsigned __int64 param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  lVar1 = fn_8223A9E0(param_1,0,3);
  lVar2 = fn_8223A9E0(param_1,3,6);
  if (lVar1 == 0) {
    dVar4 = lbl_82195518;
    if (lVar2 == 0) goto LAB_82239650;
    lVar1 = 0x3fd;
    for (uVar3 = lVar2 << 0x2e; (uVar3 & 0xfff0000000000000) == 0; uVar3 = uVar3 << 1) {
      lVar1 = lVar1 + -1;
    }
    uVar3 = uVar3 & 0xfffffffffffff;
  }
  else {
    lVar1 = lVar1 + 0x3fc;
    uVar3 = lVar2 << 0x2e;
  }
  dVar4 = (double)(lVar1 << 0x34 | uVar3);
LAB_82239650:
  return (double)(float)dVar4;
}

