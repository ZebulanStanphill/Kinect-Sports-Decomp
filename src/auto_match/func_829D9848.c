extern unsigned int *auStack_1b0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_208;
extern int fn_829D6D18();
extern int fn_82A1E658();
extern int fn_82F691F0();
extern int fn_831421DC();
extern int fn_831421FC();
extern int fn_8314220C();
extern unsigned int iStack_20c;
extern unsigned int uStack_210;


unsigned __int64 fn_829D9848(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uStack_210;
  int iStack_20c;
  unsigned int auStack_208 [2];
  unsigned int auStack_200 [20];
  unsigned char auStack_1b0 [432];
  
  *(unsigned int *)(param_1 + 0x1c) = 0;
  uVar1 = fn_829D6D18();
  if (-1 < (int)uVar1) {
    RtlEnterCriticalSection(param_1);
    *(unsigned int *)(param_1 + 0x20) = 0x100;
    iVar2 = fn_8314220C(0xffffffffffffffff,0,1,0,&uStack_210);
    if (iVar2 == 0) {
      while ((iVar2 = fn_831421DC(uStack_210,2,auStack_200,0x50,&iStack_20c,0), iVar2 == 0 &&
             (iStack_20c != 0))) {
        iVar2 = fn_831421FC(auStack_200[0],auStack_208);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_1b0,0,0x188);
        }
        fn_82A1E658(auStack_208[0]);
      }
      fn_82A1E658(uStack_210);
    }
    RtlLeaveCriticalSection(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

