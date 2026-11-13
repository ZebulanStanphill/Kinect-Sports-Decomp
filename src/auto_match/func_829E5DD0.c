typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_829E5BC0();
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005748;
extern unsigned int lbl_82057B94;


unsigned __int64 fn_829E5DD0(double param_1,double param_2)

{
  bool bVar1;
  char cVar2;
  double dVar3;
  
  dVar3 = (double)lbl_82057B94;
  if ((double)lbl_82057B94 <= param_2) {
    dVar3 = param_2;
  }
  if ((param_1 <= (double)lbl_82005748) || (bVar1 = true, (float)(param_1 / dVar3) <= lbl_82005344))
  {
    bVar1 = false;
  }
  if ((!bVar1) && (cVar2 = fn_829E5BC0(), cVar2 == '\0')) {
    return 0;
  }
  return 1;
}

