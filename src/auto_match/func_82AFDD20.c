#define true 1
extern int fn_82AA6648();
extern int fn_82ABDBE8();
extern int fn_82ABE250();
extern int fn_82ABE5F8();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD6090();
extern int fn_82AF5618();
extern int fn_82B82D28();
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


void fn_82AFDD20(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  char cVar10;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int *puVar11;
  unsigned int uVar12;
  int *piVar13;
  struct { int first; unsigned int second; } stack_pair_80;

  int aiStack_78;
  
  puVar6 = (unsigned int *)fn_82ABE250(param_1,8,0x1c);
  puVar5 = puVar6 + 1;
  puVar6[1] = (unsigned int)puVar6 | 1;
  *puVar6 = (unsigned int)puVar5 | 1;
  do {
    piVar13 = (int *)(param_2 + 0x2c);
    for (uVar12 = 0; uVar12 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7); uVar12 = uVar12 + 1) {
      iVar9 = *piVar13;
      fn_82B82D28(iVar9,param_3,&stack_pair_80.first,&stack_pair_80.second,&aiStack_78,
                        *(unsigned int *)(param_2 + 0x1c),0,1);
      iVar7 = stack_pair_80.first;
      cVar10 = fn_82AF5618(stack_pair_80.first);
      iVar2 = aiStack_78;
      if ((cVar10 != '\0') || ((*(unsigned int *)(iVar7 + 8) & 0x3f80) == 0x3800)) {
        uVar1 = *(unsigned int *)(iVar7 + 8);
        if (((uVar1 & 0x3f80) == 0x180) &&
           ((aiStack_78 == 0 &&
            (cVar10 = fn_82ABDBE8(*(unsigned int *)(iVar7 + 0x2c),*(unsigned int *)(iVar7 + 0x30)),
            cVar10 == '\0')))) {
          if ((uVar1 >> 0x1a & 1) != 0) goto LAB_82afdfb4;
          if (((int)param_3 == 0) && (iVar7 == *(int *)(iVar9 + 0xc))) {
            if ((*puVar5 & 1) == 0) {
              uVar1 = *puVar6 & 0xfffffffe;
              iVar7 = uVar1 - 4;
              if ((iVar7 == 0) || (*(unsigned int *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
              goto LAB_82afde40;
            }
            else {
LAB_82afde40:
              iVar7 = fn_82AD6090(puVar6,1);
            }
            iVar2 = *(int *)(iVar7 + 8);
            *(int *)(iVar7 + 8) = iVar2 + 1;
            *(int *)((iVar2 + 4) * 4 + iVar7) = iVar9;
          }
          else {
            uVar8 = fn_82AD18C0(param_1,iVar7,stack_pair_80.second);
            if ((*puVar5 & 1) == 0) {
              uVar1 = *puVar6 & 0xfffffffe;
              iVar9 = uVar1 - 4;
              if ((iVar9 == 0) || (*(unsigned int *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
              goto LAB_82afdeac;
            }
            else {
LAB_82afdeac:
              iVar9 = fn_82AD6090(puVar6,1);
            }
            iVar7 = *(int *)(iVar9 + 8);
            *(int *)(iVar9 + 8) = iVar7 + 1;
            *(unsigned int *)((iVar7 + 4) * 4 + iVar9) = uVar8;
          }
          *(unsigned int *)(stack_pair_80.first + 8) = *(unsigned int *)(stack_pair_80.first + 8) | 0x4000000;
        }
        else if (iVar7 == *(int *)(iVar9 + 0xc)) {
          if ((param_4[1] & 1) == 0) {
            uVar1 = *param_4 & 0xfffffffe;
            iVar7 = uVar1 - 4;
            if ((iVar7 == 0) || (*(unsigned int *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
            goto LAB_82afdf20;
          }
          else {
LAB_82afdf20:
            iVar7 = fn_82AD6090(param_4,1);
          }
          iVar2 = *(int *)(iVar7 + 8);
          *(int *)(iVar7 + 8) = iVar2 + 1;
          *(int *)((iVar2 + 4) * 4 + iVar7) = iVar9;
        }
        else {
          uVar8 = fn_82AD1918(param_1,iVar7,stack_pair_80.second,iVar2);
          if ((param_4[1] & 1) == 0) {
            uVar1 = *param_4 & 0xfffffffe;
            iVar9 = uVar1 - 4;
            if ((iVar9 == 0) || (*(unsigned int *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
            goto LAB_82afdf90;
          }
          else {
LAB_82afdf90:
            iVar9 = fn_82AD6090(param_4,1);
          }
          iVar7 = *(int *)(iVar9 + 8);
          *(int *)(iVar9 + 8) = iVar7 + 1;
          *(unsigned int *)((iVar7 + 4) * 4 + iVar9) = uVar8;
        }
      }
LAB_82afdfb4:
      piVar13 = piVar13 + 1;
    }
    if (((*puVar5 & 1) != 0) || (*puVar5 == 0)) {
      *puVar6 = *(unsigned int *)(param_1 + 0x3d0);
      *(unsigned int **)(param_1 + 0x3d0) = puVar6;
      for (uVar12 = *(unsigned int *)(*(int *)(param_2 + 0x1c) + 0x1c); ((uVar12 & 1) == 0 && (uVar12 != 0))
          ; uVar12 = *(unsigned int *)((uVar12 & 0xfffffffe) + 0x28)) {
        if ((*(unsigned int *)(uVar12 + 8) >> 0x1a & 1) != 0) {
          *(unsigned int *)(uVar12 + 8) = *(unsigned int *)(uVar12 + 8) & 0xfbffffff;
        }
      }
      return;
    }
    puVar3 = (unsigned int *)(*puVar6 & 0xfffffffe);
    puVar11 = puVar3 + -1;
    uVar12 = puVar3[1] - 1;
    puVar4 = (unsigned int *)puVar11[puVar3[1] + 3];
    puVar3[1] = uVar12;
    if (uVar12 == 0) {
      *(unsigned int *)(*puVar3 & 0xfffffffe) = *puVar11;
      *(unsigned int *)(*puVar11 & 0xfffffffe) = *puVar3;
      fn_82AA6648(puVar6,puVar11,((unsigned __int64)puVar3[2] + 4 & 0x3fffffff) << 2);
    }
    param_2 = puVar4[3];
    param_3 = (unsigned __int64)(*puVar4 >> 5) & 3;
    if (puVar4[4] == 0) {
      puVar11 = (unsigned int *)(param_2 + 4);
      for (puVar3 = *(unsigned int **)(param_2 + 4); puVar3 != puVar4; puVar3 = (unsigned int *)puVar3[2]) {
        puVar11 = puVar3 + 2;
      }
      *puVar11 = puVar3[2];
      fn_82ABE5F8(param_1,puVar4,0x14,0x1a);
    }
  } while( true );
}

