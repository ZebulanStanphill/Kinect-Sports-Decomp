extern int fn_8263C620();
extern int fn_8263C7D8();
extern int fn_829D08F0();
extern int fn_82A1DDC0();
extern int iRam8321716c;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_83217174;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_829D0A28(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  RtlEnterCriticalSection(0xffffffff8315c428);
  if (param_2 != 0) {
    if ((lbl_83217174 == 1) && ((lbl_83215A40 != 0 || ((lbl_83215000 & 0x80000000) == 0)))) {
      *(unsigned __int64 *)(iRam8321716c + 8) = *(unsigned __int64 *)(param_1 + 2);
      *(unsigned int *)(iRam8321716c + 0x10) = *param_1;
      *(unsigned int *)(iRam8321716c + 0x18) = *(unsigned int *)(param_2 + 0x18);
      *(unsigned int *)(iRam8321716c + 0x14) = *(unsigned int *)(param_2 + 0x14);
      *(unsigned int *)(iRam8321716c + 0x20) = *(unsigned int *)(param_2 + 0x20);
      fn_8263C7D8(param_2 + 0x30,0,&uStack_50,0,0x10);
      lVar2 = 0xf0;
      uVar1 = (unsigned __int64)uStack_4c;
      uVar3 = (unsigned __int64)*(unsigned int *)(iRam8321716c + 100);
      do {
        fn_82A1DDC0(uVar3,uVar1,0x280);
        lVar2 = lVar2 + -1;
        uVar3 = uVar3 + 0x300;
        uVar1 = ((unsigned __int64)uStack_50 & 0xfffffffe) + uVar1;
      } while (lVar2 != 0);
      fn_8263C620(param_2 + 0x30,0);
    }
    *(unsigned __int64 *)(param_2 + 8) = *(unsigned __int64 *)(param_1 + 2);
    *(unsigned int *)(param_2 + 0x10) = *param_1;
    fn_829D08F0(0,param_2,0);
    sync(0);
  }
  RtlLeaveCriticalSection(0xffffffff8315c428);
  return;
}

