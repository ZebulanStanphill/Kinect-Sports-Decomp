typedef unsigned char bool;
#define true 1
extern int fn_82ABE250();


void fn_82B20210(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int *puVar4;
  bool bVar5;
  
  *(unsigned int *)(param_2 + 0x28) = 0;
  uVar2 = *(unsigned int *)(param_1 + 4);
  do {
    if (((uVar2 & 1) != 0) || (uVar2 == 0)) {
      bVar5 = (*(unsigned int **)(param_2 + 0x28))[1] != 0;
      *(unsigned int *)(param_2 + 0x24) = *(unsigned int *)(param_2 + 0x24) & 0xfffffffe | (unsigned int)bVar5;
      if (bVar5) {
        *(unsigned int *)(param_2 + 0x10) = 0;
      }
      else {
        *(unsigned int *)(param_2 + 0x10) = **(unsigned int **)(param_2 + 0x28);
      }
      if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0xc) == 0)) {
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0x10);
      }
      return;
    }
    uVar1 = (param_2 - *(int *)(param_1 + 0x268)) / 0x44;
    if ((*(unsigned int *)(((uVar1 >> 5) + 0x15) * 4 + uVar2) >> (uVar1 & 0x1f) & 1) != 0) {
      for (piVar3 = *(int **)(uVar2 + 0xc); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if ((*(unsigned int *)(((uVar1 >> 5) + 0x15) * 4 + *piVar3) >> (uVar1 & 0x1f) & 1) == 0) {
          if (*piVar3 != 0) {
            puVar4 = (unsigned int *)fn_82ABE250(param_1,0x14,0x28);
            *puVar4 = uVar2;
            puVar4[1] = *(unsigned int *)(param_2 + 0x28);
            *(unsigned int **)(param_2 + 0x28) = puVar4;
          }
          break;
        }
      }
    }
    uVar2 = *(unsigned int *)((uVar2 & 0xfffffffe) + 4);
  } while( true );
}

