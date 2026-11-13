extern unsigned int *auStack_30;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82F69290();
extern int fn_82F90550();


void fn_82F8FB10(void)

{
  unsigned char auStack_60 [48];
  unsigned char auStack_30 [32];
  
  fn_82230110(auStack_30,0xffffffff82196fd4);
  fn_82F90550(auStack_60,auStack_30);
                    /* WARNING: Subroutine does not return */
  fn_82F69290(auStack_60,0xffffffff821dd9dc);
}

