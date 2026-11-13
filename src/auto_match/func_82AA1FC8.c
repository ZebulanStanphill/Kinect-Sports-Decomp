extern unsigned int *auStack_16f;
extern unsigned int *auStack_f0;
extern int sprintf();
extern int fn_82F691F0();
extern unsigned int uStack_1fc;


void fn_82AA1FC8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char uStack_1fc;
  unsigned char auStack_16f [127];
  unsigned char auStack_f0 [240];
  
  uVar1 = *(unsigned int *)(param_3 + 4);
  if (uVar1 == 0) {
    uStack_1fc = 0x62;
  }
  else if (uVar1 == 1) {
    uStack_1fc = 0x69;
  }
  else if (uVar1 < 3) {
    uStack_1fc = 99;
  }
  else if (uVar1 == 3) {
    uStack_1fc = 0x73;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_3 + 0xc);
  if (uVar2 == 0) {
    sprintf(auStack_f0,0xffffffff820d31d0,uStack_1fc);
  }
  else if (uVar2 == 1) {
    sprintf(auStack_f0,0xffffffff820d31c8,uStack_1fc);
  }
  else {
    sprintf(auStack_f0,0xffffffff820d31c0,uStack_1fc,(unsigned __int64)*(unsigned int *)(param_3 + 8),
                      *(unsigned int *)(param_3 + 8) + uVar2 + -1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_16f,0,0x7f);
}

