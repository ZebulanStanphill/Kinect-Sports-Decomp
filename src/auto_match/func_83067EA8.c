extern unsigned int *auStack_140;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern unsigned int fStack_1a0;
extern unsigned int fStack_1a4;
extern unsigned int fStack_1a8;
extern int fn_8265CA60();
extern int fn_82809CB0();
extern int fn_8305C848();
extern int fn_830604F0();
extern int fn_83060EC8();
extern int fn_83060FF8();
extern int fn_83061508();
extern int fn_83061548();
extern int fn_830615E0();
extern int fn_83061AE8();
extern int fn_83061BC8();
extern int fn_83061F30();
extern int fn_83062500();
extern int fn_830625A0();
extern int fn_83062F00();
extern int fn_83063D30();
extern int fn_83064748();
extern int fn_83065218();
extern int fn_83065418();
extern int fn_83066F08();
extern int fn_83067658();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern int fn_83067AE8();
extern int fn_830688E0();
extern int fn_83069310();
extern int fn_83069600();
extern int fn_830697E0();
extern int fn_83069E68();
extern int fn_8306A1A0();
extern int fn_8306A348();
extern int fn_8306A530();
extern int fn_8306A6A0();
extern int fn_8306A758();
extern unsigned int iStack_198;
extern unsigned int iStack_19c;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_194;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;


unsigned __int64
fn_83067EA8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4,
             unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar4;
  char cVar6;
  __int64 lVar3;
  unsigned int uVar5;
  int iVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  double dVar10;
  double dVar11;
  unsigned __int64 uVar12;
  double dVar13;
  float afStack_1d0 [4];
  unsigned int *puStack_1c0;
  unsigned int uStack_1bc;
  unsigned int uStack_1b8;
  unsigned int *puStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int iStack_19c;
  int iStack_198;
  unsigned int uStack_194;
  unsigned char auStack_190 [16];
  unsigned char auStack_180 [16];
  unsigned char auStack_170 [48];
  unsigned char auStack_140 [320];
  
  iVar4 = fn_830604F0(param_2);
  if (iVar4 == 0) {
    fn_83067658(param_5,0xffffffff8217e8f0,0xffffffff8217e8c4);
  }
  else {
    dVar13 = (double)lbl_821AAD20;
    fn_83061BC8(dVar13,param_2);
    afStack_1d0[0] = (float)dVar13;
    fn_83060FF8(param_2,&fStack_1a8,afStack_1d0);
    dVar10 = (double)fn_82809CB0((double)fStack_1a8);
    dVar11 = (double)fn_82809CB0((double)fStack_1a4);
    if (dVar11 < dVar10) {
      fStack_1a4 = fStack_1a8;
    }
    dVar10 = (double)fn_82809CB0((double)fStack_1a4);
    dVar11 = (double)fn_82809CB0((double)fStack_1a0);
    if (dVar10 < dVar11) {
      dVar10 = (double)fn_82809CB0((double)fStack_1a0);
    }
    uVar12 = fn_83066F08((double)(float)(dVar10 + (double)afStack_1d0[0]));
    cVar6 = fn_83062500(param_2,&iStack_19c,&iStack_198);
    if (cVar6 != '\0') {
      if ((param_5 & 0xffffffff) != 0) {
        fn_830677A0(param_5,1,0xffffffff8217e9ac);
      }
      fn_830615E0((double)lbl_8201DCB8,param_2);
      fn_83061508(auStack_170);
      fn_83061BC8(dVar13,param_3);
      fn_830625A0(param_3,1,0xffffffff83067718,0xffffffff83067768);
      cVar6 = fn_83069310(uVar12,param_3,auStack_170);
      if (cVar6 == '\0') {
        fn_83067658(param_5,0xffffffff8217e9e0,0xffffffff8217e9c8);
        uVar12 = 0;
      }
      else {
        puStack_1c0 = (unsigned int *)0x0;
        uStack_1bc = 0;
        uStack_1b8 = 0;
        puStack_1b0 = (unsigned int *)0x0;
        uStack_194 = fn_8306A6A0(auStack_170,&puStack_1c0);
        if ((param_5 & 0xffffffff) != 0) {
          fn_830679A8(param_5);
          fn_830678C8(param_5);
        }
        fn_83062F00(auStack_140);
        if (param_4 == (unsigned char *)0x0) {
          param_4 = auStack_140;
        }
        fn_83064748(uVar12,param_4);
        fn_83065218(param_4,param_2,param_5,0,1000,0xffffffff83068c40);
        fn_83060EC8(param_2,auStack_190,auStack_180);
        fn_83069E68(uVar12,&puStack_1c0,param_4);
        fn_83065418(param_4,param_5);
        fn_8306A758(uVar12,&puStack_1c0);
        puVar9 = (unsigned int *)(param_1 + 0xc);
        iVar4 = fn_8306A1A0(param_4,puVar9,param_5);
        if (iVar4 != 0) {
          fn_83069600(param_4,puVar9,param_5);
        }
        fn_830697E0(uVar12,param_4,puVar9);
        uVar8 = *puVar9 + 1;
        *puVar9 = uVar8;
        lVar3 = ((unsigned __int64)uVar8 & 0xfffffff) << 4;
        if (0xfffffff < uVar8) {
          lVar3 = -1;
        }
        uVar5 = fn_8265CA60(lVar3);
        *(unsigned int *)(param_1 + 4) = uVar5;
        iVar4 = 0;
        if (0 < (int)*puVar9) {
          iVar7 = 0;
          do {
            *(int *)(iVar7 + *(int *)(param_1 + 4)) = iVar4;
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 0x10;
          } while (iVar4 < (int)*puVar9);
        }
        fn_8306A348(&puStack_1c0,&uStack_194);
        fn_83067AE8(uVar12,param_1,&puStack_1c0);
        while (puVar2 = puStack_1c0, puStack_1c0 != (unsigned int *)0x0) {
          fn_830688E0(puStack_1c0 + 0x1a);
          while (puVar1 = (unsigned int *)puVar2[7], puVar1 != (unsigned int *)0x0) {
            if (puVar1 != (unsigned int *)0x0) {
              (**(int (***)())*puVar1)(puVar1,1);
            }
          }
          (**(int (***)())*puVar2)(puVar2,1);
        }
        fn_83061548(auStack_170,0);
        fn_83061AE8(auStack_170);
        fn_8306A530(param_4);
        fn_8305C848(param_1 + 0x44,param_4,0);
        fn_83063D30(auStack_140);
        for (puVar2 = puStack_1b0; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[2]) {
          puVar2[3] = 0;
          *puVar2 = 0;
        }
        uVar12 = 1;
      }
      fn_83061F30(auStack_170);
      return uVar12;
    }
    fn_83067658(param_5,0xffffffff8217e924,0xffffffff8217e8f8);
    if (0 < iStack_19c) {
      fn_83067658(param_5,0xffffffff8217e95c,0xffffffff8217e92c);
    }
    if (0 < iStack_198) {
      fn_83067658(param_5,0xffffffff8217e9a4,0xffffffff8217e964);
    }
  }
  return 0;
}

