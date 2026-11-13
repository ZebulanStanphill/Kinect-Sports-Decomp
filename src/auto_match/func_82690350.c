extern int fn_826902E0();
extern unsigned int lbl_8200E2B0;


int * fn_82690350(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  
  uVar3 = *param_1 >> (param_2 & 0x3f);
  if (uVar3 != 0) {
    if ((uVar3 & 0xffff) == 0) {
      if ((uVar3 & 0xff0000) == 0) {
        uVar3 = (unsigned char)(&lbl_8200E2B0)[uVar3 >> 0x18] + 0x18;
      }
      else {
        uVar3 = (unsigned char)(&lbl_8200E2B0)[uVar3 >> 0x10 & 0xff] + 0x10;
      }
    }
    else if ((uVar3 & 0xff) == 0) {
      uVar3 = (unsigned char)(&lbl_8200E2B0)[uVar3 >> 8 & 0xff] + 8;
    }
    else {
      uVar3 = (unsigned int)(unsigned char)(&lbl_8200E2B0)[uVar3 & 0xff];
    }
    param_2 = (uVar3 & 0xff) + param_2;
    puVar5 = param_1 + param_2 + 1;
    do {
      piVar2 = (int *)fn_826902E0(param_1,*puVar5,param_3,param_4);
      if (piVar2 != (int *)0x0) {
        iVar4 = param_2 + 1;
        piVar1 = (int *)param_1[iVar4];
        if (piVar2 == piVar1) {
          if (piVar1 == (int *)piVar1[1]) {
            param_1[iVar4] = 0;
            *param_1 = *param_1 & ~(1 << (param_2 & 0x3f));
            return piVar2;
          }
          param_1[iVar4] = (unsigned int)piVar1[1];
        }
        *(int *)(*piVar2 + 4) = piVar2[1];
        *(int *)piVar2[1] = *piVar2;
        return piVar2;
      }
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    } while (param_2 < 0x20);
  }
  return (int *)0x0;
}

