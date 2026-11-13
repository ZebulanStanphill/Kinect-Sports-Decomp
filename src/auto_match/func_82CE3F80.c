extern unsigned int lbl_8323A960;
extern unsigned int lbl_8323A964;


void fn_82CE3F80(void)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar1 = lbl_8323A960;
  iVar2 = KeTlsGetValue(lbl_8323A964);
  if (iVar2 == 0x23df4554) {
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  else {
    RtlEnterCriticalSection(iVar1 + 0x18);
    *(unsigned int *)(iVar1 + 0xc) = 1;
    KeTlsSetValue(lbl_8323A964,0x23df4554);
  }
  return;
}

