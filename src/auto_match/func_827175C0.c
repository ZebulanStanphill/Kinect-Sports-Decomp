typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern int fn_8268CEC0();
extern int fn_8268D5D8();
extern int memcpy();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_827175C0(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned char auStack_80 [48];
  
  if (*(int *)(param_1[0x27] + 0x1c) != 0) {
    uVar9 = 0;
    iVar1 = param_2[8];
    puVar2 = (unsigned int *)param_2[0x10];
    iVar3 = param_2[0x11];
    param_2[8] = *(int *)(param_1[0x1f] + 0x1c) + 0x18;
    iVar4 = param_1[0x27];
    piVar5 = *(int **)(*param_2 + 0xc);
    if (*(int *)(iVar4 + 0x1c) != 0) {
      iVar10 = 0;
      iVar11 = 0;
      do {
        piVar12 = (int *)(*(int *)(iVar4 + 0x18) + iVar11);
        piVar6 = *(int **)(iVar10 + param_1[0x29]);
        if (piVar6 != (int *)0x0) {
          iVar4 = param_1[0x2e];
          if (iVar4 == 0) {
            if ((*(unsigned char *)(piVar12 + 0x12) & 8) == 0) goto LAB_82717654;
LAB_8271767c:
            bVar7 = true;
          }
          else {
LAB_82717654:
            if (iVar4 == 1) {
              if ((*(unsigned char *)(piVar12 + 0x12) & 2) != 0) goto LAB_8271767c;
            }
            if ((iVar4 == 2) && ((*(unsigned char *)(piVar12 + 0x12) & 4) != 0)) goto LAB_8271767c;
            bVar7 = false;
          }
          if (bVar7) {
            stack_pair_a0.first = *puVar2;
            stack_pair_a0.second = puVar2[1];
            uStack_98 = puVar2[2];
            uStack_94 = puVar2[3];
            uStack_90 = puVar2[4];
            uStack_8c = puVar2[5];
            fn_8268CEC0(&stack_pair_a0.first,param_1 + 0x11);
            param_2[0x10] = (int)&stack_pair_a0.first;
            memcpy(auStack_80,iVar3,0x20);
            fn_8268D5D8(auStack_80,param_1 + 9);
            param_2[0x11] = (int)auStack_80;
            if (*piVar12 != 0) {
              (**(int (***)())(*piVar6 + 0x1c))(piVar6);
            }
            iVar4 = *piVar5;
            uVar8 = (**(int (***)())(*piVar6 + 0xc))(piVar6);
            (**(int (***)())(iVar4 + 0x2c))(piVar5,uVar8);
            (**(int (***)())(*piVar6 + 0x60))(piVar6,param_2);
            (**(int (***)())(*piVar5 + 0x30))(piVar5);
          }
        }
        iVar4 = param_1[0x27];
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 0x4c;
        iVar10 = iVar10 + 4;
      } while (uVar9 < *(unsigned int *)(iVar4 + 0x1c));
    }
    param_2[8] = iVar1;
    param_2[0x10] = (int)puVar2;
    param_2[0x11] = iVar3;
    (**(int (***)())(*param_1 + 0xf4))(param_1);
  }
  return;
}

