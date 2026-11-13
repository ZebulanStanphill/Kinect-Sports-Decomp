extern unsigned int *auStack_6c;
extern unsigned int *auStack_80;
extern int fn_82E5E1F0();
extern int fn_82E5E288();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_8214C2B0;
extern unsigned int lbl_8214C2B8;
extern unsigned int lbl_821537B8;
extern unsigned int lbl_821537C8;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_82E5E390(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned short auStack_80 [2];
  int *piStack_7c;
  int *piStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int auStack_6c [3];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  auStack_6c[0] = 0;
  uStack_60 = lbl_8202E618;
  piStack_7c = (int *)0x0;
  uStack_5c = lbl_8202E61C;
  uStack_58 = lbl_8202E620;
  auStack_80[0] = 0;
  piStack_78 = (int *)0x0;
  uStack_54 = lbl_8202E624;
  uStack_74 = 0;
  uStack_70 = 0;
  lVar3 = (**(int (***)())(*param_1 + 0x84))(param_1,auStack_6c);
  if ((-1 < lVar3) && (uVar8 = 0, auStack_6c[0] != 0)) {
    do {
      if (piStack_7c != (int *)0x0) {
        (**(int (***)())(*piStack_7c + 8))();
        piStack_7c = (int *)0x0;
      }
      lVar3 = (**(int (***)())(*param_1 + 0x88))(param_1,uVar8,auStack_80,&piStack_7c);
      if (lVar3 < 0) break;
      iVar5 = fn_82E5E288(piStack_7c,0xffffffff8214c2b0);
      if (iVar5 == 0) {
        if (piStack_78 != (int *)0x0) {
          (**(int (***)())(*piStack_78 + 8))();
          piStack_78 = (int *)0x0;
        }
        lVar3 = (**(int (***)())(*piStack_7c + 0x90))(piStack_7c,&piStack_78);
        if (lVar3 < 0) break;
        lVar3 = (**(int (***)())(*piStack_78 + 0x84))(piStack_78,&uStack_60);
        if (lVar3 < 0) break;
        pbVar6 = (unsigned char *)&uStack_60;
        pbVar7 = &lbl_821537B8;
        do {
          bVar1 = *pbVar7;
          bVar2 = *pbVar6;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar7 != &lbl_821537C8);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          uVar4 = fn_82E5E1F0(piStack_7c,0xffffffff8214c290,&uStack_74,0);
          uVar9 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & (unsigned __int64)uStack_74;
          uStack_74 = (unsigned int)uVar9;
          uVar4 = fn_82E5E1F0(piStack_7c,0xffffffff8214c2a0,&uStack_70,0);
          uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & (unsigned __int64)uStack_70;
          uStack_70 = (unsigned int)uVar4;
          if (uVar4 < uVar9) {
            uVar4 = uVar9;
          }
          if ((99999 < uVar4) || (uVar4 == 0)) {
            lVar3 = (**(int (***)())(*piStack_7c + 0xa0))(piStack_7c,lbl_8214C2B0,lbl_8214C2B8,2,0,0);
            if (lVar3 < 0) break;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < (unsigned __int64)auStack_6c[0]);
  }
  if (piStack_7c != (int *)0x0) {
    (**(int (***)())(*piStack_7c + 8))();
    piStack_7c = (int *)0x0;
  }
  if (piStack_78 != (int *)0x0) {
    (**(int (***)())(*piStack_78 + 8))();
  }
  return lVar3;
}

