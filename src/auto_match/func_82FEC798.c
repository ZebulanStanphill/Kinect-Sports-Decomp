extern unsigned int lbl_832643D4;
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;


void fn_82FEC798(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = lbl_832643F4;
  if (lbl_832643F4 == lbl_832643F8) {
    *(unsigned int *)(lbl_832643D4 + 0x70) = 2;
    return;
  }
  do {
    piVar2 = piVar1 + 1;
    *(unsigned int *)(*piVar1 + 0x84) = 2;
    piVar1 = piVar2;
  } while (piVar2 != lbl_832643F8);
  *(unsigned int *)(lbl_832643D4 + 0x70) = 2;
  return;
}

