extern int fn_822315A0();
extern int fn_823B4030();
extern int fn_8265C9E0();
extern int fn_82F691F0();
extern unsigned int lbl_821AE598;
extern unsigned int uStack_50;


void fn_823B3EF0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uStack_50;
  unsigned int *puStack_4c;
  unsigned int *puStack_48;
  
  puStack_48 = (unsigned int *)fn_8265C9E0(0x9c);
  if (puStack_48 == (unsigned int *)0x0) {
    puStack_48 = (unsigned int *)0x0;
  }
  else {
    puStack_48[1] = 1;
    *puStack_48 = &lbl_821AE598;
    puStack_48[2] = 1;
    if (puStack_48 + 3 != (unsigned int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(puStack_48 + 3,0,0x80);
    }
  }
  uStack_50 = *param_2;
  puStack_4c = puStack_48 + 3;
  fn_823B4030(param_1,&uStack_50);
  if (puStack_48 != (unsigned int *)0x0) {
    fn_822315A0();
  }
  return;
}

