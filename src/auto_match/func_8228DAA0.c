extern unsigned int *auStack_142e;
extern int fn_8229E090();
extern int fn_82F691F0();
extern unsigned int lbl_832659CD;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8228DAA0(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned char auStack_142e [5166];
  
  if (*(int *)(param_1 + 0x178) != 0) {
    fn_8229E090(*(int *)(param_1 + 0x178),0,1);
    *(unsigned int *)(param_1 + 0x178) = 0;
  }
  *(unsigned int *)(param_1 + 0x188) = 0;
  if ((param_3 != 0) && (lbl_832659CD != '\0')) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_142e,0,0x1fe);
  }
  return;
}

