extern int fn_82F535C8();
extern int fn_8306ED30();


__int64 fn_82F5A628(double param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  double dVar3;
  
  uVar1 = 0;
  lVar2 = 2;
  do {
    fn_8306ED30();
    dVar3 = (double)fn_82F535C8();
    if (dVar3 < param_1) {
      uVar1 = uVar1 + 1;
    }
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return -((unsigned __int64)(uVar1 < 2) - 1);
}

