extern unsigned int lbl_8323B46C;


void fn_82CEF858(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffe2) {
    if ((uVar1 == 0xffffffe1) || (uVar1 == 0xffffffc1)) {
LAB_82cef8b8:
      RtlEnterCriticalSection(lbl_8323B46C);
      uVar1 = 0xffffffe1;
      if (param_2 != 1) {
        uVar1 = 0xffffffc1;
      }
      *param_1 = uVar1;
      goto LAB_82cef8dc;
    }
    if (uVar1 == 0xffffffd1) {
      return;
    }
  }
  else if (uVar1 == 0xfffffff1) goto LAB_82cef8b8;
  RtlEnterCriticalSection(lbl_8323B46C);
LAB_82cef8dc:
  *(short *)(param_1 + 1) = *(short *)(param_1 + 1) + 1;
  *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) << 1;
  RtlLeaveCriticalSection(lbl_8323B46C);
  return;
}

