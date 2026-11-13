extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82887890();
extern int fn_828A2240();
extern int fn_828DFD60();
extern int atexit();
extern unsigned int lbl_832143C4;
extern unsigned int lbl_832143C8;


unsigned int fn_828CB9B0(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char auStack_30 [4];
  unsigned char auStack_2c [1];
  
  uVar2 = lbl_832143C8 & 1;
  if ((lbl_832143C8 & 1) == 0) {
    lbl_832143C8 = lbl_832143C8 | 1;
    lbl_832143C4 = uVar2;
    atexit(0xffffffff83141378);
  }
  if (lbl_832143C4 == 0) {
    uVar2 = fn_8265C9E0(0x10);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      fn_828A2240(uVar2,auStack_30,auStack_30);
    }
    uVar1 = lbl_832143C4;
    if ((uVar2 != lbl_832143C4) && (lbl_832143C4 != 0)) {
      fn_82887890(auStack_2c,lbl_832143C4,**(unsigned int **)(lbl_832143C4 + 4));
      fn_8265CA20(*(unsigned int *)(uVar1 + 4));
      fn_8265CA20(uVar1);
    }
    lbl_832143C4 = uVar2;
    fn_828DFD60(uVar2,0xffffffff83159ff0,0);
  }
  return lbl_832143C4;
}

