extern int fn_82F691F0();
extern int fn_82F6A544();


void fn_82E6C088(unsigned __int64 param_1,int *param_2)

{
  fn_82F6A544();
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(unsigned int *)(*param_2 + 0x90),0,
               ((__int64)*(short *)(*param_2 + 0x76) & 0x3fffffffU) << 2);
}

