typedef unsigned char bool;
extern int fn_830069B8();


void fn_83006B48(int *param_1,int param_2,unsigned __int64 param_3)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = fn_830069B8();
  if (cVar2 != '\0') {
    if (param_2 != 0) {
      (**(int (***)())(*param_1 + 0x94))(param_1,3);
    }
    if ((param_3 & 0xffffffff) < 4) {
      bVar1 = (int)param_3 != 0;
      if (param_3 == 1 && bVar1) {
        *(int *)(param_1[8] + 0x1c) = param_2;
      }
      else if (param_3 == 2 && bVar1) {
        *(int *)(param_1[8] + 0x18) = param_2;
      }
      else if (bVar1) {
        *(int *)(param_1[8] + 0x20) = param_2;
      }
      else {
        *(int *)(param_1[8] + 0x14) = param_2;
      }
    }
  }
  return;
}

