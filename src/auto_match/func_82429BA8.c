extern unsigned int *auStack_30;
extern int fn_8223A9E0();
extern int fn_8232A988();
extern int fn_823B4900();
extern unsigned int lbl_82195518;


void fn_82429BA8(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  double dVar4;
  unsigned char auStack_30 [24];
  
  uVar1 = fn_823B4900(param_2,8,0,0);
  fn_8232A988(auStack_30,uVar1 >> 5 & 7,0,3);
  fn_8232A988(auStack_30,uVar1 & 0x1f,3,5);
  lVar2 = fn_8223A9E0(auStack_30,0,3);
  lVar3 = fn_8223A9E0(auStack_30,3,5);
  if (lVar2 == 0) {
    dVar4 = lbl_82195518;
    if (lVar3 == 0) goto LAB_82429c90;
    lVar2 = 0x3fd;
    for (uVar1 = lVar3 << 0x2f; (uVar1 & 0xfff0000000000000) == 0; uVar1 = uVar1 << 1) {
      lVar2 = lVar2 + -1;
    }
    uVar1 = uVar1 & 0xfffffffffffff;
  }
  else {
    lVar2 = lVar2 + 0x3fc;
    uVar1 = lVar3 << 0x2f;
  }
  dVar4 = (double)(lVar2 << 0x34 | uVar1);
LAB_82429c90:
  if (param_3 != (float *)0x0) {
    *param_3 = (float)dVar4;
  }
  return;
}

