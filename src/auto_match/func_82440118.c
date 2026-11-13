typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F68CC0();


void fn_82440118(int param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while( true ) {
    iVar5 = (iVar3 + 1) * 2;
    if (param_3 <= iVar5) break;
    piVar2 = (int *)((iVar3 + 1) * 0xb8 + param_1);
    if (piVar2[0x13] == 1) {
      if (piVar2[-4] == 1) {
        if ((piVar2[0x12] < piVar2[-5]) ||
           ((piVar2[0x12] == piVar2[-5] && (*piVar2 < piVar2[-0x17])))) {
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
    if (bVar1) {
      iVar5 = iVar5 + -1;
    }
    fn_82F68CC0(iVar3 * 0x5c + param_1,iVar5 * 0x5c + param_1,0x5c);
    iVar3 = iVar5;
  }
  if (iVar5 == param_3) {
    fn_82F68CC0(iVar3 * 0x5c + param_1,param_3 * 0x5c + param_1 + -0x5c,0x5c);
    iVar3 = param_3 + -1;
  }
  while( true ) {
    uVar4 = iVar3 - 1;
    iVar5 = ((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0);
    if (iVar3 <= param_2) break;
    piVar2 = (int *)(iVar5 * 0x5c + param_1);
    if (piVar2[0x13] == 1) {
      if (param_4[0x13] == 1) {
        if ((piVar2[0x12] < param_4[0x12]) ||
           ((piVar2[0x12] == param_4[0x12] && (*piVar2 < *param_4)))) {
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
    fn_82F68CC0(iVar3 * 0x5c + param_1,piVar2,0x5c);
    iVar3 = iVar5;
  }
  fn_82F68CC0(iVar3 * 0x5c + param_1,param_4,0x5c);
  return;
}

