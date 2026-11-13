typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_828ED508();
extern int fn_828EF918();


unsigned __int64 fn_828B65E0(int *param_1)

{
  bool bVar1;
  char cVar3;
  unsigned __int64 uVar2;
  
  if ((param_1[0x14] == 0) || (bVar1 = true, *(int *)(param_1[0x14] + 8) != 0)) {
    bVar1 = false;
  }
  if (bVar1) {
    cVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    bVar1 = true;
    if (cVar3 != '\0') goto LAB_828b6650;
  }
  bVar1 = false;
LAB_828b6650:
  if (bVar1) {
    if (*(char *)(param_1 + 0x13) == '\0') {
      fn_828ED508(param_1[0x14],param_1[0x11],param_1[0x10],param_1[9],param_1[0x12]);
    }
    else {
      fn_828EF918(param_1[0x14],param_1[0x10],param_1 + 0xe);
    }
    param_1[8] = 1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    param_1[8] = 3;
  }
  return uVar2;
}

