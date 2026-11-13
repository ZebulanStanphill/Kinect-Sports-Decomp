extern unsigned int *auStack_70;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8267C488();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern int fn_82687270();
extern int fn_826C62B8();
extern int fn_826C6368();
extern int fn_827249B8();
extern int fn_8278B290();
extern int fn_8278BC18();
extern int fn_8278D240();
extern int fn_8278D270();
extern int fn_8278D2E0();
extern int fn_8278D368();
extern int fn_8278DAD0();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82010C6C;
extern unsigned int uStack_3a;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_40;
extern unsigned int uStack_42;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_60;


void fn_827266E8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  unsigned int uVar3;
  float fVar4;
  int *piVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned short uVar10;
  unsigned short uVar11;
  int *piVar12;
  unsigned int auStack_70 [2];
  int *apiStack_68 [2];
  unsigned __int64 uStack_60;
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned short uStack_44;
  unsigned short uStack_42;
  unsigned short uStack_40;
  unsigned short uStack_3e;
  unsigned short uStack_3c;
  unsigned short uStack_3a;
  
  fn_8278DAD0(param_2);
  fn_8278BC18(param_3);
  if (*(short *)(param_1[0x27] + 0x1a) != 0) {
    fn_827249B8(apiStack_68,param_1[0x29],param_1[0x27] + 0x10);
    if (apiStack_68[0] == (int *)0x0) {
      lVar6 = (**(int (***)())(*param_1 + 0x94))(param_1);
      if (lVar6 != 0) {
        fn_8267C4C8(lVar6);
        uVar9 = 0xffffffff82010f08;
LAB_827267b8:
        fn_82683F88(lVar6 + 0xc,uVar9,*(unsigned short *)(param_1[0x27] + 0x1a),
                          *(unsigned short *)((int)param_1 + 0x12),
                          ((unsigned __int64)*(unsigned int *)(param_1[0x27] + 0x48) & 0xfffffffc) + 8);
        fn_8267C4F0(lVar6);
      }
    }
    else {
      uVar7 = (**(int (***)())(*apiStack_68[0] + 8))();
      piVar5 = apiStack_68[0];
      if ((uVar7 & 0xff00) == 0x200) {
        if (apiStack_68[0] == (int *)0x0) goto LAB_82726908;
        piVar12 = apiStack_68[0] + 3;
        uVar9 = (**(int (***)())(*(int *)apiStack_68[0][3] + 0x3c))();
        fn_8278D240(param_2,uVar9,0xffffffffffffffff);
        if ((*(unsigned short *)(param_1[0x27] + 0x50) >> 7 & 1) == 0) {
          fn_8278D2E0(param_2,*(unsigned int *)(*piVar12 + 0x14) >> 1 & 1);
          fn_8278D368(param_2,*(unsigned int *)(*piVar12 + 0x14) & 1);
          if ((*(unsigned char *)(param_1[0x27] + 0x50) & 1) == 0) {
            if (((~(unsigned __int64)*(unsigned int *)(*piVar12 + 0x14) & 0xffffffff) >> 6 & 1) != 0) {
              auStack_70[0] = 0x146;
              uVar7 = fn_8267BED0(param_1,0x1c,auStack_70);
              if ((uVar7 & 0xffffffff) == 0) {
                puVar8 = (unsigned int *)0x0;
              }
              else {
                puVar8 = (unsigned int *)fn_826C62B8(uVar7,0,piVar5,0,0,
                                                   *(unsigned int *)(param_1[0x29] + 0x2c));
              }
              fn_8278D270(param_2,puVar8);
              if (puVar8 != (unsigned int *)0x0) {
                uVar3 = *puVar8;
                *puVar8 = (unsigned int)((unsigned __int64)uVar3 - 1);
                if ((unsigned __int64)uVar3 - 1 == 0) {
                  fn_826C6368(puVar8);
                  fn_8267BE38(puVar8);
                }
              }
            }
          }
        }
      }
      else {
        lVar6 = (**(int (***)())(*param_1 + 0x94))(param_1);
        if (lVar6 != 0) {
          fn_8267C4C8(lVar6);
          uVar9 = 0xffffffff82010ea8;
          goto LAB_827267b8;
        }
      }
    }
    if (apiStack_68[0] != (int *)0x0) {
      fn_82687270();
    }
  }
LAB_82726908:
  uStack_60 = (__int64)*(float *)(param_1[0x27] + 0x2c);
  uVar10 = (unsigned short)uStack_60;
  if (0x10000 < (((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF)) {
    uVar10 = 0xffff;
  }
  uVar11 = *(unsigned short *)(param_2 + 0x2a);
  *(unsigned short *)(param_2 + 0x26) = uVar10;
  *(unsigned short *)(param_2 + 0x2a) = uVar11 | 8;
  *(unsigned int *)(param_2 + 0x20) = *(unsigned int *)(param_1[0x27] + 0x30);
  *(unsigned short *)(param_2 + 0x2a) = uVar11 & 0xfffe | 9;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_4c = 1;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  uStack_3a = 0;
  uVar3 = *(unsigned int *)(param_1[0x27] + 0x54);
  if (uVar3 == 0) {
    uVar11 = *(unsigned short *)(param_3 + 0x16) & 0xf9fe | 1;
  }
  else if (uVar3 == 1) {
    uVar11 = *(unsigned short *)(param_3 + 0x16) & 0xf9fe | 0x201;
  }
  else if (uVar3 < 3) {
    uVar11 = *(unsigned short *)(param_3 + 0x16) | 0x601;
  }
  else {
    if (uVar3 != 3) goto LAB_827269e0;
    uVar11 = *(unsigned short *)(param_3 + 0x16) & 0xf9fe | 0x401;
  }
  *(unsigned short *)(param_3 + 0x16) = uVar11;
LAB_827269e0:
  if ((*(unsigned short *)(param_1[0x27] + 0x50) >> 9 & 1) != 0) {
    uVar11 = *(unsigned short *)(param_3 + 0x16);
    fVar2 = *(float *)(param_1[0x27] + 0x38);
    *(unsigned short *)(param_3 + 0x16) = uVar11 | 0x10;
    fVar4 = lbl_82005718;
    *(short *)(param_3 + 0x12) = (short)(__int64)(fVar2 * lbl_82005718);
    fVar2 = *(float *)(param_1[0x27] + 0x3c);
    *(unsigned short *)(param_3 + 0x16) = uVar11 | 0x30;
    *(short *)(param_3 + 0x14) = (short)(__int64)(fVar2 * fVar4);
    fVar2 = *(float *)(param_1[0x27] + 0x40);
    *(unsigned short *)(param_3 + 0x16) = uVar11 | 0x34;
    *(short *)(param_3 + 0xe) = (short)(int)(fVar2 * fVar4);
    iVar1 = (int)(*(float *)(param_1[0x27] + 0x44) * fVar4);
    uStack_60 = (__int64)iVar1;
    *(short *)(param_3 + 0x10) = (short)iVar1;
    *(unsigned short *)(param_3 + 0x16) = uVar11 | 0x3c;
  }
  ppuStack_50 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_50);
  fn_8267C488(&ppuStack_50);
  return;
}

