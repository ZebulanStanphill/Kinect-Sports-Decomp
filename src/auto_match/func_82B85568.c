typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_82AEFC28();
extern int fn_82B81938();
extern int fn_82B83188();


unsigned __int64 fn_82B85568(int *param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  bool bVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  char cVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  int *piVar14;
  unsigned int auStack_60 [1];
  
  if (((param_2[2] ^ param_1[2]) & 0x380000U) == 0) {
    uVar11 = 0;
    for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      uVar11 = uVar11 + 1;
    }
    fn_82AEFC28(auStack_60,uVar11,0xffffffff82af07e8,param_3);
    for (puVar2 = (unsigned int *)*param_2; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[1]) {
      uVar3 = *puVar2;
      bVar5 = false;
      uVar13 = puVar2[3];
      uVar12 = 1;
      uVar6 = uVar3 >> 0x19 & 7;
      for (puVar4 = (unsigned int *)*param_1; puVar4 != (unsigned int *)0x0; puVar4 = (unsigned int *)puVar4[1]) {
        if (((*puVar4 >> 0x1e & 1) == (uVar3 >> 0x1e & 1)) && ((*puVar4 >> 0x19 & 7) == uVar6)) {
          if (uVar6 == 0) {
            if (puVar4[3] == uVar13) goto LAB_82b85648;
          }
          else {
            cVar9 = fn_82B81938(puVar4,puVar2);
            if (cVar9 != '\0') {
LAB_82b85648:
              puVar10 = (unsigned int *)(auStack_60[0] + 4);
              if ((~auStack_60[0] & 1) == 0) {
                puVar10 = auStack_60;
              }
              uVar7 = uVar12 >> 3 & 0x1ffffffc;
              bVar5 = true;
              *(unsigned int *)(uVar7 + (int)puVar10) =
                   1 << (uVar12 & 0x1f) | *(unsigned int *)(uVar7 + (int)puVar10);
            }
          }
        }
        uVar12 = uVar12 + 1;
      }
      if (!bVar5) goto LAB_82b85594;
    }
    if ((uVar11 & 0xffffffff) != 0) {
      cVar9 = fn_82B83188(auStack_60,0,uVar11 - 1);
      if (cVar9 != '\0') goto LAB_82b85594;
      uVar13 = 0;
      uVar3 = (unsigned int)param_1[2] >> 7 & 0x7f;
      if ((uVar3 == 0) ||
         ((((5 < uVar3 && (uVar3 != 8)) && (uVar3 != 0xc)) && ((uVar3 < 0x10 || (0x12 < uVar3))))))
      {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar13 = 2;
        cVar9 = fn_82B81938(param_1[0xb],param_2[0xb]);
        if (((cVar9 == '\0') || (cVar9 = fn_82B81938(param_1[0xc],param_2[0xc]), cVar9 == '\0'))
           && ((cVar9 = fn_82B81938(param_1[0xc],param_2[0xb]), cVar9 == '\0' ||
               (cVar9 = fn_82B81938(param_1[0xb],param_2[0xc]), cVar9 == '\0'))))
        goto LAB_82b85594;
      }
      if (uVar13 < ((unsigned int)param_1[2] >> 0x13 & 7)) {
        piVar14 = param_2 + uVar13 + 0xb;
        do {
          puVar2 = *(unsigned int **)(((int)param_1 - (int)param_2) + (int)piVar14);
          if ((*puVar2 & 0xe000000) == 0) {
            if (puVar2[3] != *(unsigned int *)(*piVar14 + 0xc)) goto LAB_82b85594;
          }
          else {
            cVar9 = fn_82B81938();
            if (cVar9 == '\0') goto LAB_82b85594;
          }
          uVar13 = uVar13 + 1;
          piVar14 = piVar14 + 1;
        } while (uVar13 < ((unsigned int)param_1[2] >> 0x13 & 7));
      }
    }
    uVar8 = 1;
  }
  else {
LAB_82b85594:
    uVar8 = 0;
  }
  return uVar8;
}

