typedef unsigned char bool;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82F72318();
extern int fn_82F727A0();
extern int fn_82F72D78();
extern int fn_82F73228();
extern int fn_82F73368();
extern int fn_82F735D8();
extern int fn_82F73928();
extern int fn_82F73988();
extern int fn_82F739E8();
extern int fn_82F73D20();
extern int fn_82F73E68();
extern int fn_82F75CD0();
extern int fn_82F76E68();
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


unsigned __int64 * fn_82F771C8(unsigned __int64 *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  unsigned __int64 *puVar4;
  unsigned __int64 uVar3;
  unsigned __int64 *puVar5;
  unsigned __int64 *puVar6;
  int iVar7;
  unsigned char uVar10;
  char *pcVar9;
  unsigned __int64 uVar8;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned __int64 uStack_80;
  unsigned __int64 uStack_78;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [8];
  unsigned char auStack_58 [88];
  
  cVar2 = *lbl_832635C0;
  pcVar9 = lbl_832635C0;
  if ((__int64)cVar2 == 0) goto LAB_82f771f4;
  if ((('5' < cVar2) && (cVar2 < ':')) || (cVar2 == '_')) {
    uVar11 = (__int64)cVar2 - 0x36;
    pcVar9 = lbl_832635C0 + 1;
    iVar7 = (int)uVar11;
    if (iVar7 == 0x29) {
      if ((__int64)*pcVar9 == 0) goto LAB_82f771f4;
      uVar11 = (__int64)*pcVar9 - 0x3d;
      lbl_832635C0 = lbl_832635C0 + 2;
      if (3 < (int)uVar11) {
        bVar1 = 7 < (int)uVar11;
        goto LAB_82f77270;
      }
LAB_82f77274:
      uVar11 = 0xffffffffffffffff;
    }
    else {
      lbl_832635C0 = pcVar9;
      if (iVar7 < 0) goto LAB_82f77274;
      bVar1 = 3 < iVar7;
LAB_82f77270:
      if (bVar1) goto LAB_82f77274;
    }
    if ((int)uVar11 != -1) {
      uStack_80 = *(unsigned __int64 *)param_2;
      uVar12 = (((unsigned __int64)(uStack_78) >> 32) & 0xFFFFFFFF) & 0xffff;
      uStack_78 = uStack_78 & 0xffff;
      if ((uVar11 & 2) != 0) {
        puVar4 = (unsigned __int64 *)fn_82F739E8(&uStack_70,0xffffffff8214b5d8,&uStack_80);
        uStack_80 = *puVar4;
        if (*lbl_832635C0 == '\0') {
          puVar4 = (unsigned __int64 *)fn_82F73988(auStack_58,1,&uStack_80);
          uStack_80 = *puVar4;
        }
        else {
          uVar3 = fn_82F76E68(auStack_60);
          puVar4 = (unsigned __int64 *)fn_82F73928(auStack_58,0x20,uVar3);
          uStack_70 = *puVar4;
          fn_82F73228(&uStack_70,&uStack_80);
          uStack_80 = uStack_70;
        }
        if (*lbl_832635C0 == '\0') {
          param_2 = (int *)&uStack_80;
          pcVar9 = lbl_832635C0;
LAB_82f771f4:
          lbl_832635C0 = pcVar9;
          fn_82F73988(param_1,1,param_2);
          return param_1;
        }
        if (*lbl_832635C0 != '@') goto LAB_82f77220;
        lbl_832635C0 = lbl_832635C0 + 1;
        if ((lbl_832635D0 & 0x60) == 0x60) {
          iVar7 = fn_82F727A0(auStack_58);
          if ('\x01' < *(char *)(iVar7 + 4)) {
            uStack_78 = CONCAT44((((unsigned __int64)(uStack_78) >> 0) & 0xFFFFFFFF),(int)*(char *)(iVar7 + 4) << 0x18 | uVar12);
          }
        }
        else {
          puVar5 = (unsigned __int64 *)fn_82F727A0(auStack_58);
          uStack_78 = *puVar5;
        }
      }
      if ((uVar11 & 4) == 0) {
LAB_82f773b8:
        uVar12 = (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF);
      }
      else {
        if (((~(unsigned __int64)lbl_832635D0 & 0xffffffff) >> 1 & 1) != 0) {
          uVar3 = fn_82F75CD0(auStack_58);
          puVar4 = (unsigned __int64 *)fn_82F73928(auStack_60,0x20,uVar3);
          uStack_70 = *puVar4;
          fn_82F73228(&uStack_70,&uStack_80);
          uStack_80 = uStack_70;
          goto LAB_82f773b8;
        }
        iVar7 = fn_82F75CD0(auStack_58);
        uVar12 = (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF);
        if ((((((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF) & 0xff000000) != 0x3000000) && ('\x01' < *(char *)(iVar7 + 4))) {
          uVar12 = (int)*(char *)(iVar7 + 4) << 0x18 | (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF) & 0xffffff;
          uStack_80 = CONCAT44((((unsigned __int64)(uStack_80) >> 0) & 0xFFFFFFFF),uVar12);
        }
      }
      if (((~(unsigned __int64)lbl_832635D0 & 0xffffffff) >> 1 & 1) == 0) {
        iVar7 = fn_82F73368(auStack_58);
        if (((uVar12 & 0xff000000) != 0x3000000) && ('\x01' < *(char *)(iVar7 + 4))) {
          uStack_80 = CONCAT44((((unsigned __int64)(uStack_80) >> 0) & 0xFFFFFFFF),(int)*(char *)(iVar7 + 4) << 0x18 | uVar12 & 0xffffff
                              );
        }
      }
      else {
        puVar4 = (unsigned __int64 *)fn_82F73368(auStack_58);
        uStack_70 = *puVar4;
        fn_82F73228(&uStack_70,&uStack_80);
        uStack_80 = uStack_70;
      }
      if (*param_2 != 0) {
        puVar4 = (unsigned __int64 *)fn_82F73928(auStack_58,0x28,&uStack_80);
        uStack_70 = *puVar4;
        fn_82F735D8(&uStack_70,0x29);
        uStack_80 = uStack_70;
      }
      puVar4 = (unsigned __int64 *)fn_82F72318(0xffffffff832635a0,8,0);
      if (puVar4 == (unsigned __int64 *)0x0) {
        puVar4 = (unsigned __int64 *)0x0;
      }
      else {
        *(unsigned int *)puVar4 = 0;
        *(unsigned char *)((int)puVar4 + 4) = 0;
        *(unsigned char *)((int)puVar4 + 5) = 0;
      }
      fn_82F72D78(&uStack_68,puVar4);
      uVar3 = fn_82F73D20(auStack_58);
      puVar6 = (unsigned __int64 *)fn_82F73928(auStack_60,0x28,uVar3);
      uStack_70 = *puVar6;
      fn_82F735D8(&uStack_70,0x29);
      fn_82F73228(&uStack_80,&uStack_70);
      uVar8 = (unsigned __int64)lbl_832635D0;
      if (((lbl_832635D0 & 0x60) != 0x60) && ((int)(uVar11 & 2) != 0)) {
        fn_82F73228(&uStack_80,&uStack_78);
        uVar8 = (unsigned __int64)lbl_832635D0;
      }
      if (((~uVar8 & 0xffffffff) >> 8 & 1) == 0) {
        iVar7 = fn_82F73E68(auStack_58);
        if ((((((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF) & 0xff000000) != 0x3000000) && ('\x01' < *(char *)(iVar7 + 4))) {
          uStack_80 = CONCAT44((((unsigned __int64)(uStack_80) >> 0) & 0xFFFFFFFF),
                               (int)*(char *)(iVar7 + 4) << 0x18 | (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF) & 0xffffff);
        }
      }
      else {
        uVar3 = fn_82F73E68(auStack_58);
        fn_82F73228(&uStack_80,uVar3);
      }
      if (puVar4 != (unsigned __int64 *)0x0) {
        *puVar4 = uStack_80;
        *param_1 = uStack_68;
        return param_1;
      }
      uVar10 = 3;
      goto LAB_82f775d4;
    }
  }
LAB_82f77220:
  uVar10 = 2;
LAB_82f775d4:
  *(unsigned char *)((int)param_1 + 4) = uVar10;
  *(unsigned int *)param_1 = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  return param_1;
}

