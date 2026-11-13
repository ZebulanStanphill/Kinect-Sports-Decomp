extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82270B70();
extern int fn_82271280();
extern int fn_82279C58();
extern int fn_8266F580();
extern int fn_8266F740();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int lbl_8326B394;


void fn_8226D810(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar3;
  int iVar7;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  
  piVar4 = (int *)fn_82270B70();
  if ((piVar4[0x2b] != 0) && (piVar1 = *(int **)piVar4[0x2a], piVar1 != (int *)piVar4[0x2a])) {
    do {
      if ((piVar1[2] == param_1) && (piVar1[3] != 0)) {
        piVar5 = (int *)fn_82279C58(auStack_50,piVar1[3]);
        iVar2 = *piVar5;
        if (iStack_4c != 0) {
          fn_822315A0(iStack_4c);
        }
        if (iVar2 != 0) {
          puVar6 = (unsigned int *)fn_82279C58(auStack_48,piVar1[3]);
          fn_8266F740(*puVar6);
          if (iStack_44 != 0) {
            fn_822315A0();
          }
        }
        if (piVar1[0x42e] == 0) {
          uVar3 = fn_8266F580(*(unsigned int *)(piVar1[3] + 8));
          iVar7 = fn_82271280(piVar4,uVar3);
          piVar1[0x42e] = iVar7;
          iVar2 = *piVar4;
          if ((uVar3 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(iVar2 + 0x19c)) {
            if (iVar7 == 0) {
              *(int *)(iVar2 + 0x19c) = lbl_8326B394;
            }
            else {
              *(int *)(iVar2 + 0x19c) = iVar7;
            }
          }
          if ((uVar3 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(iVar2 + 0x1a0)) {
            if (iVar7 == 0) {
              iVar7 = lbl_8326B394;
            }
            *(int *)(*piVar4 + 0x1a0) = iVar7;
          }
        }
        piVar1[0x42d] = 0;
        iVar2 = piVar1[4];
        piVar1[4] = 0;
        piVar1[3] = 0;
        if (iVar2 != 0) {
          fn_822315A0();
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)piVar4[0x2a]);
  }
  return;
}

