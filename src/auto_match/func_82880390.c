extern unsigned int *auStack_3f;
extern int fn_82F691F0();


void fn_82880390(unsigned int *param_1)

{
  unsigned char auStack_3f [39];
  
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_3f,0,0x23);
}

