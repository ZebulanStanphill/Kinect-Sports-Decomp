extern unsigned int *auStack_290;
extern int fn_82F691F0();


unsigned __int64 fn_82E5E7D8(int param_1,unsigned int *param_2)

{
  unsigned char auStack_290 [656];
  
  if ((param_1 != 0) && (param_2 != (unsigned int *)0x0)) {
    *param_2 = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_290,0,0x200);
  }
  return 0xffffffff80070057;
}

