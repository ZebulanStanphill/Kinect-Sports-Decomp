extern int fn_82397F30();
extern int fn_8239E318();
extern int fn_8239E540();
extern unsigned int lbl_831D2980;
extern unsigned int lbl_831D2AFC;
extern unsigned int lbl_831D2B00;
extern unsigned int lbl_831D2B04;
extern unsigned int lbl_831D2B08;
extern unsigned int lbl_831D2B0C;
extern unsigned int lbl_831D2B10;
extern unsigned int lbl_831D2B14;
extern unsigned int lbl_831D2B18;
extern unsigned int lbl_831D2B1C;
extern unsigned int lbl_831D2B20;
extern unsigned int lbl_831D2B24;
extern unsigned int lbl_831D2B28;
extern unsigned int lbl_831D2B2C;
extern unsigned int lbl_831D2B30;
extern unsigned int lbl_831D2B34;


void fn_8239FA00(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = fn_82397F30(*(unsigned int *)(param_1 + 0x240));
  if (iVar2 == 0) {
    fn_8239E318(param_1);
  }
  else {
    *(unsigned int *)(param_1 + 0x244) = lbl_831D2AFC;
    *(unsigned int *)(param_1 + 0x248) = lbl_831D2B00;
    *(unsigned int *)(param_1 + 0x24c) = lbl_831D2B04;
    *(unsigned int *)(param_1 + 0x250) = lbl_831D2B08;
    *(unsigned int *)(param_1 + 0x254) = lbl_831D2B0C;
    *(unsigned int *)(param_1 + 600) = lbl_831D2B10;
    *(unsigned int *)(param_1 + 0x25c) = lbl_831D2B14;
    *(unsigned int *)(param_1 + 0x260) = lbl_831D2B18;
    *(unsigned int *)(param_1 + 0x264) = lbl_831D2B1C;
    *(unsigned int *)(param_1 + 0x268) = lbl_831D2B20;
    *(unsigned int *)(param_1 + 0x26c) = lbl_831D2B24;
    *(unsigned int *)(param_1 + 0x270) = lbl_831D2B28;
    *(unsigned int *)(param_1 + 0x274) = lbl_831D2B2C;
    *(unsigned int *)(param_1 + 0x278) = lbl_831D2B30;
    uVar1 = lbl_831D2B34;
    *(unsigned char **)(param_1 + 0x284) = &lbl_831D2980;
    *(unsigned int *)(param_1 + 0x27c) = uVar1;
  }
  fn_8239E540(param_1);
  return;
}

