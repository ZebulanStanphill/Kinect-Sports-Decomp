extern void fn_82FA5190(unsigned int, unsigned int);
extern int fn_830133B8();
extern unsigned int lbl_831BC768;


void fn_83030A78(int param_1)

{
  unsigned int *puVar1;
  
  if (*(unsigned int *)(param_1 + 0xd4) > 0) {
    for (puVar1 = *(unsigned int **)(param_1 + 0xc4); puVar1 != (unsigned int *)0x0;
        puVar1 = (unsigned int *)*puVar1) {
      if (puVar1[2] != 0) {
        puVar1[3] = puVar1[2];
        fn_82FA5190(lbl_831BC768, puVar1[2]);
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
      }
    }
    fn_830133B8(param_1 + 0xc4);
  }
  return;
}

