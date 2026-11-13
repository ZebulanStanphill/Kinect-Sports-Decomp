typedef unsigned char bool;
#define false 0
extern int fn_82BE51E8();
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE56B0();
extern int fn_82BE5C30();
extern int fn_82BE5C78();
extern int fn_82BE5CC0();
extern int fn_82BE5D08();
extern int fn_82BE5F40();
extern int fn_82BE68A0();
extern int fn_82BE6950();
extern int fn_82BEB628();
extern int fn_82BF2DC8();
extern unsigned int lbl_820EBE90;
extern unsigned int lbl_831751CC;


bool fn_82BEBF38(int param_1)

{
  unsigned int uVar1;
  int iVar6;
  char cVar11;
  unsigned int uVar7;
  unsigned __int64 uVar2;
  unsigned char uVar12;
  unsigned short uVar10;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar8;
  unsigned int *puVar9;
  bool bVar13;
  char cVar14;
  
  *(unsigned int *)(param_1 + 0x20) = 0;
  cVar14 = '\0';
  iVar6 = fn_82BE68A0();
  if ((iVar6 == 0) || (cVar11 = fn_82BE5C30(param_1), cVar11 != -0x36)) {
LAB_82bebf60:
    bVar13 = false;
  }
  else {
    uVar7 = fn_82BE5CC0(param_1);
    iVar6 = *(int *)(param_1 + 0x20);
    cVar11 = '\0';
    if (uVar7 != 0) {
LAB_82bebfb0:
      cVar14 = cVar11;
      uVar2 = fn_82BE5C30(param_1);
      uVar1 = (unsigned int)uVar2 & 0xff;
      if (uVar1 < 0x49) {
        if (uVar1 == 0x48) {
          lVar3 = fn_82BE6950(param_1);
          if (lVar3 != 0) {
            uVar4 = fn_82BE56B0(0x1c);
            if ((uVar4 & 0xffffffff) == 0) goto LAB_82bec0d4;
            uVar2 = 3;
            goto LAB_82bec0c4;
          }
          goto LAB_82bebf60;
        }
        if (uVar1 == 0xd) {
          uVar10 = fn_82BE5C78(param_1);
          *(unsigned short *)(param_1 + 0x7a) = uVar10;
          *(unsigned int *)(param_1 + 0x7c) = 1;
        }
        else {
          if (uVar1 == 0x22) {
            lVar3 = fn_82BE6950(param_1);
            if (lVar3 == 0) goto LAB_82bebf60;
            uVar4 = fn_82BE56B0(0x1c);
            if ((uVar4 & 0xffffffff) != 0) {
              uVar2 = 5;
              goto LAB_82bec0c4;
            }
LAB_82bec0d4:
            uVar4 = 0;
          }
          else {
            if (uVar1 != 0x2d) {
              if (uVar1 == 0x3a) {
                uVar10 = fn_82BE5C78(param_1);
                *(unsigned short *)(param_1 + 0x78) = uVar10;
              }
              else if (uVar1 == 0x3b) {
                uVar2 = fn_82BE5D08(param_1);
                *(unsigned __int64 *)(param_1 + 0x70) = uVar2;
                cVar14 = cVar14 + '\x01';
              }
              else {
                if (uVar1 != 0x3f) goto LAB_82bec158;
                uVar12 = fn_82BE5C30(param_1);
                *(unsigned char *)(param_1 + 0x88) = uVar12;
                *(unsigned int *)(param_1 + 0x8c) = 1;
              }
              goto LAB_82bec27c;
            }
            lVar3 = fn_82BE6950(param_1);
            if (lVar3 == 0) goto LAB_82bebf60;
            uVar4 = fn_82BE56B0(0x1c);
            if ((uVar4 & 0xffffffff) == 0) goto LAB_82bec0d4;
            uVar2 = 4;
LAB_82bec0c4:
            uVar4 = fn_82BF2DC8(uVar4,lVar3,uVar2);
          }
          if ((uVar4 & 0xffffffff) == 0) goto LAB_82bebf60;
          uVar5 = fn_82BE56B0(0xc);
          if ((uVar5 & 0xffffffff) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = fn_82BEB628(uVar5,uVar4);
          }
          if (iVar8 == 0) goto LAB_82bec2a4;
          fn_82BE52B8(param_1 + 0x50);
          (*(int (**)())lbl_831751CC)(lVar3);
        }
      }
      else {
        if (uVar1 == 0x49) {
          puVar9 = (unsigned int *)fn_82BE56B0(0x18,uVar2);
          if (puVar9 != (unsigned int *)0x0) {
            uVar10 = fn_82BE5C78(param_1);
            fn_82BE51E8(puVar9,0xffffffff820eafa0);
            uVar12 = 3;
            goto LAB_82bec22c;
          }
LAB_82bec23c:
          puVar9 = (unsigned int *)0x0;
        }
        else {
          if (uVar1 == 0x4a) {
            puVar9 = (unsigned int *)fn_82BE56B0(0x18,uVar2);
            if (puVar9 == (unsigned int *)0x0) goto LAB_82bec23c;
            uVar10 = fn_82BE5C78(param_1);
            fn_82BE51E8(puVar9,0xffffffff820eafa0);
            uVar12 = 4;
          }
          else {
            if (uVar1 != 0x4b) {
              if (uVar1 == 0x54) {
                uVar12 = fn_82BE5C30(param_1);
                *(unsigned char *)(param_1 + 0x80) = uVar12;
                *(unsigned int *)(param_1 + 0x84) = 1;
              }
              else if (uVar1 == 0x56) {
                uVar12 = fn_82BE5C30(param_1);
                *(unsigned char *)(param_1 + 0x90) = uVar12;
                *(unsigned int *)(param_1 + 0x94) = 1;
              }
              else {
                if (uVar1 != 0x57) {
LAB_82bec158:
                  iVar8 = fn_82BE5F40(param_1);
                  if (iVar8 != 0) goto LAB_82bec27c;
                  goto LAB_82bebf60;
                }
                fn_82BE5C30(param_1);
              }
              goto LAB_82bec27c;
            }
            puVar9 = (unsigned int *)fn_82BE56B0(0x18,uVar2);
            if (puVar9 == (unsigned int *)0x0) goto LAB_82bec23c;
            uVar10 = fn_82BE5C78(param_1);
            fn_82BE51E8(puVar9,0xffffffff820eafa0);
            uVar12 = 5;
          }
LAB_82bec22c:
          *(unsigned short *)((int)puVar9 + 0x16) = uVar10;
          *(unsigned char *)(puVar9 + 5) = uVar12;
          *puVar9 = &lbl_820EBE90;
        }
        if (puVar9 == (unsigned int *)0x0) goto LAB_82bebf60;
        uVar4 = fn_82BE56B0(0xc);
        if ((uVar4 & 0xffffffff) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = fn_82BEB628(uVar4,puVar9);
        }
        if (iVar8 == 0) {
LAB_82bec2a4:
          fn_82BE5240(param_1,0x65,0xffffffff820eafd8);
          *(unsigned int *)(param_1 + 0x10) = 0;
          return false;
        }
        fn_82BE52B8(param_1 + 0x60);
      }
LAB_82bec27c:
      cVar11 = cVar14;
      if (uVar7 <= (unsigned int)(*(int *)(param_1 + 0x20) - iVar6)) goto LAB_82bec28c;
      goto LAB_82bebfb0;
    }
LAB_82bec28c:
    bVar13 = cVar14 == '\x01';
  }
  return bVar13;
}

