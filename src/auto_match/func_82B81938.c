extern int fn_82ABDBE8();
extern int fn_82B80EF8();


unsigned __int64 fn_82B81938(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  char cVar8;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  unsigned int uVar10;
  double dVar11;
  double dVar12;
  
  cVar8 = fn_82ABDBE8();
  if (cVar8 == '\0') {
    uVar1 = param_1[3];
    uVar2 = param_2[3];
    if (((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 16000) && ((*(unsigned int *)(uVar2 + 8) & 0x3f80) == 16000)) {
      uVar3 = *param_1;
      uVar4 = *param_2;
      uVar6 = uVar3 >> 0x19 & 7;
      if (uVar6 == (uVar4 >> 0x19 & 7)) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar10 = 0;
          do {
            uVar5 = *param_2;
            dVar11 = (double)fn_82B80EF8(uVar1,(*param_1 >> 5 & 0xff) >> (uVar10 & 0x3f) & 3,
                                           uVar3 & 0x1f);
            dVar12 = (double)fn_82B80EF8(uVar2,(uVar5 >> 5 & 0xff) >> (uVar10 & 0x3f) & 3,
                                           uVar4 & 0x1f);
            if (dVar11 != dVar12) goto LAB_82b81a18;
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 + 2;
          } while (uVar9 < uVar6);
        }
        goto LAB_82b8195c;
      }
    }
LAB_82b81a18:
    uVar7 = 0;
  }
  else {
LAB_82b8195c:
    uVar7 = 1;
  }
  return uVar7;
}

