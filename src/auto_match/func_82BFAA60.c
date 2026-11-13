typedef unsigned char bool;
#define false 0
extern int fn_82A2A580();


bool fn_82BFAA60(int param_1)

{
  int lVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(unsigned int *)(param_1 + 8) == 0) {
    lVar1 = fn_82A2A580(0);
    bVar2 = lVar1 != 0;
    *(int *)(param_1 + 8) = (int)lVar1;
  }
  return bVar2;
}

