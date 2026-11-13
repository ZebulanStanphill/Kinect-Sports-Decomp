extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern int fn_82F691F0();


unsigned __int64 fn_82E735F0(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned int auStack_150 [4];
  unsigned char auStack_140 [296];
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    auStack_150[0] = 0;
    uVar1 = (**(int (***)())(*param_2 + 0x10))
                      (param_2,*(unsigned short *)(param_1 + 0x20),*(unsigned char *)(param_1 + 0x22),
                       *(unsigned int *)(param_1 + 0x34),auStack_150);
    if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_140,0,0x125);
    }
  }
  return uVar1;
}

