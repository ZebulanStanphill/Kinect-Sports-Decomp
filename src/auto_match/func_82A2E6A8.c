extern unsigned int *auStack_8c;
extern int fn_82A2BAF0();
extern int fn_82A2C6F8();
extern int fn_82A2DC18();
extern int iRam83219d14;
extern int iRam83219d18;
extern unsigned int iStack_90;


unsigned __int64
fn_82A2E6A8(int param_1,int param_2,unsigned int param_3,int *param_4,int *param_5,unsigned int *param_6)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  int iStack_90;
  unsigned char auStack_8c [140];
  
  uVar8 = param_3 & 0xfffff000;
  param_3 = param_3 & 0xfff;
  iRam83219d14 = iRam83219d14 + 1;
  if (uVar8 < *(unsigned int *)(param_2 + 0x14)) {
    if (param_6 != (unsigned int *)0x0) {
      *param_6 = 0;
    }
    uVar11 = *(unsigned int *)(param_2 + 0x28);
    uVar14 = *(unsigned int *)(param_2 + 0x2c);
    uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30);
    if ((uVar8 < uVar11) || (uVar14 + uVar11 <= uVar8)) {
      if (uVar8 == 0) {
        iVar3 = *(int *)(param_2 + 0x20);
      }
      else if ((uVar8 + 0x1000 != *(int *)(param_2 + 0x14)) ||
              (iVar3 = *(int *)(param_2 + 0x24), iVar3 == -1)) {
        if (uVar11 < uVar8) {
          uVar7 = (uVar14 + uVar11) - 0x1000;
          uVar15 = ((uVar14 >> 0xc) + uVar9) - 1;
        }
        else {
          uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x20);
          uVar7 = 0;
          uVar11 = 0;
          uVar14 = 0x1000;
          uVar15 = uVar9;
        }
        iVar3 = 0;
        iStack_90 = 0;
        uVar4 = 0;
        do {
          uVar13 = uVar7;
          iRam83219d18 = iRam83219d18 + 1;
          lVar12 = uVar15 + ((uVar15 & 0xffffffff) / 0xaa) * -0xaa;
          uVar10 = uVar15 - lVar12;
          if (iVar3 == 0) {
LAB_82a2e844:
            iVar3 = fn_82A2BAF0(param_1,uVar10,1,&iStack_90,auStack_8c);
            uVar4 = uVar10;
            if (iVar3 == 0) {
              if (param_6 != (unsigned int *)0x0) {
                *param_6 = 1;
              }
              uVar1 = fn_82A2DC18(param_1,uVar10,0,&iStack_90);
              iVar3 = iStack_90;
              if ((int)uVar1 < 0) {
                return uVar1;
              }
            }
            else {
              iVar3 = iStack_90;
              if (param_6 != (unsigned int *)0x0) {
                *param_6 = 0;
              }
            }
          }
          else if ((uVar10 & 0xffffffff) != (uVar4 & 0xffffffff)) {
            uVar7 = iVar3 - *(int *)(param_1 + 0x34);
            iVar3 = (((int)uVar7 >> 0xc) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 0xfff) != 0)) * 8 +
                    *(int *)(param_1 + 0x30);
            *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + -1;
            goto LAB_82a2e844;
          }
          uVar6 = (unsigned __int64)*(unsigned int *)((int)lVar12 * 0x18 + iVar3 + 0x14) & 0xffffff;
          if (*(unsigned int *)(param_1 + 0x9c) <= uVar6) {
            uVar1 = 0xffffffffc0000032;
            goto LAB_82a2e974;
          }
          uVar7 = uVar13 + 0x1000;
          if (uVar6 == (uVar15 + 1 & 0xffffffff)) {
            uVar14 = uVar14 + 0x1000;
          }
          else {
            uVar14 = 0x1000;
            uVar9 = uVar6;
            uVar11 = uVar7;
          }
          uVar15 = uVar6;
        } while (uVar7 != uVar8);
        *param_4 = (int)uVar6;
        for (iVar5 = uVar13 + 0x2000; iVar5 != *(int *)(param_2 + 0x14); iVar5 = iVar5 + 0x1000) {
          if (((0xa8 < (uVar6 - uVar10 & 0xffffffff)) ||
              (uVar15 = (unsigned __int64)*(unsigned int *)((int)(uVar6 - uVar10) * 0x18 + iVar3 + 0x14) & 0xffffff
              , *(unsigned int *)(param_1 + 0x9c) <= uVar15)) || (uVar15 != uVar6 + 1)) goto LAB_82a2e958;
          uVar14 = uVar14 + 0x1000;
          uVar6 = uVar15;
        }
        *(int *)(param_2 + 0x24) = (int)uVar6;
LAB_82a2e958:
        *(unsigned int *)(param_2 + 0x28) = uVar11;
        *(unsigned int *)(param_2 + 0x2c) = uVar14;
        uVar1 = 0;
        *(int *)(param_2 + 0x30) = (int)uVar9;
        *param_5 = (iVar5 - param_3) - uVar8;
LAB_82a2e974:
        if (iVar3 == 0) {
          return uVar1;
        }
        uVar8 = iVar3 - *(int *)(param_1 + 0x34);
        iVar3 = (((int)uVar8 >> 0xc) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + -1;
        return uVar1;
      }
      *param_4 = iVar3;
      uVar1 = 0;
      *param_5 = 0x1000 - param_3;
    }
    else {
      *param_4 = (uVar8 - uVar11 >> 0xc) + *(unsigned int *)(param_2 + 0x30);
      *param_5 = (uVar14 - (uVar8 - uVar11)) - param_3;
      if (param_6 != (unsigned int *)0x0) {
        uVar2 = fn_82A2C6F8(param_1,*param_4);
        *param_6 = (unsigned int)LZCOUNT(uVar2) >> 5;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffffc0000011;
  }
  return uVar1;
}

