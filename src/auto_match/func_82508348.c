extern unsigned int *auStack_144e;
extern int fn_8265C9E0();
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82508348(void)

{
  unsigned int *puVar1;
  unsigned int in_r6;
  unsigned int in_r7;
  unsigned int in_r8;
  unsigned char auStack_144e [5198];
  
  puVar1 = (unsigned int *)fn_8265C9E0(0xc);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *puVar1 = in_r6;
  puVar1[1] = in_r7;
  puVar1[2] = in_r8;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_144e,0,0x1fe);
}

