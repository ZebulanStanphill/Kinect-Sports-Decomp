typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_829519E0(int param_1,int param_2,int *param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int *puVar1;
  bool bVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int *piVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  
  if ((param_4 & 0xffffffff) < 0x1f) {
    if (*(unsigned int *)(param_1 + 0x100) < *(unsigned int *)(param_1 + 0xc)) {
      do {
        puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18));
        uVar7 = *puVar1 & 0xfff00000;
        if ((uVar7 == 0x73400000) ||
           ((param_5 != 0 && ((uVar7 == 0x73100000 || (uVar7 == 0x73300000)))))) break;
        if ((uVar7 != 0x73000000) &&
           (((uVar7 != 0x73300000 && (uVar7 != 0x73100000)) && (uVar7 != 0x73200000))))
        goto LAB_82951bf0;
        iVar5 = 1;
        if ((uVar7 == 0x73100000) || (uVar7 == 0x73200000)) {
          iVar5 = 0;
        }
        bVar2 = false;
        if ((param_4 & 0xffffffff) == 0) {
LAB_82951ba4:
          if ((uVar7 == 0x73000000) || (uVar7 == 0x73200000)) {
            iVar3 = (int)((param_4 & 0x3fffffff) << 2);
            *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
            *(unsigned int *)(iVar3 + param_2 + 4) = *(unsigned int *)puVar1[4];
            *(int *)((int)param_3 + iVar3 + 4) = iVar5;
            fn_829519E0(param_1,param_2,param_3,param_4 + 1,0);
          }
        }
        else {
          uVar8 = param_4;
          piVar6 = param_3;
          do {
            piVar6 = piVar6 + 1;
            if ((*(int *)puVar1[4] == *(int *)((param_2 - (int)param_3) + (int)piVar6)) &&
               (*piVar6 == iVar5)) {
              bVar2 = true;
            }
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          if (!bVar2) goto LAB_82951ba4;
          if ((uVar7 == 0x73000000) || (uVar7 == 0x73200000)) {
            *puVar1 = 0;
          }
          else {
            *puVar1 = 0x73400000;
          }
          iVar5 = (int)((param_4 & 0x3fffffff) << 2);
          *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
          *(unsigned int *)(iVar5 + param_2 + 4) = *(unsigned int *)(iVar5 + param_2);
          *(unsigned int *)((int)param_3 + iVar5 + 4) = *(unsigned int *)(iVar5 + (int)param_3);
          fn_829519E0(param_1,param_2,param_3,param_4 + 1,1);
          puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18));
          uVar7 = *puVar1 & 0xfff00000;
          if (uVar7 == 0x73400000) {
            *puVar1 = 0;
          }
          else {
            if (uVar7 == 0x73100000) {
              uVar7 = 0x73200000;
            }
            else {
              if (uVar7 != 0x73300000) goto LAB_82951bf0;
              uVar7 = 0x73000000;
            }
            *puVar1 = uVar7 | 1;
          }
        }
LAB_82951bf0:
        if (*(unsigned int *)(param_1 + 0xc) <= *(unsigned int *)(param_1 + 0x100)) goto LAB_82951a08;
        uVar7 = **(unsigned int **)(*(unsigned int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18)) & 0xfff00000;
        if ((uVar7 == 0x73100000) || (uVar7 == 0x73300000)) {
          iVar5 = (int)((param_4 & 0xffffffff) << 2);
          *(unsigned int *)(iVar5 + (int)param_3) =
               (unsigned int)LZCOUNT(*(unsigned int *)(iVar5 + (int)param_3)) >> 5;
        }
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      } while (*(unsigned int *)(param_1 + 0x100) < *(unsigned int *)(param_1 + 0xc));
    }
    uVar4 = 0;
  }
  else {
LAB_82951a08:
    uVar4 = 0xffffffff80004005;
  }
  return uVar4;
}

