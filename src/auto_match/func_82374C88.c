typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82672C20();


void fn_82374C88(int param_1,int param_2)

{
  bool bVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  *(int *)(param_1 + 0x344) = param_2;
  if ((((param_2 == 0) || (*(int *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x14) + 0x14) != 0)) ||
      (*(int *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x18) + 0xc) != 0)) ||
     ((*(int *)(param_1 + 0x9d8) != 0 || (bVar1 = true, *(int *)(param_1 + 0x54) == 0xb)))) {
    bVar1 = false;
  }
  puVar2 = *(unsigned int **)(*(int *)(param_1 + 0xd4) + 0xc);
  if (!bVar1) {
    if (puVar2[0x16] == 0) {
      return;
    }
    if (puVar2[4] != 0) {
      fn_82672C20(*puVar2,0xffffffff821a8498,0,0);
      puVar2[4] = 0;
      puVar2 = puVar2 + 0x1c;
      lVar3 = 8;
      do {
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    return;
  }
  if (puVar2[0x16] != 0) {
    return;
  }
  if (puVar2[4] == 0) {
    fn_82672C20(*puVar2,0xffffffff821a8484,0,0);
    puVar2[4] = 1;
    puVar2 = puVar2 + 0x1c;
    lVar3 = 8;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

