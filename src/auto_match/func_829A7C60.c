typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_8295D318();
extern int fn_8295FA70();
extern unsigned int uStack_44;


unsigned __int64 fn_829A7C60(int *param_1)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uStack_44;
  unsigned char auStack_40 [8];
  unsigned int auStack_38 [14];
  
  uVar5 = 0;
  uVar7 = *(unsigned int *)(param_1[0x41] + 0xc);
  if (uVar7 != 0) {
    iVar6 = 0;
    do {
      if ((**(unsigned int **)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar6) * 4 + param_1[5]) &
          0x2000000) == 0) break;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < uVar7);
  }
  if (uVar5 < uVar7) {
    iVar6 = param_1[0x41];
    uVar3 = 0xf;
  }
  else {
    iVar6 = param_1[0x41];
    if (*(unsigned short *)((int)param_1 + 0xca) < 0x200) {
      bVar2 = false;
      if (*(unsigned int *)(iVar6 + 4) < *(unsigned int *)(iVar6 + 0xc)) {
        uVar3 = (**(int (***)())(*param_1 + 0x154))(param_1,param_1[0x40],auStack_40,4,0,0);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uStack_44 = 0;
        uVar3 = fn_8295D318(param_1,0x4f,auStack_38,1,*(unsigned int *)(param_1[0x41] + 8),0,0,1
                                 );
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        iVar6 = param_1[0x41];
        uVar7 = 0;
        if (*(int *)(iVar6 + 0xc) != 0) {
          puVar4 = &uStack_44;
          do {
            uVar7 = uVar7 + 1;
            puVar4 = puVar4 + 1;
            *puVar4 = auStack_38[0];
          } while (uVar7 < *(unsigned int *)(iVar6 + 0xc));
        }
        uStack_44 = 0;
        uVar1 = *(unsigned int *)(param_1[0x41] + 0xc);
        uVar3 = fn_8295D318(param_1,1,*(unsigned int *)(param_1[0x41] + 0x10),uVar1,auStack_40,0
                                  ,0,uVar1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      else {
        uVar5 = 0;
        if (uVar7 != 0) {
          iVar6 = 0;
          do {
            if (*(int *)(*(int *)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar6) * 4 + param_1[5])
                        + 0x10) == 2) {
              uStack_44 = 0;
              uVar3 = fn_8295D318(param_1,0x4f,*(int *)(param_1[0x41] + 0x10) + iVar6,1,
                                        *(int *)(param_1[0x41] + 8) + iVar6,0,0,1);
            }
            else {
              if (!bVar2) {
                uVar3 = (**(int (***)())(*param_1 + 0x154))(param_1,param_1[0x40],auStack_40,4,0,0);
                if ((int)uVar3 < 0) {
                  return uVar3;
                }
                bVar2 = true;
              }
              uStack_44 = 0;
              uVar3 = fn_8295D318(param_1,0x4f,auStack_38,1,
                                        *(int *)(param_1[0x41] + 8) + iVar6,0,0,1);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              uStack_44 = 0;
              uVar3 = fn_8295D318(param_1,1,*(int *)(param_1[0x41] + 0x10) + iVar6,1,
                                        auStack_38,0,0,1);
            }
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (uVar5 < *(unsigned int *)(param_1[0x41] + 0xc));
        }
      }
      return 0;
    }
    uVar3 = 0x4f;
  }
  uVar3 = fn_8295FA70(param_1,uVar3,*(unsigned int *)(iVar6 + 0x10),*(unsigned int *)(iVar6 + 8),
                            *(unsigned int *)(iVar6 + 0xc),*(unsigned int *)(iVar6 + 4),0,0);
  return uVar3;
}

