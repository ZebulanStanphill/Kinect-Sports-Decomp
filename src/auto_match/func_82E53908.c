extern unsigned int *auStack_80;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E531C8();
extern int fn_82F68CC0();
extern unsigned int uStack_68;
extern unsigned int uStack_6a;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64 fn_82E53908(int param_1,int *param_2)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned int auStack_80 [4];
  unsigned int uStack_70;
  unsigned short uStack_6c;
  unsigned short uStack_6a;
  unsigned __int64 uStack_68;
  
  uVar7 = 0;
  if (param_2 == (int *)0x0) {
    uVar7 = 0xffffffff80004003;
  }
  else if (*(int *)(param_1 + 0x108) != 0) {
    uVar8 = 0;
    uVar5 = 0;
    do {
      lVar2 = fn_82E531C8(param_1 + 0xa0,uVar8,auStack_80);
      uVar4 = -(unsigned int)(lVar2 != 0) & auStack_80[0];
      if (uVar4 == 0) {
        return 0xffffffff8000ffff;
      }
      uVar4 = *(int *)(uVar4 + 0x14) + 0x16 + uVar5;
      if (uVar4 < uVar5) {
        return 0xffffffff8000ffff;
      }
      uVar8 = uVar8 + 1;
      uVar5 = uVar4;
    } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x108));
    iVar3 = fn_82E50BE8(uVar4,0,0,0,0);
    if (iVar3 == 0) {
      uVar7 = 0xffffffff8007000e;
    }
    else {
      uVar8 = 0;
      if (*(int *)(param_1 + 0x108) != 0) {
        iVar9 = iVar3;
        do {
          lVar2 = fn_82E531C8(param_1 + 0xa0,uVar8,auStack_80);
          pbVar6 = (unsigned char *)(-(unsigned int)(lVar2 != 0) & auStack_80[0]);
          if (pbVar6 == (unsigned char *)0x0) {
            uVar7 = 0xffffffff8007000e;
            goto LAB_82e53ae0;
          }
          if (uVar5 < 0x16) {
LAB_82e53af4:
            uVar7 = 0xffffffff8000ffff;
            goto LAB_82e53ae0;
          }
          uStack_70 = (unsigned int)pbVar6[3] << 0x18 | (unsigned int)pbVar6[2] << 0x10 | (unsigned int)pbVar6[1] << 8 |
                      (unsigned int)*pbVar6;
          uStack_68 = *(unsigned __int64 *)(pbVar6 + 8);
          uStack_6c = *(unsigned short *)(pbVar6 + 4) << 8 | *(unsigned short *)(pbVar6 + 4) >> 8;
          uStack_6a = *(unsigned short *)(pbVar6 + 6) << 8 | *(unsigned short *)(pbVar6 + 6) >> 8;
          fn_82F68CC0(iVar9,&uStack_70,0x10);
          *(unsigned short *)(iVar9 + 0x10) =
               *(unsigned short *)(pbVar6 + 0x10) << 8 | *(unsigned short *)(pbVar6 + 0x10) >> 8;
          *(unsigned int *)(iVar9 + 0x12) =
               (unsigned int)pbVar6[0x17] << 0x18 | (unsigned int)pbVar6[0x16] << 0x10 | (unsigned int)pbVar6[0x15] << 8 |
               (unsigned int)pbVar6[0x14];
          if (uVar5 - 0x16 < *(unsigned int *)(pbVar6 + 0x14)) goto LAB_82e53af4;
          if (*(unsigned int *)(pbVar6 + 0x14) != 0) {
            fn_82F68CC0(iVar9 + 0x16,*(unsigned int *)(pbVar6 + 0x18));
          }
          iVar1 = *(int *)(pbVar6 + 0x14);
          uVar8 = uVar8 + 1;
          iVar9 = iVar1 + iVar9 + 0x16;
          uVar5 = (uVar5 - 0x16) - iVar1;
        } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x108));
      }
      uVar7 = (**(int (***)())(*param_2 + 0x68))(param_2,0xffffffff8214c730,iVar3,uVar4);
LAB_82e53ae0:
      fn_82E4FE40(iVar3);
    }
  }
  return uVar7;
}

