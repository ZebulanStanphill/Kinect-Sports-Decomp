extern unsigned int *auStack_ac;
extern unsigned int *auStack_e0;
extern int fn_82230300();
extern int fn_82359C18();
extern int fn_824E75B8();
extern int fn_82F691F0();
extern unsigned int uStack_b0;


void fn_824E6FB0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5)

{
  int iVar1;
  int *piVar2;
  unsigned char auStack_e0 [48];
  unsigned int uStack_b0;
  unsigned char auStack_ac [172];
  
  iVar1 = *(int *)(param_1 + 0x2f4);
  piVar2 = (int *)fn_824E75B8(auStack_e0,param_1 + 0x2f0,param_2);
  if (((*piVar2 != iVar1) && (-1 < param_4)) && (param_4 < 2)) {
    uStack_b0 = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_ac,0,100);
  }
  fn_82230300(param_2,1,0);
  fn_82359C18(param_5);
  return;
}

