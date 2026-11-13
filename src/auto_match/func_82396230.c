typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82672C20();


void fn_82396230(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  if (*(int *)(param_1 + 0x240) != 0) {
    bVar2 = true;
    uVar1 = *(unsigned int *)(param_1 + 0x54);
    if (((uVar1 < 4) || (uVar1 == 7)) || (uVar1 == 0x10)) {
      bVar2 = false;
    }
    if (((*(int *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x14) + 0x14) == 0) &&
        (*(int *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x18) + 0xc) == 0)) && (bVar3 = true, bVar2))
    goto LAB_82396294;
  }
  bVar3 = false;
LAB_82396294:
  puVar4 = *(unsigned int **)(*(int *)(param_1 + 0xd4) + 0xc);
  if (bVar3) {
    if (puVar4[0x16] != 0) {
      return;
    }
    if (puVar4[4] == 0) {
      fn_82672C20(*puVar4,0xffffffff821a8484,0,0);
      puVar4[4] = 1;
      puVar4 = puVar4 + 0x1c;
      lVar5 = 8;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    return;
  }
  if (puVar4[0x16] == 0) {
    return;
  }
  if (puVar4[4] != 0) {
    fn_82672C20(*puVar4,0xffffffff821a8498,0,0);
    puVar4[4] = 0;
    puVar4 = puVar4 + 0x1c;
    lVar5 = 8;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

