typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B19D78();
extern int fn_82B20438();


void fn_82B230F8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  
  uVar2 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
  if (uVar2 == 0xd) {
    *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + 1;
    fn_82B19D78();
  }
  else if ((uVar2 == 0xb) || (uVar2 == 10)) {
    for (puVar1 = *(unsigned int **)(param_2 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
      uVar2 = puVar1[4];
      if ((uVar2 != 0) && ((*puVar1 & 0xe000000) != 0)) {
        if ((*(unsigned int *)(uVar2 + 8) & 0x40) == 0) {
          bVar4 = false;
        }
        else {
          uVar3 = *(unsigned int *)(uVar2 + 8) >> 7 & 0x7f;
          if (((uVar3 == 0x1e) || (uVar3 == 0x37)) || (bVar4 = false, uVar3 == 0x38)) {
            bVar4 = true;
          }
        }
        if (bVar4) {
          fn_82B20438(param_1,uVar2,param_3,param_4);
        }
      }
    }
  }
  if ((*(unsigned int *)(param_2 + 8) & 0x40) == 0) {
    bVar4 = false;
  }
  else {
    uVar2 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
    if (((uVar2 == 0x1e) || (uVar2 == 0x37)) || (bVar4 = false, uVar2 == 0x38)) {
      bVar4 = true;
    }
  }
  if (bVar4) {
    fn_82B20438(param_1,param_2,param_3,param_4);
  }
  return;
}

