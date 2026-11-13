typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8305D470();


int fn_8305D578(unsigned __int64 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    do {
      iVar2 = fn_8305D470(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      if ((*(int *)(iVar2 + 0x20) != 0) || (bVar1 = true, *(int *)(iVar2 + 0x24) != 0)) {
        bVar1 = false;
      }
    } while (!bVar1);
  }
  return iVar2;
}

