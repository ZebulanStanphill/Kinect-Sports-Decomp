typedef unsigned char bool;
extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


bool fn_83034D00(int param_1)

{
  int *puVar1;
  unsigned int uVar2;
  unsigned int iVar3;
  
  if (*(unsigned int *)(param_1 + 4) == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0x20);
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 != 0) {
      *(unsigned int *)(iVar3 + 0xc) = 0;
      *(unsigned int *)(iVar3 + 0x10) = 0;
      *(unsigned int *)(iVar3 + 0x14) = 0;
      *(unsigned int *)(iVar3 + 0x1c) = 0xffffffff;
    }
    puVar1 = *(unsigned int **)(param_1 + 4);
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = lbl_831BC768;
      puVar1[5] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0xffffffff;
      puVar1[6] = 0;
      puVar1[7] = uVar2;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
    }
  }
  return *(int *)(param_1 + 4) != 0;
}

