typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8302C758();


unsigned int fn_8302CB50(int param_1,int param_2,unsigned char *param_3,short *param_4)

{
  short sVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned char uVar4;
  unsigned int uVar5;
  bool bVar6;
  
  *param_3 = 1;
  sVar1 = *(short *)(param_2 + 0xe);
  if (*(char *)(param_2 + 0xc) == '\0') {
    if (sVar1 == 0) {
      *(unsigned short *)(param_2 + 0xe) = 1;
      *(unsigned char *)(param_2 + 0xc) = 1;
      bVar6 = false;
      if (param_4 == (short *)0x0) {
        bVar6 = true;
      }
      else if ((*(unsigned char *)(param_4 + 1) & 0x80) != 0) {
        if ((*(unsigned char *)(param_4 + 1) & 0x40) == 0) {
          bVar6 = (short)(*param_4 + -1) != 0;
          *param_4 = *param_4 + -1;
        }
        else {
          bVar6 = true;
        }
      }
      if (!bVar6) {
        *param_3 = 0;
        return 0;
      }
    }
    else {
      *(short *)(param_2 + 0xe) = sVar1 + -1;
    }
  }
  else {
    uVar5 = (int)sVar1 + 1;
    uVar2 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0xc))();
    if (uVar5 != uVar2) {
      *(short *)(param_2 + 0xe) = (short)uVar5;
      return uVar5 & 0xffff;
    }
    if ((*(unsigned char *)(param_1 + 0x11f) & 4) != 0) {
      uVar2 = (int)sVar1 - 1;
      *(short *)(param_2 + 0xe) = (short)uVar2;
      *(unsigned char *)(param_2 + 0xc) = 0;
      return uVar2 & 0xffff;
    }
    uVar4 = 0;
    *(unsigned short *)(param_2 + 0xe) = 0;
    cVar3 = fn_8302C758(param_1,param_4);
    if (cVar3 == '\0') {
      *param_3 = uVar4;
      return 0;
    }
  }
  return (unsigned int)*(unsigned short *)(param_2 + 0xe);
}

