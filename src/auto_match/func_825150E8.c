#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8251E768();
extern int fn_825503E0();
extern int fn_828BF798();
extern int fn_828E2DC8();
extern int fn_828E5A80();
extern int fn_828E5BD0();
extern unsigned int lbl_821C2734;


void fn_825150E8(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *apuStack_40 [4];
  unsigned char **ppuStack_30;
  int (**pcStack_2c)();
  unsigned char ***pppuStack_20;
  
  iVar3 = fn_8251E768();
  puVar1 = *(unsigned int **)(iVar3 + 4);
  apuStack_40[0] = (unsigned int *)*puVar1;
  while (ZEXT48(apuStack_40[0]) != ZEXT48(puVar1)) {
    fn_828BF798(ZEXT48(apuStack_40[0]) + 0x10);
    fn_825503E0(apuStack_40);
    puVar1 = *(unsigned int **)(iVar3 + 4);
  }
  puVar2 = *(unsigned int **)(iVar3 + 4);
  apuStack_40[0] = (unsigned int *)*puVar2;
  while ((apuStack_40[0] != puVar2 && (apuStack_40[0][3] != 0x1b))) {
    fn_825503E0(apuStack_40);
  }
  if (apuStack_40[0] == puVar2) {
    fn_828E5BD0();
  }
  pcStack_2c = fn_828E5A80;
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821C2734;
  fn_828E2DC8(&ppuStack_30);
  return;
}

