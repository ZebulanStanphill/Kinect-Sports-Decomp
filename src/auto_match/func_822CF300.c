extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822BD338();
extern int fn_822C8C08();
extern int fn_822CF640();
extern int fn_822FB198();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_822CF300(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned char *puVar3;
  char cVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned char auStack_1c0 [32];
  unsigned char auStack_1a0 [32];
  unsigned char auStack_180 [32];
  unsigned char auStack_160 [32];
  unsigned char auStack_140 [32];
  unsigned char auStack_120 [32];
  unsigned char auStack_100 [32];
  unsigned char auStack_e0 [32];
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [96];
  
  if ((int)param_2 == *(int *)(param_1 + 0x1c8)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x114);
  if (((lbl_8218E8E8 <= *(float *)(param_1 + 0x1d8)) ||
      (lVar5 = (__int64)lbl_83265A28 * 0x19660d + 0x3c6ef35f, lbl_83265A28 = (int)lVar5, lVar5 < 1)
      ) || (uVar6 = 1, (int)param_2 != 0)) {
    uVar6 = param_2;
  }
  iVar2 = fn_822CF640(param_1,uVar6);
  dVar7 = (double)ltcg_pool_0_0f;
  if (*(float *)(param_1 + 0x1d4) < *(float *)(param_1 + 0x1d0)) {
    if (iVar2 == 0) {
      fn_82230110(auStack_140,0xffffffff821ad3e4);
      fn_82230218((unsigned __int64)*(unsigned int *)(iVar1 + 0xc0) + 0x78,auStack_140,0,0xffffffffffffffff);
      puVar3 = auStack_140;
LAB_822cf470:
      fn_82230300(puVar3,1,0);
    }
    else {
      if (iVar2 == 1) {
        fn_82230110(auStack_80,0xffffffff821ad404);
        fn_82230218((unsigned __int64)*(unsigned int *)(iVar1 + 0xc0) + 0x78,auStack_80,0,0xffffffffffffffff)
        ;
        puVar3 = auStack_80;
        goto LAB_822cf470;
      }
      if (iVar2 == 3) {
        fn_82230110(auStack_180,0xffffffff821ad3d4);
        fn_82230218((unsigned __int64)*(unsigned int *)(iVar1 + 0xc0) + 0x78,auStack_180,0,0xffffffffffffffff
                         );
        puVar3 = auStack_180;
        goto LAB_822cf470;
      }
      if (iVar2 == 4) {
        fn_82230110(auStack_100,0xffffffff82196582);
        fn_82230218((unsigned __int64)*(unsigned int *)(iVar1 + 0xc0) + 0x78,auStack_100,0,0xffffffffffffffff
                         );
        puVar3 = auStack_100;
        goto LAB_822cf470;
      }
    }
    *(float *)(param_1 + 0x1d0) = (float)dVar7;
    *(int *)(param_1 + 0x1cc) = iVar2;
  }
  *(float *)(param_1 + 0x27c) = (float)dVar7;
  if ((uVar6 & 0xffffffff) < 8) {
    if ((int)uVar6 == 0) {
      fn_82230110(auStack_1a0,0xffffffff821accc4);
      fn_822FB198(*(unsigned int *)(iVar1 + 0xc0),auStack_1a0);
      puVar3 = auStack_1a0;
    }
    else if (uVar6 == 1) {
      fn_82230110(auStack_160,0xffffffff821ad448);
      fn_822FB198(*(unsigned int *)(iVar1 + 0xc0),auStack_160);
      puVar3 = auStack_160;
    }
    else if (uVar6 == 2) {
      fn_82230110(auStack_120,0xffffffff821ad45c);
      fn_822FB198(*(unsigned int *)(iVar1 + 0xc0),auStack_120);
      puVar3 = auStack_120;
    }
    else if (uVar6 == 3) {
      fn_82230110(auStack_e0,0xffffffff821ad470);
      fn_822FB198(*(unsigned int *)(iVar1 + 0xc0),auStack_e0);
      puVar3 = auStack_e0;
    }
    else if (uVar6 == 4) {
      fn_82230110(auStack_a0,0xffffffff821ad488);
      fn_822FB198(*(unsigned int *)(iVar1 + 0xc0),auStack_a0);
      puVar3 = auStack_a0;
    }
    else if (uVar6 == 5) {
      fn_82230110(auStack_60,0xffffffff821ad498);
      fn_822FB198(*(unsigned int *)(iVar1 + 0xc0),auStack_60);
      puVar3 = auStack_60;
    }
    else {
      if (uVar6 != 6) {
        fn_82230110(auStack_1c0,0xffffffff821ad434);
        fn_822FB198(*(unsigned int *)(iVar1 + 0xc0),auStack_1c0);
        fn_82230300(auStack_1c0,1,0);
        *(unsigned int *)(param_1 + 0x27c) = lbl_82192734;
        goto LAB_822cf5f0;
      }
      fn_82230110(auStack_c0,0xffffffff821ad424);
      fn_822FB198(*(unsigned int *)(iVar1 + 0xc0),auStack_c0);
      puVar3 = auStack_c0;
    }
    fn_82230300(puVar3,1,0);
  }
LAB_822cf5f0:
  *(int *)(param_1 + 0x1c8) = (int)uVar6;
  cVar4 = fn_822BD338((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x114) + 0x20) + 4,
                            0xffffffff821aca8c);
  if ((cVar4 != '\0') && (*(int *)(*(int *)(param_1 + 0x114) + 0x28) == 0)) {
    fn_822C8C08(*(int *)(param_1 + 0x114),0xffffffff821aca8c);
  }
  return;
}

