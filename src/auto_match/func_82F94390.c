extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_58;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_8265C9E0();
extern int fn_82CE0690();
extern int fn_82F6F870();
extern int fn_82F8EF78();
extern int fn_82F8F000();
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F91548();
extern int fn_82F921A0();
extern int fn_82F93A00();
extern int fn_82F94060();
extern int fn_82F94210();
extern int fn_82F94750();
extern int fn_82F94790();
extern int fn_82F95200();
extern int fn_82F952C0();
extern int fn_82F95328();
extern int fn_82F95360();
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_9c;


unsigned int fn_82F94390(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  char cVar5;
  int iVar4;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned char auStack_b0 [8];
  unsigned char auStack_a8 [12];
  unsigned int uStack_9c;
  unsigned char auStack_98 [8];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [40];
  unsigned char auStack_58 [24];
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [12];
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  uVar1 = lbl_831BB8F0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack_2c = fn_82CE0690(param_1,param_2,&uStack_9c);
  if (uStack_2c == 0) {
    fn_82F90628(auStack_a8,0xffffffff832641cc);
    fn_82F95200(auStack_b0,0xffffffff832641f0,auStack_98);
    uVar3 = fn_82F94750(auStack_58,0xffffffff832641f0);
    cVar5 = fn_82F921A0(auStack_b0,uVar3);
    if (cVar5 == '\0') {
      iVar4 = fn_82F952C0(auStack_b0);
      fn_82F91548(uStack0000002c,*(unsigned int *)(iVar4 + 4));
    }
    else {
      iVar4 = fn_8265C9E0(0x40);
      if (iVar4 == 0) {
        uStack_28 = 0;
      }
      else {
        uStack_28 = fn_82F94060(iVar4);
      }
      fn_82F8EF78(auStack_80,uStack_28);
      iVar4 = fn_82F93A00(auStack_80);
      uVar2 = uStack00000024;
      if (iVar4 == 0) {
        fn_82F8F000(auStack_80);
        fn_82F90680(auStack_a8);
        fn_82F6F870(uVar1);
        return 0x8007000e;
      }
      uVar3 = fn_82F93A00(auStack_80);
      fn_82F94210(uVar3,uStack_9c,uVar2);
      fn_82F93A00(auStack_80);
      uVar3 = fn_82F95360(auStack_40,auStack_98,auStack_38);
      fn_82F94790(auStack_90,0xffffffff832641f0,uVar3);
      fn_82F95328(uStack0000002c,auStack_80);
      fn_82F8F000(auStack_80);
    }
    fn_82F90680(auStack_a8);
    fn_82F6F870(uVar1);
    uStack_2c = 0;
  }
  else {
    if (0 < (int)uStack_2c) {
      uStack_2c = uStack_2c & 0xffff | 0x80070000;
    }
    fn_82F6F870(uVar1);
  }
  return uStack_2c;
}

