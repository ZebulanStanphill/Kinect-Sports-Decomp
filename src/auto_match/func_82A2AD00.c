extern unsigned int *__imp_KeDebugMonitorData;


int fn_82A2AD00(void)

{
  int uVar1;
  
  if (*__imp_KeDebugMonitorData != 0) {
                    /* WARNING: Could not recover jumptable at 0x82a2ad24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(*__imp_KeDebugMonitorData + 0x18))(0x44,0);
    return uVar1;
  }
  return 0;
}

