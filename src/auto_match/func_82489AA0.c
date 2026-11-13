extern unsigned int *auStack_12f;
extern unsigned int *auStack_180;
extern unsigned int *auStack_af;
extern int fn_82489D60();
extern int fn_82A1E658();
extern int fn_82F691F0();
extern unsigned int uStack_130;
extern unsigned int uStack_b0;


void fn_82489AA0(int param_1,int param_2)

{
  int iVar1;
  unsigned int auStack_180 [20];
  unsigned char uStack_130;
  unsigned char auStack_12f [127];
  unsigned char uStack_b0;
  unsigned char auStack_af [175];
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != iVar1) {
    if (((0 < iVar1) && (iVar1 < 3)) && (*(int *)(param_1 + 0x18) != -1)) {
      fn_82A1E658();
      *(unsigned int *)(param_1 + 0x18) = 0xffffffff;
    }
    *(int *)(param_1 + 4) = param_2;
    if (*(int *)(param_1 + 0x24) == 0) {
      if (param_2 == 1) {
        uStack_b0 = 0;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_af,0,0x7f);
      }
      if (param_2 == 2) {
        uStack_130 = 0;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_12f,0,0x7f);
      }
    }
    else {
      auStack_180[0] = *(unsigned int *)(param_1 + 0x14);
      fn_82489D60((unsigned __int64)*(unsigned int *)(param_1 + 0x20) + 0x20,auStack_180);
      *(unsigned int *)(param_1 + 0x14) = 0xffffffff;
      *(unsigned int *)(param_1 + 4) = 0;
      *(unsigned int *)(param_1 + 0x24) = 0;
    }
  }
  return;
}

