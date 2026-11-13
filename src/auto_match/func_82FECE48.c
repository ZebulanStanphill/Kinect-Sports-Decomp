extern unsigned int lbl_831BC794;
extern unsigned int lbl_831BC798;
extern unsigned int lbl_831BC79C;
extern unsigned int lbl_831BC7A8;


void fn_82FECE48(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  puVar3 = (unsigned int *)0x0;
  puVar5 = lbl_831BC794;
  puVar4 = lbl_831BC794;
  if (lbl_831BC794 != (unsigned int *)0x0) {
    do {
      if (puVar5[1] == param_1) {
        puVar1 = (unsigned int *)*puVar5;
        puVar2 = puVar1;
        if (puVar5 != puVar4) {
          *puVar3 = puVar1;
          puVar2 = lbl_831BC794;
        }
        lbl_831BC794 = puVar2;
        if (puVar5 == lbl_831BC798) {
          lbl_831BC798 = puVar3;
        }
        *puVar5 = lbl_831BC79C;
        lbl_831BC7A8 = lbl_831BC7A8 + -1;
        puVar4 = lbl_831BC794;
        lbl_831BC79C = puVar5;
      }
      else {
        puVar1 = (unsigned int *)*puVar5;
        puVar3 = puVar5;
      }
      puVar5 = puVar1;
    } while (puVar1 != (unsigned int *)0x0);
    return;
  }
  return;
}

