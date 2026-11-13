#define true 1
extern unsigned int *auStack_80;
extern int fn_82AB15D0();
extern int fn_82B7F830();
extern int fn_82B9CF38();
extern int fn_82B9D1D8();
extern int fn_82B9D5A8();
extern unsigned int iStack_90;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


void fn_82B6EC28(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int param_5)

{
  char cVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  int *piVar11;
  int iStack_a0;
  int iStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  int iStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned char auStack_80 [4];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_6c;
  unsigned int uStack_64;
  unsigned int uStack_60;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iStack_a0 = 0;
  fn_82B9D5A8(*(unsigned int *)(param_1 + 0x14),param_3,&iStack_a0,
                    *(unsigned int *)(param_1 + 0xc),0,0);
  fn_82B9CF38(*(unsigned int *)(param_1 + 0x14),param_3,auStack_80,
                    *(unsigned int *)(param_1 + 0xc),0,0);
  fn_82B9D1D8(*(unsigned int *)(param_1 + 0x14),param_3,0,&iStack_9c,
                  *(unsigned int *)(param_1 + 0xc),0,0);
  fn_82B7F830(*(unsigned int *)(param_1 + 0x10),**(unsigned int **)(param_1 + 0x1c),1,param_3,
                  &uStack_98,&uStack_94);
  if (iStack_a0 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da45c,0xffffffff820da3b8,0x4f8);
  }
  puVar3 = *(unsigned int **)(iVar2 + 0x2ef8);
  param_5 = param_5 & 3;
  uVar6 = ((param_4 & 0x3f) << 7 | param_2 & 0x3f) << 0xe;
  uVar4 = *puVar3;
  uVar10 = 0;
  piVar11 = &iStack_90;
  *puVar3 = uVar6 | uVar4 & 0xffc | param_5 | 0x1000;
  uVar5 = (uStack_98 & 0x1f) << 7;
  *puVar3 = uVar5 | uVar6 | uVar4 & 0x7c | param_5 | 0x1000;
  *puVar3 = (uStack_94 & 3) << 5 | uVar5 | uVar6 | uVar4 & 0x1c | param_5 | 0x1000;
  *(char *)(puVar3 + 2) = (char)((int)uStack_64 >> 2) + ((int)uStack_64 < 0 && (uStack_64 & 3) != 0)
  ;
  puVar3[1] = puVar3[1] & 0xfffffcfd;
  *puVar3 = *puVar3 & 0xffffffe3 | 0xc;
  puVar3[2] = (((int)uStack_60 >> 2) + (unsigned int)((int)uStack_60 < 0 && (uStack_60 & 3) != 0)) * 2 &
              0xfffffe | puVar3[2] & 0xff000001;
  iVar7 = iStack_9c;
  do {
    cVar1 = *(char *)(uVar10 + iVar7);
    if (cVar1 == '0') {
      iVar9 = 4;
LAB_82b6ee54:
      *piVar11 = iVar9;
    }
    else {
      if (cVar1 == '1') {
        iVar9 = 5;
        goto LAB_82b6ee54;
      }
      if (cVar1 == '_') {
        iVar9 = 7;
        goto LAB_82b6ee54;
      }
      if (cVar1 == 'w') {
        *piVar11 = 3;
      }
      else {
        if (cVar1 != 'x') {
          if (cVar1 == 'y') {
            iVar9 = 1;
          }
          else if (cVar1 == 'z') {
            iVar9 = 2;
          }
          else {
            if ('\a' < cVar1) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da448,0xffffffff820da3b8,0x52c);
              iVar7 = iStack_9c;
            }
            iVar9 = (int)*(char *)(uVar10 + iVar7);
          }
          goto LAB_82b6ee54;
        }
        *piVar11 = 0;
      }
    }
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 1;
    if (3 < uVar10) {
      uVar4 = puVar3[1];
      uVar10 = iStack_90 << 0x1d;
      uVar8 = (((uStack_8c & 7) << 3 | uStack_88 & 7) << 3 | uStack_84 & 7) << 0x14;
      puVar3[1] = uVar8 | uVar10 | uVar4 & 0xfffff;
      uVar6 = (uStack_7c & 1) << 0x13;
      puVar3[1] = uVar6 | uVar8 | uVar10 | uVar4 & 0x7ffff;
      uVar5 = (uStack_78 & 1) << 0x12;
      puVar3[1] = uVar5 | uVar6 | uVar8 | uVar10 | uVar4 & 0x3ffff;
      puVar3[1] = (uStack_6c & 0x3f) << 10 | uVar5 | uVar6 | uVar8 | uVar10 | uVar4 & 0x303ff;
      if (100 < *(unsigned int *)(iVar2 + 0x2a44)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da418,0xffffffff820da3b8,0x53a);
      }
      *(int *)(iVar2 + 0x2ef8) = *(int *)(iVar2 + 0x2ef8) + 0xc;
      *(int *)(iVar2 + 0x2a44) = *(int *)(iVar2 + 0x2a44) + 1;
      return;
    }
  } while( true );
}

