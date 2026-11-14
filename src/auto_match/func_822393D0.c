extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_8223C610();
extern int fn_823B4900();
extern int sin();
extern int fn_82F6A548();
extern int fn_82F6B030();
extern unsigned int lbl_82195520;
extern unsigned int lbl_82195528;
extern unsigned int lbl_831D0EC8;
extern unsigned int lbl_83297578;
extern unsigned int lbl_83297580;
extern unsigned int lbl_83297588;


void fn_822393D0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned int uVar2;
  __int64 lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fn_82F6A548();
  uVar2 = lbl_83297578;
  if ((lbl_83297578 & 1) == 0) {
    uVar2 = lbl_83297578 | 1;
    lbl_83297578 = uVar2;
    dVar4 = (double)fn_82F6B030(0x4000);
    lbl_83297580 = (__int64)SQRT(dVar4);
  }
  if ((uVar2 & 2) == 0) {
    lbl_83297578 = uVar2 | 2;
    lbl_83297588 = lbl_83297580 * lbl_83297580;
  }
  fn_8223C610(param_2,1,0,0);
  fn_8223C610(param_2,1,0,0);
  fn_8223C610(param_2,1,0,0);
  lVar1 = fn_823B4900(param_2,0xe,0,0);
  dVar4 = (double)fn_82F6B030();
  lVar3 = (__int64)SQRT(dVar4);
  fn_82F6B030(lVar1 - lVar3 * lVar3);
  dVar4 = lbl_82195520;
  fn_82F6B030(lVar3 * 2 + 1);
  dVar6 = (double)lbl_831D0EC8;
  dVar5 = (double)fn_82F6B030(lVar3);
  dVar5 = dVar5 + dVar4;
  dVar4 = (double)fn_82F6B030(lbl_83297580);
                    /* WARNING: Subroutine does not return */
  sin((double)(float)((lbl_82195528 - dVar5 / dVar4) * dVar6));
}

