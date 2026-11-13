extern int fn_82F71810();
extern int fn_82F788F0();
extern unsigned int lbl_82005730;
extern unsigned int lbl_831BB330;
extern unsigned int lbl_831BB338;
extern unsigned int lbl_831BB340;
extern unsigned int lbl_831BB348;
extern unsigned int lbl_831BB350;
extern unsigned int lbl_831BB358;
extern unsigned int lbl_831BB360;
extern unsigned int lbl_831BB368;
extern unsigned int lbl_831BB370;


double fn_82F64B20(double param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)fn_82F788F0(lbl_831BB330 * param_1);
  dVar2 = -(lbl_831BB340 * dVar3 - -(lbl_831BB338 * dVar3 - param_1));
  dVar4 = dVar2 * dVar2;
  dVar2 = ((lbl_831BB358 * dVar4 + lbl_831BB350) * dVar4 + lbl_831BB348) * dVar2;
  dVar2 = dVar2 / (((lbl_831BB370 * dVar4 + lbl_831BB368) * dVar4 + lbl_831BB360) - dVar2) +
          lbl_82005730;
  iVar1 = fn_82F71810(dVar2);
  *param_3 = iVar1 + (int)dVar3 + 1;
  return dVar2;
}

