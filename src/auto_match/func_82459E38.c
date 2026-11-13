extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822C1928();
extern int fn_822DB718();
extern int fn_822DD1B8();
extern int fn_82459C60();
extern int fn_8245A408();
extern int fn_82522FF0();
extern int fn_82CE08F0();
extern int fn_82CE0A20();
extern int fn_82CE0BB0();
extern unsigned int iStack_6c;


/* WARNING: Removing unreachable block (ram,0x82459fb8) */

void fn_82459E38(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  __int64 lVar2;
  unsigned int *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  double dVar8;
  unsigned char auStack_70 [4];
  int iStack_6c;
  unsigned char auStack_68 [8];
  unsigned char auStack_60 [96];
  
  lVar6 = 0;
  iStack_6c = 0;
  iVar3 = fn_82CE08F0(*(unsigned int *)(param_1 + 0x20),0x4004667f,&iStack_6c);
  if ((iVar3 == 0) && (iStack_6c != 0)) {
    iVar3 = fn_82CE0A20(*(unsigned int *)(param_1 + 0x20),auStack_70,1,0);
    if (iVar3 != -1) {
      puVar7 = (unsigned int *)(param_1 + 0xb0);
      do {
        puVar4 = puVar7;
        if (0xf < *(unsigned int *)(param_1 + 0xc4)) {
          puVar4 = (unsigned int *)*puVar7;
        }
        fn_8245A408(auStack_68,puVar7,*(int *)(param_1 + 0xc0) + (int)puVar4,auStack_70[0]);
        iVar3 = *(int *)(param_1 + 0xc0);
        if (3 < iVar3) {
          uVar1 = *(unsigned int *)(param_1 + 0xc4);
          puVar4 = puVar7;
          if (0xf < uVar1) {
            puVar4 = (unsigned int *)*puVar7;
          }
          if (*(char *)((int)puVar4 + iVar3 + -4) == '\r') {
            puVar4 = puVar7;
            if (0xf < uVar1) {
              puVar4 = (unsigned int *)*puVar7;
            }
            if (*(char *)((int)puVar4 + iVar3 + -3) == '\n') {
              puVar4 = puVar7;
              if (0xf < uVar1) {
                puVar4 = (unsigned int *)*puVar7;
              }
              if (*(char *)((int)puVar4 + iVar3 + -2) == '\r') {
                puVar4 = puVar7;
                if (0xf < uVar1) {
                  puVar4 = (unsigned int *)*puVar7;
                }
                if (*(char *)((int)puVar4 + iVar3 + -1) == '\n') {
                  iVar3 = *(int *)(param_1 + 0xcc);
                  if (iVar3 != *(int *)(param_1 + 0xd0)) {
                    fn_822DB718(iVar3,*(unsigned int *)(param_1 + 0xd0),param_1 + 0xd8);
                    *(int *)(param_1 + 0xd0) = iVar3;
                  }
                  while (lVar2 = fn_822C1928(puVar7,0xffffffff821bab90,lVar6,2),
                        (int)lVar2 != -1) {
                    fn_82230300(auStack_60,0,0);
                    fn_82230218(auStack_60,puVar7,lVar6,lVar2);
                    fn_822DD1B8(param_1 + 0xcc,auStack_60);
                    fn_82230300(auStack_60,1,0);
                    lVar6 = lVar2 + 2;
                  }
                  uVar5 = 6;
                  goto LAB_8245a08c;
                }
              }
            }
          }
        }
        iVar3 = fn_82CE0A20(*(unsigned int *)(param_1 + 0x20),auStack_70,1,0);
      } while (iVar3 != -1);
    }
    iVar3 = fn_82CE0BB0();
    if (iVar3 == 0x2733) {
      return;
    }
    uVar5 = 0x10;
  }
  else {
    dVar8 = (double)fn_82522FF0();
    if (dVar8 - *(double *)(param_1 + 0xe8) <= *(double *)(param_1 + 0xe0)) {
      return;
    }
    *(unsigned int *)(param_1 + 0x8c) = 0;
    fn_82459C60(param_1);
    uVar5 = 0x11;
  }
LAB_8245a08c:
  *(unsigned int *)(param_1 + 0x84) = uVar5;
  return;
}

