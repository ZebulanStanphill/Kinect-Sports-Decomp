typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern int fn_82FF62F8();
extern int fn_82FF8170();
extern int fn_83005020();
extern int fn_83006B48();
extern int fn_83006BF0();
extern int fn_83006C88();
extern int fn_83006D00();
extern int fn_83006D78();
extern int fn_83006DF0();
extern int fn_83006E68();
extern int fn_83006EF8();
extern int fn_83006F88();
extern int fn_8302AEF0();
extern int fn_8302AFA0();
extern int fn_8302B050();
extern int fn_8302B100();
extern unsigned int iStack_80;
extern unsigned int iStack_a0;
extern unsigned int iStack_c0;
extern unsigned int iStack_e0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern int (*lbl_83264334)();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_dc;


void fn_82FF6CD0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,char param_4,char param_5)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  char cVar8;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned __int64 uVar5;
  int iVar9;
  unsigned int *puVar10;
  int *piVar11;
  double dVar12;
  double dVar13;
  int iStack_e0;
  unsigned int uStack_dc;
  float fStack_d8;
  float fStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned char uStack_c8;
  int iStack_c0;
  unsigned int uStack_bc;
  float fStack_b8;
  float fStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned char uStack_a8;
  int iStack_a0;
  unsigned int uStack_9c;
  float fStack_98;
  float fStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned char uStack_88;
  int iStack_80;
  unsigned int uStack_7c;
  float fStack_78;
  float fStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned char uStack_68;
  
  for (puVar10 = *(unsigned int **)(param_1 + 4);
      (puVar10 != *(unsigned int **)(param_1 + 8) && ((unsigned __int64)*puVar10 != (param_2 & 0xffffffff)));
      puVar10 = puVar10 + 2) {
  }
  iVar9 = (int)*(unsigned int **)(param_1 + 8) - (int)puVar10;
  piVar11 = (int *)(-(unsigned int)(iVar9 != iVar9 + -1 + (unsigned int)(iVar9 == 0)) & (unsigned int)(puVar10 + 1));
  if ((piVar11 != (int *)0x0) &&
     ((((iVar9 = *piVar11, param_5 != '\0' ||
        (fn_82FF62F8(param_1,param_2,*(unsigned int *)(iVar9 + 8),param_3),
        lbl_83264334 == (int (**)())0x0)) || (param_4 != '\0')) ||
      (cVar8 = (*lbl_83264334)(param_2,param_3), cVar8 == '\0')))) {
    uStack_cc = 4;
    uStack_8c = 4;
    dVar13 = (double)lbl_821AAD20;
    fStack_d8 = lbl_821AAD20;
    fStack_98 = lbl_821AAD20;
    fStack_78 = lbl_821AAD20;
    fStack_b8 = lbl_821AAD20;
    uStack_dc = 0x10000;
    fStack_d4 = lbl_821AAD20;
    uStack_c8 = 1;
    fStack_94 = lbl_821AAD20;
    uStack_9c = 0x20000;
    fStack_74 = lbl_821AAD20;
    uStack_88 = 0;
    fStack_b4 = lbl_821AAD20;
    uStack_7c = 0x40000;
    uStack_6c = 4;
    bVar3 = false;
    uStack_68 = 0;
    uStack_d0 = 0;
    uStack_bc = 0x80000;
    uStack_ac = 4;
    uStack_a8 = 1;
    uVar1 = *(unsigned int *)(iVar9 + 8);
    if (param_4 == '\0') {
      puVar6 = (unsigned int *)fn_82FF8170(iVar9 + 0x3c,CONCAT44(uVar1,(int)param_3));
      if (puVar6 == (unsigned int *)0x0) {
        uStack_d0 = *(unsigned int *)(iVar9 + 4);
      }
      else {
        uStack_d0 = *puVar6;
      }
    }
    for (puVar10 = *(unsigned int **)(iVar9 + 0x10);
        (puVar10 != *(unsigned int **)(iVar9 + 0x14) && ((unsigned __int64)*puVar10 != (param_3 & 0xffffffff)));
        puVar10 = puVar10 + 4) {
    }
    puVar6 = (unsigned int *)(-(unsigned int)(*(unsigned int **)(iVar9 + 0x14) != puVar10) & (unsigned int)(puVar10 + 1));
    if (puVar6 == (unsigned int *)0x0) {
      *(unsigned int *)(iVar9 + 0xc) = 0;
    }
    else {
      *(unsigned int *)(iVar9 + 0xc) = *puVar6;
    }
    uStack_b0 = uStack_d0;
    uStack_90 = uStack_d0;
    uStack_70 = uStack_d0;
    for (puVar6 = *(unsigned int **)(iVar9 + 0x1c); puVar6 != (unsigned int *)0x0;
        puVar6 = (unsigned int *)*puVar6) {
      iVar2 = puVar6[1];
      uVar4 = fn_83006EF8(iVar2,uVar1);
      if ((uVar4 & 0xffffffff) == 0) {
        fStack_d8 = (float)dVar13;
        fStack_98 = (float)dVar13;
        fStack_78 = (float)dVar13;
        dVar12 = dVar13;
      }
      else {
        dVar12 = (double)fn_8302AEF0();
        fStack_d8 = (float)dVar12;
        dVar12 = (double)fn_8302AFA0(uVar4);
        fStack_98 = (float)dVar12;
        dVar12 = (double)fn_8302B050(uVar4);
        fStack_78 = (float)dVar12;
        dVar12 = (double)fn_8302B100(uVar4);
      }
      fStack_b8 = (float)dVar12;
      fn_83006F88(iVar2,param_3);
      uVar4 = fn_83006E68(iVar2);
      if ((uVar4 & 0xffffffff) == 0) {
        fStack_d4 = (float)dVar13;
        fStack_94 = (float)dVar13;
        fStack_74 = (float)dVar13;
        dVar12 = dVar13;
      }
      else {
        dVar12 = (double)fn_8302AEF0();
        fStack_d4 = (float)dVar12;
        dVar12 = (double)fn_8302AFA0(uVar4);
        fStack_94 = (float)dVar12;
        dVar12 = (double)fn_8302B050(uVar4);
        fStack_74 = (float)dVar12;
        dVar12 = (double)fn_8302B100(uVar4);
      }
      fStack_b4 = (float)dVar12;
      if ((fStack_d8 == fStack_d4) && (iVar7 = fn_83006BF0(iVar2,0), iVar7 == 0)) {
        fn_83006C88((double)fStack_d4,iVar2);
        bVar3 = true;
      }
      else {
        if (iVar2 == 0) {
          iStack_e0 = 0;
        }
        else {
          iStack_e0 = iVar2 + 0x1c;
        }
        uVar4 = fn_83006BF0(iVar2,0);
        if ((uVar4 & 0xffffffff) == 0) {
          fn_83006C88((double)fStack_d8,iVar2,uVar4);
          bVar3 = true;
          uVar5 = fn_82FF59A8(lbl_832642F4,&iStack_e0,1,1);
          fn_83006B48(iVar2,uVar5,0);
        }
        else {
          fn_82FF5400((double)fStack_d4,lbl_832642F4,uVar4,0x10000);
        }
      }
      if ((fStack_b8 == fStack_b4) && (iVar7 = fn_83006BF0(iVar2,1), iVar7 == 0)) {
        fn_83006D78((double)fStack_b4,iVar2);
        bVar3 = true;
      }
      else {
        if (iVar2 == 0) {
          iStack_c0 = 0;
        }
        else {
          iStack_c0 = iVar2 + 0x1c;
        }
        uVar4 = fn_83006BF0(iVar2,1);
        if ((uVar4 & 0xffffffff) == 0) {
          fn_83006D78((double)fStack_b8,iVar2,uVar4);
          bVar3 = true;
          uVar5 = fn_82FF59A8(lbl_832642F4,&iStack_c0,1,1);
          fn_83006B48(iVar2,uVar5,1);
        }
        else {
          fn_82FF5400((double)fStack_b4,lbl_832642F4,uVar4,0x80000);
        }
      }
      if ((fStack_98 == fStack_94) && (iVar7 = fn_83006BF0(iVar2,2), iVar7 == 0)) {
        fn_83006D00((double)fStack_94,iVar2);
        bVar3 = true;
      }
      else {
        if (iVar2 == 0) {
          iStack_a0 = 0;
        }
        else {
          iStack_a0 = iVar2 + 0x1c;
        }
        uVar4 = fn_83006BF0(iVar2,2);
        if ((uVar4 & 0xffffffff) == 0) {
          fn_83006D00((double)fStack_98,iVar2,uVar4);
          bVar3 = true;
          uVar5 = fn_82FF59A8(lbl_832642F4,&iStack_a0,1,1);
          fn_83006B48(iVar2,uVar5,2);
        }
        else {
          fn_82FF5400((double)fStack_94,lbl_832642F4,uVar4,0x20000);
        }
      }
      if ((fStack_78 == fStack_74) && (iVar7 = fn_83006BF0(iVar2,3), iVar7 == 0)) {
        fn_83006DF0((double)fStack_74,iVar2);
        bVar3 = true;
      }
      else {
        if (iVar2 == 0) {
          iStack_80 = 0;
        }
        else {
          iStack_80 = iVar2 + 0x1c;
        }
        uVar4 = fn_83006BF0(iVar2,3);
        if ((uVar4 & 0xffffffff) == 0) {
          fn_83006DF0((double)fStack_78,iVar2,uVar4);
          bVar3 = true;
          uVar5 = fn_82FF59A8(lbl_832642F4,&iStack_80,1,1);
          fn_83006B48(iVar2,uVar5,3);
        }
        else {
          fn_82FF5400((double)fStack_74,lbl_832642F4,uVar4,0x40000);
        }
      }
      if (bVar3) {
        fn_83005020(iVar2);
      }
    }
    *(int *)(iVar9 + 8) = (int)param_3;
  }
  return;
}

