extern unsigned int **ppuRam83297954;
extern unsigned int *puRam83297958;
extern unsigned int lbl_821C250C;
extern unsigned int uRam8329795c;
extern unsigned int uRam83297960;
extern unsigned int uRam83297964;


void fn_8313F0B0(void)

{
  unsigned int *puVar1;

  while (puRam83297958 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)puRam83297958[1];
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)puRam83297958[2];
      *puRam83297958 = 0;
      puRam83297958[1] = 0;
      puRam83297958[2] = 0;
      puRam83297958 = puVar1;
    }
    else {
      puRam83297958[1] = puVar1[2];
      puVar1[2] = puRam83297958;
      puRam83297958 = puVar1;
    }
  }
  puRam83297958 = (unsigned int *)0x0;
  uRam83297964 = 0;
  ppuRam83297954 = &lbl_821C250C;
  uRam83297960 = 0x83297958;
  uRam8329795c = 0x83297958;
  return;
}
