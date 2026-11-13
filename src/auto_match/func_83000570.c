typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_830066E0();
extern unsigned int lbl_821AAD20;


void fn_83000570(int *param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  bool bVar1;
  double dVar2;
  
  fn_830066E0();
  if ((param_1[0x19] != 0) && (param_2 == 0)) {
    bVar1 = true;
    dVar2 = (double)lbl_821AAD20;
    if (param_4 == 0x14) {
      dVar2 = (double)(float)param_1[0x16];
    }
    else if (param_4 == 0x15) {
      dVar2 = (double)(float)param_1[0x17];
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      (**(int (***)())(*param_1 + 0x48))(dVar2,param_1);
    }
  }
  return;
}

