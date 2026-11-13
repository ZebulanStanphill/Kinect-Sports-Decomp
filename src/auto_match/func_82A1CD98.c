extern unsigned int *auStack_70;
extern unsigned int lbl_832192EC;
extern unsigned int lbl_832192F0;
extern unsigned int lbl_832192F4;


void fn_82A1CD98(void)

{
  unsigned char auStack_70 [16];
  char acStack_60 [72];
  
  if (lbl_832192EC != 0) {
    lbl_832192EC = 0;
    _snprintf(acStack_60,0x40,"\\??\\cache:",0);
    RtlInitAnsiString(auStack_70,acStack_60);
    ObDeleteSymbolicLink(auStack_70);
  }
  if (lbl_832192F0 != 0) {
    lbl_832192F0 = 0;
    _snprintf(acStack_60,0x40,"\\??\\cache%u:",0);
    RtlInitAnsiString(auStack_70,acStack_60);
    ObDeleteSymbolicLink(auStack_70);
  }
  if (lbl_832192F4 != 0) {
    lbl_832192F4 = 0;
    _snprintf(acStack_60,0x40,"\\??\\cache%u:",1);
    RtlInitAnsiString(auStack_70,acStack_60);
    ObDeleteSymbolicLink(auStack_70);
  }
  return;
}

