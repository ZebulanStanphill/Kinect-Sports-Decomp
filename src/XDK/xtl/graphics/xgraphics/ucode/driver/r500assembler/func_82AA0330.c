typedef unsigned char bool;
#define true 1
extern int fn_82A1E108();
extern int fn_82AB46B0();
extern int iRam83223528;
extern unsigned int uRam8322352c;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82AA0330(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char in_RESERVE;
  unsigned char in_cr0;
  
  do {
    uVar2 = (unsigned __int64)uRam8322352c;
    if (uRam8322352c != 0) {
      if (in_RESERVE != '\0') {
        uRam8322352c = storeWordConditionalIndexed(uVar2,0,0xffffffff8322352c);
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uRam8322352c = storeWordConditionalIndexed(1,0,0xffffffff8322352c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
LAB_82aa03c8:
  if ((int)uVar2 == 1) {
    fn_82A1E108(1);
    do {
      uVar2 = (unsigned __int64)uRam8322352c;
      if (uRam8322352c != 0) {
        if (in_RESERVE != '\0') {
          uRam8322352c = storeWordConditionalIndexed(uVar2,0,0xffffffff8322352c);
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uRam8322352c = storeWordConditionalIndexed(1,0,0xffffffff8322352c);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    goto LAB_82aa03c8;
  }
  if (iRam83223528 == 0) {
    RtlInitializeCriticalSection(0xffffffff83223504);
  }
  iRam83223528 = iRam83223528 + 1;
  do {
    if (in_RESERVE != '\0') {
      uRam8322352c = storeWordConditionalIndexed(0,0,0xffffffff8322352c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  RtlEnterCriticalSection(0xffffffff83223504);
  uVar1 = fn_82AB46B0(param_1,param_2);
  RtlLeaveCriticalSection(0xffffffff83223504);
  do {
    uVar2 = (unsigned __int64)uRam8322352c;
    if (uRam8322352c != 0) {
      if (in_RESERVE != '\0') {
        uRam8322352c = storeWordConditionalIndexed(uVar2,0,0xffffffff8322352c);
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uRam8322352c = storeWordConditionalIndexed(1,0,0xffffffff8322352c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  do {
    if ((int)uVar2 != 1) {
      iRam83223528 = iRam83223528 + -1;
      do {
        if (in_RESERVE != '\0') {
          uRam8322352c = storeWordConditionalIndexed(0,0,0xffffffff8322352c);
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      return uVar1;
    }
    fn_82A1E108(1);
    do {
      uVar2 = (unsigned __int64)uRam8322352c;
      if (uRam8322352c != 0) {
        if (in_RESERVE != '\0') {
          uRam8322352c = storeWordConditionalIndexed(uVar2,0,0xffffffff8322352c);
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uRam8322352c = storeWordConditionalIndexed(1,0,0xffffffff8322352c);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  } while( true );
}

