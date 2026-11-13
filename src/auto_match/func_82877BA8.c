extern unsigned int *auStack_7c;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82868378();
extern int fn_8286DA10();
extern int fn_82878C60();
extern int fn_82F691F0();
extern int fn_82FE6BC0();
extern unsigned int uStack_80;


unsigned __int64 fn_82877BA8(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_a0 [32];
  unsigned int uStack_80;
  unsigned char auStack_7c [124];
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 4) != '\0') {
      uStack_80 = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_7c,0,0x1c);
    }
    uVar1 = fn_82878C60(param_2);
    uVar1 = fn_82FE6BC0(uVar1,0,0);
    *(unsigned char *)(param_1 + 0xc) = 0;
    if ((int)uVar1 != 1) {
      fn_82230110(auStack_a0,0xffffffff82022764);
      uVar2 = fn_8223B688(&uStack_80,auStack_a0);
      uVar3 = fn_82868378();
      fn_8286DA10(uVar3,uVar2,uVar1);
      fn_82230300(auStack_a0,1,0);
      return 0xffffffffa0340000;
    }
  }
  return 0x20340000;
}

