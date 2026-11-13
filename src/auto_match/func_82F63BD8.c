extern unsigned int *auStack_aac;
extern int fn_82F691F0();
extern int fn_82F70520();


void fn_82F63BD8(int param_1)

{
  unsigned char auStack_aac [2732];
  
  if (param_1 != -1) {
    fn_82F70520();
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_aac,0,0x4c);
}

