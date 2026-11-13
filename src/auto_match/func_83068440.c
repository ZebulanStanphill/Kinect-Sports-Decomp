typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8305E648();


void fn_83068440(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  bool bVar2;
  
  do {
    if ((*(int *)(param_2 + 0x30) != 0) || (bVar2 = true, *(int *)(param_2 + 0x34) != 0)) {
      bVar2 = false;
    }
    if (bVar2) {
      for (iVar1 = *(int *)(param_1 + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        fn_8305E648(iVar1 + 0x10,param_3);
      }
      return;
    }
    if (*(int *)(param_2 + 0x30) != 0) {
      fn_83068440(*(unsigned int *)(param_2 + 0x30),*(unsigned int *)(param_2 + 0x30),param_3);
    }
    param_1 = *(int *)(param_2 + 0x34);
    param_2 = param_1;
  } while (param_1 != 0);
  return;
}

