extern unsigned int *auStack_70;
extern int fn_829D0440();
extern int memset();
extern int ObCreateObject();


unsigned __int64 fn_829D14A0(void)

{
  int iVar1;
  unsigned int auStack_70 [28];
  
  RtlEnterCriticalSection(0xffffffff8315c428);
  auStack_70[0] = 0;
  iVar1 = ObCreateObject(0xffffffff8315c408,0,0x7c,auStack_70);
  if (iVar1 < 0) {
    fn_829D0440(auStack_70[0],1);
    ObDereferenceObject(auStack_70[0]);
    RtlLeaveCriticalSection(0xffffffff8315c428);
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  memset(auStack_70[0],0,0x7c);
}

