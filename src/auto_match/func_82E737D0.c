extern unsigned int *auStack_160;
extern unsigned int *auStack_170;
extern int memset();


__int64 fn_82E737D0(int param_1,int *param_2)

{
  __int64 lVar1;
  unsigned int auStack_170 [4];
  unsigned char auStack_160 [336];
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    auStack_170[0] = 0;
    lVar1 = (**(int (***)())(*param_2 + 0x10))
                      (param_2,*(unsigned short *)(param_1 + 0x20),*(unsigned char *)(param_1 + 0x22),
                       *(unsigned int *)(param_1 + 0x34),auStack_170);
    if (-1 < lVar1) {
      if (*(unsigned int *)(param_1 + 0x38) <= auStack_170[0]) {
                    /* WARNING: Subroutine does not return */
        memset(auStack_160,0,0x125);
      }
      lVar1 = -0x3ff2c94b;
    }
  }
  return lVar1;
}

