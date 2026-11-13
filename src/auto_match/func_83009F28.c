extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832645AC;
extern unsigned int uStack_1c;


void fn_83009F28(void)

{
  int *piVar1;
  int *piStack_20;
  unsigned int uStack_1c;
  
  RtlEnterCriticalSection(0xffffffff832645b4);
  piVar1 = lbl_832645AC;
  if (lbl_832645AC != (int *)0x0) {
    piStack_20 = lbl_832645AC;
    uStack_1c = uStack_1c & 0x3fffffff | 0x80000000;
    *(unsigned char *)(lbl_832645AC + 0x28) = *(unsigned char *)(lbl_832645AC + 0x28) | 8;
    (**(int (***)())(*piVar1 + 0x44))((double)lbl_821AAD20,piVar1,uStack_1c,&piStack_20,1);
  }
  RtlLeaveCriticalSection(0xffffffff832645b4);
  return;
}

