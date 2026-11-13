typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_1018;
extern unsigned int *auStack_f58;
extern unsigned int *auStack_f60;
extern unsigned int *auStack_f98;
extern unsigned int *auStack_fd0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82268638();
extern int fn_82537C48();
extern int fn_82537D18();
extern int fn_82537DA0();
extern int fn_82537F40();
extern int fn_825380D0();
extern int fn_82538210();
extern int fn_825382D8();
extern int fn_82538390();
extern int fn_825386B0();
extern int fn_825388F0();
extern int fn_82538958();
extern int fn_82538AB8();
extern int fn_8265C9E0();
extern int fn_82CE3C88();
extern int fn_82F68CC0();
extern unsigned int iStack_fe4;
extern unsigned int lbl_821C405C;
extern unsigned int uStack_101c;
extern unsigned int uStack_f70;
extern unsigned int uStack_f78;
extern unsigned int uStack_f7c;
extern unsigned int uStack_fa0;
extern unsigned int uStack_fbc;
extern unsigned int uStack_fe8;
extern unsigned int uStack_fec;
extern unsigned int uStack_ff0;


/* WARNING: Removing unreachable block (ram,0x82537808) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82537458(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 *puVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  unsigned __int64 uVar8;
  char cVar12;
  int iVar10;
  unsigned char *puVar11;
  unsigned __int64 uVar9;
  int iVar13;
  unsigned __int64 *puVar14;
  unsigned __int64 uVar15;
  int *piVar16;
  unsigned int uVar18;
  unsigned __int64 *puVar19;
  unsigned __int64 uVar17;
  int iVar20;
  unsigned int *puVar21;
  unsigned int uStack_101c;
  unsigned char auStack_1018 [4];
  int aiStack_1014 [5];
  int *piStack_1000;
  unsigned int uStack_ff0;
  unsigned int uStack_fec;
  unsigned int uStack_fe8;
  int iStack_fe4;
  unsigned int *puStack_fe0;
  int *piStack_fd8;
  int *piStack_fd4;
  unsigned char auStack_fd0 [16];
  unsigned char **ppuStack_fc0;
  unsigned __int64 uStack_fbc;
  unsigned char ***pppuStack_fb0;
  unsigned __int64 uStack_fa0;
  unsigned char auStack_f98 [28];
  unsigned int uStack_f7c;
  unsigned __int64 uStack_f78;
  unsigned int uStack_f70;
  unsigned int auStack_f60 [2];
  unsigned char auStack_f58 [3928];
  
  piVar16 = param_1 + 0xc;
  if (param_1[0xc] == 0) {
LAB_82537a4c:
    uVar8 = 1;
  }
  else {
    do {
      uVar8 = fn_82538210(*piVar16,param_2);
      if (((uVar8 & 0xff) != 0) && (iVar10 = *piVar16, *(int *)(iVar10 + 0x30) == 0)) {
        iVar13 = param_1[1];
        do {
          cVar12 = fn_82538210(iVar10,1);
        } while (cVar12 == '\0');
        uVar1 = *(unsigned int *)(iVar10 + 0x24);
        iVar10 = *piVar16;
        do {
          cVar12 = fn_82538210(iVar10,1);
        } while (cVar12 == '\0');
        fn_825386B0(param_1,iVar13,*(unsigned int *)(iVar10 + 0x20),uVar1);
        aiStack_1014[0] = (param_1[1] - *param_1) / 0xc4;
        iVar10 = fn_82CE3C88(auStack_f60);
        if ((iVar10 != -0x7f82fffd) && (uVar18 = 0, auStack_f60[0] != 0)) {
          puVar11 = auStack_f58;
          do {
            fn_82537DA0(param_1 + 4,puVar11);
            uVar18 = uVar18 + 1;
            puVar11 = puVar11 + 0x78;
          } while (uVar18 < auStack_f60[0]);
        }
        iVar10 = param_1[1];
        iVar13 = *param_1;
        if (iVar13 != iVar10) {
          do {
            if (((*(unsigned int *)(iVar13 + 0x18) >> 0x1e & 1) != 0) ||
               (bVar7 = true, (int)*(unsigned int *)(iVar13 + 0x18) < 0)) {
              bVar7 = false;
            }
          } while ((bVar7) && (iVar13 = iVar13 + 0xc4, iVar13 != iVar10));
          iVar5 = iVar13;
          if (iVar13 != iVar10) {
            while (iVar20 = iVar5 + 0xc4, iVar20 != iVar10) {
              if (((*(unsigned int *)(iVar5 + 0xdc) >> 0x1e & 1) != 0) ||
                 (bVar7 = true, (int)*(unsigned int *)(iVar5 + 0xdc) < 0)) {
                bVar7 = false;
              }
              iVar5 = iVar20;
              if (bVar7) {
                fn_82F68CC0(iVar13,iVar20,0xc4);
                iVar13 = iVar13 + 0xc4;
              }
            }
          }
        }
        fn_82537D18(&uStack_101c,param_1,iVar13,param_1[1]);
        if (param_1[0xf] == 1) {
          iVar13 = param_1[1];
          iVar10 = *param_1;
          if (iVar10 != iVar13) {
            do {
              if ((*(unsigned int *)(iVar10 + 0x18) & 1) == 0) break;
              iVar10 = iVar10 + 0xc4;
            } while (iVar10 != iVar13);
            iVar5 = iVar10;
            if (iVar10 != iVar13) {
              while (iVar20 = iVar5 + 0xc4, iVar20 != iVar13) {
                puVar21 = (unsigned int *)(iVar5 + 0xdc);
                iVar5 = iVar20;
                if ((*puVar21 & 1) != 0) {
                  fn_82F68CC0(iVar10,iVar20,0xc4);
                  iVar10 = iVar10 + 0xc4;
                }
              }
            }
          }
          puVar11 = auStack_1018;
LAB_82537710:
          fn_82537D18(puVar11,param_1,iVar10,param_1[1]);
        }
        else if (param_1[0xf] == 2) {
          iVar13 = param_1[1];
          iVar10 = *param_1;
          if (iVar10 != iVar13) {
            do {
              if (*(int *)(iVar10 + 0x24) != 0x4d5308c9) break;
              iVar10 = iVar10 + 0xc4;
            } while (iVar10 != iVar13);
            iVar5 = iVar10;
            if (iVar10 != iVar13) {
              while (iVar20 = iVar5 + 0xc4, iVar20 != iVar13) {
                piVar6 = (int *)(iVar5 + 0xe8);
                iVar5 = iVar20;
                if (*piVar6 == 0x4d5308c9) {
                  fn_82F68CC0(iVar10,iVar20,0xc4);
                  iVar10 = iVar10 + 0xc4;
                }
              }
            }
          }
          puVar11 = auStack_fd0;
          goto LAB_82537710;
        }
        iVar10 = *piVar16;
        do {
          cVar12 = fn_82538210(iVar10,1);
        } while (cVar12 == '\0');
        iVar10 = *(int *)(iVar10 + 0x24);
        iVar13 = *piVar16;
        do {
          cVar12 = fn_82538210(iVar13,1);
        } while (cVar12 == '\0');
        if ((iVar10 - *(int *)(iVar13 + 0x20)) / 0xc4 == 100) {
          uVar8 = fn_8265C9E0(0x34);
          if ((uVar8 & 0xffffffff) == 0) {
            uVar9 = 0;
          }
          else {
            pppuStack_fb0 = &ppuStack_fc0;
            ppuStack_fc0 = &lbl_821C405C;
            piStack_fd4 = aiStack_1014;
            uStack_fbc = CONCAT44(param_1,piStack_fd4);
            piStack_fd8 = param_1;
            uVar9 = fn_825380D0(uVar8,&ppuStack_fc0);
          }
          fn_82537F40(piVar16,uVar9);
          uVar8 = 0;
          goto LAB_825377c4;
        }
        param_1[0xe] = *(int *)(*piVar16 + 0x30);
        fn_82537F40(piVar16,0);
        puVar21 = (unsigned int *)(param_1 + 8);
        uVar18 = param_1[8];
        uVar8 = (unsigned __int64)uVar18;
        if (uVar8 != (unsigned int)param_1[9]) {
          uVar2 = param_1[9];
          if (uVar8 != uVar2) {
            do {
              fn_82230300(uVar8 + 8,1,0);
              uVar8 = uVar8 + 0x38;
            } while ((uVar8 & 0xffffffff) != (unsigned __int64)uVar2);
          }
          param_1[9] = uVar18;
        }
        puVar3 = (unsigned __int64 *)param_1[1];
        if ((unsigned __int64 *)*param_1 != puVar3) {
          puVar19 = (unsigned __int64 *)(*param_1 + 0x1c);
          do {
            uVar1 = *(unsigned int *)((int)puVar19 + -4);
            uVar15 = *puVar19;
            uVar4 = *(unsigned int *)(puVar19 + 1);
            uVar9 = fn_82230110(&ppuStack_fc0,(int)puVar19 + -0x14);
            uStack_fa0 = *(unsigned __int64 *)((int)puVar19 + -0x1c);
            fn_82240378(auStack_f98,uVar9);
            uStack_f7c = uVar4;
            uStack_f78 = uVar15;
            uStack_f70 = uVar1;
            fn_82230300(uVar9,1,0);
            fn_82537C48(puVar21,&uStack_fa0);
            fn_82230300(auStack_f98,1,0);
            puVar14 = puVar19 + 0x15;
            puVar19 = (unsigned __int64 *)((int)puVar19 + 0xc4);
          } while (puVar14 != puVar3);
        }
        fn_825382D8(auStack_1018,param_1[4],param_1[5],param_1);
        fn_82538390(&uStack_101c,*puVar21,param_1[9],0);
        uVar8 = (unsigned __int64)(unsigned int)param_1[9];
        uVar17 = (unsigned __int64)uStack_101c;
        if (uVar17 != uVar8) {
          uVar18 = param_1[9];
          if (uVar8 != uVar18) {
            do {
              fn_82268638(uVar17,uVar8);
              uVar8 = uVar8 + 0x38;
              uVar17 = uVar17 + 0x38;
            } while ((uVar8 & 0xffffffff) != (unsigned __int64)uVar18);
          }
          uVar18 = param_1[9];
          uVar8 = uVar17;
          if ((uVar17 & 0xffffffff) != (unsigned __int64)uVar18) {
            do {
              fn_82230300(uVar8 + 8,1,0);
              uVar8 = uVar8 + 0x38;
            } while ((uVar8 & 0xffffffff) != (unsigned __int64)uVar18);
          }
          param_1[9] = (int)uVar17;
        }
        uVar18 = param_1[9];
        uVar8 = (unsigned __int64)*puVar21;
        if (uVar8 != uVar18) {
          uStack_ff0 = 0;
          puStack_fe0 = &uStack_ff0;
          uStack_fec = 0;
          iStack_fe4 = (int)(uVar18 - *puVar21) / 0x38;
          uStack_fe8 = 0;
          uVar8 = fn_82538958(uVar8,(unsigned __int64)uVar18,0,iStack_fe4,&uStack_ff0);
          fn_825388F0(&uStack_ff0);
        }
        uVar18 = param_1[9];
        if ((uVar8 & 0xffffffff) != (unsigned __int64)uVar18) {
          aiStack_1014[1] = 0;
          piStack_1000 = aiStack_1014 + 1;
          aiStack_1014[2] = 0;
          aiStack_1014[4] = (int)(uVar18 - (int)uVar8) / 0x38;
          aiStack_1014[3] = 0;
          fn_82538AB8(uVar8,(unsigned __int64)uVar18,0,aiStack_1014[4],aiStack_1014 + 1);
          fn_825388F0(aiStack_1014 + 1);
        }
        goto LAB_82537a4c;
      }
      if ((uVar8 & 0xff) != 0) {
        fn_82537D18(auStack_1018,param_1,*param_1,param_1[1]);
        param_1[0xe] = *(int *)(*piVar16 + 0x30);
        fn_82537F40(piVar16,0);
        goto LAB_82537a4c;
      }
LAB_825377c4:;} while ((param_2 & 0xff) != 0);
  }
  return uVar8;
}

