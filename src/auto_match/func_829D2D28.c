#define TBLr 0
extern int fn_829D2450();
extern int fn_82A1DDC0();
extern unsigned int lbl_83010001;
extern unsigned int lbl_83010002;
extern unsigned int lbl_8301000B;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215058;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_83215A54;
extern unsigned int lbl_83215A58;
extern unsigned int lbl_83215A60;
extern unsigned int lbl_83215A70;
extern unsigned int lbl_83215A90;
extern unsigned int lbl_83216540;
extern unsigned int lbl_832172E8;


unsigned char * fn_829D2D28(unsigned int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 *plVar3;
  unsigned char *apuStack_40 [2];
  __int64 alStack_38 [7];
  
  if ((param_2 & 0xffffffff) == 0) {
    apuStack_40[0] = (unsigned char *)0x80070057;
  }
  else {
    apuStack_40[0] = (unsigned char *)0x0;
    if (lbl_83215A40 == 0) {
      apuStack_40[0] = &lbl_83010002;
    }
    else if (lbl_83215058 == 0) {
      apuStack_40[0] = (unsigned char *)0x8007048f;
    }
    else {
      if (((lbl_83215A58 & 1) != 1) && ((param_1 == 0xffffffff || (8000 < param_1)))) {
        if ((lbl_83215000 & 0x8000000) == 0) {
          param_1 = 8000;
        }
        else {
          param_1 = 60000;
        }
      }
      plVar3 = (__int64 *)0x0;
      if (param_1 != 0xffffffff) {
        plVar3 = alStack_38;
        alStack_38[0] = (unsigned __int64)param_1 * -10000;
      }
      iVar2 = KeWaitForSingleObject(0xffffffff83215a44,3,0,0,plVar3);
      if (iVar2 == 0x102) {
        apuStack_40[0] = (unsigned char *)0x8000000a;
      }
      else {
        RtlEnterCriticalSection(0xffffffff8315c454);
        iVar2 = lbl_83215A60 * 0xae0;
        if (*(int *)(&lbl_83215A70 + iVar2) == 1) {
          fn_82A1DDC0(param_2,&lbl_83215A90 + iVar2,0xab0);
          *(unsigned int *)(&lbl_83215A70 + iVar2) = 0;
          uVar1 = TBLr;
          lbl_832172E8 = (unsigned int)
                         ((((uVar1 & 0xffffffff) - (unsigned __int64)*(unsigned int *)(&lbl_83216540 + iVar2) &
                           0xffffffff) * 1000000) / 50000000);
        }
        else if (lbl_83215058 == 0) {
          apuStack_40[0] = (unsigned char *)0x8007048f;
        }
        else if (*(int *)(&lbl_83215A70 + iVar2) == 2) {
          apuStack_40[0] = &lbl_8301000B;
        }
        else if ((lbl_83215A58 & 1) == 0) {
          apuStack_40[0] = &lbl_83010001;
        }
        else {
          apuStack_40[0] = (unsigned char *)0x8007048f;
        }
        if (lbl_83215A54 != 0) {
          KeResetEvent();
        }
        KeResetEvent(0xffffffff83215a44);
        RtlLeaveCriticalSection(0xffffffff8315c454);
      }
    }
    fn_829D2450(param_2,apuStack_40);
  }
  return apuStack_40[0];
}

