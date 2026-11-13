extern int fn_82FEDB28();
extern int fn_82FEDDA0();
extern unsigned int lbl_831BC794;
extern unsigned int lbl_831BC798;
extern unsigned int lbl_831BC79C;
extern unsigned int lbl_831BC7A8;
extern unsigned int lbl_832643DC;


void fn_82FEE718(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  
  puVar1 = lbl_831BC794;
  puVar3 = (unsigned int *)0x0;
  while (puVar2 = puVar1, puVar2 != (unsigned int *)0x0) {
    if ((puVar2[5] == 0) &&
       (((puVar2[2] == 0 || (puVar2[2] == 1)) && (iVar5 = fn_82FEDB28(), iVar5 != 1)))) {
      puVar1 = (unsigned int *)*puVar2;
      puVar4 = puVar1;
      if (puVar2 != lbl_831BC794) {
        *puVar3 = puVar1;
        puVar4 = lbl_831BC794;
      }
      lbl_831BC794 = puVar4;
      if (puVar2 == lbl_831BC798) {
        lbl_831BC798 = puVar3;
      }
      *puVar2 = lbl_831BC79C;
      lbl_831BC7A8 = lbl_831BC7A8 + -1;
      lbl_831BC79C = puVar2;
    }
    else {
      puVar1 = (unsigned int *)*puVar2;
      puVar3 = puVar2;
    }
  }
  fn_82FEDDA0(lbl_832643DC);
  return;
}

