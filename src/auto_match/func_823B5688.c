typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_98;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern char cRam831d2d50;
extern char cRam831d2d52;
extern int fn_822315A0();
extern int fn_8223C478();
extern int fn_82250928();
extern int fn_8235A028();
extern int fn_82365BD8();
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_823B4800();
extern int fn_823B5CB8();
extern int fn_823B83B0();
extern int fn_823B8438();
extern int fn_823B8948();
extern int fn_823B8A50();
extern int fn_823B8B00();
extern int fn_823BC468();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_8289AB78();
extern int fn_828B00A0();
extern int fn_828BDDA0();
extern int fn_828BE208();
extern int fn_828E9DB8();
extern int iRam831d2d48;
extern unsigned int iStack_94;
extern unsigned int lbl_821B5B58;
extern unsigned int lbl_821B5BD8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_a0;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;


void fn_823B5688(double param_1,unsigned int *param_2)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  bool bVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int iVar10;
  int *piVar11;
  __int64 lVar9;
  char cVar16;
  unsigned __int64 *puVar12;
  __int64 *plVar13;
  unsigned __int64 *puVar14;
  unsigned int *puVar15;
  unsigned short uVar18;
  unsigned int uVar17;
  unsigned int *puVar19;
  unsigned __int64 uVar20;
  unsigned int *puVar22;
  unsigned __int64 uVar21;
  unsigned int *apuStack_f0 [2];
  unsigned __int64 uStack_e8;
  unsigned __int64 uStack_e0;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int auStack_c8 [2];
  unsigned char auStack_c0 [8];
  unsigned char auStack_b8 [24];
  unsigned __int64 uStack_a0;
  unsigned char auStack_98 [4];
  int iStack_94;
  unsigned int *apuStack_90 [36];
  
  if ((0 < iRam831d2d48) &&
     ((fVar1 = (float)param_2[5], param_2[5] = (unsigned int)(float)((double)fVar1 - param_1),
      (float)((double)fVar1 - param_1) <= ltcg_pool_0_0f || (param_2[5] == 0)))) {
    uStack_e8 = (__int64)iRam831d2d48;
    param_2[5] = (unsigned int)(lbl_821CA460 / (float)uStack_e8);
    uVar8 = fn_828B00A0((unsigned __int64)*param_2 + 0x278);
    bVar6 = false;
    apuStack_f0[0] = *(unsigned int **)param_2[0x18];
    uStack_e0 = uVar8;
    if (apuStack_f0[0] != (unsigned int *)param_2[0x18]) {
      do {
        puVar19 = apuStack_f0[0];
        puVar22 = apuStack_f0[0] + 4;
        iVar10 = (**(int (***)())(*(int *)apuStack_f0[0][4] + 0x10))();
        if (iVar10 != 0) {
          piVar11 = (int *)*puVar22;
          bVar6 = true;
          (**(int (***)())(*piVar11 + 4))(auStack_c8,piVar11,*param_2);
          piVar11 = (int *)*puVar22;
          (**(int (***)())(*piVar11 + 0xc))(piVar11,auStack_c8[0]);
          piVar11 = (int *)fn_8235A028(&uStack_e8,auStack_c0);
          iVar10 = fn_82365BD8(&uStack_d8,auStack_c8);
          uStack_a0 = uVar8;
          fn_82365BD8(auStack_98,iVar10);
          fn_8235A028(apuStack_90,piVar11);
          if (*(int *)(iVar10 + 4) != 0) {
            fn_822315A0();
          }
          puVar15 = (unsigned int *)*piVar11;
          if (puVar15 != (unsigned int *)0x0) {
            (**(int (***)())*puVar15)(puVar15,1);
          }
          fn_823B8948(puVar19 + 6,&uStack_a0);
          if (apuStack_90[0] != (unsigned int *)0x0) {
            (**(int (***)())*apuStack_90[0])(apuStack_90[0],1);
          }
          if (iStack_94 != 0) {
            fn_822315A0();
          }
          fn_823B5CB8(auStack_c8);
        }
        fn_82250928(apuStack_f0);
      } while (apuStack_f0[0] != (unsigned int *)param_2[0x18]);
      if (bVar6) {
        fn_823B8438(param_2 + 0x1b,&uStack_e0);
      }
    }
  }
  puVar19 = *(unsigned int **)(*param_2 + 0x200);
  apuStack_f0[0] = (unsigned int *)*puVar19;
  while( true ) {
    puVar22 = apuStack_f0[0];
    uVar17 = param_2[3];
    piVar11 = (int *)(uVar17 - 0x68);
    if (apuStack_f0[0] == puVar19) break;
    if (uVar17 == 0) {
      piVar11 = (int *)0x0;
    }
    iVar10 = (**(int (***)())(*piVar11 + 8))();
    cVar16 = (**(int (***)())(*(int *)(iVar10 + 0x48) + 0x38))((int *)(iVar10 + 0x48),puVar22[4]);
    if (cVar16 == '\0') {
      return;
    }
    fn_82381BC0(apuStack_f0);
    puVar19 = *(unsigned int **)(*param_2 + 0x200);
  }
  if (uVar17 == 0) {
    piVar11 = (int *)0x0;
  }
  lVar9 = (**(int (***)())(*piVar11 + 8))();
  cVar16 = fn_8289AB78(lVar9 + 0x9c);
  if ((cVar16 != '\0') && (cRam831d2d52 == '\0')) {
    if (cRam831d2d50 == '\0') {
      uVar18 = 0;
    }
    else {
      uVar18 = -(short)((int)(param_2[0x1f] - 1) >> 0x1f) - 1U & (unsigned short)(param_2[0x1f] - 1);
    }
    if (param_2[0x1f] != 0) {
      fn_823B4800(&uStack_e8);
      puVar19 = (unsigned int *)param_2[0x18];
      apuStack_f0[0] = (unsigned int *)*puVar19;
      uVar7 = (((unsigned __int64)(uStack_e8) >> 0) & 0xFFFFFFFF);
      uVar2 = *(unsigned int *)(*(int *)(*param_2 + 0x308) + 0x14);
      uVar3 = *(unsigned int *)(*(int *)(*param_2 + 0x308) + 0x18);
      while (puVar22 = apuStack_f0[0], apuStack_f0[0] != puVar19) {
        piVar11 = (int *)apuStack_f0[0][6];
        uVar17 = apuStack_f0[0][9];
        puVar19 = apuStack_f0[0] + 6;
        while( true ) {
          uVar20 = (unsigned __int64)uVar17;
          uVar4 = puVar22[10];
          uVar21 = (unsigned __int64)puVar22[9];
          if (uVar20 == (uVar4 + uVar21 & 0xffffffff)) break;
          iVar10 = 0;
          if (piVar11 != (int *)0x0) {
            iVar10 = *piVar11;
          }
          if (*(unsigned int *)(iVar10 + 8) <= uVar20) {
            uVar20 = uVar20 - *(unsigned int *)(iVar10 + 8);
          }
          puVar12 = (unsigned __int64 *)fn_823B83B0(param_2 + 0x1b,uVar18);
          if (*puVar12 <= **(unsigned __int64 **)((int)((uVar20 & 0xffffffff) << 2) + *(int *)(iVar10 + 4))
             ) break;
          uStack_d8 = 0;
          uStack_d4 = 0;
          if ((piVar11 != (int *)0x0) && ((unsigned int *)*piVar11 != (unsigned int *)0x0)) {
            uStack_d8 = *(unsigned int *)*piVar11;
          }
          uStack_d0 = uVar17;
          puVar15 = (unsigned int *)fn_823B8B00(auStack_b8,puVar19,&uStack_d8);
          if ((piVar11 != (int *)*puVar15) && (puVar5 = *(unsigned int **)*puVar15, puVar5 != (unsigned int *)0x0))
          {
            piVar11 = (int *)*puVar5;
          }
          uVar17 = puVar15[2];
        }
        if ((unsigned __int64)uVar4 != 0) {
          iVar10 = 0;
          if ((int *)*puVar19 != (int *)0x0) {
            iVar10 = *(int *)*puVar19;
          }
          if (*(unsigned int *)(iVar10 + 8) <= uVar21) {
            uVar21 = uVar21 - *(unsigned int *)(iVar10 + 8);
          }
          plVar13 = (__int64 *)fn_823B83B0(param_2 + 0x1b,uVar18);
          if (**(__int64 **)(*(int *)(iVar10 + 4) + (int)((uVar21 & 0xffffffff) << 2)) == *plVar13)
          {
            uVar17 = puVar22[5];
            fn_8223C478(uVar7,uVar2,0);
            fn_828E9DB8(uVar7,uVar17,uVar2);
            uVar4 = puVar22[3];
            fn_8223C478(uVar7,uVar3,0);
            fn_828E9DB8(uVar7,uVar4,uVar3);
            puVar15 = (unsigned int *)fn_823BC468(*(unsigned int *)(*param_2 + 0x308),uVar17);
            iVar10 = 0;
            uVar17 = puVar22[9];
            if ((int *)*puVar19 != (int *)0x0) {
              iVar10 = *(int *)*puVar19;
            }
            if (*(unsigned int *)(iVar10 + 8) <= uVar17) {
              uVar17 = uVar17 - *(unsigned int *)(iVar10 + 8);
            }
            (**(int (***)())(*(int *)*puVar15 + 8))
                      ((int *)*puVar15,uVar7,
                       (unsigned __int64)*(unsigned int *)(*(int *)(iVar10 + 4) + uVar17 * 4) + 0x10);
            fn_823B8A50(puVar19);
          }
        }
        fn_82250928(apuStack_f0);
        puVar19 = (unsigned int *)param_2[0x18];
      }
      uVar3 = *(unsigned int *)(*(int *)(*param_2 + 0x308) + 0x10);
      fn_8223C478(uVar7,uVar2,0);
      fn_828E9DB8(uVar7,uVar3,uVar2);
      puVar14 = (unsigned __int64 *)fn_823B83B0(param_2 + 0x1b,uVar18);
      uVar17 = *param_2;
      iVar10 = (((unsigned __int64)(uStack_e8) >> 32) & 0xFFFFFFFF);
      apuStack_f0[0] = (unsigned int *)**(unsigned int **)(uVar17 + 0x210);
      if (apuStack_f0[0] != *(unsigned int **)(uVar17 + 0x210)) {
        do {
          puVar19 = apuStack_f0[0];
          puVar15 = (unsigned int *)fn_8265C9E0(0x90);
          if (puVar15 == (unsigned int *)0x0) {
            puVar15 = (unsigned int *)0x0;
          }
          else {
            fn_828BDDA0(puVar15);
            *puVar15 = &lbl_821B5B58;
            puVar15[0x14] = &lbl_821B5BD8;
            puVar15[0x20] = 0;
            puVar15[0x21] = 0;
            fn_82517978(puVar15 + 0x20,uVar7,iVar10,0);
            *(unsigned __int64 *)(puVar15 + 0x22) = *puVar14;
          }
          uVar8 = fn_823AA970(puVar19[4]);
          fn_828BE208(uVar17,puVar15,uVar8,1);
          fn_82381BC0(apuStack_f0);
        } while (apuStack_f0[0] != *(unsigned int **)(uVar17 + 0x210));
      }
      while (-1 < (short)uVar18) {
        uVar18 = uVar18 - 1;
        if ((unsigned __int64)param_2[0x1f] != 0) {
          uVar17 = param_2[0x1e];
          param_2[0x1e] = uVar17 + 1;
          if (param_2[0x1d] << 1 <= uVar17 + 1) {
            param_2[0x1e] = 0;
          }
          lVar9 = (unsigned __int64)param_2[0x1f] - 1;
          param_2[0x1f] = (unsigned int)lVar9;
          if (lVar9 == 0) {
            param_2[0x1e] = 0;
          }
        }
      }
      if (iVar10 != 0) {
        fn_822315A0(iVar10);
      }
    }
  }
  return;
}

