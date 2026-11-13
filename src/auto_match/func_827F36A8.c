typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827F2278();
extern int fn_827F22D0();
extern int fn_827F3580();
extern unsigned int lbl_821AAD20;


void fn_827F36A8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  
  if (param_3 == *(int *)((int)param_2 + 0x104)) {
    return;
  }
  cVar2 = fn_827F22D0(param_1,param_1);
  if (cVar2 == '\0') {
    cVar2 = fn_827F2278(param_2);
    bVar1 = false;
    if (cVar2 == '\0') goto LAB_827f36ec;
  }
  bVar1 = true;
LAB_827f36ec:
  *(int *)((int)param_2 + 0x104) = param_3;
  if (bVar1) {
    fn_827F3580((double)lbl_821AAD20,param_2);
  }
  return;
}

