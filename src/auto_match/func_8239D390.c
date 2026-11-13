extern unsigned int *auStack_2f;
extern int fn_82F691F0();


void fn_8239D390(int param_1,unsigned __int64 param_2)

{
  unsigned char auStack_2f [23];
  
  if ((((unsigned __int64)*(unsigned int *)(param_1 + 0x25c) < (param_2 & 0xffffffff)) &&
      (param_2 == ((param_2 & 0xffffffff) / 10) * 10)) && ((param_2 & 0xffffffff) < 0x12d)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_2f,0,0xf);
  }
  return;
}

