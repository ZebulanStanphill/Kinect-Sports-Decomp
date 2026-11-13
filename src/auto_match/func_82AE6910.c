extern int fn_82AA66A8();
extern int fn_82AE5040();
extern int fn_82AE5400();
extern int fn_82AE5AC8();
extern int fn_82AE5C40();


unsigned __int64 fn_82AE6910(unsigned __int64 param_1,__int64 param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  
  uVar4 = 0;
  uVar11 = 0xffffffffffffffff;
  uVar10 = 0xffffffffffffffff;
  lVar13 = 0;
  uVar12 = 0x100 - param_3;
  do {
    uVar2 = fn_82AE5C40(param_2,uVar4,param_3);
    if ((int)uVar2 == -1) break;
    uVar3 = fn_82AE5040(param_2 + 8,(uVar2 & 0x3fffffff) << 2);
    if ((uVar3 == 0xffffffff) || (uVar4 = (unsigned __int64)(uVar3 >> 2), uVar3 >> 2 == 0xffffffff)) {
      uVar4 = uVar12 + param_3;
    }
    uVar7 = uVar2 + param_3;
    uVar1 = uVar4 & 0xfffffffc;
    uVar9 = uVar7 & 0xfffffffc;
    if (uVar9 == uVar1) {
      uVar14 = uVar4 - uVar7;
    }
    else {
      uVar14 = uVar4 - uVar1;
      if ((uVar7 & 0xffffffff) != uVar9) {
        uVar14 = (uVar14 - uVar7) + uVar9 + 4;
      }
    }
    if ((uVar4 & 0xffffffff) < (uVar12 & 0xffffffff)) {
      uVar7 = uVar4 - param_3;
      uVar9 = uVar2 & 0xfffffffc;
      if (uVar9 == (uVar7 & 0xfffffffc)) {
        uVar7 = uVar7 - uVar2;
      }
      else {
        uVar7 = uVar7 - (uVar7 & 0xfffffffc);
        if ((uVar2 & 0xffffffff) != uVar9) {
          uVar7 = (uVar9 - uVar2) + uVar7 + 4;
        }
      }
    }
    else {
      uVar7 = 0xffffffffffffffff;
    }
    lVar5 = 0;
    uVar8 = (uVar2 + 3 & 0xfffffffc) + param_3;
    uVar9 = uVar8 & 0xfffffffc;
    if ((uVar2 & 0xffffffff) != (uVar2 & 0xfffffffc)) {
      lVar5 = ((uVar2 & 0xfffffffc) - uVar2) + 4;
    }
    if (uVar9 == uVar1) {
      uVar6 = (lVar5 - uVar8) + uVar4;
    }
    else {
      uVar6 = (lVar5 - uVar1) + uVar4;
      if ((uVar8 & 0xffffffff) != uVar9) {
        uVar6 = (uVar6 - uVar8) + uVar9 + 4;
      }
    }
    if ((uVar7 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      uVar2 = uVar4 - param_3;
      uVar14 = uVar7;
    }
    if ((uVar6 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      uVar2 = uVar2 + 3 & 0xfffffffc;
      uVar14 = uVar6;
    }
    lVar5 = 0;
    if (((uVar4 & 0xffffffff) < (uVar12 & 0xffffffff)) &&
       (uVar3 = fn_82AE5400(param_2,uVar4,1,4), uVar3 != 0xffffffff)) {
      lVar5 = ((unsigned __int64)(uVar3 >> 4) + 3 & 0xfffffffc) - (unsigned __int64)(uVar3 >> 4);
    }
    uVar9 = lVar5 + uVar14 + lVar13;
    if (((int)uVar11 == -1) || ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff))) {
      uVar10 = uVar9;
      uVar11 = uVar2;
    }
    lVar13 = uVar4 - uVar1;
  } while ((uVar4 & 0xffffffff) <= (uVar12 & 0xffffffff));
  if ((int)uVar11 == -1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdee);
  }
  fn_82AE5AC8(param_2,uVar11,param_3);
  return uVar11;
}

