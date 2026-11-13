extern int fn_82A1F238();
extern unsigned int *lbl_831D44D4;
extern unsigned int lbl_831D44E0;
extern unsigned int lbl_831D44E4;


void fn_8313F5B0(void)

{
  unsigned int *puVar1;
  
  while (lbl_831D44D4 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)*lbl_831D44D4;
    if (lbl_831D44D4 == (unsigned int *)((unsigned int)lbl_831D44D4 & 0xffff0000)) {
      fn_82A1F238();
      lbl_831D44E0 = lbl_831D44E0 + -1;
    }
    lbl_831D44E4 = lbl_831D44E4 + -1;
    lbl_831D44D4 = puVar1;
  }
  return;
}

