extern unsigned int lbl_831BEB3C;
extern unsigned int lbl_831BF120;


void fn_82633BE8(char param_1,char param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int *param_5,
                  int param_6)

{
  char cVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  if (param_1 != '\0') {
    return;
  }
  uVar3 = *param_5;
  if (param_2 != '\0') {
    uVar4 = (*(unsigned int *)((uVar3 >> 10 & 0xfc) + param_6) & 0x3f) << 0xc;
    *param_5 = uVar4 | uVar3 & 0xfffc0fff;
    *param_5 = (*(unsigned int *)(((uVar3 & 0x7e0) >> 3) + param_6) & 0x3f) << 5 |
               uVar4 | uVar3 & 0xfffc081f;
    return;
  }
  if ((uVar3 & 0x8000) == 0) {
    uVar4 = (*(unsigned int *)((uVar3 >> 6 & 0xfc) + param_6) & 0x3f) << 8;
    *param_5 = uVar4 | uVar3 & 0xffffc0ff;
    *param_5 = uVar4 | uVar3 & 0xffffc0c0 | *(unsigned int *)((uVar3 & 0x3f) * 4 + param_6) & 0x3f;
  }
  uVar3 = *param_5;
  cVar1 = (&lbl_831BEB3C)[uVar3 >> 0x1a];
  bVar2 = (&lbl_831BF120)[param_5[2] >> 0x18 & 0x1f];
  if ((bVar2 != 0) && ((param_5[2] & 0x80000000) != 0)) {
    *(unsigned char *)((int)param_5 + 9) =
         (unsigned char)*(unsigned int *)((*(unsigned char *)((int)param_5 + 9) & 0x3f) * 4 + param_6) |
         *(unsigned char *)((int)param_5 + 9) & 0xc0;
  }
  if ((1 < bVar2) && ((param_5[2] & 0x40000000) != 0)) {
    *(unsigned char *)((int)param_5 + 10) =
         (unsigned char)*(unsigned int *)((*(unsigned char *)((int)param_5 + 10) & 0x3f) * 4 + param_6) |
         *(unsigned char *)((int)param_5 + 10) & 0xc0;
  }
  if (((2 < bVar2) || (cVar1 == '\x01')) && (uVar4 = param_5[2], (uVar4 & 0x20000000) != 0)) {
    *(unsigned char *)((int)param_5 + 0xb) =
         (unsigned char)*(unsigned int *)((uVar4 & 0x3f) * 4 + param_6) | (unsigned char)uVar4 & 0xc0;
  }
  if (cVar1 != '\x02') {
    return;
  }
  uVar4 = *(unsigned int *)((int)((((unsigned __int64)(param_5[2] >> 2) & 0x8000000 | (unsigned __int64)uVar3 & 0x4000000)
                           >> 0x1a | (unsigned __int64)param_5[1] & 0x3c) << 2) + param_6);
  *(unsigned char *)((int)param_5 + 7) = (unsigned char)uVar4 & 0x3c | (unsigned char)param_5[1] & 0xc3;
  param_5[2] = (uVar4 & 2) << 0x1c | param_5[2] & 0xdfffffff;
  *param_5 = (uVar4 & 1) << 0x1a | uVar3 & 0xfbffffff;
  return;
}

