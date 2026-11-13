typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_821AAD20;


unsigned __int64
fn_82AF4C78(unsigned __int64 param_1,float *param_2,__int64 param_3,float *param_4,__int64 param_5)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = false;
  if ((int)param_3 != 0) {
    do {
      if (lbl_821AAD20 <= *param_2) {
        if (lbl_821AAD20 < *param_2) {
          bVar2 = true;
        }
      }
      else {
        bVar1 = true;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((int)param_5 != 0) {
    do {
      if (lbl_821AAD20 <= *param_4) {
        if (lbl_821AAD20 < *param_4) {
          bVar2 = true;
        }
      }
      else {
        bVar1 = true;
      }
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if ((bVar1) && (bVar2)) {
    return 1;
  }
  return 2;
}

