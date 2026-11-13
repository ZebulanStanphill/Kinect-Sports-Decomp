typedef unsigned char bool;
#define true 1
#define false 0


void fn_82B19000(int param_1,int param_2,char param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  
  do {
    bVar5 = false;
    for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
      if (*(int *)(uVar1 + 0x2c) == param_2) {
        for (piVar2 = *(int **)(uVar1 + 0xc); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
          iVar3 = *piVar2;
          if ((*(int *)(iVar3 + 0x2c) != param_2) &&
             ((param_3 == '\0' ||
              (uVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x30) & 0x7ffff,
              (*(unsigned int *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28)) &
              1 << ((unsigned int)uVar4 & 0x1f)) == 0)))) {
            *(int *)(iVar3 + 0x2c) = param_2;
            bVar5 = true;
          }
        }
      }
    }
  } while (bVar5);
  return;
}

