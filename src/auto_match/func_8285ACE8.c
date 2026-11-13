extern int fn_82F691F0();
extern int iRam83211334;
extern int iRam83211338;


unsigned __int64 fn_8285ACE8(int param_1,int param_2,int param_3)

{
  iRam83211338 = param_1;
  iRam83211334 = param_3;
  if (*(int *)(*(int *)(param_2 + 0x68) + *(int *)(param_3 + 8)) == param_1) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(unsigned int *)(*(int *)(param_2 + 100) + param_3 + 0xac),0,
               *(unsigned int *)(param_2 + 0x5c));
}

