extern int fn_82F655D8();
extern unsigned int iStack_1c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8208ED48;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216DE58;
extern unsigned int lbl_8216DE5C;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FC9570(int param_1,unsigned short param_2,float *param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  double dVar3;
  unsigned __int64 uVar4;
  int iStack_1c;
  
  if (param_3 == (float *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    uVar2 = 1;
    switch(param_2) {
    case 0:
      *(float *)(param_1 + 4) = *param_3;
      break;
    case 1:
      dVar3 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
      *(float *)(param_1 + 8) = (float)dVar3;
      break;
    case 2:
      fVar1 = *param_3;
      if (lbl_8216C698 < fVar1) {
        if (fVar1 < lbl_821AAD20) {
          uVar4 = (unsigned __int64)(fVar1 + lbl_8208ED48);
          iStack_1c = (int)uVar4;
          fVar1 = (fVar1 + lbl_8208ED48) - (float)(uVar4 & 0xffffffff);
          *(float *)(param_1 + 0xc) =
               *(float *)(&lbl_8216DE58 + iStack_1c * 4) * (lbl_82002AE0 - fVar1) +
               *(float *)(&lbl_8216DE5C + iStack_1c * 4) * fVar1;
        }
        else {
          *(float *)(param_1 + 0xc) = lbl_82002AE0;
        }
      }
      else {
        *(float *)(param_1 + 0xc) = lbl_821AAD20;
      }
      break;
    case 3:
      *(float *)(param_1 + 0x10) = *param_3;
      break;
    case 4:
      *(float *)(param_1 + 0x14) = *param_3;
      break;
    case 5:
      *(float *)(param_1 + 0x18) = *param_3;
      break;
    case 6:
      *(float *)(param_1 + 0x1c) = *param_3;
      break;
    case 7:
      *(float *)(param_1 + 0x20) = *param_3;
      break;
    case 8:
      dVar3 = (double)fn_82F655D8(lbl_82015618,(double)(*param_3 * lbl_82005718));
      *(float *)(param_1 + 0x24) = (float)dVar3;
      break;
    case 9:
      *(unsigned char *)(param_1 + 0x28) = *(unsigned char *)param_3;
      break;
    default:
      uVar2 = 0x1f;
    }
  }
  return uVar2;
}

