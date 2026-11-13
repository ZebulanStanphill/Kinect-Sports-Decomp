typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822C1928();


bool fn_822F53E8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((*(int *)(param_2 + 0x1a0) == 0) ||
     ((*(int *)(param_2 + 0x18c) == 0 &&
      ((*(int *)(param_2 + 0x1a0) == 0 || (*(int *)(param_2 + 400) == 0)))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 0x24) == 0) || (bVar2)) {
    iVar1 = fn_822C1928((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20)
                              + 4,0xffffffff821ae1c0,0,7);
    bVar2 = iVar1 == -1;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

