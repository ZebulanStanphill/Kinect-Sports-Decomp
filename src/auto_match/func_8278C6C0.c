extern int fn_8278B2C8();
extern int fn_8278C0A8();
extern unsigned int lbl_82010C6C;


unsigned int * fn_8278C6C0(unsigned int *param_1,int param_2,int param_3)

{
  char cVar1;
  unsigned short uVar2;
  
  param_1[2] = 0;
  *param_1 = &lbl_82010C6C;
  param_1[1] = 1;
  *(unsigned short *)(param_1 + 3) = 0;
  *(unsigned short *)((int)param_1 + 0xe) = 0;
  *(unsigned short *)(param_1 + 4) = 0;
  *(unsigned short *)((int)param_1 + 0x12) = 0;
  *(unsigned short *)(param_1 + 5) = 0;
  *(unsigned short *)((int)param_1 + 0x16) = 0;
  if ((*(unsigned short *)(param_2 + 0x16) & 1) != 0) {
    uVar2 = *(unsigned short *)(param_3 + 0x16);
    if (((uVar2 & 1) != 0) && (((uVar2 ^ *(unsigned short *)(param_2 + 0x16)) & 0x600) == 0)) {
      *(unsigned short *)((int)param_1 + 0x16) = uVar2 & 0x600 | 1;
    }
  }
  if ((*(unsigned short *)(param_2 + 0x16) >> 7 & 1) != 0) {
    uVar2 = *(unsigned short *)(param_3 + 0x16);
    if ((uVar2 >> 7 & 1) != 0) {
      if (*(unsigned short *)(param_2 + 0x16) >> 0xf == (unsigned short)((uVar2 & 0x8000) != 0)) {
        if ((uVar2 & 0x8000) == 0) {
          uVar2 = *(unsigned short *)((int)param_1 + 0x16) & 0x7fff;
        }
        else {
          uVar2 = *(unsigned short *)((int)param_1 + 0x16) | 0x8000;
        }
        *(unsigned short *)((int)param_1 + 0x16) = uVar2;
        *(unsigned short *)((int)param_1 + 0x16) = uVar2 | 0x80;
      }
    }
  }
  if (((*(unsigned short *)(param_2 + 0x16) >> 1 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x16) >> 1 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0xc) == *(short *)(param_3 + 0xc)) {
      *(short *)(param_1 + 3) = *(short *)(param_3 + 0xc);
      *(unsigned short *)((int)param_1 + 0x16) = *(unsigned short *)((int)param_1 + 0x16) | 2;
    }
  }
  if (((*(unsigned short *)(param_2 + 0x16) >> 2 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x16) >> 2 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0xe) == *(short *)(param_3 + 0xe)) {
      *(short *)((int)param_1 + 0xe) = *(short *)(param_3 + 0xe);
      *(unsigned short *)((int)param_1 + 0x16) = *(unsigned short *)((int)param_1 + 0x16) | 4;
    }
  }
  if (((*(unsigned short *)(param_2 + 0x16) >> 3 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x16) >> 3 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0x10) == *(short *)(param_3 + 0x10)) {
      *(short *)(param_1 + 4) = *(short *)(param_3 + 0x10);
      *(unsigned short *)((int)param_1 + 0x16) = *(unsigned short *)((int)param_1 + 0x16) | 8;
    }
  }
  if (((*(unsigned short *)(param_2 + 0x16) >> 4 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x16) >> 4 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0x12) == *(short *)(param_3 + 0x12)) {
      *(short *)((int)param_1 + 0x12) = *(short *)(param_3 + 0x12);
      *(unsigned short *)((int)param_1 + 0x16) = *(unsigned short *)((int)param_1 + 0x16) | 0x10;
    }
  }
  if (((*(unsigned short *)(param_2 + 0x16) >> 5 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x16) >> 5 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0x14) == *(short *)(param_3 + 0x14)) {
      *(short *)(param_1 + 5) = *(short *)(param_3 + 0x14);
      *(unsigned short *)((int)param_1 + 0x16) = *(unsigned short *)((int)param_1 + 0x16) | 0x20;
    }
  }
  if (((*(unsigned short *)(param_2 + 0x16) >> 6 & 1) != 0) && ((*(unsigned short *)(param_3 + 0x16) >> 6 & 1) != 0)
     ) {
    cVar1 = fn_8278B2C8(param_2,*(unsigned int *)(param_3 + 8));
    if (cVar1 != '\0') {
      fn_8278C0A8(param_1);
    }
  }
  if ((*(unsigned short *)(param_2 + 0x16) >> 8 & 1) != 0) {
    uVar2 = *(unsigned short *)(param_3 + 0x16);
    if (((uVar2 >> 8 & 1) != 0) && (((*(unsigned short *)(param_2 + 0x16) ^ uVar2) & 0x1800) == 0)) {
      *(unsigned short *)((int)param_1 + 0x16) =
           (uVar2 >> 0xb & 3) << 0xb | *(unsigned short *)((int)param_1 + 0x16) & 0xe6ff | 0x100;
    }
  }
  return param_1;
}

