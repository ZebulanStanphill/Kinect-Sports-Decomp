typedef unsigned char bool;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E57820();
extern int fn_82E59EC8();


unsigned __int64
fn_82EE01F8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
             )

{
  bool bVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (**(int (***)())(*param_1 + 0x44))(param_1,param_2,param_5);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if ((int)param_2 < 7) {
    if ((int)param_2 == 6) {
      uVar2 = fn_82E57620(param_3,param_4);
      return uVar2;
    }
    if ((param_2 & 0xffffffff) == 0) {
LAB_82ee02fc:
      if ((param_5 & 1) != 0) {
        return 0xffffffffc00d3a9a;
      }
      uVar2 = fn_82E577A0(param_3,param_4,(param_5 & 0xffffffff) >> 1);
      return uVar2;
    }
    if ((param_2 & 0xffffffff) == 1) {
LAB_82ee02e8:
      uVar2 = fn_82E57820(param_3,param_4,param_5);
      return uVar2;
    }
    if ((param_2 & 0xffffffff) < 3) {
LAB_82ee02c8:
      if ((param_5 & 0xffffffff) != 2) {
        if ((param_5 & 0xffffffff) != 4) {
          return 0xffffffffc00d3a9a;
        }
LAB_82ee02d8:
        uVar2 = fn_82E59EC8(param_3,param_4);
        return uVar2;
      }
      goto LAB_82ee02b8;
    }
    if ((param_2 & 0xffffffff) == 3) goto LAB_82ee02d8;
    bVar1 = (param_2 & 0xffffffff) == 5;
    if ((param_2 & 0xffffffff) < 5) {
LAB_82ee025c:
      uVar2 = fn_82E576A8(param_3,param_4);
      return uVar2;
    }
  }
  else {
    if ((param_2 & 0xffffffff) == 0x8000) goto LAB_82ee02fc;
    if ((param_2 & 0xffffffff) == 0x8001) goto LAB_82ee02e8;
    if ((param_2 & 0xffffffff) == 0x8002) goto LAB_82ee02c8;
    if ((param_2 & 0xffffffff) == 0x8003) goto LAB_82ee02d8;
    if ((param_2 & 0xffffffff) == 0x8004) goto LAB_82ee025c;
    bVar1 = (param_2 & 0xffffffff) == 0x8005;
  }
  if (!bVar1) {
    return 0xffffffffc00d3a9a;
  }
LAB_82ee02b8:
  uVar2 = fn_82E57738(param_3,param_4);
  return uVar2;
}

