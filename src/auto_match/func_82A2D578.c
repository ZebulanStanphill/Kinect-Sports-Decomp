typedef unsigned char bool;
#define true 1
#define false 0


bool fn_82A2D578(unsigned short *param_1,unsigned short *param_2,int param_3,int param_4)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned int uVar6;
  unsigned short *puVar7;
  unsigned short *puVar8;
  
  if (param_3 != 0) {
    puVar4 = (unsigned short *)((int)param_2 + param_3);
    puVar5 = (unsigned short *)((unsigned int)*param_1 + (int)*(unsigned short **)(param_1 + 2));
    puVar8 = *(unsigned short **)(param_1 + 2);
LAB_82a2d64c:
    do {
      if (puVar5 <= puVar8) {
        return puVar4 == param_2;
      }
      uVar6 = (unsigned int)*puVar8;
      puVar7 = puVar8 + 1;
      if (uVar6 == 0x2a) {
        if (puVar7 == puVar5) {
          return true;
        }
        puVar8 = puVar8 + 2;
        if (param_4 == 0) {
          do {
            if (param_2 == puVar4) break;
            bVar1 = *(unsigned char *)param_2;
            param_2 = (unsigned short *)((int)param_2 + 1);
          } while (bVar1 != 0x2e);
        }
        else {
          do {
            if (param_2 == puVar4) break;
            uVar2 = *param_2;
            param_2 = param_2 + 1;
          } while (uVar2 != 0x2e);
        }
        goto LAB_82a2d64c;
      }
      if (param_2 == puVar4) {
        return false;
      }
      if (param_4 == 0) {
        uVar3 = (unsigned int)*(unsigned char *)param_2;
        param_2 = (unsigned short *)((int)param_2 + 1);
      }
      else {
        uVar3 = (unsigned int)*param_2;
        param_2 = param_2 + 1;
      }
      puVar8 = puVar7;
    } while (((uVar6 == 0x3f) || (uVar3 == uVar6)) ||
            (uVar3 = RtlUpcaseUnicodeChar(), uVar3 == uVar6));
  }
  return false;
}

