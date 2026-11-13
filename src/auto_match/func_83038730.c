typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_82FEFC98();
extern int fn_82FEFCC8();
extern int fn_8302C6A8();
extern int fn_8302CA88();
extern int fn_8302DD08();
extern int fn_83032B08();
extern int fn_83032BE0();
extern int fn_83032D88();
extern int fn_83033C70();
extern unsigned int lbl_821AAD20;


void fn_83038730(int param_1,char param_2)

{
  int iVar1;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  bool bVar8;
  double dVar9;
  unsigned short auStack_40 [2];
  unsigned char auStack_3c [60];
  
  fn_82FEFC98();
  if (((*(unsigned char *)(param_1 + 0x1e4) & 0x20) == 0) && (iVar5 = *(int *)(param_1 + 0x188), iVar5 != 0))
  {
    if (*(int *)(iVar5 + 8) != *(int *)(iVar5 + 4)) {
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 0x188) + 8);
        puVar7 = (unsigned int *)(iVar5 + -0x14);
        if (*(int *)(iVar5 + -8) == 0) {
          piVar3 = (int *)fn_8302DD08(*puVar7,*(unsigned int *)(param_1 + 0x70),auStack_40,
                                        auStack_3c,iVar5 + -0x10,iVar5 + -0xc);
          iVar5 = *(int *)(param_1 + 0x18c);
          if (piVar3 != (int *)0x0) {
            *(unsigned short *)((iVar5 + 199) * 2 + param_1) = auStack_40[0];
            *(int *)(param_1 + 0x1dc) = piVar3[3];
            iVar5 = fn_8302C6A8(*puVar7);
            uVar6 = iVar5 << 0x1c | *(unsigned int *)(param_1 + 0x1e0) & 0xfffffff;
            iVar5 = (int)uVar6 >> 0x1c;
            *(unsigned int *)(param_1 + 0x1e0) = uVar6;
            if ((((iVar5 == 1) || (iVar5 == 2)) || (iVar5 == 3)) || (iVar5 == 5)) {
              dVar9 = (double)fn_8302CA88(*puVar7,*(unsigned int *)(param_1 + 0x70));
              *(float *)(param_1 + 0x1d8) = (float)dVar9;
            }
            else {
              *(unsigned int *)(param_1 + 0x1d8) = lbl_821AAD20;
            }
            *(unsigned char *)(param_1 + 0x1e4) = *(unsigned char *)(param_1 + 0x1e4) | 0x20;
            (**(int (***)())(*piVar3 + 8))(piVar3);
            fn_82FEFCC8(param_1);
            return;
          }
          *(int *)(param_1 + 0x18c) = iVar5 + -1;
          while (iVar5 != 1) {
            uVar6 = *(int *)(param_1 + 0x18c) - 1;
            if (uVar6 < 0x20) {
              bVar8 = (1 << (uVar6 & 0x3f) & *(unsigned int *)(param_1 + 0x1d0)) != 0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) break;
            iVar5 = *(int *)(param_1 + 0x18c);
            *(int *)(param_1 + 0x18c) = iVar5 + -1;
          }
          iVar5 = *(int *)(param_1 + 0x188);
          fn_83032BE0((unsigned __int64)*(unsigned int *)(iVar5 + 8) - 0x14);
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -0x14;
        }
        else {
          if (param_2 != '\0') {
            iVar4 = *(int *)(*(int *)(iVar5 + -4) + 8);
            iVar1 = *(int *)(iVar4 + -8);
            while (iVar1 != 0) {
              iVar4 = *(int *)(*(int *)(iVar4 + -4) + 8);
              iVar1 = *(int *)(iVar4 + -8);
            }
            iVar4 = fn_8302C6A8(*(unsigned int *)(iVar4 + -0x14));
            if (iVar4 != 5) goto LAB_83038930;
          }
          uVar2 = fn_83033C70(*(unsigned int *)(iVar5 + -8),*(unsigned int *)(iVar5 + -4));
          if ((uVar2 & 0xffffffff) != 0) {
            fn_83032B08();
          }
          iVar5 = *(int *)(param_1 + 0x188);
          fn_83032BE0((unsigned __int64)*(unsigned int *)(iVar5 + 8) - 0x14);
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -0x14;
          if ((uVar2 & 0xffffffff) == 0) break;
          fn_83032B08(uVar2);
          iVar5 = *(int *)(param_1 + 0x188);
          *(int *)(param_1 + 0x188) = (int)uVar2;
          if (iVar5 != 0) {
            fn_83032D88();
          }
          fn_83032D88(uVar2);
        }
      } while (*(int *)(*(int *)(param_1 + 0x188) + 8) != *(int *)(*(int *)(param_1 + 0x188) + 4));
    }
    iVar5 = *(int *)(param_1 + 0x188);
    *(unsigned int *)(param_1 + 0x188) = 0;
    if (iVar5 != 0) {
      fn_83032D88();
    }
  }
  *(unsigned char *)(param_1 + 0x1e4) = *(unsigned char *)(param_1 + 0x1e4) | 0x20;
LAB_83038930:
  fn_82FEFCC8(param_1);
  return;
}

