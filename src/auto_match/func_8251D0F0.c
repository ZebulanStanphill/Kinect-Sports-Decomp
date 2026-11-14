extern unsigned int *auStack_38;
extern int fn_822314E8();
extern int fn_82488DB8();
extern int fn_8251D060();
extern int fn_8251D290();
extern int fn_82596630();
extern int fn_8265CA20();
extern int XMemSet();
extern unsigned int *lbl_83296188;
extern unsigned int *lbl_8329618C;
extern int (*lbl_832961C0)();


void fn_8251D0F0(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned char auStack_38 [56];
  
  puVar1 = lbl_83296188;
  iVar3 = 0;
  puVar5 = (unsigned int *)0x832960c8;
  while (puVar5[1] != 0) {
    puVar5 = puVar5 + 0xc;
    if (-0x7cd69e79 < (int)puVar5) {
      return;
    }
  }
  puVar2 = lbl_83296188 + 8;
  *puVar5 = *lbl_83296188;
  puVar5[1] = puVar1[1];
  puVar5[2] = puVar1[2];
  puVar5[3] = puVar1[3];
  puVar5[4] = puVar1[4];
  puVar5[5] = puVar1[5];
  puVar5[6] = puVar1[6];
  puVar5[7] = puVar1[7];
  fn_82488DB8(puVar5 + 8,puVar2);
  puVar1 = lbl_83296188;
  lbl_83296188 = (unsigned int *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    fn_822314E8(puVar1 + 8);
    fn_8265CA20(puVar1);
  }
  if (puVar5[6] != 0) {
    if (lbl_8329618C == (unsigned int *)0x0) {
      iVar3 = 0;
      iVar4 = 0;
    }
    else {
      iVar3 = lbl_8329618C[1];
      iVar4 = lbl_8329618C[1];
    }
    if (iVar4 != 0) {
      if (lbl_832961C0 != (int (**)())0x0) {
        (*lbl_832961C0)(iVar4);
      }
      fn_82596630(iVar4);
    }
  }
  if (puVar5[6] != 0) {
    lbl_8329618C = puVar5;
  }
  fn_8251D290(0xffffffff832960a0,puVar5);
  if (puVar5[6] == 0) {
    return;
  }
  fn_8251D060();
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  XMemSet(auStack_38,0,8);
}

