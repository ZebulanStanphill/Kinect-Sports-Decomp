#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int uStack_10;


void fn_82DB3140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned short *puVar3;
  unsigned int uStack_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x20);
  iVar2 = 0;
  if (iVar1 < 1) {
    return;
  }
  puVar3 = *(unsigned short **)(*(int *)(param_1 + 0x10) + 0x1c);
  do {
    uStack_10 = CONCAT22(puVar3[3],puVar3[7]);
    if (uStack_10 == param_2 + 0x10) {
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[2] = 0xffff;
      puVar3[1] = 0xffff;
      *puVar3 = 0xffff;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 8;
  } while (iVar2 < iVar1);
  return;
}

