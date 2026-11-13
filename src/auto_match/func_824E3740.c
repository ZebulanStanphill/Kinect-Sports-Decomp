extern unsigned int *puRam83276750;
extern int fn_822315A0();
extern int fn_8265C9E0();
extern unsigned int lbl_82196E94;


void fn_824E3740(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;

  if (puRam83276750 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)fn_8265C9E0(0x20);
    if (puVar1 == (unsigned int *)0x0) {
      puRam83276750 = (unsigned int *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar2 = (unsigned int *)fn_8265C9E0(0x10);
      if (puVar2 == (unsigned int *)0x0) {
        puVar2 = (unsigned int *)0x0;
      }
      else {
        puVar2[3] = 0;
        puVar2[1] = 1;
        *puVar2 = &lbl_82196E94;
        puVar2[2] = 1;
      }
      if (puVar1[7] != 0) {
        fn_822315A0();
      }
      puVar1[7] = puVar2;
      puVar1[6] = 0;
      puRam83276750 = puVar1;
    }
  }
  return;
}
