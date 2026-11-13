typedef unsigned char bool;
#define true 1
#define false 0
#define TBLr 0
extern unsigned int *auStack_e0;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82D899D8();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DACA10();
extern int fn_82DAD7D0();
extern int fn_82DAFAD0();
extern int fn_82DB0088();
extern int fn_83080B30();
extern int fn_83088518();
extern unsigned int iStack_a4;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_d0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d6;
extern unsigned int uStack_d8;


void fn_82D856F0(int param_1,int *param_2,unsigned __int64 param_3,int param_4)

{
  int *piVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned short uVar10;
  unsigned short uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  double dVar15;
  double dVar16;
  unsigned char auStack_e0 [4];
  int *piStack_dc;
  unsigned short uStack_d8;
  unsigned char uStack_d6;
  struct { int first; unsigned int second; } stack_pair_d0;

  unsigned int uStack_c8;
  int iStack_c4;
  struct { int first; unsigned int second; } stack_pair_c0;

  unsigned int uStack_b8;
  int iStack_b4;
  int iStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  int iStack_a4;

  uVar9 = (unsigned int)param_3;
  if (uVar9 != 0) {
    if (*(int *)(param_1 + 0x94) == 0) {
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar6 = *(unsigned int **)(iVar4 + 4);
      if (puVar6 < *(unsigned int **)(iVar4 + 0xc)) {
        *puVar6 = "LtAddEntities";
        puVar6[3] = "Stinit";
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(unsigned int **)(iVar4 + 4) = puVar6 + 4;
      }
      iStack_b0 = 0;
      uStack_ac = 0;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      uStack_a8 = 0x80000000;
      piVar5 = (int *)fn_82CE5410();
      uVar14 = uVar9 | 0x80000000;
      iStack_b0 = *piVar5;
      *piVar5 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iStack_b0;
      stack_pair_d0.first = 0;
      stack_pair_d0.second = 0;
      uStack_c8 = 0x80000000;
      uStack_a8 = uVar14;
      iStack_a4 = iStack_b0;
      piVar5 = (int *)fn_82CE5410();
      stack_pair_d0.first = *piVar5;
      bVar3 = false;
      *piVar5 = ((int)((param_3 & 0xffffffff) << 5) + 0x7fU & 0xffffff80) + stack_pair_d0.first;
      uStack_c8 = uVar14;
      iStack_c4 = stack_pair_d0.first;
      if (*(char *)(param_1 + 200) == '\0') {
        puVar6 = (unsigned int *)**(int **)(param_1 + 0x28);
        uVar14 = puVar6[0x13];
        iVar4 = fn_82CE5410();
        iVar8 = (int)(uVar14 + param_3);
        if ((int)(puVar6[0x14] & 0x3fffffff) < iVar8) {
          lVar12 = ((unsigned __int64)(unsigned int)puVar6[0x14] & 0x3fffffff) << 1;
          if ((int)lVar12 <= iVar8) {
            lVar12 = uVar14 + param_3;
          }
          fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),puVar6 + 0x12,lVar12,4);
        }
      }
      else {
        iVar4 = fn_82CE5410();
        iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x6c);
        *(unsigned short *)(iVar4 + 4) = 0x6c;
        puVar6 = (unsigned int *)fn_82DB0088(iVar4,param_1);
        *(unsigned char *)((int)puVar6 + 0x25) = *(unsigned char *)((int)puVar6 + 0x25) & 0x3f | 0x40;
        if (param_4 == 1) {
          *(short *)(puVar6 + 8) = (short)*(unsigned int *)(param_1 + 0x2c);
          *(unsigned char *)((int)puVar6 + 0x26) = *(unsigned char *)((int)puVar6 + 0x26) & 0xf | 0x50;
        }
        else {
          *(short *)(puVar6 + 8) = (short)*(unsigned int *)(param_1 + 0x38);
          *(unsigned char *)((int)puVar6 + 0x26) = *(unsigned char *)((int)puVar6 + 0x26) & 0xf;
        }
      }
      dVar15 = (double)(*(float *)(*(int *)(param_1 + 0x78) + 8) * 0.5f);
      if (0 < (int)uVar9) {
        dVar16 = (double)lbl_821AAD20;
        uVar13 = param_3;
        piVar5 = param_2;
        do {
          piVar1 = (int *)*piVar5;
          iVar4 = *(int *)(param_1 + 0x108) + 1;
          *(int *)(param_1 + 0x108) = iVar4;
          piVar1[0x35] = iVar4;
          fn_82CE4040(piVar1);
          if (piVar1[6] == 0) {
            iVar4 = (**(int (***)())(*piVar1 + 0x10))(piVar1);
            piVar1[6] = iVar4;
          }
          fn_83080B30(dVar16,dVar16);
          piVar1[2] = param_1;
          *(unsigned short *)((int)piVar1 + 0xea) = 0;
          *(unsigned short *)(piVar1 + 0x3b) = 0;
          uVar10 = (unsigned short)*(unsigned char *)(param_1 + 0x306);
          uVar11 = (unsigned short)*(unsigned char *)(param_1 + 0x305);
          if ((*(unsigned char *)(param_1 + 0x307) & 3) < (*(unsigned char *)((int)piVar1 + 0xe9) & 3)) {
            uVar11 = ~uVar11;
          }
          if (*(unsigned char *)(param_1 + 0x307) < *(unsigned char *)((int)piVar1 + 0xe9)) {
            uVar10 = ~uVar10;
          }
          *(unsigned short *)(piVar1 + 0x3b) = *(unsigned short *)(piVar1 + 0x3b) & 0x3fff | uVar10 << 0xe;
          *(unsigned short *)((int)piVar1 + 0xea) = *(unsigned short *)((int)piVar1 + 0xea) & 0x3fff | uVar11 << 0xe
          ;
          if (*(char *)(piVar1 + 0x3a) == '\x05') {
            puVar7 = *(unsigned int **)(param_1 + 0x20);
          }
          else {
            bVar3 = true;
            puVar7 = puVar6;
          }
          fn_82DAFAD0(puVar7,piVar1);
          iVar4 = piVar1[4];
          piVar1[0xc] = 1;
          piVar1[0x10] = 0;
          if (iVar4 != 0) {
            stack_pair_d0.second = stack_pair_d0.second + 1;
            (**(int (***)())(*(int *)piVar1[4] + 0x1c))(dVar15,(int *)piVar1[4],piVar1[6]);
            *(int **)(uStack_ac * 4 + iStack_b0) = piVar1 + 9;
            uStack_ac = uStack_ac + 1;
            fn_82D899D8(piVar1,param_1,iVar4);
          }
          uVar13 = uVar13 - 1;
          piVar5 = piVar5 + 1;
        } while (uVar13 != 0);
      }
      if (*(char *)(param_1 + 200) != '\0') {
        if (bVar3) {
          piVar5 = (int *)(param_1 + 0x28);
          *(char *)(puVar6 + 9) = (char)*(unsigned int *)(*(int *)puVar6[0x12] + 0xd4);
          if (param_4 != 1) {
            piVar5 = (int *)(param_1 + 0x34);
          }
          iVar4 = fn_82CE5410();
          if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),piVar5,4);
          }
          *(unsigned int **)(piVar5[1] * 4 + *piVar5) = puVar6;
          piVar5[1] = piVar5[1] + 1;
        }
        else {
          (**(int (***)())*puVar6)(puVar6,1);
        }
      }
      stack_pair_c0.first = 0;
      stack_pair_c0.second = 0;
      uStack_b8 = 0x80000000;
      uVar14 = *(unsigned int *)(param_1 + 0x338);
      piVar5 = (int *)fn_82CE5410();
      uStack_b8 = uVar14 | 0x80000000;
      stack_pair_c0.first = *piVar5;
      *piVar5 = (uVar14 * 8 + 0x7f & 0xffffff80) + stack_pair_c0.first;
      iStack_b4 = stack_pair_c0.first;
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar6 = *(unsigned int **)(iVar4 + 4);
      if (puVar6 < *(unsigned int **)(iVar4 + 0xc)) {
        *puVar6 = "StBroadphase";
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(unsigned int **)(iVar4 + 4) = puVar6 + 3;
      }
      (**(int (***)())(**(int **)(param_1 + 0x58) + 0x18))
                (*(int **)(param_1 + 0x58),&iStack_b0,&stack_pair_d0.first,&stack_pair_c0.first);
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar6 = *(unsigned int **)(iVar4 + 4);
      if (puVar6 < *(unsigned int **)(iVar4 + 0xc)) {
        *puVar6 = "StCreateAgents";
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(unsigned int **)(iVar4 + 4) = puVar6 + 3;
      }
      fn_83088518(*(unsigned int *)(param_1 + 100),stack_pair_c0.first,stack_pair_c0.second);
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar6 = *(unsigned int **)(iVar4 + 4);
      if (puVar6 < *(unsigned int **)(iVar4 + 0xc)) {
        *puVar6 = "StAddedCb";
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(unsigned int **)(iVar4 + 4) = puVar6 + 3;
      }
      if (0 < (int)uVar9) {
        param_2 = param_2 + -1;
        do {
          param_2 = param_2 + 1;
          iVar4 = *param_2;
          fn_82DAD7D0(param_1,iVar4);
          fn_82DACA10(iVar4);
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
      *(int *)(param_1 + 0x94) = (int)lVar12;
      if ((lVar12 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
        if (*(int *)(param_1 + 0x8c) != 0) {
          *(unsigned int *)(param_1 + 0x8c) = 0;
          fn_82DA6BA8(*(unsigned int *)(param_1 + 0x88));
        }
        if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
          *(unsigned int *)(param_1 + 0x90) = 0;
          fn_82DA6A58(*(unsigned int *)(param_1 + 0x88));
        }
      }
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      iVar4 = iStack_b4;
      puVar6 = *(unsigned int **)(iVar8 + 4);
      if (puVar6 < *(unsigned int **)(iVar8 + 0xc)) {
        *puVar6 = &lbl_8202CF7C;
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(unsigned int **)(iVar8 + 4) = puVar6 + 3;
      }
      stack_pair_c0.second = -(unsigned int)(stack_pair_c0.first != iStack_b4) & stack_pair_c0.second;
      piVar5 = (int *)fn_82CE5410();
      *piVar5 = iVar4;
      iVar4 = fn_82CE5410();
      stack_pair_c0.second = 0;
      if ((uStack_b8 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),stack_pair_c0.first,uStack_b8 & 0x3fffffff);
      }
      iVar4 = iStack_c4;
      stack_pair_c0.first = 0;
      uStack_b8 = 0x80000000;
      stack_pair_d0.second = -(unsigned int)(stack_pair_d0.first != iStack_c4) & stack_pair_d0.second;
      piVar5 = (int *)fn_82CE5410();
      *piVar5 = iVar4;
      iVar4 = fn_82CE5410();
      stack_pair_d0.second = 0;
      if ((uStack_c8 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),stack_pair_d0.first,uStack_c8 & 0x3fffffff);
      }
      iVar4 = iStack_a4;
      stack_pair_d0.first = 0;
      uStack_c8 = 0x80000000;
      uStack_ac = -(unsigned int)(iStack_b0 != iStack_a4) & uStack_ac;
      piVar5 = (int *)fn_82CE5410();
      *piVar5 = iVar4;
      iVar4 = fn_82CE5410();
      uStack_ac = 0;
      if ((uStack_a8 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),iStack_b0,uStack_a8 & 0x3fffffff,4);
      }
    }
    else {
      uStack_d8 = (unsigned short)param_3;
      auStack_e0[0] = 6;
      uStack_d6 = (unsigned char)param_4;
      piStack_dc = param_2;
      fn_82DA6530(*(unsigned int *)(param_1 + 0x88),auStack_e0);
    }
  }
  return;
}
