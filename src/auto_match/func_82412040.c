#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82410670();
extern int fn_825200A8();
extern int fn_82536590();
extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int uRam83297698;


void fn_82412040(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned int uVar7;
  double dVar8;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar7 = *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x380);
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x28) + 900);
    if (uVar7 < uVar1) {
      do {
        if (*(int *)(uVar7 + 0x94) != 0) {
          piVar6 = *(int **)(*(int *)(uVar7 + 0x94) + 0x8c0);
          uVar2 = 0xffffffff82196288;
          if (piVar6 != (int *)0x0) {
            uVar2 = (**(int (***)())(*piVar6 + 0x20))();
          }
          if ((uVar2 & 0xffffffff) != 0) {
            uVar5 = ZEXT48(*(unsigned int **)(param_1 + 0x24));
            iVar3 = fn_825200A8(uVar2,(unsigned __int64)**(unsigned int **)(param_1 + 0x24) + 0xcbc);
            if (iVar3 != 0) {
              iVar3 = *(int *)(param_1 + 0x274);
              *(unsigned int *)(param_1 + 0x84) = 1;
              if (*(int *)(iVar3 + 0xcc) != 0) {
                uVar4 = 0;
                *(unsigned int *)(param_1 + 0x194) = 0;
                *(unsigned int *)(param_1 + 0x17c) = 0;
                dVar8 = (double)fn_82410670(param_1);
                if ((*(int *)(iVar3 + 0xec) != 0) && ((double)*(float *)(iVar3 + 0xf0) < dVar8)) {
                  *(unsigned int *)(param_1 + 0x1b0) = 1;
                    /* WARNING: Subroutine does not return */
                  fn_82539560(dVar8,(double)*(float *)(iVar3 + 0xf0),(double)lbl_821CA460,
                               (double)*(float *)(iVar3 + 0xf4),(double)*(float *)(iVar3 + 0xf8));
                }
                if (*(int *)(iVar3 + 0xdc) != 0) {
                  *(unsigned int *)(param_1 + 0x1b8) = uVar4;
                }
              }
              piVar6 = (int *)uVar5;
              iVar3 = *piVar6;
              if ((uVar5 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(iVar3 + 0x2b20)) {
                return;
              }
              if (*(int *)(iVar3 + 0xc0c) == 0) {
                return;
              }
              if (*(int *)(iVar3 + 0xcb8) == 0) {
                return;
              }
              if (*(int *)(iVar3 + 0x730) == 0) {
                return;
              }
              if (*(unsigned int *)(piVar6[6] * 0x1ac + piVar6[2] + 0x14) < uRam83297698) {
                return;
              }
              fn_82536590(iVar3 + 0xd8c,0);
              return;
            }
          }
        }
        uVar7 = uVar7 + 0xd0;
      } while (uVar7 < uVar1);
    }
  }
  return;
}

