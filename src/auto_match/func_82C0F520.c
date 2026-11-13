typedef unsigned char bool;
#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_823AAD88();
extern int fn_82A1E438();
extern int fn_82C0BD58();
extern int fn_82C0BE40();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82C0F520(unsigned __int64 param_1)

{
  int *piVar3;
  unsigned __int64 uVar1;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  unsigned __int64 uVar2;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  int (**pcVar9)();
  int *piStack_40;
  int *apiStack_3c [15];
  
  piVar3 = (int *)param_1;
  uVar1 = (**(int (***)())(*piVar3 + 0x100))();
joined_r0x82c0f548:
  if ((uVar1 & 4) == 0) {
    (**(int (***)())(*(int *)piVar3[0xb] + 0x40))((int *)piVar3[0xb],&piStack_40,0,0);
    if (piStack_40 != (int *)0x0) {
      (**(int (***)())(*(int *)piVar3[0xb] + 0x44))((int *)piVar3[0xb],apiStack_3c,0,0);
      (**(int (***)())(*piStack_40 + 0xc))();
      (**(int (***)())(*piStack_40 + 0x30))(piStack_40,1,0xffffffff82c0d590,param_1);
      pcVar9 = *(int (***)())(*piStack_40 + 0x14);
      uVar1 = ZEXT48(piStack_40);
      do {
        while( true ) {
          (*pcVar9)(uVar1);
          uVar4 = (**(int (***)())(*piVar3 + 0x100))(param_1);
          uVar1 = param_1;
          if (uVar4 != 0) break;
LAB_82c0f6c4:
          (**(int (***)())(*piVar3 + 0x108))(param_1,3);
          (**(int (***)())(*piStack_40 + 0xc))();
          iVar5 = fn_823AAD88(apiStack_3c[0]);
          if (iVar5 == 0) {
            (**(int (***)())(*piStack_40 + 0x14))();
            pcVar9 = *(int (***)())(*piVar3 + 0xac);
          }
          else {
            uVar1 = fn_82C0BD58(apiStack_3c[0]);
            piVar6 = (int *)uVar1;
            uVar2 = (**(int (***)())(*piVar6 + 0x58))();
            if ((uVar2 & 0xffffffff) == 0) {
              (**(int (***)())(*piVar6 + 8))(uVar1);
              pcVar9 = *(int (***)())(*piStack_40 + 0x14);
              goto LAB_82c0f8e8;
            }
            (**(int (***)())(*piVar6 + 0x38))(uVar1,1);
            lVar7 = param_1 + 0xf4;
            do {
              puVar8 = (unsigned int *)lVar7;
              if (in_RESERVE != '\0') {
                uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar8 + 1,0,lVar7);
                *puVar8 = uVar4;
                in_cr0 = 2;
              }
            } while (!(bool)(in_cr0 >> 1 & 1));
            pcVar9 = *(int (***)())(*piStack_40 + 0x38);
            (*pcVar9)(piStack_40,uVar1,pcVar9,*piStack_40,in_MSR);
            (**(int (***)())(*piVar6 + 0x48))(uVar1,8);
            iVar5 = (**(int (***)())(*piStack_40 + 0x50))(piStack_40,uVar2 - 8);
            if (iVar5 < 0) {
              if (iVar5 != -0x7ffffff6) goto LAB_82c0f7bc;
              (**(int (***)())(*piVar6 + 0x48))(uVar1,uVar2 - 8);
              do {
                if (in_RESERVE != '\0') {
                  uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar8 - 1,0,lVar7);
                  *puVar8 = uVar4;
                  in_cr0 = 2;
                }
              } while (!(bool)(in_cr0 >> 1 & 1));
              (**(int (***)())(*piStack_40 + 0x14))();
              pcVar9 = *(int (***)())(*piVar3 + 0xac);
              uVar2 = param_1;
            }
            else {
              fn_82C0BE40(apiStack_3c[0]);
LAB_82c0f7bc:
              pcVar9 = *(int (***)())(*piStack_40 + 0x14);
              uVar2 = ZEXT48(piStack_40);
            }
            (*pcVar9)(uVar2);
            pcVar9 = *(int (***)())(*piVar6 + 8);
          }
        }
        if ((uVar4 & 6) != 0) goto LAB_82c0f86c;
        if ((uVar4 & 1) == 0) goto LAB_82c0f6c4;
        iVar5 = (**(int (***)())(*piVar3 + 0xf4))(param_1);
        if (iVar5 != 5) {
          (**(int (***)())(*piVar3 + 0x108))(param_1,4);
          (**(int (***)())(*piStack_40 + 0xc))();
          (**(int (***)())(*piStack_40 + 0x54))(piStack_40,3);
          (**(int (***)())(*piStack_40 + 0x14))();
          (**(int (***)())(*piVar3 + 0x108))(param_1,5);
        }
        pcVar9 = *(int (***)())(*piVar3 + 0xac);
      } while( true );
    }
    goto LAB_82c0f9dc;
  }
LAB_82c0fa64:
  (**(int (***)())(*piVar3 + 0x108))(param_1,8);
  (**(int (***)())(*piVar3 + 0xdc))(param_1);
  return;
LAB_82c0f86c:
  (**(int (***)())(*piVar3 + 0x108))(param_1,6);
  (**(int (***)())(*piStack_40 + 0xc))();
  (**(int (***)())(*piStack_40 + 0x54))(piStack_40,4);
  pcVar9 = *(int (***)())(*piStack_40 + 0x14);
LAB_82c0f8e8:
  (*pcVar9)();
  iVar5 = (**(int (***)())(*piVar3 + 0xf4))(param_1);
  if (iVar5 != 6) {
    (**(int (***)())(*piVar3 + 0x108))(param_1,6);
    (**(int (***)())(*piStack_40 + 0xc))();
    (**(int (***)())(*piStack_40 + 0x54))(piStack_40,2);
    (**(int (***)())(*piStack_40 + 0x14))();
  }
  (**(int (***)())(*piStack_40 + 0xc))();
  (**(int (***)())(*piStack_40 + 0x3c))();
  (**(int (***)())(*piStack_40 + 0x14))();
  if (piStack_40 != (int *)0x0) {
    (**(int (***)())(*piStack_40 + 8))();
    piStack_40 = (int *)0x0;
  }
  if (apiStack_3c[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_3c[0] + 8))();
    apiStack_3c[0] = (int *)0x0;
  }
LAB_82c0f9dc:
  (**(int (***)())(*piVar3 + 0xb4))(param_1);
  uVar4 = (**(int (***)())(*piVar3 + 0x100))(param_1);
  if ((uVar4 & 4) != 0) goto LAB_82c0fa64;
  (**(int (***)())(*piVar3 + 0x108))(param_1,7);
  (**(int (***)())(*piVar3 + 0xdc))(param_1);
  fn_82A1E438(piVar3[0x44]);
  uVar1 = (**(int (***)())(*piVar3 + 0x100))(param_1);
  goto joined_r0x82c0f548;
}

