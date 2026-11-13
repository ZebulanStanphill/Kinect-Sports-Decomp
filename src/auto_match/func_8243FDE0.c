typedef unsigned char bool;
#define true 1
#define false 0
extern int memcpy();
extern unsigned int iStack_64;
extern unsigned int iStack_68;


void fn_8243FDE0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_b0;
  int iStack_68;
  int iStack_64;
  
  piVar6 = param_1;
  while (piVar6 = piVar6 + 0x17, piVar6 != param_2) {
    memcpy(&aiStack_b0,piVar6,0x5c);
    iVar4 = iStack_64;
    iVar3 = iStack_68;
    iVar2 = aiStack_b0;
    if (iStack_64 == 1) {
      if (param_1[0x13] == 1) {
        if ((iStack_68 < param_1[0x12]) ||
           ((iStack_68 == param_1[0x12] && (aiStack_b0 < *param_1)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    piVar5 = piVar6;
    piVar7 = piVar6;
    if (bVar1) {
      while (piVar5 = param_1, param_1 != piVar7) {
        memcpy(piVar7,piVar7 + -0x17,0x5c);
        piVar7 = piVar7 + -0x17;
      }
    }
    else {
      while( true ) {
        piVar7 = piVar5 + -0x17;
        if (iVar4 == 1) {
          if (piVar5[-4] == 1) {
            if ((iVar3 < piVar5[-5]) || ((iVar3 == piVar5[-5] && (iVar2 < *piVar7)))) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
        memcpy(piVar5,piVar7,0x5c);
        piVar5 = piVar7;
      }
    }
    memcpy(piVar5,&aiStack_b0,0x5c);
  }
  return;
}

