extern int fn_8223A9E0();
extern int fn_8232A988();
extern int fn_823B4900();
extern unsigned int lbl_82195620;
extern unsigned int uStack_30;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_823298E0(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  double dVar6;
  unsigned __int64 uStack_30;
  
  uVar1 = fn_823B4900(param_2,0x21,0,0);
  uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) & 0xffffff)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_30 = (unsigned __int64)(((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF);
  fn_8232A988(&uStack_30,uVar1 >> 0x20 & 1,0,1);
  fn_8232A988(&uStack_30,uVar1 >> 0x18 & 0xff,1,8);
  fn_8232A988(&uStack_30,uVar1 & 0xffffff,9,0x18);
  lVar2 = fn_8223A9E0(&uStack_30,0,1);
  lVar3 = fn_8223A9E0(&uStack_30,1,8);
  lVar4 = fn_8223A9E0(&uStack_30,9,0x18);
  if (lVar3 == 0) {
    dVar6 = lbl_82195620;
    if (lVar4 == 0) goto LAB_823299f4;
    uVar5 = 0x381;
    for (uVar1 = lVar4 << 0x1c; (uVar1 & 0xfff0000000000000) == 0; uVar1 = uVar1 << 1) {
      uVar5 = uVar5 - 1;
    }
    uVar1 = uVar1 & 0xfffffffffffff;
  }
  else {
    uVar5 = lVar3 + 0x380;
    uVar1 = lVar4 << 0x1c;
  }
  dVar6 = (double)((lVar2 << 0xb | uVar5) << 0x34 | uVar1);
LAB_823299f4:
  if (param_3 != (float *)0x0) {
    *param_3 = (float)dVar6;
  }
  return;
}

