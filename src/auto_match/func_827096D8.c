typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_8269A608();
extern int fn_826AAB20();
extern int fn_826B2290();
extern int fn_826BBF30();
extern int fn_826CD508();
extern int fn_826CDDC0();
extern int fn_826CE3B0();
extern int fn_826D4148();
extern int fn_826EA050();
extern int fn_826F5DE0();
extern int fn_826F6E48();
extern int fn_826F6E98();
extern int fn_826F6FA8();
extern int fn_826FB150();
extern int fn_826FC7A0();
extern int fn_826FE988();
extern int fn_82703030();
extern int fn_82703090();
extern int fn_827043C0();
extern int fn_82704BC0();
extern int fn_82705900();
extern int fn_8270EB60();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_827096D8(int *param_1)

{
  unsigned int *puVar1;
  unsigned char *pbVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  char cVar9;
  int iVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar10;
  unsigned char *pbVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  __int64 lVar14;
  double dVar15;
  unsigned int auStack_80 [4];
  unsigned int uStack_70;
  unsigned char uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned char uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  if ((int *)param_1[0x1a] != (int *)0x0) {
    iVar5 = (**(int (***)())(*(int *)param_1[0x1a] + 0x48))();
    if (iVar5 != 0) {
      fn_8267C4C8(iVar5);
    }
    uVar10 = (unsigned __int64)(unsigned int)param_1[0x18];
    while (uVar10 = uVar10 - 1, -1 < (__int64)uVar10) {
      fn_827043C0(param_1,uVar10);
    }
    fn_826FE988(param_1 + 0x17,0);
    iVar7 = param_1[0x2ca];
    uVar13 = 0;
    if (iVar7 != 0) {
      do {
        uVar13 = uVar13 + 1;
        *(unsigned char *)(*(int *)(iVar7 + 0x10) + 0x78) = 1;
        iVar7 = *(int *)(iVar7 + 4);
      } while (iVar7 != 0);
      if (uVar13 != 0) {
        do {
          uVar12 = 0;
          for (piVar6 = (int *)param_1[0x2ca]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
            cVar9 = (**(int (***)())(*piVar6 + 4))(piVar6);
            if (cVar9 != '\0') {
              uVar12 = uVar12 + 1;
            }
          }
        } while (uVar12 < uVar13);
      }
    }
    while (param_1[0x2c8] != 0) {
      piVar6 = (int *)param_1[0x2c8];
      param_1[0x2c8] = *piVar6;
      fn_826FC7A0(piVar6);
      fn_8267BE38(piVar6);
    }
    while (param_1[0x2ca] != 0) {
      puVar8 = (unsigned int *)param_1[0x2ca];
      param_1[0x2ca] = puVar8[1];
      (**(int (***)())*puVar8)(puVar8,1);
    }
    param_1[0x2c8] = 0;
    param_1[0x2ca] = 0;
    fn_826F5DE0(param_1);
    param_1[0x2c0] = param_1[0x2c0] | 0x80000;
    bVar3 = false;
    param_1[0x2be] = 0;
    param_1[0x2bd] = 0;
    piVar6 = (int *)(**(int (***)())(param_1[2] + 0xc))(param_1 + 2,0x1b);
    if ((piVar6 != (int *)0x0) &&
       (cVar9 = (**(int (***)())(*piVar6 + 0x48))(piVar6,param_1), cVar9 != '\0')) {
      bVar3 = true;
      (**(int (***)())(*piVar6 + 0x44))(piVar6,0);
    }
    fn_8267BE38(param_1[0x2c1]);
    param_1[0x2c1] = 0;
    fn_826FB150(param_1 + 0x41);
    iVar7 = fn_826F6FA8(param_1,0);
    if (iVar7 != 0) {
      fn_826CE3B0();
    }
    fn_826EA050(param_1[0x279]);
    param_1[0x277] = 0;
    if (param_1[0x27a] != 0) {
      fn_82703030(param_1[0x27a],1);
    }
    param_1[0x27a] = 0;
    puVar1 = (unsigned int *)param_1[0x2b7];
    if ((puVar1 != (unsigned int *)0x0) &&
       (uVar13 = *puVar1, *puVar1 = (unsigned int)((unsigned __int64)uVar13 - 1),
       (__int64)((unsigned __int64)uVar13 - 1) < 1)) {
      fn_8269A608(puVar1);
      fn_8267BE38(puVar1);
    }
    param_1[0x2b7] = 0;
    if ((*(unsigned char *)(param_1 + 0x2b2) & 1) != 0) {
      fn_826CD508(param_1 + 0x2b3,0);
      *(unsigned char *)(param_1 + 0x2b2) = 0;
    }
    *(unsigned short *)(param_1 + 0x2b8) = 0;
    uVar13 = param_1[0x2c0];
    param_1[0x2c0] = uVar13 & 0xff3fffff;
    param_1[0x2c0] = uVar13 & 0xfc3fffff;
    param_1[0x2c0] = uVar13 & 0xf03fffff;
    param_1[0x2c0] = uVar13 & 0xc03fffff;
    param_1[0x2c0] = uVar13 & 0x3fffff;
    fn_826F6E48(param_1 + 0x2c2,param_1[5]);
    fVar4 = lbl_821AAD20;
    lVar14 = 4;
    pbVar11 = (unsigned char *)(param_1 + 0x250);
    dVar15 = (double)lbl_821AAD20;
    do {
      pbVar2 = pbVar11 + 0x24;
      *(float *)(pbVar11 + 0x1c) = fVar4;
      *(float *)(pbVar11 + 0x18) = fVar4;
      pbVar11[0x20] = 0;
      pbVar11[0x21] = 0;
      pbVar11[0x22] = 0;
      pbVar11[0x23] = 0;
      pbVar11[0x14] = 0;
      pbVar11[0x15] = 0;
      pbVar11[0x16] = 0;
      pbVar11[0x17] = 0;
      pbVar11[0x10] = 0;
      pbVar11[0x11] = 0;
      pbVar11[0x12] = 0;
      pbVar11[0x13] = 0;
      pbVar11 = pbVar11 + 0x24;
      *pbVar11 = *pbVar2 & 7;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fn_826B2290(param_1[0x279],1);
    fn_826AAB20(param_1 + 6);
    fn_826BBF30(param_1[0x279],param_1);
    puVar8 = (unsigned int *)fn_8267B890(param_1[5],0x1c,0);
    if (puVar8 == (unsigned int *)0x0) {
      puVar8 = (unsigned int *)0x0;
    }
    else {
      iVar7 = param_1[0x279];
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      iVar7 = *(int *)(iVar7 + 8);
      puVar8[5] = iVar7;
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      puVar8[6] = 0;
    }
    param_1[0x27a] = (int)puVar8;
    uVar10 = fn_8267B890(param_1[5],0x1d8,0);
    if ((uVar10 & 0xffffffff) == 0) {
      uVar10 = 0;
    }
    else {
      auStack_80[0] = 0x40000;
      uVar10 = fn_826D4148(uVar10,*(unsigned int *)(*(int *)(iVar5 + 0x1c) + 0xc),iVar5,param_1,
                                 0,auStack_80,0);
    }
    if ((uVar10 & 0xffffffff) != 0) {
      if ((param_1[0x43] != 0) && (uVar13 = 0, param_1[0x275] != 0)) {
        do {
          uStack_68 = 0;
          uStack_70 = 10;
          uStack_6c = 0;
          uStack_64 = uVar13;
          (**(int (***)())(*(int *)param_1[0x43] + 4))((int *)param_1[0x43],param_1,&uStack_70);
          uStack_5c = 0;
          uStack_60 = 0xc;
          uStack_58 = 0;
          uStack_54 = uVar13;
          (**(int (***)())(*(int *)param_1[0x43] + 4))((int *)param_1[0x43],param_1,&uStack_60);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (unsigned int)param_1[0x275]);
      }
      iVar7 = param_1[0x280];
      if (iVar7 != 0) {
        fn_82704BC0(iVar7);
        fn_8267BE38(iVar7);
      }
      param_1[0x280] = 0;
      fn_826CDDC0(uVar10,0);
      fn_82703090(param_1,0,uVar10);
      fn_826F6E98(param_1);
      fn_82705900(param_1,uVar10);
      fn_8270EB60(param_1[0x278]);
      if (bVar3) {
        (**(int (***)())(*piVar6 + 0x44))(piVar6,param_1);
      }
      (**(int (***)())(*param_1 + 0x8c))(dVar15,param_1);
      param_1[0x2c0] = param_1[0x2c0] | 0x400;
      fn_826AAB20(param_1 + 6);
      fn_8267C498(uVar10);
    }
    if (piVar6 != (int *)0x0) {
      fn_8267C4F0(piVar6);
    }
    if (iVar5 != 0) {
      fn_82687270(iVar5);
    }
  }
  return;
}

