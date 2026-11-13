extern int fn_83024968(unsigned int, int, int);
extern unsigned int fn_83025190(unsigned int);
extern unsigned int *lbl_832643F4[];
extern unsigned int *lbl_831BC774;

void fn_82FEC630(unsigned int param_1, int param_2, int param_3)
{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int iVar3;
  unsigned int *puVar4;

  puVar4 = lbl_832643F4[0];
  if (lbl_832643F4[0] != lbl_832643F4[1]) {
    do {
      uVar1 = *puVar4;
      iVar3 = fn_83025190(uVar1 + 0x80);
      if (iVar3 == param_1) {
        fn_83024968(uVar1 + 0x10, param_2, param_3);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != lbl_832643F4[1]);
  }
  for (puVar2 = lbl_831BC774; puVar2 != 0; puVar2 = (unsigned int *)*puVar2) {
    uVar1 = puVar2[2];
    iVar3 = fn_83025190(uVar1 + 0x70);
    if (iVar3 == param_1) {
      fn_83024968(uVar1, param_2, param_3);
    }
  }
}
