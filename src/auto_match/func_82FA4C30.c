extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;


unsigned __int64 fn_82FA4C30(int param_1,short param_2,float *param_3)

{
  unsigned char bVar1;
  double dVar2;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  if ((unsigned int)(int)param_2 < 8) {
    if (param_2 == 1) {
      *(float *)(param_1 + 8) = *param_3;
    }
    else if (param_2 == 2) {
      *(float *)(param_1 + 0xc) = *param_3;
    }
    else if (param_2 == 3) {
      dVar2 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
      *(float *)(param_1 + 0x10) = (float)dVar2;
    }
    else if (param_2 == 4) {
      dVar2 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
      *(float *)(param_1 + 0x14) = (float)dVar2;
    }
    else if (param_2 == 5) {
      *(float *)(param_1 + 0x18) = *param_3;
    }
    else if (param_2 == 6) {
      bVar1 = *(unsigned char *)param_3;
      *(unsigned int *)(param_1 + 0x1c) = (unsigned int)bVar1 + (-(unsigned int)(bVar1 == 0) - (bVar1 - 1));
    }
    else if (param_2 == 0) {
      *(float *)(param_1 + 4) = *param_3;
    }
    else {
      *(float *)(param_1 + 0x20) = *param_3;
    }
  }
  else {
    *(float *)(((int)param_2 + 1U) * 4 + param_1) = *param_3;
  }
  return 1;
}

