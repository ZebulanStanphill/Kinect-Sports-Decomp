extern unsigned int lbl_82168368;
extern unsigned int lbl_83150010;
extern unsigned int lbl_83153538;


unsigned __int64 _cinit(void)

{
  int (**pcVar1)();
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  
  if (lbl_82168368 != (unsigned char *)0x0) {
    (*(int (**)())lbl_82168368)();
  }
  puVar3 = &lbl_83153538;
  uVar2 = 0;
  do {
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((int (**)())*puVar3 != (int (**)())0x0) {
      uVar2 = (*(int (**)())*puVar3)();
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 < (unsigned int *)0x83153544);
  if ((int)uVar2 == 0) {
    puVar3 = &lbl_83150010;
    do {
      pcVar1 = (int (**)())*puVar3;
      if ((pcVar1 != (int (**)())0x0) && (pcVar1 != (int (**)())0xffffffff)) {
        (*pcVar1)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < (unsigned int *)0x83153534);
    uVar2 = 0;
  }
  return uVar2;
}

