typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_78;
extern int fn_82ABDBE8();
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AEFCD8();
extern int fn_82AF4D10();
extern int fn_82AF9290();
extern int fn_82B8A3A0();
extern int fn_82B8D2B8();
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000034;


unsigned __int64
fn_82AEFEA8(unsigned __int64 param_1,int *param_2,int *param_3,unsigned int *param_4,unsigned int *param_5,
             unsigned int *param_6)

{
  float fVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar4;
  unsigned int *puVar5;
  char cVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int *piVar10;
  unsigned int *puVar11;
  unsigned int *puStack00000034;
  unsigned int *puStack_80;
  unsigned int *puStack_7c;
  unsigned char auStack_78 [120];
  
  if ((((((unsigned int)param_2[2] >> 5 & 1) == 0) && (((unsigned int)param_2[2] >> 0x19 & 1) == 0)) &&
      (uVar7 = *param_4, (uVar7 & 0x1b) == 0)) && ((int *)param_5[3] != param_3)) {
    uVar8 = (unsigned int)param_3[2] >> 7 & 0x7f;
    piVar10 = param_2;
    puStack00000034 = param_5;
    if (uVar8 == 2) {
      puStack_80 = (unsigned int *)fn_82ACA920(param_1,param_3[0xb],
                                             *(unsigned int *)(param_3[0xb] + 0xc));
      *puStack_80 = *puStack_80 & 0xf1ffffff | *param_4 & 0xe000000;
      uVar8 = *param_4 >> 5 & 0xff;
      uVar7 = *puStack_80 >> 5 & 0xff;
      *puStack_80 = ((((uVar7 >> (uVar8 >> 5 & 6) & 3) << 2 | uVar7 >> (uVar8 >> 3 & 6) & 3) << 2 |
                     uVar7 >> (uVar8 >> 1 & 6) & 3) << 2 | uVar7 >> ((*param_4 >> 5 & 3) << 1) & 3)
                    << 5 | *puStack_80 & 0xffffe01f;
      puStack_7c = (unsigned int *)fn_82ACA920(param_1,param_3[0xc],
                                             *(unsigned int *)(param_3[0xc] + 0xc));
      *puStack_7c = *puStack_7c & 0xf1ffffff | *param_4 & 0xe000000;
      uVar9 = (unsigned __int64)(*param_4 >> 5) & 0xff;
      uVar7 = *puStack_7c >> 5 & 0xff;
      *puStack_7c = ((((uVar7 >> ((unsigned int)uVar9 >> 5 & 6) & 3) << 2 |
                      uVar7 >> ((unsigned int)uVar9 >> 3 & 6) & 3) << 2 |
                     uVar7 >> ((unsigned int)(uVar9 >> 1) & 6) & 3) << 2 |
                    uVar7 >> ((unsigned int)(uVar9 << 1) & 6) & 3) << 5 | *puStack_7c & 0xffffe01f;
      if ((*param_4 & 0x1f) != 0) {
        fn_82AD1270(puStack_80,4);
      }
    }
    else {
      if (uVar8 != 1) {
        return 0;
      }
      puVar5 = (unsigned int *)param_3[0xb];
      puVar11 = (unsigned int *)param_3[0xc];
      puStack_80 = puVar5;
      puStack_7c = puVar11;
      cVar6 = fn_82ABDBE8(puVar5,puVar11);
      if (cVar6 == '\0') {
        bVar3 = false;
        cVar6 = fn_82ABDBE8(puVar5,param_5);
        if (((cVar6 != '\0') && ((uVar7 & 0x1f) == 0)) &&
           (uVar8 = *puVar5 >> 5 & 0xff,
           (((((uVar8 >> (uVar7 >> 10 & 6) & 3) << 2 | uVar8 >> (uVar7 >> 8 & 6) & 3) << 2 |
             uVar8 >> (uVar7 >> 6 & 6) & 3) << 2 | uVar8 >> (uVar7 >> 4 & 6) & 3) &
           (1 << (*puVar5 >> 0x18 & 0xe)) - 1U) ==
           ((1 << (*param_5 >> 0x18 & 0xe)) - 1U & *param_5 >> 5 & 0xff))) {
          puStack00000034 = puVar11;
          puStack_7c = param_5;
          param_5 = (unsigned int *)fn_82ACA920(param_1,puVar11,puVar11[3]);
          bVar3 = true;
          *param_5 = *param_5 & 0xf1ffffff | *param_4 & 0xe000000;
          uVar8 = *param_4 >> 5 & 0xff;
          uVar7 = *param_5 >> 5 & 0xff;
          *param_5 = ((((uVar7 >> (uVar8 >> 5 & 6) & 3) << 2 | uVar7 >> (uVar8 >> 3 & 6) & 3) << 2 |
                      uVar7 >> (uVar8 >> 1 & 6) & 3) << 2 | uVar7 >> ((*param_4 >> 5 & 3) << 1) & 3)
                     << 5 | *param_5 & 0xffffe01f;
          piVar10 = param_3;
          puVar5 = puStack_80;
          puVar11 = puStack_7c;
          puStack00000034 = param_5;
        }
        if (!bVar3) {
          cVar6 = fn_82ABDBE8(puVar11,param_5);
          if (cVar6 == '\0') {
            return 0;
          }
          uVar7 = *param_4;
          if ((uVar7 & 0x1f) != 0) {
            return 0;
          }
          uVar8 = *puVar11 >> 5 & 0xff;
          if ((((((uVar8 >> (uVar7 >> 10 & 6) & 3) << 2 | uVar8 >> (uVar7 >> 8 & 6) & 3) << 2 |
                uVar8 >> (uVar7 >> 6 & 6) & 3) << 2 | uVar8 >> (uVar7 >> 4 & 6) & 3) &
              (1 << (*puVar11 >> 0x18 & 0xe)) - 1U) !=
              ((1 << (*param_5 >> 0x18 & 0xe)) - 1U & *param_5 >> 5 & 0xff)) {
            return 0;
          }
          puStack00000034 = puVar5;
          puStack_80 = param_5;
          puStack00000034 = (unsigned int *)fn_82ACA920(param_1,puVar5,puVar5[3]);
          *puStack00000034 = *puStack00000034 & 0xf1ffffff | *param_4 & 0xe000000;
          uVar8 = *param_4 >> 5 & 0xff;
          uVar7 = *puStack00000034 >> 5 & 0xff;
          *puStack00000034 =
               ((((uVar7 >> (uVar8 >> 5 & 6) & 3) << 2 | uVar7 >> (uVar8 >> 3 & 6) & 3) << 2 |
                uVar7 >> (uVar8 >> 1 & 6) & 3) << 2 | uVar7 >> ((*param_4 >> 5 & 3) << 1) & 3) << 5
               | *puStack00000034 & 0xffffe01f;
          piVar10 = param_3;
          puVar5 = puStack_80;
        }
      }
      puStack_80 = (unsigned int *)fn_82ACA920(param_1,puVar5,puVar5[3]);
      *puStack_80 = *puStack_80 & 0xf1ffffff | *param_4 & 0xe000000;
      fVar1 = lbl_82005344;
      uVar9 = (unsigned __int64)(*param_4 >> 5) & 0xff;
      uVar7 = *puStack_80 >> 5 & 0xff;
      *puStack_80 = ((((uVar7 >> ((unsigned int)uVar9 >> 5 & 6) & 3) << 2 |
                      uVar7 >> ((unsigned int)uVar9 >> 3 & 6) & 3) << 2 |
                     uVar7 >> ((unsigned int)(uVar9 >> 1) & 6) & 3) << 2 |
                    uVar7 >> ((unsigned int)(uVar9 << 1) & 6) & 3) << 5 | *puStack_80 & 0xffffe01f;
      if ((*param_4 & 0x1f) != 0) {
        fVar1 = lbl_82005340;
      }
      iVar4 = fn_82B8A3A0((double)fVar1,(double)lbl_821AAD20,(double)lbl_821AAD20,param_1,1);
      uVar7 = *param_4;
      puVar5 = (unsigned int *)fn_82AD17B0(param_1,iVar4);
      *puVar5 = (uVar7 >> 0x19 & 7) << 0x19 | *puVar5 & 0xf1ffffff;
      fn_82AD1270(puVar5,0);
      *puVar5 = *puVar5 & 0xffffe01f;
      puStack_7c = puVar5;
      fn_82AEFCD8(iVar4);
      *(unsigned int *)(iVar4 + 8) = *(unsigned int *)(iVar4 + 8) | 0x1000000;
    }
    cVar6 = fn_82AF9290(param_1,&puStack_80,&puStack_7c,&stack0x00000034);
    if (((cVar6 != '\0') && (cVar6 = fn_82B8D2B8(param_1,param_3,param_2,1,0), cVar6 != '\0'))
       && (cVar6 = fn_82AF4D10(param_1,puStack_80,param_3,puStack_7c,param_3,puStack00000034,
                                     piVar10,auStack_78), cVar6 != '\0')) {
      uVar7 = 0;
      uVar8 = 0;
      for (puVar5 = (unsigned int *)*param_3; puVar5 != (unsigned int *)0x0; puVar5 = (unsigned int *)puVar5[1]) {
        uVar2 = *puVar5;
        if (((uVar2 & 0x40000000) == 0) || (bVar3 = true, (uVar2 & 0xe000000) != 0)) {
          bVar3 = false;
        }
        if ((bVar3) && ((uVar2 & 0x1ffe000) == 0)) {
          uVar7 = puVar5[3];
          break;
        }
      }
      for (puVar5 = (unsigned int *)*param_2; puVar5 != (unsigned int *)0x0; puVar5 = (unsigned int *)puVar5[1]) {
        uVar2 = *puVar5;
        if (((uVar2 & 0x40000000) == 0) || (bVar3 = true, (uVar2 & 0xe000000) != 0)) {
          bVar3 = false;
        }
        if ((bVar3) && ((uVar2 & 0x1ffe000) == 0)) {
          uVar8 = puVar5[3];
          break;
        }
      }
      if (((uVar7 == 0) || (uVar8 == 0)) || (uVar7 == uVar8)) {
        *param_6 = puStack_80;
        param_6[1] = puStack_7c;
        param_6[2] = puStack00000034;
        return 1;
      }
    }
  }
  return 0;
}

