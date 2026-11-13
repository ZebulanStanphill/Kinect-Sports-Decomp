extern unsigned int *auStack_142e;
extern int fn_8229E090();
extern int fn_82F691F0();
extern unsigned int lbl_832659CD;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8228DEF8(int param_1,int param_2)

{
  unsigned char auStack_142e [5166];
  
  if (param_1 == 0) {
    *(unsigned int *)(param_2 + 0x188) = 1;
    if (*(int *)(param_2 + 0x178) != 0) {
      fn_8229E090(*(int *)(param_2 + 0x178),0,1);
      *(unsigned int *)(param_2 + 0x178) = 0;
    }
    if (lbl_832659CD != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_142e,0,0x1fe);
    }
  }
  else if ((param_1 == 1) && (*(int *)(param_2 + 0x178) != 0)) {
    fn_8229E090(*(int *)(param_2 + 0x178),0,1);
    *(unsigned int *)(param_2 + 0x178) = 0;
  }
  return;
}

