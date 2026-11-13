extern unsigned int lbl_821AAD20;


void fn_82DFBDC8(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_5[4];
  param_5[4] = (float)((double)fVar1 - param_1);
  if ((*(char *)((int)param_5 + 0xf) != '\0') && ((float)((double)fVar1 - param_1) <= lbl_821AAD20))
  {
    *(unsigned char *)((int)param_5 + 0xf) = 0;
  }
  if (*(char *)((int)param_5 + 0xd) != '\0') {
    return;
  }
  if ((*param_5 < *(float *)(param_2 + 8)) && ('\0' < *(char *)((int)param_5 + 0xe))) {
    *(char *)((int)param_5 + 0xe) = *(char *)((int)param_5 + 0xe) + -1;
    param_5[4] = *(float *)(param_2 + 0x14);
    *(unsigned char *)((int)param_5 + 0xf) = 1;
  }
  if (*param_5 <= *(float *)(param_2 + 0xc)) {
    return;
  }
  iVar2 = *(char *)((int)param_5 + 0xe) + 1;
  if (*(int *)(param_2 + 0x20) <= iVar2) {
    return;
  }
  *(char *)((int)param_5 + 0xe) = (char)iVar2;
  param_5[4] = *(float *)(param_2 + 0x14);
  *(unsigned char *)((int)param_5 + 0xf) = 1;
  return;
}

