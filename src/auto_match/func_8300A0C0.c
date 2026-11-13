extern int fn_83009630();
extern unsigned int lbl_832645AC;


extern char lbl_832645B4[];
void fn_8300A0C0(int param_1)

{
  RtlEnterCriticalSection(lbl_832645B4);
  if ((*(unsigned char *)(param_1 + 0xa0) & 0x10) != 0) {
    lbl_832645AC = 0;
    *(unsigned char *)(param_1 + 0xa0) = *(unsigned char *)(param_1 + 0xa0) & 0xe7;
    fn_83009630(param_1);
  }
  RtlLeaveCriticalSection(lbl_832645B4);
  return;
}

