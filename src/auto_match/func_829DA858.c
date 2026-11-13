extern unsigned int *auStack_40;
extern int fn_829D3FE8();
extern int fn_829D5A08();
extern unsigned int lbl_83215058;
extern unsigned int lbl_83217148;
extern unsigned int lbl_832179FC;


unsigned __int64 fn_829DA858(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  char cVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_40 [16];
  
  if (lbl_83215058 == 0) {
    uVar1 = 0xffffffff8007048f;
  }
  else if ((lbl_83217148 == 0) || ((unsigned __int64)lbl_832179FC == 0)) {
    uVar1 = 0xffffffff83010005;
  }
  else if (param_2 == 0) {
    lVar3 = (unsigned __int64)lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(lVar3);
    auStack_40[0] = 0;
    uVar4 = (unsigned __int64)lbl_832179FC;
    cVar2 = fn_829D3FE8(param_1,uVar4,auStack_40);
    if (cVar2 == '\0') {
      RtlLeaveCriticalSection(lVar3);
      uVar1 = 0xffffffff83010008;
    }
    else {
      uVar1 = fn_829D5A08(1,uVar4,(unsigned __int64)auStack_40[0] * 0x150 + uVar4 + 0xc0,
                            (unsigned __int64)auStack_40[0],param_1,0,0,param_3);
      RtlLeaveCriticalSection(lVar3);
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

