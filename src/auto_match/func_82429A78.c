extern unsigned int *auStack_30;
extern int fn_8223A9E0();
extern int fn_8223C478();
extern int fn_8232A988();
extern int fn_828E9F18();


void fn_82429A78(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_30 [8];
  double dStack_28;
  
  dStack_28 = (double)*param_3;
  uVar2 = (unsigned __int64)dStack_28 & 0xfffffffffffff;
  uVar3 = (unsigned __int64)dStack_28 >> 0x34 & 0x7ff;
  if ((((unsigned __int64)dStack_28 & 0x8000000000000000) == 0) && (uVar3 != 0)) {
    uVar3 = uVar3 - 0x3fc;
    if (0 < (__int64)uVar3) {
      if (uVar3 < 8) {
        fn_8232A988(auStack_30,uVar3,0,3);
        uVar2 = uVar2 >> 0x2f;
      }
      else {
        fn_8232A988(auStack_30,7,0,3);
        uVar2 = 0x1f;
      }
      goto LAB_82429b4c;
    }
    if (-uVar3 < 0x40) {
      fn_8232A988(auStack_30,0,0,3);
      uVar2 = ((uVar2 | 0x10000000000000) >> (-uVar3 + 1 & 0x7f)) >> 0x2f;
      goto LAB_82429b4c;
    }
  }
  fn_8232A988(auStack_30,0,0,3);
  uVar2 = 0;
LAB_82429b4c:
  fn_8232A988(auStack_30,uVar2,3,5);
  fn_8223C478(param_2,8,0);
  lVar1 = fn_8223A9E0(auStack_30,0,3);
  uVar2 = fn_8223A9E0(auStack_30,3,5);
  fn_828E9F18(param_2,lVar1 << 5 | uVar2,8);
  return;
}

