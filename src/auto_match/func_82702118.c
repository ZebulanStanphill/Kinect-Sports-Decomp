#define true 1
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_8267BF50();
extern int fn_826E7BF8();
extern int fn_826E80A8();
extern int fn_826F7D80();
extern int fn_826FD9D0();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_8200DD28;
extern unsigned int uStack_5c;


void fn_82702118(int param_1,int param_2,unsigned char param_3)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char *pbVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 auStack_70 [2];
  unsigned char *pbStack_60;
  unsigned int uStack_5c;
  int iStack_58;
  int iStack_54;
  
  pbStack_60 = (unsigned char *)(param_1 + 4);
  iVar7 = 1;
  uStack_5c = 0xffffffff;
  bVar1 = *pbStack_60;
  if ((bVar1 & 0x80) != 0) {
    iVar7 = 5;
  }
  iStack_58 = iVar7 + 2;
  *(unsigned int *)(param_2 + 0x40) = (unsigned int)CONCAT11(pbStack_60[iVar7 + 1],pbStack_60[iVar7]);
  if ((bVar1 & 2) != 0) {
    *(unsigned char *)(param_2 + 0x4b) = *(unsigned char *)(param_2 + 0x4b) | 2;
    pbVar6 = pbStack_60 + iStack_58;
    iStack_58 = iVar7 + 4;
    *(unsigned int *)(param_2 + 0x44) = (unsigned int)CONCAT11(pbStack_60[iVar7 + 3],*pbVar6);
  }
  iStack_54 = 0;
  if ((bVar1 & 4) != 0) {
    *(unsigned char *)(param_2 + 0x4b) = *(unsigned char *)(param_2 + 0x4b) | 4;
    fn_826E7BF8(&pbStack_60,param_2 + 0x24);
  }
  if ((bVar1 & 8) != 0) {
    *(unsigned char *)(param_2 + 0x4b) = *(unsigned char *)(param_2 + 0x4b) | 8;
    fn_826E80A8(&pbStack_60,param_2 + 4);
  }
  if ((bVar1 & 0x10) != 0) {
    *(unsigned char *)(param_2 + 0x4b) = *(unsigned char *)(param_2 + 0x4b) | 0x10;
    iVar7 = iStack_58;
    if (iStack_54 != 0) {
      iVar7 = iStack_58 + 1;
    }
    iStack_58 = iVar7 + 2;
    iStack_54 = 0;
    auStack_70[0] = (unsigned __int64)CONCAT11(pbStack_60[iVar7 + 1],pbStack_60[iVar7]);
    *(float *)(param_2 + 0x3c) = (float)auStack_70[0] * lbl_8200DD28;
  }
  if ((bVar1 & 0x20) == 0) {
    *(unsigned int *)(param_2 + 0x50) = 0;
  }
  else {
    if (iStack_54 != 0) {
      iStack_58 = iStack_58 + 1;
    }
    *(int *)(param_2 + 0x50) = iStack_58 + param_1 + 4;
    do {
      iStack_54 = 0;
      pbVar6 = pbStack_60 + iStack_58;
      iStack_58 = iStack_58 + 1;
    } while (*pbVar6 != 0);
  }
  if ((bVar1 & 0x40) != 0) {
    *(unsigned char *)(param_2 + 0x4b) = *(unsigned char *)(param_2 + 0x4b) | 0x40;
    if (iStack_54 != 0) {
      iStack_58 = iStack_58 + 1;
    }
    pbVar6 = pbStack_60 + iStack_58;
    iStack_54 = 0;
    iStack_58 = iStack_58 + 2;
    *(unsigned short *)(param_2 + 0x48) = CONCAT11(pbVar6[1],*pbVar6);
  }
  puVar4 = (unsigned int *)0x0;
  if (((bVar1 & 0x80) != 0) && (puVar4 = *(unsigned int **)(param_1 + 5), puVar4 == (unsigned int *)0x0)
     ) {
    if (iStack_54 != 0) {
      iStack_58 = iStack_58 + 1;
    }
    iStack_54 = 0;
    iVar7 = iStack_58 + 6;
    if (param_3 < 6) {
      iVar7 = iStack_58 + 4;
    }
    iStack_58 = iVar7;
    uVar3 = fn_8267BF50(param_1);
    puVar4 = (unsigned int *)fn_8267B890(uVar3,0xc,0);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    while( true ) {
      if (iStack_54 != 0) {
        iStack_58 = iStack_58 + 1;
      }
      iStack_54 = 0;
      if (param_3 < 6) {
        uVar9 = (unsigned int)CONCAT11((pbStack_60 + iStack_58)[1],pbStack_60[iStack_58]);
        iStack_58 = iStack_58 + 2;
      }
      else {
        pbVar6 = pbStack_60 + iStack_58;
        uVar9 = CONCAT31(CONCAT21(CONCAT11(pbVar6[3],pbVar6[2]),pbVar6[1]),*pbVar6);
        iStack_58 = iStack_58 + 4;
      }
      if (uVar9 == 0) break;
      uVar3 = fn_8267BF50(param_1);
      puVar5 = (unsigned int *)fn_8267B890(uVar3,0x14,0);
      if (puVar5 == (unsigned int *)0x0) {
        puVar5 = (unsigned int *)0x0;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        *(unsigned short *)(puVar5 + 2) = 0;
        *(unsigned char *)((int)puVar5 + 10) = 0;
        *(unsigned char *)((int)puVar5 + 0xb) = 0xff;
        *(unsigned char *)(puVar5 + 3) = 0;
        *(unsigned char *)((int)puVar5 + 0xd) = 0;
        puVar5[4] = 0;
      }
      auStack_70[0] = CONCAT44(puVar5,((unsigned int)(auStack_70[0])));
      fn_826F7D80(puVar5,&pbStack_60,uVar9);
      fn_826FD9D0(puVar4,auStack_70);
    }
    *(unsigned int **)(param_1 + 5) = puVar4;
  }
  uVar2 = ((unsigned __int64)bVar1 & 2) >> 1;
  *(unsigned int **)(param_2 + 0x4c) = puVar4;
  *(unsigned int *)(param_2 + 0x54) = 0;
  if ((uVar2 == 0) || ((bVar1 & 1) == 0)) {
    if (uVar2 != 0) {
      return;
    }
    if ((bVar1 & 1) == 0) {
      return;
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 2;
  }
  *(unsigned int *)(param_2 + 0x54) = uVar8;
  return;
}

