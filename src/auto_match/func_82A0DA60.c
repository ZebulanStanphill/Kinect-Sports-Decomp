typedef unsigned char bool;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82015BD4;


bool fn_82A0DA60(double param_1,double param_2)

{
  float fVar1;
  unsigned char bVar2;
  
  fVar1 = (float)(param_1 * (double)lbl_82015BD4) / lbl_820145BC;
  if ((fVar1 + lbl_82002C5C <= lbl_82002AE0) || (bVar2 = 1, lbl_82005344 <= fVar1 - lbl_82002C5C)) {
    bVar2 = 0;
  }
  return !(bool)((double)(fVar1 / lbl_8200D8C4) < param_2 & bVar2);
}

