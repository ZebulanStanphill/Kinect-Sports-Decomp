typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82696D38();


int * fn_82697248(int *param_1,char *param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  bool bVar2;
  
  if ((*param_2 == '\0') || (bVar2 = false, *param_2 == '\n')) {
    bVar2 = true;
  }
  if (bVar2) {
    if ((param_4 == 0) || (6 < param_4)) {
      iVar1 = *(int *)(*(int *)(param_3 + 0x78) + 0xcc);
    }
    else {
      iVar1 = *(int *)(*(int *)(param_3 + 0x78) + 8);
    }
    *param_1 = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  else {
    fn_82696D38(param_1,param_2,param_3,0xffffffffffffffff,0);
  }
  return param_1;
}

