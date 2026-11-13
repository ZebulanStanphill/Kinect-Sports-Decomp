#define true 1
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_8267B890();
extern int fn_8267BF50();
extern int fn_8267C498();
extern int fn_826E7BF8();
extern int fn_826E80A8();
extern int fn_826F7D80();
extern int fn_826FD9D0();
extern int fn_8278E9B0();
extern int fn_8278F338();
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int lbl_8200DBF8;
extern unsigned int lbl_8200DD28;
extern unsigned int uStack_9c;


void fn_82702580(int param_1,int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned char bVar7;
  int iVar8;
  unsigned char *pbVar9;
  unsigned char *puVar10;
  unsigned __int64 auStack_b0 [2];
  unsigned char *pbStack_a0;
  unsigned int uStack_9c;
  int iStack_98;
  int iStack_94;
  unsigned char auStack_90 [32];
  
  pbStack_a0 = (unsigned char *)(param_1 + 4);
  uStack_9c = 0xffffffff;
  bVar1 = *pbStack_a0;
  iVar8 = 1;
  if ((bVar1 & 0x80) != 0) {
    iVar8 = 5;
  }
  bVar2 = pbStack_a0[iVar8];
  iStack_98 = iVar8 + 3;
  param_2[0x10] = (unsigned int)CONCAT11(pbStack_a0[iVar8 + 2],pbStack_a0[iVar8 + 1]);
  if ((bVar1 & 2) != 0) {
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 2;
    pbVar9 = pbStack_a0 + iStack_98;
    iStack_98 = iVar8 + 5;
    param_2[0x11] = (unsigned int)CONCAT11(pbStack_a0[iVar8 + 4],*pbVar9);
  }
  iStack_94 = 0;
  if ((bVar1 & 4) != 0) {
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 4;
    fn_826E7BF8(&pbStack_a0,param_2 + 9);
  }
  if ((bVar1 & 8) != 0) {
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 8;
    fn_826E80A8(&pbStack_a0,param_2 + 1);
  }
  if ((bVar1 & 0x10) != 0) {
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 0x10;
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_94 = 0;
    auStack_b0[0] = (unsigned __int64)CONCAT11(pbStack_a0[iStack_98 + 1],pbStack_a0[iStack_98]);
    param_2[0xf] = (int)((float)auStack_b0[0] * lbl_8200DD28);
    iStack_98 = iStack_98 + 2;
  }
  if ((bVar1 & 0x20) == 0) {
    param_2[0x14] = 0;
  }
  else {
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    param_2[0x14] = iStack_98 + param_1 + 4;
    do {
      iStack_94 = 0;
      pbVar9 = pbStack_a0 + iStack_98;
      iStack_98 = iStack_98 + 1;
    } while (*pbVar9 != 0);
  }
  if ((bVar1 & 0x40) != 0) {
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_94 = 0;
    *(unsigned short *)(param_2 + 0x12) = CONCAT11(pbStack_a0[iStack_98 + 1],pbStack_a0[iStack_98]);
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 0x40;
    iStack_98 = iStack_98 + 2;
  }
  if ((bVar2 & 1) != 0) {
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 0x20;
    uVar3 = fn_8278F338(&pbStack_a0,auStack_90,4);
    if (uVar3 != 0) {
      if (*param_2 == 0) {
        uVar4 = fn_8267BF50(param_1);
        puVar5 = (unsigned int *)fn_8267B890(uVar4,0x1c,0);
        if (puVar5 == (unsigned int *)0x0) {
          puVar5 = (unsigned int *)0x0;
        }
        else {
          puVar5[1] = 1;
          *(unsigned char *)(puVar5 + 2) = 0;
          *(unsigned char *)((int)puVar5 + 9) = 0;
          *(unsigned char *)(puVar5 + 3) = 0x40;
          *(unsigned char *)((int)puVar5 + 0xd) = 0x40;
          *puVar5 = &lbl_8200DBF8;
          *(unsigned char *)((int)puVar5 + 0xb) = 0x80;
          *(unsigned char *)((int)puVar5 + 10) = 0x10;
          *(unsigned char *)((int)puVar5 + 0xe) = 0x10;
          *(unsigned char *)((int)puVar5 + 0xf) = 0xff;
          *(unsigned short *)(puVar5 + 4) = 0x1c2;
          *(unsigned short *)((int)puVar5 + 0x12) = 0x50;
          *(unsigned short *)(puVar5 + 5) = 0x39;
          *(unsigned short *)((int)puVar5 + 0x16) = 0x39;
          puVar5[6] = 0;
        }
        if (*param_2 != 0) {
          fn_8267C498();
        }
        *param_2 = (int)puVar5;
      }
      if ((uVar3 & 0xffffffff) != 0) {
        puVar10 = auStack_90;
        do {
          fn_8278E9B0(*param_2,puVar10);
          uVar3 = uVar3 - 1;
          puVar10 = puVar10 + 0xc;
        } while (uVar3 != 0);
      }
    }
  }
  if ((bVar2 & 2) != 0) {
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 0x80;
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_94 = 0;
    bVar7 = pbStack_a0[iStack_98];
    iStack_98 = iStack_98 + 1;
    if ((bVar7 == 0) || (0xe < bVar7)) {
      bVar7 = 1;
    }
    *(unsigned char *)((int)param_2 + 0x4a) = bVar7;
  }
  if ((bVar2 & 4) != 0) {
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_94 = 0;
    iStack_98 = iStack_98 + 1;
  }
  puVar5 = (unsigned int *)0x0;
  if (((bVar1 & 0x80) != 0) && (puVar5 = *(unsigned int **)(param_1 + 5), puVar5 == (unsigned int *)0x0)
     ) {
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_98 = iStack_98 + 6;
    iStack_94 = 0;
    uVar4 = fn_8267BF50(param_1);
    puVar5 = (unsigned int *)fn_8267B890(uVar4,0xc,0);
    if (puVar5 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
    }
    while( true ) {
      if (iStack_94 != 0) {
        iStack_98 = iStack_98 + 1;
      }
      iStack_94 = 0;
      pbVar9 = pbStack_a0 + iStack_98;
      iVar8 = CONCAT31(CONCAT21(CONCAT11(pbVar9[3],pbVar9[2]),pbVar9[1]),*pbVar9);
      if (iVar8 == 0) break;
      iStack_98 = iStack_98 + 4;
      uVar4 = fn_8267BF50(param_1);
      puVar6 = (unsigned int *)fn_8267B890(uVar4,0x14,0);
      if (puVar6 == (unsigned int *)0x0) {
        puVar6 = (unsigned int *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
        *(unsigned short *)(puVar6 + 2) = 0;
        *(unsigned char *)((int)puVar6 + 10) = 0;
        *(unsigned char *)((int)puVar6 + 0xb) = 0xff;
        *(unsigned char *)(puVar6 + 3) = 0;
        *(unsigned char *)((int)puVar6 + 0xd) = 0;
        puVar6[4] = 0;
      }
      auStack_b0[0] = CONCAT44(puVar6,((unsigned int)(auStack_b0[0])));
      fn_826F7D80(puVar6,&pbStack_a0,iVar8);
      fn_826FD9D0(puVar5,auStack_b0);
    }
    *(unsigned int **)(param_1 + 5) = puVar5;
  }
  uVar3 = ((unsigned __int64)bVar1 & 2) >> 1;
  param_2[0x13] = (int)puVar5;
  param_2[0x15] = 0;
  if ((uVar3 == 0) || ((bVar1 & 1) == 0)) {
    if ((uVar3 == 0) && ((bVar1 & 1) != 0)) {
      param_2[0x15] = 1;
    }
  }
  else {
    param_2[0x15] = 2;
  }
  return;
}

