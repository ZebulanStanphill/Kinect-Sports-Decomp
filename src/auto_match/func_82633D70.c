extern unsigned int lbl_831BEB3C;
extern unsigned int lbl_831BF120;


void fn_82633D70(char param_1,char param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int *param_5,
                  unsigned int *param_6)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  if (param_1 != '\0') {
    return;
  }
  uVar5 = (unsigned __int64)*param_6;
  if (param_2 == '\0') {
    uVar2 = *param_5;
    if ((uVar2 & 0x8000) == 0) {
      uVar4 = (unsigned __int64)(uVar2 >> 8) & 0x3f;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      if (uVar5 <= ((unsigned __int64)uVar2 & 0x3f)) {
        uVar5 = (unsigned __int64)uVar2 & 0x3f;
      }
    }
    uVar3 = param_5[2];
    bVar1 = (&lbl_831BF120)[uVar3 >> 0x18 & 0x1f];
    if (((bVar1 != 0) && ((uVar3 & 0x80000000) != 0)) &&
       (uVar4 = (unsigned __int64)(uVar3 >> 0x10) & 0x3f, uVar5 <= uVar4)) {
      uVar5 = uVar4;
    }
    if (((1 < bVar1) && ((uVar3 & 0x40000000) != 0)) &&
       (uVar4 = (unsigned __int64)(uVar3 >> 8) & 0x3f, uVar5 <= uVar4)) {
      uVar5 = uVar4;
    }
    if (((2 < bVar1) || ((&lbl_831BEB3C)[uVar2 >> 0x1a] == '\x01')) &&
       (((uVar3 & 0x20000000) != 0 && (uVar5 <= ((unsigned __int64)uVar3 & 0x3f))))) {
      uVar5 = (unsigned __int64)uVar3 & 0x3f;
    }
    uVar6 = (unsigned int)uVar5;
    if ((&lbl_831BEB3C)[uVar2 >> 0x1a] != '\x02') goto LAB_82633e7c;
    uVar4 = ((unsigned __int64)(uVar3 >> 2) & 0x8000000 | (unsigned __int64)uVar2 & 0x4000000) >> 0x1a |
            (unsigned __int64)param_5[1] & 0xfffffffffffffffc;
  }
  else {
    uVar4 = (unsigned __int64)(*param_5 >> 0xc) & 0x3f;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = (unsigned __int64)(*param_5 >> 5);
  }
  uVar6 = (unsigned int)uVar5;
  if (uVar5 <= (uVar4 & 0x3f)) {
    uVar6 = (unsigned int)(uVar4 & 0x3f);
  }
LAB_82633e7c:
  *param_6 = uVar6;
  return;
}

