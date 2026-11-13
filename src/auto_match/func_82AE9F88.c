typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD1AC8();


bool fn_82AE9F88(unsigned __int64 param_1,int param_2)

{
  unsigned int iVar1;
  bool bVar2;
  unsigned int iVar3;
  
  bVar2 = false;
  iVar1 = *(int *)(*(int *)(param_2 + 0x2c) + 0xc);
  while( true ) {
    iVar3 = fn_82AD1AC8(param_2,3);
    if (iVar3 == 0) break;
    param_2 = *(int *)(iVar3 + 0xc);
    if ((((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x3000) && ((*(unsigned int *)(param_2 + 8) & 0x380000) != 0)
        ) && (iVar1 == *(int *)(*(int *)(param_2 + 0x2c) + 0xc))) {
      bVar2 = true;
    }
  }
  return !bVar2;
}

