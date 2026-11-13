extern unsigned int *auStack_70;
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEAC28();
extern int fn_82CEAD00();
extern int fn_82CEAE80();
extern int fn_82CEAF10();
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEB1A8();
extern int fn_82CEB1B0();
extern int fn_82CFD5A8();
extern int fn_82DB9F80();
extern int fn_82E19DD8();
extern int fn_82E19FD8();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int uStack_60;


void fn_82E1A150(unsigned __int64 param_1,unsigned char *param_2,int param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar3;
  int iVar7;
  unsigned __int64 uVar4;
  int iVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int auStack_70;
  int iStack_68;
  int iStack_64;
  unsigned int uStack_60;
  
  iVar5 = fn_82CE5410();
  fn_82CEA160(param_3,*(unsigned int *)(iVar5 + 0x10),param_1,0);
  if ((int)param_4 != 0) {
    iVar5 = fn_82CEAE80(param_1);
    lVar12 = 0;
    if (0 < iVar5) {
      do {
        iVar6 = fn_82CEAF10(param_1,lVar12);
        if (*(int *)(iVar6 + 4) != 0) {
          uVar3 = fn_82CFD5A8();
          iVar7 = fn_82CEA220(param_3,uVar3);
          if (*(int *)(param_3 + 8) < iVar7) {
            uVar3 = fn_82CFD5A8(iVar6);
            fn_82E1A150(uVar3,param_2,param_3,param_4);
          }
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < iVar5);
    }
  }
  iStack_68 = 0;
  iStack_64 = 0;
  uStack_60 = 0x80000000;
  for (; (param_1 & 0xffffffff) != 0; param_1 = fn_82CEAC28(param_1)) {
    auStack_70 = (unsigned int)param_1;
    iVar5 = fn_82CE5410();
    fn_82DB9F80(&iStack_68,*(unsigned int *)(iVar5 + 0xc),0,0,&auStack_70,1);
  }
  uVar14 = 0;
  bVar1 = *param_2;
  uVar10 = (unsigned __int64)bVar1;
  uVar11 = 1;
  iVar5 = 0;
  if (0 < iStack_64) {
    iVar6 = 0;
    do {
      iVar8 = 0;
      uVar2 = *(unsigned int *)(iVar6 + iStack_68);
      iVar7 = fn_82CEAD00(uVar2);
      if (0 < iVar7) {
        do {
          trapWord(6,uVar10,0);
          lVar12 = uVar14 - (__int64)((int)uVar14 / (int)(unsigned int)bVar1) * (__int64)(int)(unsigned int)bVar1;
          trapWord(5,uVar10 & ~(((uVar14 & 0x7fffffff) << 1 | (uVar14 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          if (lVar12 != 0) {
            uVar14 = (uVar10 - lVar12) + uVar14;
          }
          uVar14 = uVar10 + uVar14;
          if ((int)uVar11 < (int)(unsigned int)bVar1) {
            uVar11 = uVar10;
          }
          iVar8 = iVar8 + 1;
          iVar7 = fn_82CEAD00(uVar2);
        } while (iVar8 < iVar7);
      }
      lVar12 = 0;
      iVar7 = fn_82CEAF18(uVar2);
      if (0 < iVar7) {
        do {
          iVar7 = fn_82CEAF20(uVar2,lVar12);
          if ((((int)uVar14 == 0) && (iVar6 != 0)) && (param_2[3] == 0)) {
            uVar14 = 1;
          }
          uVar4 = fn_82E19FD8(iVar7,*(unsigned char *)(iVar7 + 0xc),*param_2);
          iVar8 = (int)uVar4;
          if ((int)uVar11 < iVar8) {
            uVar11 = uVar4;
          }
          trapWord(6,uVar4,0);
          lVar9 = uVar14 - (__int64)((int)uVar14 / iVar8) * (__int64)iVar8;
          trapWord(5,uVar4 & ~(((uVar14 & 0x7fffffff) << 1 | (uVar14 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          if (lVar9 != 0) {
            uVar14 = (uVar4 - lVar9) + uVar14;
          }
          if ((unsigned int)*(unsigned short *)(iVar7 + 0x12) != (unsigned int)uVar14) {
            *(short *)(iVar7 + 0x12) = (short)uVar14;
          }
          lVar9 = fn_82E19DD8(iVar7,param_2,*(unsigned char *)(iVar7 + 0xc));
          uVar14 = lVar9 + uVar14;
          lVar12 = lVar12 + 1;
          iVar7 = fn_82CEAF18(uVar2);
        } while ((int)lVar12 < iVar7);
      }
      trapWord(6,uVar11,0);
      lVar12 = uVar14 - (__int64)((int)uVar14 / (int)uVar11) * (__int64)(int)uVar11;
      trapWord(5,uVar11 & ~(((uVar14 & 0x7fffffff) << 1 | (uVar14 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      uVar4 = uVar14;
      if (lVar12 != 0) {
        uVar4 = (uVar11 - lVar12) + uVar14;
      }
      uVar13 = uVar4;
      if ((int)uVar4 == 0) {
        uVar13 = 1;
      }
      iVar7 = fn_82CEB1A8(uVar2);
      if (iVar7 != (int)uVar13) {
        fn_82CEB1B0(uVar2,uVar13);
      }
      if (param_2[2] == 0) {
        uVar14 = uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < iStack_64);
  }
  iVar5 = fn_82CE5410();
  iStack_64 = 0;
  if ((uStack_60 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0xc) + 0x10))
              (*(int **)(iVar5 + 0xc),iStack_68,uStack_60 & 0x3fffffff,4);
  }
  return;
}

