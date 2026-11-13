#define true 1
#define TBLr 0
extern int fn_82644568();
extern int fn_82646E80();
extern int fn_82646F48();
extern int KeLockL2();
extern unsigned int iStack_6c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_70;


void fn_8264DE30(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned __int64 in_r13;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  __int64 lVar13;
  struct { unsigned int first; int second; } stack_pair_70;

  int aiStack_60 [3];
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  *(unsigned int *)(param_2 + 0x68) = 1;
  lVar10 = 0x40000;
  if ((param_3 & 1) == 0) {
    lVar10 = 0x20000;
  }
  uVar6 = (param_3 & 1) << 1 | 1;
  uVar11 = 0x7f100000;
  KeLockL2(0,0x7f100000,lVar10,uVar6,uVar6);
  do {
    dataCacheBlockClearToZero(uVar11);
    dataCacheBlockClearToZero(uVar11 + 0x80);
    dataCacheBlockClearToZero(uVar11 + 0x100);
    dataCacheBlockClearToZero(uVar11 + 0x180);
    dataCacheBlockClearToZero(uVar11 + 0x200);
    dataCacheBlockClearToZero(uVar11 + 0x280);
    dataCacheBlockClearToZero(uVar11 + 0x300);
    dataCacheBlockClearToZero(uVar11 + 0x380);
    uVar11 = uVar11 + 0x400;
  } while ((uVar11 & 0xffffffff) < lVar10 + 0x7f100000U);
  sync(0);
  uVar6 = 0;
  uVar7 = 0;
  lVar10 = 6;
  do {
    if (((unsigned int)(0x1000000 << (uVar7 & 0x3f)) & param_3) != 0) {
      uVar6 = uVar6 + 1;
    }
    uVar7 = uVar7 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(unsigned int *)(param_2 + 0x38) = (unsigned int)param_3 & 0x3f000000;
  uVar11 = 0x40000;
  if ((param_3 & 1) == 0) {
    uVar11 = 0x20000;
  }
  puVar8 = *(unsigned int **)(param_1 + 0x2ec8);
  trapWord(6,uVar6,0);
  uVar7 = 0;
  lVar10 = 0x7f100000;
  lVar13 = 6;
  puVar9 = (unsigned int *)(param_1 + 0x2c50);
  do {
    if (((unsigned int)(0x1000000 << (uVar7 & 0x3f)) & param_3) != 0) {
      uVar4 = (unsigned int)lVar10;
      *puVar9 = uVar4;
      puVar9[-1] = 0;
      lVar10 = lVar10 + (uVar11 / (uVar6 & 0xffffffff) & 0xffffff80);
      puVar9[-2] = uVar4;
      puVar9[1] = (int)lVar10;
      *puVar8 = 0xc0025800;
      puVar8[1] = 3;
      puVar8[2] = puVar9[2];
      puVar8[3] = puVar9[-1] & 3 | puVar9[-2] & 0xfffffffc;
      puVar8 = puVar8 + 4;
    }
    uVar7 = uVar7 + 1;
    puVar9 = puVar9 + 0x1b;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar7 = *(unsigned int *)(param_1 + 0x2ec8);
  stack_pair_70.second = ((uVar7 >> 0x14) + 0x200 & 0x1000) + (uVar7 & 0x1fffffff);
  stack_pair_70.first = (int)((int)puVar8 - uVar7) >> 2 & 0xffffffU | 0x81000000;
  fn_82644568(param_1,&stack_pair_70.first,1);
  uVar7 = 0;
  puVar12 = (unsigned int *)(param_1 + 0x2c48);
  do {
    if (((unsigned int)(0x1000000 << (uVar7 & 0x3f)) & param_3) != 0) {
      uVar1 = puVar12[1];
      uVar2 = *puVar12;
      uStack_54 = *(unsigned int *)(*(int *)((int)in_r13 + 0x100) + 0x58);
      aiStack_60[2] = **(unsigned int **)(param_1 + 0x2a90);
      aiStack_60[1] = 0;
      uVar3 = TBLr;
      uStack_4c = (unsigned int)uVar3;
      aiStack_60[0] = param_1;
      uStack_50 = uStack_54;
      do {
        iVar5 = fn_82646F48(aiStack_60);
        if (iVar5 == 0) break;
      } while (*(unsigned int *)puVar12[5] != (uVar2 & 0xfffffffc | uVar1 & 3));
      fn_82646E80(aiStack_60);
    }
    uVar7 = uVar7 + 1;
    puVar12 = puVar12 + 0x1b;
    if (5 < uVar7) {
      return;
    }
  } while( true );
}

