typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8305D7C8();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_83065E50();
extern int fn_8306AAF0();
extern int fn_8306AB38();
extern int fn_8306AB80();
extern int fn_8306AC38();
extern unsigned int uStack_78;


void fn_8306A348(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar8;
  unsigned int uVar9;
  unsigned __int64 uVar7;
  int *piVar10;
  int aiStack_90 [4];
  int *piStack_80;
  int *piStack_7c;
  unsigned int uStack_78;
  
  iVar1 = *param_1;
  do {
    if (iVar1 == 0) {
      return;
    }
    do {
      bVar4 = false;
      if (1 < *(int *)(iVar1 + 0x24)) {
        iVar8 = *(int *)(iVar1 + 0x1c);
        iVar2 = *(int *)(*(int *)(iVar8 + 0x1c) + 0x38);
        iVar3 = *(int *)(*(int *)(iVar8 + 0x18) + 0x38);
        do {
          iVar8 = *(int *)(iVar8 + 4);
          if (iVar8 == 0) goto LAB_8306a3cc;
        } while ((*(int *)(*(int *)(iVar8 + 0x1c) + 0x38) == iVar2) &&
                (*(int *)(*(int *)(iVar8 + 0x18) + 0x38) == iVar3));
        bVar4 = true;
LAB_8306a3cc:
        if (bVar4) {
          iVar8 = fn_8265C9E0(0xa8);
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = fn_8306AC38();
          }
          fn_8306AAF0(param_1,iVar8);
          *(unsigned char *)(iVar8 + 0x14) = *(unsigned char *)(iVar1 + 0x14);
          *(int *)(iVar8 + 0x18) = *param_2;
          *param_2 = *param_2 + 1;
          uVar9 = fn_83065E50();
          *(unsigned int *)(iVar8 + 0x10) = uVar9;
          uVar7 = fn_8305D7C8(*(unsigned int *)(iVar1 + 0x10));
          fn_8305E0F8(*(unsigned int *)(iVar8 + 0x10),uVar7);
          fn_8305EC98(*(unsigned int *)(iVar8 + 0x10),*(unsigned int *)(iVar1 + 0x10));
          aiStack_90[0] = *(int *)(iVar1 + 0x1c);
          uStack_78 = 0;
          piStack_80 = (int *)0x0;
          piStack_7c = (int *)0x0;
          if (aiStack_90[0] != 0) {
            do {
              if ((*(int *)(*(int *)(aiStack_90[0] + 0x1c) + 0x38) == iVar2) &&
                 (*(int *)(*(int *)(aiStack_90[0] + 0x18) + 0x38) == iVar3)) {
                fn_8257A9F0(&piStack_80,aiStack_90);
              }
              aiStack_90[0] = *(int *)(aiStack_90[0] + 4);
            } while (aiStack_90[0] != 0);
            aiStack_90[0] = 0;
          }
          piVar6 = piStack_7c;
          piVar5 = piStack_80;
          if (piStack_80 != piStack_7c) {
            piVar10 = piStack_80;
            do {
              iVar2 = *piVar10;
              fn_8306AB80((int *)(iVar1 + 0x1c),iVar2);
              fn_8306AB38(iVar8 + 0x1c,iVar2);
              fn_8305E0F8(*(unsigned int *)(iVar2 + 0x14),iVar8 + 0x38);
              piVar10 = piVar10 + 1;
            } while (piVar10 != piVar6);
          }
          if (piVar5 != (int *)0x0) {
            fn_8265CA20(piVar5);
          }
          piStack_80 = (int *)0x0;
          piStack_7c = (int *)0x0;
          uStack_78 = 0;
        }
      }
    } while (bVar4);
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

