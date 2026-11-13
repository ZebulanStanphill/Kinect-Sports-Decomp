typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_82687270();
extern int fn_826C8C70();
extern int fn_826D6290();
extern int fn_826DC448();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E8AF0();
extern int fn_826E8FF0();
extern int fn_826E90B0();
extern int fn_826E9188();
extern int fn_826E9330();
extern int fn_82756FD0();
extern int fn_82757058();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_f0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_c8;
extern unsigned int uStack_ec;


void fn_82757108(unsigned __int64 param_1,__int64 param_2,int param_3)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned char uVar4;
  unsigned char bVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  unsigned char *puVar14;
  unsigned __int64 uVar13;
  unsigned short uVar15;
  unsigned __int64 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int iStack_f0;
  unsigned int uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  __int64 lStack_d8;
  __int64 lStack_d0;
  unsigned __int64 uStack_c8;
  
  iVar10 = fn_82F6A548();
  uVar16 = (unsigned __int64)*(unsigned int *)((int)param_2 + 0x314);
  if (uVar16 == 0) {
    uVar16 = param_2 + 0x28;
  }
  fn_826E8FF0(uVar16,iVar10 + 0x10);
  fn_826C8C70(uVar16,0xffffffff82010e48,(double)*(float *)(iVar10 + 0x10),
                    (double)*(float *)(iVar10 + 0x14),(double)*(float *)(iVar10 + 0x18),
                    (double)*(float *)(iVar10 + 0x1c));
  fn_826E8AF0(uVar16,iVar10 + 0x20);
  fn_826C8C70(uVar16,0xffffffff8200dd00);
  fn_826E9330(uVar16,iVar10 + 0x20);
  iVar7 = (int)uVar16;
  *(unsigned char *)(iVar7 + 0x15) = 0;
  if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 1) {
    fn_826E7990(uVar16);
  }
  iVar12 = *(int *)(iVar7 + 0x2c) + 1;
  uVar3 = *(unsigned char *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
  *(int *)(iVar7 + 0x2c) = iVar12;
  *(unsigned char *)(iVar7 + 0x15) = 0;
  if (*(int *)(iVar7 + 0x30) - iVar12 < 1) {
    fn_826E7990(uVar16);
  }
  uVar4 = *(unsigned char *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
  *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
  fn_826C8C70(uVar16,0xffffffff8201451c);
  iStack_e0 = 0;
  iStack_dc = 0;
  dVar20 = (double)lbl_821AAD20;
  bVar9 = false;
  uVar15 = 0;
  dVar18 = dVar20;
  dVar19 = dVar20;
  dVar21 = dVar20;
  while( true ) {
    *(unsigned char *)(iVar7 + 0x15) = 0;
    if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 1) {
      fn_826E7990(uVar16);
    }
    bVar5 = *(unsigned char *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
    *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
    if (bVar5 == 0) break;
    if (bVar9) {
      bVar9 = false;
      piVar11 = (int *)fn_82757058(iVar10 + 0x38);
      if (piVar11 != (int *)0x0) {
        piVar11[6] = (int)(float)dVar19;
        piVar11[7] = (int)(float)dVar20;
        fn_826D6290(piVar11 + 3,&iStack_e0);
        piVar11[8] = (int)(float)dVar18;
        piVar11[5] = iStack_f0;
        *(unsigned short *)(piVar11 + 9) = uVar15;
        fn_82756FD0(piVar11,uVar16,bVar5,uVar3,uVar4);
        uVar13 = (unsigned __int64)(unsigned int)piVar11[1];
        dVar17 = dVar21;
        if (uVar13 != 0) {
          iVar12 = 0;
          do {
            iVar8 = iVar12 + *piVar11;
            iVar12 = iVar12 + 8;
            dVar17 = (double)(float)((double)*(float *)(iVar8 + 4) + dVar17);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        dVar19 = (double)(float)(dVar17 + dVar19);
      }
      fn_826C8C70(uVar16,0xffffffff820144cc,bVar5);
    }
    else {
      uVar6 = (int)(unsigned int)bVar5 >> 3;
      bVar9 = true;
      fn_826C8C70(uVar16,0xffffffff820144b4);
      if ((uVar6 & 1) != 0) {
        *(unsigned char *)(iVar7 + 0x15) = 0;
        if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
          fn_826E7800(uVar16,2);
        }
        puVar14 = (unsigned char *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
        uVar1 = puVar14[1];
        uVar2 = *puVar14;
        *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
        uVar15 = CONCAT11(uVar1,uVar2);
        fn_826C8C70(uVar16,0xffffffff82010d98,uVar15);
        uStack_ec = (unsigned int)uVar15;
        iStack_e8 = 0;
        iStack_e4 = 0;
        fn_826DC448(*(unsigned int *)((int)param_2 + 0x20),&iStack_e8,&uStack_ec);
        fn_826D6290(&iStack_e0,&iStack_e8);
        if ((iStack_e8 == 0) && (iStack_e4 != 0)) {
          fn_82687270();
        }
      }
      if (((int)(unsigned int)bVar5 >> 2 & 1U) != 0) {
        if (param_3 == 0xb) {
          fn_826E90B0();
        }
        else {
          fn_826E9188(uVar16,&iStack_f0);
        }
        fn_826C8C70(uVar16,0xffffffff82010d8c);
      }
      if ((bVar5 & 1) != 0) {
        *(unsigned char *)(iVar7 + 0x15) = 0;
        if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
          fn_826E7800(uVar16,2);
        }
        puVar14 = (unsigned char *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
        uVar1 = puVar14[1];
        uVar2 = *puVar14;
        *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
        lStack_d8 = (__int64)CONCAT11(uVar1,uVar2);
        dVar19 = (double)lStack_d8;
        fn_826C8C70(dVar19,uVar16,0xffffffff820144e8,dVar19);
      }
      if (((int)(unsigned int)bVar5 >> 1 & 1U) != 0) {
        *(unsigned char *)(iVar7 + 0x15) = 0;
        if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
          fn_826E7800(uVar16,2);
        }
        puVar14 = (unsigned char *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
        uVar1 = puVar14[1];
        uVar2 = *puVar14;
        *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
        lStack_d0 = (__int64)CONCAT11(uVar1,uVar2);
        dVar20 = (double)lStack_d0;
        fn_826C8C70(dVar20,uVar16,0xffffffff820144f8,dVar20);
      }
      if ((uVar6 & 1) != 0) {
        *(unsigned char *)(iVar7 + 0x15) = 0;
        if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
          fn_826E7800(uVar16,2);
        }
        puVar14 = (unsigned char *)(*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x3c));
        uVar1 = puVar14[1];
        uVar2 = *puVar14;
        *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
        uStack_c8 = (unsigned __int64)CONCAT11(uVar1,uVar2);
        dVar18 = (double)uStack_c8;
        fn_826C8C70(dVar18,uVar16,0xffffffff82014508,dVar18);
      }
    }
  }
  fn_826C8C70(uVar16,0xffffffff820144a0);
  if ((iStack_e0 == 0) && (iStack_dc != 0)) {
    fn_82687270();
  }
  fn_82F6A594();
  return;
}

