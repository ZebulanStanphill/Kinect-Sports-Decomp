typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F68CC0();
extern unsigned int uStack_5c;


void fn_8243FCD8(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_a0 [17];
  unsigned int uStack_5c;
  
  piVar5 = param_1;
  if (param_1 != param_2) {
    while (piVar5 = piVar5 + 0x17, piVar5 != param_2) {
      fn_82F68CC0(aiStack_a0,piVar5,0x5c);
      uVar3 = uStack_5c;
      iVar2 = aiStack_a0[0];
      if (((unsigned int)param_1[0x11] < uStack_5c) ||
         ((uStack_5c == param_1[0x11] && (aiStack_a0[0] < *param_1)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      piVar4 = piVar5;
      piVar6 = piVar5;
      if (bVar1) {
        while (piVar4 = param_1, param_1 != piVar6) {
          fn_82F68CC0(piVar6,piVar6 + -0x17,0x5c);
          piVar6 = piVar6 + -0x17;
        }
      }
      else {
        while( true ) {
          piVar6 = piVar4 + -0x17;
          if (((unsigned int)piVar4[-6] < uVar3) || ((uVar3 == piVar4[-6] && (iVar2 < *piVar6)))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) break;
          fn_82F68CC0(piVar4,piVar6,0x5c);
          piVar4 = piVar6;
        }
      }
      fn_82F68CC0(piVar4,aiStack_a0,0x5c);
    }
  }
  return;
}

