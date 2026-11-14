extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_8223C610();
extern int fn_823B4900();
extern int sin();
extern int fn_82F6A548();
extern int fn_82F6B030();
extern unsigned int lbl_82195520;
extern unsigned int lbl_82195528;
extern unsigned int lbl_831D4548;
extern unsigned int lbl_83297870;
extern unsigned int lbl_83297878;
extern unsigned int lbl_83297880;


void fn_825AF508(unsigned __int64 param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned int uVar2;
  __int64 lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fn_82F6A548();
  uVar2 = lbl_83297870;
  if ((lbl_83297870 & 1) == 0) {
    uVar2 = lbl_83297870 | 1;
    lbl_83297870 = uVar2;
    dVar4 = (double)fn_82F6B030(0x2000);
    lbl_83297878 = (__int64)SQRT(dVar4);
  }
  if ((uVar2 & 2) == 0) {
    lbl_83297870 = uVar2 | 2;
    lbl_83297880 = lbl_83297878 * lbl_83297878;
  }
  fn_8223C610(param_2,1,0,0);
  fn_8223C610(param_2,1,0,0);
  fn_8223C610(param_2,1,0,0);
  lVar1 = fn_823B4900(param_2,0xd,0,0);
  dVar4 = (double)fn_82F6B030();
  lVar3 = (__int64)SQRT(dVar4);
  fn_82F6B030(lVar1 - lVar3 * lVar3);
  dVar4 = lbl_82195520;
  fn_82F6B030(lVar3 * 2 + 1);
  dVar6 = (double)lbl_831D4548;
  dVar5 = (double)fn_82F6B030(lVar3);
  dVar5 = dVar5 + dVar4;
  dVar4 = (double)fn_82F6B030(lbl_83297878);
                    /* WARNING: Subroutine does not return */
  sin((double)(float)((lbl_82195528 - dVar5 / dVar4) * dVar6));
}

