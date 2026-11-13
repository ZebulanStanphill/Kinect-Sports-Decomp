extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82270B70();
extern int fn_82271280();
extern int fn_82279C58();
extern int fn_8266F580();
extern int fn_8266F740();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int lbl_8326B394;


void fn_8226D6A0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar3;
  int iVar7;
  int iVar8;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_58 [4];
  int iStack_54;
  
  piVar4 = (int *)fn_82270B70();
  if (piVar4[0x2b] != 0) {
    iVar1 = piVar4[0x27];
    piVar4[0x27] = 1;
    piVar2 = *(int **)piVar4[0x2a];
    if (piVar2 != (int *)piVar4[0x2a]) {
      do {
        if (piVar2[2] == param_1) {
          if (piVar2[3] != 0) {
            piVar5 = (int *)fn_82279C58(auStack_60,piVar2[3]);
            iVar7 = *piVar5;
            if (iStack_5c != 0) {
              fn_822315A0(iStack_5c);
            }
            if (iVar7 != 0) {
              puVar6 = (unsigned int *)fn_82279C58(auStack_58,piVar2[3]);
              fn_8266F740(*puVar6);
              if (iStack_54 != 0) {
                fn_822315A0();
              }
            }
            if (piVar2[0x42e] == 0) {
              uVar3 = fn_8266F580(*(unsigned int *)(piVar2[3] + 8));
              if (uVar3 != 0) {
                iVar7 = fn_82271280(piVar4,uVar3);
                piVar2[0x42e] = iVar7;
              }
              iVar7 = *piVar4;
              iVar8 = piVar2[0x42e];
              if ((uVar3 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(iVar7 + 0x19c)) {
                if (iVar8 == 0) {
                  *(int *)(iVar7 + 0x19c) = lbl_8326B394;
                }
                else {
                  *(int *)(iVar7 + 0x19c) = iVar8;
                }
              }
              if ((uVar3 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(iVar7 + 0x1a0)) {
                if (iVar8 == 0) {
                  iVar8 = lbl_8326B394;
                }
                *(int *)(*piVar4 + 0x1a0) = iVar8;
              }
            }
            iVar7 = piVar2[4];
            piVar2[4] = 0;
            piVar2[3] = 0;
            if (iVar7 != 0) {
              fn_822315A0();
            }
          }
          piVar2[0x42d] = 1;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)piVar4[0x2a]);
    }
    piVar4[0x27] = iVar1;
  }
  return;
}

