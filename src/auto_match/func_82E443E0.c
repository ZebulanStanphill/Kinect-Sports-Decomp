extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82E5C778();
extern int fn_82E5C7D8();
extern int fn_82E7E7E0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_84;


/* WARNING: Removing unreachable block (ram,0x82e44684) */
/* WARNING: Removing unreachable block (ram,0x82e44694) */
/* WARNING: Removing unreachable block (ram,0x82e44758) */
/* WARNING: Removing unreachable block (ram,0x82e446b8) */
/* WARNING: Removing unreachable block (ram,0x82e446d0) */
/* WARNING: Removing unreachable block (ram,0x82e446c8) */
/* WARNING: Removing unreachable block (ram,0x82e446dc) */
/* WARNING: Removing unreachable block (ram,0x82e445e0) */
/* WARNING: Removing unreachable block (ram,0x82e445ec) */
/* WARNING: Removing unreachable block (ram,0x82e445fc) */
/* WARNING: Removing unreachable block (ram,0x82e4474c) */
/* WARNING: Removing unreachable block (ram,0x82e4460c) */
/* WARNING: Removing unreachable block (ram,0x82e444ec) */
/* WARNING: Removing unreachable block (ram,0x82e447b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82E443E0(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned short auStack_90 [2];
  int *piStack_8c;
  int *piStack_88;
  unsigned int uStack_84;
  unsigned char auStack_80 [8];
  unsigned __int64 uStack_78;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  
  uStack_78 = 0;
  uStack_70 = lbl_8202E618;
  uStack_84 = 0;
  uStack_6c = lbl_8202E61C;
  uStack_68 = lbl_8202E620;
  piStack_8c = (int *)0x0;
  piStack_88 = (int *)0x0;
  auStack_90[0] = 0;
  uStack_64 = lbl_8202E624;
  lVar3 = (**(int (***)())(*(int *)param_1[7] + 0xc))((int *)param_1[7],0xffffffff82154b18,&uStack_84);
  if ((-1 < lVar3) && (uVar6 = 0, uStack_84 != 0)) {
    do {
      if (piStack_8c != (int *)0x0) {
        (**(int (***)())(*piStack_8c + 8))();
        piStack_8c = (int *)0x0;
      }
      if (piStack_88 != (int *)0x0) {
        (**(int (***)())(*piStack_88 + 8))();
        piStack_88 = (int *)0x0;
      }
      fn_82E7E7E0(auStack_80);
      lVar3 = (**(int (***)())(*(int *)param_1[7] + 0x10))
                        ((int *)param_1[7],0xffffffff82154b18,uVar6,&piStack_8c);
      if ((((lVar3 < 0) || (lVar3 = fn_82E5C7D8(piStack_8c,auStack_90), lVar3 < 0)) ||
          (lVar3 = (**(int (***)())(*param_1 + 0x24))(param_1,auStack_90[0],&piStack_88), lVar3 < 0)) ||
         (lVar3 = fn_82E5C778(piStack_8c,&uStack_70), lVar3 < 0)) break;
      pbVar4 = (unsigned char *)&uStack_70;
      pbVar5 = &lbl_820ED058;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != &lbl_820ED068);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        lVar3 = (**(int (***)())(*piStack_88 + 0x14))(piStack_88,0xffffffff821530c4,auStack_80);
        if (lVar3 < 0) break;
        iVar7 = (int)lVar3;
joined_r0x82e44674:
        if (iVar7 != 0) {
          lVar3 = 0;
        }
      }
      else {
        pbVar4 = (unsigned char *)&uStack_70;
        pbVar5 = &lbl_820F8EB8;
        do {
          bVar1 = *pbVar5;
          bVar2 = *pbVar4;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar5 != &lbl_820F8EC8);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          lVar3 = (**(int (***)())(*piStack_88 + 0x14))(piStack_88,0xffffffff82153878,auStack_80);
          if (-1 < lVar3) {
            iVar7 = (int)lVar3;
            goto joined_r0x82e44674;
          }
          break;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < (unsigned __int64)uStack_84);
  }
  if (piStack_8c != (int *)0x0) {
    (**(int (***)())(*piStack_8c + 8))();
    piStack_8c = (int *)0x0;
  }
  if (piStack_88 != (int *)0x0) {
    (**(int (***)())(*piStack_88 + 8))();
    piStack_88 = (int *)0x0;
  }
  fn_82E7E7E0(auStack_80);
  return lVar3;
}

