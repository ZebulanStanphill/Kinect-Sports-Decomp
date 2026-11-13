typedef unsigned char bool;
#define true 1
#define false 0


int * fn_82B10048(unsigned __int64 param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  
  puVar1 = *(unsigned int **)(param_3 + 4);
  do {
    if (puVar1 == (unsigned int *)0x0) {
      return (int *)0x0;
    }
    piVar2 = (int *)puVar1[4];
    if ((((piVar2 != (int *)0x0) && (uVar3 = *puVar1, (uVar3 & 0xe000000) != 0)) &&
        ((piVar2[2] & 0x3f80U) == 0x3800)) && (piVar2[7] == param_2)) {
      uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_3 + 0x1c) + 0x30) & 0x7ffff;
      if ((*(unsigned int *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(param_2 + 0x28)) &
          1 << ((unsigned int)uVar4 & 0x1f)) != 0) {
        if ((*piVar2 == 0) || (bVar5 = true, *(int *)(*piVar2 + 4) == 0)) {
          bVar5 = false;
        }
        if (bVar5) goto code_r0x82b10104;
      }
      if (((uVar3 >> 5 & 3) == param_4) && ((uVar3 & 0x1f) == param_5)) {
        return piVar2;
      }
    }
code_r0x82b10104:
    puVar1 = (unsigned int *)puVar1[2];
  } while( true );
}

