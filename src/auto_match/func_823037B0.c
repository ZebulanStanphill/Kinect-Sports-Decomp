typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned __int64 storeWordConditionalIndexed();


void fn_823037B0(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  bool bVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  char in_RESERVE;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(iVar1 + 0x108) = *(unsigned int *)(param_1 + 0x104);
  *(unsigned int *)(iVar1 + 0x10c) = *(unsigned int *)(param_1 + 0x108);
  if (*(char *)(param_1 + 0xc4) != '\0') {
    return;
  }
  if ((*(int *)(param_1 + 0x88) == 0) ||
     (bVar4 = false, *(int *)(*(int *)(param_1 + 0x88) + 4) == 0)) {
    bVar4 = true;
  }
  bVar4 = !bVar4;
  if (bVar4) {
    *(unsigned int *)(*(int *)(param_1 + 0x80) + 0x2fc) = 0;
    *(unsigned int *)(*(int *)(param_1 + 0x80) + 0x4ac) = 0;
  }
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x80) = 0;
  piVar2 = *(int **)(param_1 + 0x88);
  if (ZEXT48(piVar2) != 0) {
    lVar5 = ZEXT48(piVar2) + 8;
    do {
      puVar6 = (unsigned int *)lVar5;
      lVar7 = (unsigned __int64)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar7,0,lVar5);
        *puVar6 = uVar3;
        bVar4 = true;
      }
    } while (!bVar4);
    if ((int)lVar7 == 0) {
      (**(int (***)())(*piVar2 + 4))();
    }
  }
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x84) = 0;
  return;
}

