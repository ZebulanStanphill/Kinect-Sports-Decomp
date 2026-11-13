typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_82022E50;
extern unsigned int lbl_82022E54;
extern unsigned int lbl_821AAD20;


void fn_8287C010(float *param_1)

{
  bool bVar1;
  
  if ((lbl_82022E50 <= *param_1) || (bVar1 = true, *param_1 <= lbl_82022E54)) {
    bVar1 = false;
  }
  if (!bVar1) {
    return;
  }
  *param_1 = lbl_821AAD20;
  return;
}

