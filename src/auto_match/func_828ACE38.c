#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230180();
extern int fn_8265C9E0();
extern int fn_82884B20();
extern int fn_82886518();
extern int fn_8288A398();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_8289D8D8();
extern int fn_8289DAC8();
extern int fn_8289F350();
extern int fn_8289F3A8();
extern int fn_828A0AA0();
extern int fn_828A1C08();
extern int fn_828A1C10();
extern int fn_828A3410();
extern int fn_828ACDB8();
extern int fn_828AD7A0();
extern int fn_828AF610();
extern int fn_828B1760();
extern int fn_828BE158();
extern int fn_828D15E0();
extern int fn_82CE0668();
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


unsigned __int64 fn_828ACE38(int param_1,char param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar8;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int *piVar9;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [128];
  
  uStack_b0 = 0;
  if (param_2 == '\0') {
    uVar1 = *(unsigned int *)(param_1 + 0x8c);
    uVar6 = fn_8265C9E0(0xd0);
    if ((uVar6 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      fn_82230110(auStack_a0,0xffffffff820245ac);
      uVar4 = fn_828AF610(uVar6,param_1,1,(unsigned __int64)uVar1 + 0x14,0xffffffffffffffff,
                              0xffffffffffffffff,(unsigned __int64)uVar1 + 0x1c);
      fn_82230180(auStack_a0);
    }
    fn_8289DAC8(uVar4,1);
    fn_82CE0668(&uStack_b0,8);
    uVar6 = fn_8265C9E0(200);
    if ((uVar6 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar2 = *(unsigned int *)(param_1 + 0x28);
      iVar8 = fn_8288A398();
      uVar3 = *(unsigned int *)(iVar8 + 0x38);
      fn_828AD7A0(auStack_80);
      fn_828A1C10(param_1);
      fn_828A1C08(param_1);
      uVar5 = fn_828D15E0(uVar6,uVar3,*(unsigned int *)(param_1 + 0x7c),
                              *(unsigned int *)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x84),
                              CONCAT44(uStack_b0,uStack_ac),uVar2,uVar2);
      fn_82230180(auStack_80);
    }
    *(unsigned int *)(param_1 + 0x84) = 0;
    fn_82886518(uVar5,1000,0xffffffffffffffff);
    uVar4 = fn_82897BD0(uVar4);
    fn_828BE158(param_1,uVar5,uVar4,0);
    fn_828ACDB8(param_1,2);
    fn_828B1760(param_1,CONCAT44(uStack_b0,uStack_ac));
    *(unsigned int *)(param_1 + 0x80) = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = fn_82884B20(0x1000);
    uVar5 = fn_828A0AA0(param_1);
    iVar8 = fn_8289F350(param_1,uVar5);
    if (iVar8 == 0) {
      fn_828A3410(&uStack_b0,param_1);
      if (((((unsigned __int64)(uStack_b0) >> 0) & 0xFF) != '\0') && (iVar8 = fn_8289F3A8(param_1,uStack_ac), iVar8 == 0)) {
        uVar6 = fn_8265C9E0(0x68);
        if ((uVar6 & 0xffffffff) != 0) {
          uVar7 = fn_828AD7A0(auStack_a0);
          fn_8289D8D8(uVar6,param_1,uVar4,uStack_ac,uVar5,*(unsigned int *)(param_1 + 0x7c),
                            uVar7);
          fn_82230180(auStack_a0);
        }
        uVar4 = fn_8289D8D0(param_1);
        fn_8289DAC8(uVar4,1);
        piVar9 = (int *)fn_8289D8D0(param_1);
        (**(int (***)())(*piVar9 + 0x14))();
        fn_828ACDB8(param_1,4);
        *(unsigned int *)(param_1 + 0x7c) = 0;
        *(unsigned int *)(param_1 + 0x80) = 0;
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

