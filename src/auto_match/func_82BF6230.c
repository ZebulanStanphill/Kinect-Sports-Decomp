#define true 1
extern unsigned int *auStack_90;
extern int fn_82BA02A8();
extern int fn_82BE5240();
extern int fn_82BE5C30();
extern int fn_82BE5C78();
extern int fn_82BE5CC0();
extern int fn_82BE5D08();
extern int fn_82BE5D50();
extern int fn_82BE5E88();
extern int fn_82BE5F40();
extern int fn_82BE6950();
extern int fn_82BF0C00();
extern int fn_82BF5E08();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820EBAC8;
extern unsigned int lbl_831751CC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82BF6230(int param_1)

{
  int iVar1;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar2;
  char cVar7;
  unsigned int uVar6;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  double dVar16;
  double dVar17;
  unsigned short auStack_90 [2];
  int aiStack_8c [35];
  
  cVar7 = '\0';
  dVar16 = (double)lbl_820EBAC8;
  uVar10 = 0;
  dVar17 = (double)lbl_82002AE0;
  uVar15 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar3 = fn_82BE5CC0();
  iVar1 = *(int *)(param_1 + 0x20);
  aiStack_8c[0] = 0;
  uVar6 = 0;
  auStack_90[0] = 0;
  do {
    if (uVar3 <= uVar6) {
      if (cVar7 == '\b') {
        uVar2 = thunk_FUN_82be5550(0x70);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82BF0C00(dVar16,dVar17,uVar2,uVar10,uVar15,uVar11,uVar12,uVar14,uVar13,0)
          ;
        }
        if ((uVar2 & 0xffffffff) == 0) {
          *(unsigned int *)(param_1 + 0x10) = 0;
          fn_82BE5240(param_1,0x65,0xffffffff820ebb14);
        }
        if ((uVar9 & 0xffffffff) != 0) {
          (*(int (**)())lbl_831751CC)(uVar9);
        }
        if ((uVar8 & 0xffffffff) != 0) {
          (*(int (**)())lbl_831751CC)(uVar8);
        }
        if (aiStack_8c[0] != 0) {
          (*(int (**)())lbl_831751CC)();
        }
      }
      else {
LAB_82bf63e0:
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar4 = fn_82BE5C30(param_1);
    uVar6 = uVar4 & 0xff;
    if (uVar6 < 0x16) {
      if (uVar6 == 0x15) {
        uVar15 = fn_82BE5CC0(param_1);
        goto LAB_82bf62fc;
      }
      switch(uVar6 - 2) {
      case 0:
        uVar13 = fn_82BE5D08(param_1);
        break;
      default:
        goto LAB_82bf63d0;
      case 2:
        fn_82BE5E88(param_1,aiStack_8c,auStack_90);
        if (aiStack_8c[0] != 0) {
          fn_82BA02A8(param_1,aiStack_8c[0],auStack_90[0]);
          break;
        }
        goto LAB_82bf6400;
      case 3:
        uVar10 = fn_82BE5CC0(param_1);
        break;
      case 4:
        uVar14 = fn_82BE5CC0(param_1);
        break;
      case 5:
        uVar12 = fn_82BE5CC0(param_1);
        break;
      case 6:
        dVar16 = (double)fn_82BE5D50(param_1);
        goto LAB_82bf6400;
      case 7:
        dVar17 = (double)fn_82BE5D50(param_1);
        goto LAB_82bf6400;
      case 8:
        fn_82BE5C78(param_1);
        goto LAB_82bf6400;
      case 9:
        uVar11 = fn_82BE5CC0(param_1);
        break;
      case 10:
        uVar9 = fn_82BE6950(param_1);
      }
LAB_82bf62fc:
      cVar7 = cVar7 + '\x01';
    }
    else {
      if (uVar6 != 0xe5) {
LAB_82bf63d0:
        iVar5 = fn_82BE5F40(param_1);
        if (iVar5 != 0) goto LAB_82bf6400;
        goto LAB_82bf63e0;
      }
      uVar8 = fn_82BF5E08(param_1,uVar4);
    }
LAB_82bf6400:
    uVar6 = *(int *)(param_1 + 0x20) - iVar1;
  } while( true );
}

