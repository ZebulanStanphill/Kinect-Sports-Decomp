typedef unsigned char bool;
#define true 1
extern int fn_8265C990();
extern int fn_82A3FF60();
extern int fn_82A403E8();
extern int fn_82A42E20();
extern int fn_82A484F8();
extern int fn_82A49B30();
extern int fn_82A4F4E0();
extern int fn_82A4FA40();
extern int fn_82A507C0();
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_82A4FDC8(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  bool bVar3;
  int *piVar5;
  unsigned __int64 uVar4;
  int *piVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  __int64 lVar13;
  unsigned int *puVar14;
  char in_RESERVE;
  unsigned char in_cr0;
  int *piStack_90;
  int *piStack_8c;
  int aiStack_88 [34];
  
  lVar13 = 0;
  piVar5 = (int *)((int *)param_1[4])[0x21];
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)(**(int (***)())(*(int *)param_1[4] + 0x68))();
  }
  uVar9 = 0;
  uVar11 = (unsigned __int64)*(unsigned int *)(param_1[4] + 0x78);
  iVar8 = *(int *)(param_1[4] + 0x3c);
  if (*param_2 != 0) {
    iVar10 = 0;
    do {
      if ((int)lVar13 < 0) {
        return lVar13;
      }
      puVar14 = (unsigned int *)(param_2[1] + iVar10);
      puVar2 = *(unsigned int **)(param_2[1] + iVar10);
      (**(int (***)())*puVar2)(puVar2,0xffffffff82089748,&piStack_8c);
      (**(int (***)())(*piStack_8c + 0xc))(piStack_8c,aiStack_88);
      uVar1 = *(unsigned int *)(aiStack_88[0] + 0x418);
      fn_8265C990(aiStack_88[0],0x20970000);
      (**(int (***)())(*piStack_8c + 8))();
      bVar3 = (uVar1 & 0x20) == 0;
      uVar4 = uVar11;
      if ((bVar3) && ((bVar3 = (uVar1 & 0x10) == 0, bVar3 || (iVar8 != puVar14[2])))) {
        uVar4 = fn_82A42E20((unsigned __int64)*(unsigned int *)(param_1[4] + 0x30) + 0x250,0,puVar14[2],0,
                                  *(unsigned int *)(param_1[4] + 0x40));
        if (uVar4 == 0) {
          bVar3 = true;
          lVar13 = -0x7ff8fff2;
          goto LAB_82a4fefc;
        }
LAB_82a4ff04:
        piStack_90 = (int *)0x0;
        lVar13 = fn_82A507C0(param_1[4],*puVar14,piVar5,*(unsigned int *)((int)uVar11 + 4),
                                   *(unsigned int *)((int)uVar4 + 4),&piStack_90);
        in_cr0 = (lVar13 == 0) << 1;
        if (-1 < lVar13) {
          if (puVar14[1] == 0) {
            lVar13 = (**(int (***)())(*piStack_90 + 0x14))(piStack_90,0,0x1337f001);
          }
          if (-1 < (int)lVar13) {
            piVar6 = (int *)fn_82A3FF60(0xffffffff83219d50,8,0x20970004,0);
            in_cr0 = (piVar6 == (int *)0x0) << 1;
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6[1] = puVar14[2];
              *piVar6 = (int)piStack_90;
            }
            lVar13 = -0x7ff8fff2;
            if (piVar6 != (int *)0x0) {
              iVar7 = fn_82A484F8(param_1 + 5,piVar6);
              in_cr0 = (iVar7 == 0) << 1;
              if (iVar7 != 0) {
                lVar13 = 0;
                iVar8 = puVar14[2];
                param_1[3] = (int)piStack_90;
                uVar11 = uVar4;
                piVar5 = piStack_90;
                goto LAB_82a50000;
              }
              fn_82A4F4E0(piVar6);
              lVar13 = -0x7ff8fff2;
            }
          }
          fn_82A403E8(*(unsigned int *)(param_1[4] + 0x30),piStack_90);
        }
      }
      else {
LAB_82a4fefc:
        in_cr0 = bVar3 << 1;
        if (-1 < (int)lVar13) goto LAB_82a4ff04;
      }
LAB_82a50000:
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0xc;
    } while (uVar9 < *param_2);
    if ((int)lVar13 < 0) {
      return lVar13;
    }
  }
  do {
    puVar12 = (unsigned int *)uVar11;
    if (in_RESERVE != '\0') {
      uVar9 = storeWordConditionalIndexed((unsigned __int64)*puVar12 + 1,0,uVar11);
      *puVar12 = uVar9;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  param_1[2] = (int)puVar12;
  *param_1 = iVar8;
  if (iVar8 == ((int *)param_1[4])[0xf]) {
    iVar8 = (**(int (***)())(*(int *)param_1[4] + 0x6c))();
  }
  else {
    iVar8 = fn_82A49B30(iVar8);
  }
  param_1[1] = iVar8;
  if (*(int *)(param_1[4] + 4) != 1) {
    lVar13 = fn_82A4FA40(param_1,0x1337f001);
  }
  return lVar13;
}

