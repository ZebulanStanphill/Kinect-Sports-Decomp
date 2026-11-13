extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_83008488(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) goto LAB_830084d4;
  uVar2 = *(unsigned int *)(param_1 + 0x14) >> 0x19 & 0x1f;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      (**(int (***)())(*piVar1 + 0x10))(piVar1,0xffffffff831bc7f4);
      goto LAB_830084d4;
    }
    if (uVar2 != 3) goto LAB_830084d4;
  }
  fn_82FA5190(lbl_831BC768);
LAB_830084d4:
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned char *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x14) & 0xfeffffff;
  return;
}

