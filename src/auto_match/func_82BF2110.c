extern unsigned int *auStack_14f;
extern int fn_82F68958();
extern int fn_82F691F0();
extern unsigned int uStack_150;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;


unsigned __int64 fn_82BF2110(int param_1)

{
  __int64 lVar1;
  unsigned int uStack_260;
  unsigned int uStack_25c;
  unsigned char uStack_150;
  unsigned char auStack_14f [335];
  
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    uStack_260 = 0;
    lVar1 = fn_82F68958(*(int *)(param_1 + 0x20),0xffffffff821bab90,&uStack_260);
    if (lVar1 != 0) {
      uStack_25c = 0;
      uStack_150 = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_14f,0,0xff);
    }
  }
  return 0;
}

