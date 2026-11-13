extern int fn_8278BFA8();
extern int fn_8278C0A8();


int fn_8278C528(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  
  fn_8278BFA8();
  if ((*(unsigned short *)(param_3 + 0x16) & 1) != 0) {
    *(unsigned short *)(param_1 + 0x16) =
         (*(unsigned short *)(param_3 + 0x16) >> 9 & 3) << 9 | *(unsigned short *)(param_1 + 0x16) & 0xf9fe | 1;
  }
  if ((*(unsigned short *)(param_3 + 0x16) >> 7 & 1) != 0) {
    if ((short)*(unsigned short *)(param_3 + 0x16) < 0) {
      uVar2 = *(unsigned short *)(param_1 + 0x16) | 0x8000;
    }
    else {
      uVar2 = *(unsigned short *)(param_1 + 0x16) & 0x7fff;
    }
    *(unsigned short *)(param_1 + 0x16) = uVar2;
    *(unsigned short *)(param_1 + 0x16) = uVar2 | 0x80;
  }
  if ((*(unsigned short *)(param_3 + 0x16) >> 1 & 1) != 0) {
    *(unsigned short *)(param_1 + 0xc) = *(unsigned short *)(param_3 + 0xc);
    *(unsigned short *)(param_1 + 0x16) = *(unsigned short *)(param_1 + 0x16) | 2;
  }
  if ((*(unsigned short *)(param_3 + 0x16) >> 2 & 1) != 0) {
    uVar1 = *(unsigned short *)(param_3 + 0xe);
    *(unsigned short *)(param_1 + 0x16) = *(unsigned short *)(param_1 + 0x16) | 4;
    *(unsigned short *)(param_1 + 0xe) = uVar1;
  }
  if ((*(unsigned short *)(param_3 + 0x16) >> 3 & 1) != 0) {
    uVar1 = *(unsigned short *)(param_3 + 0x10);
    *(unsigned short *)(param_1 + 0x16) = *(unsigned short *)(param_1 + 0x16) | 8;
    *(unsigned short *)(param_1 + 0x10) = uVar1;
  }
  if ((*(unsigned short *)(param_3 + 0x16) >> 4 & 1) != 0) {
    *(unsigned short *)(param_1 + 0x12) = *(unsigned short *)(param_3 + 0x12);
    *(unsigned short *)(param_1 + 0x16) = *(unsigned short *)(param_1 + 0x16) | 0x10;
  }
  if ((*(unsigned short *)(param_3 + 0x16) >> 5 & 1) != 0) {
    *(unsigned short *)(param_1 + 0x14) = *(unsigned short *)(param_3 + 0x14);
    *(unsigned short *)(param_1 + 0x16) = *(unsigned short *)(param_1 + 0x16) | 0x20;
  }
  if ((*(unsigned short *)(param_3 + 0x16) >> 6 & 1) != 0) {
    fn_8278C0A8(param_1,*(unsigned int *)(param_3 + 8));
  }
  if ((*(unsigned short *)(param_3 + 0x16) >> 8 & 1) != 0) {
    *(unsigned short *)(param_1 + 0x16) =
         (*(unsigned short *)(param_3 + 0x16) >> 0xb & 3) << 0xb | *(unsigned short *)(param_1 + 0x16) & 0xe6ff |
         0x100;
  }
  return param_1;
}

