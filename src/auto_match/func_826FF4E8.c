extern unsigned int *auStack_4f;
extern int fn_82F691F0();


void fn_826FF4E8(unsigned __int64 param_1,int param_2)

{
  unsigned char auStack_4f [79];
  
  *(int *)(param_2 + 0xa04) = *(int *)(param_2 + 0xa04) + 1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_4f,0,0x2f);
}

