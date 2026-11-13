typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b8;
extern int fn_822315A0();
extern int fn_82297E18();
extern int fn_82516FD8();
extern int fn_825174B8();
extern int fn_82517930();
extern int fn_82517978();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828BA358();
extern int fn_828BB7B8();
extern int fn_828C2308();
extern int fn_828C4240();
extern int fn_828ED3B8();
extern int fn_828ED3D0();
extern int fn_828ED408();
extern int fn_828ED440();
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


__int64 fn_828BCC48(int param_1,int param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  char cVar8;
  unsigned __int64 uVar7;
  unsigned int ****ppppuVar9;
  unsigned __int64 *puVar10;
  int iVar11;
  __int64 lVar12;
  unsigned int uVar13;
  int *piVar14;
  int iStack_c0;
  int iStack_bc;
  unsigned int auStack_b8 [2];
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned char auStack_a0 [4];
  int iStack_9c;
  int iStack_94;
  unsigned char auStack_90 [4];
  int iStack_8c;
  int iStack_84;
  unsigned int ***apppuStack_80 [4];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  
  fn_828C2308(&iStack_c0,param_1 + 0xf8);
  iVar1 = iStack_c0;
  if (iStack_c0 == *(int *)(param_1 + 0xfc)) {
    iStack_c0 = 0;
    iStack_bc = 0;
  }
  else {
    iStack_c0 = 0;
    iStack_bc = 0;
    fn_82517978(&iStack_c0,*(unsigned int *)(iVar1 + 0x28),*(unsigned int *)(iVar1 + 0x2c),0);
  }
  iVar6 = iStack_bc;
  iVar1 = *(int *)(iStack_c0 + 8);
  if ((*(int *)(param_1 + 0x8c) == 0) ||
     (((cVar8 = fn_828AD0F8(param_1), cVar8 == '\0' &&
       (cVar8 = fn_828AD488(param_1), cVar8 == '\0')) &&
      (cVar8 = fn_828C4240(param_1), cVar8 == '\0')))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) || (lVar12 = 1, 3 < param_2)) {
    lVar12 = 0;
  }
  bVar4 = false;
  if (lVar12 != 0) {
    uVar13 = 0;
    iVar11 = param_2 * 0x10 + param_1;
    piVar14 = (int *)(iVar11 + 0x148);
    uVar3 = *(int *)(iVar11 + 0x14c) - *(int *)(iVar11 + 0x148) >> 4;
    if (uVar3 != 0) {
      iVar11 = 0;
      do {
        if (*(int *)(*(int *)(*piVar14 + iVar11) + 8) == iVar1) {
          if (uVar13 != 0xffffffff) {
            iVar11 = *(int *)(uVar13 * 0x10 + *piVar14 + 8);
            if (*(int *)(iVar11 + 0x18) == *(int *)(*param_4 + 0x18)) {
              cVar8 = fn_828BA358(iVar11,*param_4 + 8);
              bVar5 = true;
              if (cVar8 == '\0') goto LAB_828bce00;
            }
            else {
LAB_828bce00:
              bVar5 = false;
            }
            if (bVar5) goto LAB_828bce58;
            iVar11 = *piVar14;
            uVar7 = fn_825174B8(auStack_90,&iStack_c0,param_4);
            fn_82517930(uVar13 * 0x10 + iVar11,uVar7);
            if (iStack_84 != 0) {
              fn_822315A0();
            }
            goto LAB_828bce48;
          }
          break;
        }
        uVar13 = uVar13 + 1;
        iVar11 = iVar11 + 0x10;
      } while (uVar13 < uVar3);
    }
    uVar7 = fn_825174B8(auStack_a0,&iStack_c0,param_4);
    fn_82516FD8(piVar14,uVar7);
    iStack_8c = iStack_9c;
    if (iStack_94 != 0) {
      fn_822315A0();
      iStack_8c = iStack_9c;
    }
LAB_828bce48:
    if (iStack_8c != 0) {
      fn_822315A0();
    }
    bVar4 = true;
  }
LAB_828bce58:
  if (bVar4) {
    iVar11 = *param_4;
    iVar2 = *(int *)(iVar11 + 0x18);
    if (iVar2 - 1U < 7) {
      if (iVar2 == 2) {
        if (*(int *)(iVar11 + 0x18) == 2) {
          fn_828ED408(*(unsigned int *)(param_1 + 0x8c),param_2,iVar1,
                          *(unsigned __int64 *)(iVar11 + 0x10));
        }
      }
      else {
        if (iVar2 == 3) {
          if (*(int *)(iVar11 + 0x18) != 3) goto LAB_828bd064;
          uStack_b0 = *(unsigned __int64 *)(iVar11 + 0x10);
          puVar10 = &uStack_b0;
          iVar11 = 8;
        }
        else {
          if (iVar2 == 4) {
            uStack_70 = 0;
            apppuStack_80[0] = (unsigned int ***)((unsigned int)apppuStack_80[0] & 0xffff);
            uStack_6c = 7;
            cVar8 = fn_828BB7B8(iVar11,apppuStack_80);
            if (cVar8 != '\0') {
              ppppuVar9 = (unsigned int ****)apppuStack_80[0];
              if (uStack_6c < 8) {
                ppppuVar9 = apppuStack_80;
              }
              fn_828ED440(*(unsigned int *)(param_1 + 0x8c),param_2,iVar1,ppppuVar9);
            }
            fn_82297E18(apppuStack_80);
            goto LAB_828bd064;
          }
          if (iVar2 == 5) {
            if (*(int *)(iVar11 + 0x18) != 5) goto LAB_828bd064;
            auStack_b8[0] = *(unsigned int *)(iVar11 + 0x10);
            puVar10 = (unsigned __int64 *)auStack_b8;
            iVar11 = 4;
          }
          else if (iVar2 == 6) {
            if (*(int *)(iVar11 + 0x18) != 6) goto LAB_828bd064;
            puVar10 = *(unsigned __int64 **)(iVar11 + 0x14);
            iVar11 = *(int *)(iVar11 + 0x10);
            if ((puVar10 == (unsigned __int64 *)0x0) || (iVar11 == 0)) goto LAB_828bd064;
          }
          else {
            if (iVar2 == 1) {
              if (*(int *)(iVar11 + 0x18) == 1) {
                fn_828ED3D0(*(unsigned int *)(param_1 + 0x8c),param_2,iVar1,
                                *(unsigned int *)(iVar11 + 0x10));
              }
              goto LAB_828bd064;
            }
            if (*(int *)(iVar11 + 0x18) != 7) goto LAB_828bd064;
            uStack_a8 = *(unsigned __int64 *)(iVar11 + 0x10);
            puVar10 = &uStack_a8;
            iVar11 = 8;
          }
        }
        fn_828ED3B8(*(unsigned int *)(param_1 + 0x8c),param_2,iVar1,iVar11,puVar10);
      }
    }
  }
LAB_828bd064:
  if (iVar6 != 0) {
    fn_822315A0(iVar6);
  }
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return lVar12;
}

