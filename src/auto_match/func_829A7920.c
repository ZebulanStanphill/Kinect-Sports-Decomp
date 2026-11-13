typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_8295D318();
extern int fn_8295FA70();
extern unsigned int uStack_44;


unsigned __int64 fn_829A7920(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uStack_44;
  unsigned char auStack_40 [8];
  unsigned int auStack_38 [14];
  
  uVar7 = 0;
  uVar9 = *(unsigned int *)(param_1[0x41] + 0xc);
  if (uVar9 != 0) {
    iVar8 = 0;
    do {
      if ((**(unsigned int **)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar8) * 4 + param_1[5]) &
          0x2000000) == 0) break;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < uVar9);
  }
  if (uVar7 < uVar9) {
    iVar8 = param_1[0x41];
    uVar5 = 0xe;
  }
  else {
    iVar8 = param_1[0x41];
    if (*(unsigned short *)((int)param_1 + 0xca) < 0x200) {
      bVar4 = false;
      if (*(unsigned int *)(iVar8 + 4) < *(unsigned int *)(iVar8 + 0xc)) {
        uVar5 = (**(int (***)())(*param_1 + 0x154))(param_1,param_1[0x40],auStack_40,4,0,0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uStack_44 = 0;
        uVar5 = fn_8295D318(param_1,0x4e,auStack_38,1,*(unsigned int *)(param_1[0x41] + 8),0,0,1
                                 );
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        iVar8 = param_1[0x41];
        uVar9 = 0;
        if (*(int *)(iVar8 + 0xc) != 0) {
          puVar6 = &uStack_44;
          do {
            uVar9 = uVar9 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = auStack_38[0];
          } while (uVar9 < *(unsigned int *)(iVar8 + 0xc));
        }
        uStack_44 = 0;
        uVar1 = *(unsigned int *)(param_1[0x41] + 0xc);
        uVar5 = fn_8295D318(param_1,1,*(unsigned int *)(param_1[0x41] + 0x10),uVar1,auStack_40,0
                                  ,0,uVar1);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      else {
        uVar7 = 0;
        if (uVar9 != 0) {
          iVar8 = 0;
          do {
            puVar3 = *(unsigned int **)(*(int *)(*(int *)(param_1[0x41] + 8) + iVar8) * 4 + param_1[5]);
            iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar8) * 4 +
                                     param_1[5]) + 0x10);
            if ((((iVar2 == 0) && ((*puVar3 & 2) != 0)) || (iVar2 == 2)) ||
               (((iVar2 == 3 && (uVar9 = *puVar3, (uVar9 & 4) != 0)) && ((uVar9 & 8) != 0)))) {
              uStack_44 = 0;
              uVar5 = fn_8295D318(param_1,0x4e,*(int *)(param_1[0x41] + 0x10) + iVar8,1,
                                        *(int *)(param_1[0x41] + 8) + iVar8,0,0,1);
            }
            else {
              if (!bVar4) {
                uVar5 = (**(int (***)())(*param_1 + 0x154))(param_1,param_1[0x40],auStack_40,4,0,0);
                if ((int)uVar5 < 0) {
                  return uVar5;
                }
                bVar4 = true;
              }
              uStack_44 = 0;
              uVar5 = fn_8295D318(param_1,0x4e,auStack_38,1,
                                        *(int *)(param_1[0x41] + 8) + iVar8,0,0,1);
              if ((int)uVar5 < 0) {
                return uVar5;
              }
              uStack_44 = 0;
              uVar5 = fn_8295D318(param_1,1,*(int *)(param_1[0x41] + 0x10) + iVar8,1,
                                        auStack_38,0,0,1);
            }
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar7 < *(unsigned int *)(param_1[0x41] + 0xc));
        }
      }
      return 0;
    }
    uVar5 = 0x4e;
  }
  uVar5 = fn_8295FA70(param_1,uVar5,*(unsigned int *)(iVar8 + 0x10),*(unsigned int *)(iVar8 + 8),
                            *(unsigned int *)(iVar8 + 0xc),*(unsigned int *)(iVar8 + 4),0,0);
  return uVar5;
}

