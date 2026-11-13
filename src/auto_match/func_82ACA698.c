typedef unsigned char bool;
#define true 1
#define false 0


void fn_82ACA698(int param_1,int param_2,char param_3)

{
  unsigned int *puVar1;
  bool bVar2;
  unsigned int uVar3;
  
  if ((*(unsigned int *)(param_2 + 8) >> 6 & 1) == 0) {
    return;
  }
  puVar1 = *(unsigned int **)(param_2 + 4);
  do {
    if (puVar1 == (unsigned int *)0x0) {
      return;
    }
    if (puVar1[4] != 0) {
      uVar3 = *puVar1;
      if ((uVar3 & 0x40000000) == 0) {
LAB_82aca6d8:
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if ((uVar3 & 0xe000000) != 0) goto LAB_82aca6d8;
      }
      if (bVar2) {
        uVar3 = 1 << (uVar3 >> 0xd & 0x3f);
        if (param_3 == '\0') {
          uVar3 = *(unsigned int *)(param_1 + 0x30) & ~uVar3;
        }
        else {
          uVar3 = uVar3 | *(unsigned int *)(param_1 + 0x30);
        }
        *(unsigned int *)(param_1 + 0x30) = uVar3;
      }
    }
    puVar1 = (unsigned int *)puVar1[2];
  } while( true );
}

