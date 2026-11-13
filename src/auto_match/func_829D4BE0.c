extern int fn_82A1E810();
extern unsigned int lbl_832179FC;


void fn_829D4BE0(void)

{
  int iVar1;
  
  if (lbl_832179FC != 0) {
    iVar1 = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(iVar1);
    *(unsigned char *)(lbl_832179FC + 0x24976) = 1;
    fn_82A1E810(*(unsigned int *)(lbl_832179FC + 0x8f4b8));
    RtlLeaveCriticalSection(iVar1);
  }
  return;
}

