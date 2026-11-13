typedef unsigned char bool;
#define false 0
extern unsigned int lbl_831566B0;
extern unsigned int lbl_831566B2;


bool fn_827737E8(unsigned __int64 param_1,unsigned short param_2,unsigned char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  if ((param_1 & 2) != 0) {
    iVar3 = 0;
    iVar1 = 0x88;
    do {
      uVar4 = iVar1 - iVar3;
      iVar2 = ((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0) + iVar3;
      if (param_2 == *(unsigned short *)(&lbl_831566B0 + iVar2 * 4)) {
        return ((&lbl_831566B2)[iVar2 * 4] & param_3) != 0;
      }
      if (param_2 < *(unsigned short *)(&lbl_831566B0 + iVar2 * 4)) {
        iVar1 = iVar2 + -1;
      }
      else {
        iVar3 = iVar2 + 1;
      }
    } while (iVar3 <= iVar1);
  }
  return false;
}

