extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_82A2BB60();
extern int fn_82A2BCF0();
extern int fn_83142DFC();
extern unsigned int iStack_7c;
extern unsigned int uStack_4c;
extern unsigned int uStack_80;


__int64 fn_82A2BDA0(__int64 param_1,int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  __int64 lVar10;
  int iVar11;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  int iVar16;
  unsigned int *puVar17;
  unsigned char uVar19;
  unsigned __int64 uVar18;
  unsigned int uStack_80;
  int iStack_7c;
  unsigned int auStack_78 [2];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [20];
  unsigned int uStack_4c;
  
  if ((param_2 == 0x58) && (iVar9 = (int)param_1, 4 < *(unsigned char *)(iVar9 + 0x50))) {
    uVar15 = *(unsigned int *)(iVar9 + 0x18);
    lVar10 = NtQueryVolumeInformationFile(uVar15,auStack_70,auStack_60,0x18,3);
    if (-1 < (int)lVar10) {
      if (uStack_4c < 0x1001) {
        lVar10 = NtQueryInformationFile(uVar15,auStack_70,auStack_78,4,0x11);
        if (-1 < (int)lVar10) {
          lVar10 = NtCreateEvent(&uStack_80,0,1,0);
          if (-1 < (int)lVar10) {
            bVar1 = *(unsigned char *)(iVar9 + 0x50);
            lVar10 = fn_83142DFC(0xffffffff8315d30c,
                                     (unsigned __int64)*(unsigned int *)(iVar9 + 0x44) + (unsigned __int64)bVar1 * 8 +
                                     0xd8,param_1,0x3d,
                                     (-(unsigned __int64)(*(char *)(iVar9 + 0x51) != '\0') & 0xfffff000) +
                                     0x2000,&iStack_7c);
            if (lVar10 < 0) {
              NtClose(uStack_80);
            }
            else {
              *(int *)(iStack_7c + 0xc) = iStack_7c;
              if (*(unsigned int *)(iStack_7c + 0x24) < auStack_78[0]) {
                *(unsigned int *)(iStack_7c + 0x24) = auStack_78[0];
              }
              param_1 = param_1 + 0x1c;
              iVar7 = *(int *)(iStack_7c + 0x18);
              uVar14 = 1;
              *(unsigned int *)(iStack_7c + 0x20) = uStack_4c & 0xffff;
              *(unsigned __int64 *)(iVar7 + 0x20) = *(unsigned __int64 *)(iVar9 + 8);
              *(unsigned int *)(iVar7 + 0x28) = uVar15;
              *(unsigned int *)(iVar7 + 0x2c) = uStack_80;
              *(unsigned char *)(iVar7 + 0xcf) = *(unsigned char *)(iVar9 + 0x53);
              uVar8 = *(unsigned int *)(iVar9 + 0x38);
              bVar2 = *(unsigned char *)(iVar9 + 0x1e);
              uVar12 = (unsigned __int64)bVar2 & 1;
              *(unsigned int *)(iVar7 + 0x9c) = uVar8;
              *(unsigned int *)(iVar7 + 0xa0) = *(unsigned int *)(iVar9 + 0x3c);
              if (uVar8 < 0x70e5) {
                if (uVar8 < 0xab) {
                  *(unsigned char *)(iVar7 + 0xca) = 0;
                }
                else {
                  *(unsigned char *)(iVar7 + 0xca) = 1;
                }
              }
              else {
                *(unsigned char *)(iVar7 + 0xca) = 2;
              }
              if ((bVar2 & 1) == 0) {
                uVar19 = 0xac;
                *(unsigned char *)(iVar7 + 0xce) = 1;
                uVar15 = 0x723a;
              }
              else {
                *(unsigned char *)(iVar7 + 0xce) = 0;
                uVar19 = 0xab;
                uVar15 = 0x718f;
              }
              *(unsigned int *)(iVar7 + 0x94) = uVar15;
              *(unsigned char *)(iVar7 + 0x91) = uVar19;
              if ((bVar2 & 1) == 0) {
                uVar18 = *(unsigned __int64 *)(iVar9 + 0x10) >> 0xc;
                if (0xffffffff < uVar18) {
                  uVar18 = 0xffffffff;
                }
                iVar13 = (int)uVar18;
                uVar14 = 1;
                iVar11 = fn_82A2BCF0(uVar18 & 0xffffffff);
                *(int *)(iVar7 + 0x98) = iVar11;
                *(unsigned char *)(iVar7 + 0xcd) = *(unsigned char *)(iVar9 + 0x52);
                *(int *)(iVar7 + 0xac) = iVar13 - iVar11;
              }
              *(unsigned int *)(iVar7 + 0x8c) = 0x14;
              *(unsigned int *)(iVar7 + 0x48) = uVar14;
              *(int *)(iVar7 + 0x38) = iVar7 + 0x38;
              *(unsigned char *)(iVar7 + 0x6d) = 6;
              *(int *)(iVar7 + 0x3c) = iVar7 + 0x38;
              *(int *)(iVar7 + 0x78) = iVar7 + 0x78;
              *(int *)(iVar7 + 0x7c) = iVar7 + 0x78;
              *(unsigned short *)(iVar7 + 0x6e) = 0xffff;
              iVar11 = (int)param_1;
              bVar2 = *(unsigned char *)(iVar11 + 3);
              bVar3 = *(unsigned char *)(iVar11 + 6);
              bVar4 = *(unsigned char *)(iVar11 + 5);
              bVar5 = *(unsigned char *)(iVar11 + 7);
              bVar6 = *(unsigned char *)(iVar11 + 4);
              *(unsigned int *)(iVar7 + 0x5c) = 0xffffffff;
              iVar16 = (unsigned int)bVar6 * 0x100 + (unsigned int)bVar2;
              *(unsigned int *)(iVar7 + 0x60) = 0xffffffff;
              *(unsigned short *)(iVar7 + 0x52) = 0xfffe;
              iVar13 = iVar16 * 0x1000;
              *(int *)(iVar7 + 0x4c) = iVar13;
              *(unsigned int *)(iVar7 + 0x58) = ((unsigned int)bVar5 * 0x100 + (unsigned int)bVar3) * 0x100 + (unsigned int)bVar4;
              *(int *)(iVar7 + 0x54) = iVar13;
              *(int *)(iVar7 + 0xa8) = iVar16;
              if ((*(unsigned char *)(iVar11 + 2) & 4) != 0) {
                *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + -0x1000;
              }
              param_1 = param_1 + 4;
              puVar17 = (unsigned int *)(iVar7 + 0xac);
              lVar10 = 5;
              do {
                param_1 = param_1 + 4;
                puVar17 = puVar17 + 1;
                *puVar17 = *(unsigned int *)param_1;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
              *(unsigned int *)(iVar7 + 0xc4) =
                   (*(unsigned char *)(iVar11 + 2) & 2) << 0x1d | *(unsigned int *)(iVar7 + 0xc4) & 0xbfffffff;
              if ((uVar12 & 0xffffffff) != 0) {
                *(unsigned char *)(iVar7 + 0x90) = *(unsigned char *)(iVar11 + 2) >> 3 & 1;
              }
              RtlInitializeCriticalSection(iVar7);
              *(int *)(iVar7 + 0x80) = iVar7 + 0x80;
              *(int *)(iVar7 + 0x84) = iVar7 + 0x80;
              *(unsigned char *)(iVar7 + 200) = bVar1;
              *(int *)(iVar7 + 0x30) = iVar7 + 0xd8;
              *(unsigned int *)(iVar7 + 0x34) = *(unsigned int *)(iVar9 + 0x40);
              fn_82A2BB60(iVar7);
              ObReferenceObject(iStack_7c);
              *(int *)(iVar9 + 0x48) = iStack_7c;
              lVar10 = 0;
              *(unsigned int *)(iVar9 + 0x4c) = iVar7 + (unsigned int)bVar1 * 8 + 0xd8;
              *(unsigned int *)(iStack_7c + 0x14) = *(unsigned int *)(iStack_7c + 0x14) & 0xffffffef;
            }
          }
        }
      }
      else {
        lVar10 = -0x3ffffff0;
      }
    }
  }
  else {
    lVar10 = -0x3ffffff3;
  }
  return lVar10;
}

