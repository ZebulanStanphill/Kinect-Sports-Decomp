#define true 1
extern unsigned int *auStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82B9D918();
extern int fn_82B9D930();
extern int fn_82BA03B8();
extern int fn_82BA0AC8();
extern int fn_82BA0C40();
extern int fn_82BAFE48();
extern int fn_82BBC7F8();
extern int fn_82BC0088();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC34D8();
extern int fn_82BC5538();


void fn_82BA1C20(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  char cVar9;
  int *piVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned __int64 uVar3;
  int *piVar8;
  unsigned __int64 uVar4;
  unsigned int *puVar10;
  unsigned int uVar11;
  int iVar12;
  int iVar13;
  __int64 lVar14;
  float fStack_70;
  float fStack_6c;
  unsigned char auStack_68 [104];
  
  cVar9 = fn_82BBC7F8(param_1 + 0xb8,0x20,0,auStack_68);
  if (cVar9 != '\0') {
    piVar5 = (int *)fn_82BAFE48(*(unsigned int *)(param_1 + 0xac),0x20,0);
    cVar9 = (**(int (***)())(*piVar5 + 8))();
    if (cVar9 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dedb0,0xffffffff820deb50,0x7b9);
    }
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5ac);
    puVar6 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
    puVar10 = puVar6 + 1;
    *puVar6 = uVar1;
    if (puVar10 == (unsigned int *)0x0) {
      puVar10 = (unsigned int *)0x0;
    }
    else {
      fn_82BA03B8(puVar10,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5ac));
    }
    iVar12 = 0;
    uVar11 = 1;
    while( true ) {
      if (*(unsigned int *)(piVar5[9] + 4) < uVar11) break;
      iVar2 = *(int *)(*(int *)(piVar5[9] + 8) + iVar12);
      if (((*(unsigned int *)(iVar2 + 0xe4) & 1) != 0) && (iVar13 = 0, 0 < *(int *)(iVar2 + 0x14))) {
        piVar8 = (int *)(iVar2 + 0x54);
        do {
          if (*piVar8 == 0x20) {
            piVar7 = (int *)fn_82BC0088(puVar10,puVar10[1]);
            *piVar7 = iVar2;
          }
          iVar13 = iVar13 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar13 < *(int *)(iVar2 + 0x14));
      }
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
    }
    *(unsigned char *)(param_1 + 0x819) = 1;
    *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
    uVar3 = fn_82BAFE48(*(unsigned int *)(param_1 + 0xac),0);
    if (piVar5[0xd] != piVar5[0xc]) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded88,0xffffffff820deb50,0x7cc);
    }
    piVar8 = (int *)fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
    fn_82BC2958(piVar8,0,uVar3);
    fn_82BC2958(piVar8,1,piVar5);
    (**(int (***)())(*piVar8 + 0x58))(piVar8,1,2,0);
    (**(int (***)())(*piVar8 + 0x58))(piVar8,1,3,1);
    fn_82BA0C40(param_1,piVar8);
    fn_82BC5538(*(unsigned int *)(param_1 + 0xa4),piVar8);
    cVar9 = fn_82BC2580(piVar8);
    if (cVar9 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decd0,0xffffffff820deb50,0x7d8);
    }
    uVar4 = fn_82BA0AC8(param_1);
    if (piVar5[0xc] == 0) {
      piVar8 = (int *)fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
      fn_82BC2958(piVar8,0,uVar3);
      (**(int (***)())(*piVar8 + 0x54))(piVar8,0,2,1);
      (**(int (***)())(*piVar8 + 0x54))(piVar8,0,3,1);
      *(unsigned char *)((int)piVar8 + 0x9f) = 1;
      fn_82BC2958(piVar8,1,uVar4);
    }
    else {
      piVar8 = (int *)fn_82BC24F0(0x12,*(unsigned int *)(param_1 + 0xc));
      fn_82BC2958(piVar8,0,uVar3);
      (**(int (***)())(*piVar8 + 0x54))(piVar8,0,2,1);
      (**(int (***)())(*piVar8 + 0x54))(piVar8,0,3,1);
      fn_82BC2958(piVar8,1,uVar4);
      *(unsigned char *)((int)piVar8 + 0x9f) = 1;
      fn_82B9D918(*(unsigned int *)(param_1 + 0x10),0,&fStack_6c,0xffffffff82b7c800,
                    *(unsigned int *)(param_1 + 0xc));
      fn_82B9D930(*(unsigned int *)(param_1 + 0x10),0,&fStack_70,0xffffffff82b7c800,
                    *(unsigned int *)(param_1 + 0xc));
      fn_82BC34D8((double)fStack_6c,(double)fStack_70,piVar8,param_1,2);
      *(unsigned char *)((int)piVar8 + 0x9a) = 1;
      fn_82BC5538(*(unsigned int *)(param_1 + 0xa4),piVar8);
      piVar8 = (int *)fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
      fn_82BC2958(piVar8,0,uVar3);
      (**(int (***)())(*piVar8 + 0x54))(piVar8,0,2,1);
      (**(int (***)())(*piVar8 + 0x54))(piVar8,0,3,1);
      fn_82BC2958(piVar8,1,piVar5);
      *(unsigned char *)((int)piVar8 + 0x99) = 1;
    }
    fn_82BC5538(*(unsigned int *)(param_1 + 0xa4),piVar8);
    uVar11 = 0;
    if (puVar10[1] != 0) {
      iVar12 = 0;
      if (puVar10[1] == 0) {
        piVar5 = (int *)fn_82BC0088(puVar10,0);
        goto LAB_82ba208c;
      }
      do {
        piVar5 = (int *)(puVar10[2] + iVar12);
LAB_82ba208c:
        iVar2 = *piVar5;
        lVar14 = 1;
        if (0 < *(int *)(iVar2 + 0x14)) {
          piVar5 = (int *)(iVar2 + 0x54);
          do {
            if (*piVar5 == 0x20) {
              fn_82BC2958(iVar2,lVar14,uVar3);
            }
            lVar14 = lVar14 + 1;
            piVar5 = piVar5 + 1;
          } while ((int)lVar14 <= *(int *)(iVar2 + 0x14));
        }
        uVar11 = uVar11 + 1;
        iVar12 = iVar12 + 4;
      } while (uVar11 < (unsigned int)puVar10[1]);
    }
  }
  return;
}

