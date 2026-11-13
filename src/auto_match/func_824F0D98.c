extern unsigned int *auStack_64;
extern unsigned int *auStack_68;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern unsigned int *auStack_74;
extern unsigned int *auStack_78;
extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern unsigned int fStack_4c;
extern unsigned int fStack_58;
extern int fn_824F1388();
extern int fn_82520158();
extern int fn_82532F98();
extern int fn_82554260();
extern int fn_82554860();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern int fn_827F5708();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_824F0D98(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  int iVar6;
  double dVar7;
  double dVar8;
  unsigned char auStack_80 [4];
  unsigned char auStack_7c [4];
  unsigned char auStack_78 [4];
  unsigned char auStack_74 [4];
  unsigned char auStack_70 [4];
  unsigned char auStack_6c [4];
  unsigned char auStack_68 [4];
  unsigned char auStack_64 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  float fStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  float fStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  if (*(int **)(param_2 + 8) != (int *)0x0) {
    fVar2 = *(float *)(param_2 + 0x58);
    *(float *)(param_2 + 0x58) = (float)param_1;
    dVar8 = (double)(float)(param_1 - (double)fVar2);
    iVar4 = (**(int (***)())(**(int **)(param_2 + 8) + 0x14))();
    fVar2 = ltcg_pool_0_0f;
    if (iVar4 == 0) {
      (**(int (***)())(**(int **)(param_2 + 8) + 0xc))();
    }
    else if (*(int *)(param_2 + 0x50) == 0) {
      uVar5 = (**(int (***)())(**(int **)(param_2 + 8) + 0x4c))();
      *(unsigned int *)(param_2 + 0x50) = uVar5;
      uVar3 = fn_827F04B0(0x1a0);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_82554260(uVar3,*(unsigned int *)(param_2 + 0x50),8);
      }
      *(unsigned int *)(param_2 + 0x54) = uVar5;
      dVar8 = (double)ltcg_pool_0_0f;
      fn_827F2DD0(dVar8,*(unsigned int *)(param_2 + 0x50));
      fn_82520158(0xffffffff821c1940,auStack_80,0);
      fn_82520158(0xffffffff821c1958,auStack_7c,0);
      fn_82520158(0xffffffff821c1974,auStack_78,0);
      fn_82520158(0xffffffff821c1990,auStack_74,0);
      fn_82520158(0xffffffff821c19b0,auStack_70,0);
      fn_82520158(0xffffffff821c19d0,auStack_6c,0);
      fn_82520158(0xffffffff821c19f0,auStack_68,0);
      fn_82520158(0xffffffff821c1a10,auStack_64,0);
      fStack_58 = (float)dVar8;
      fStack_4c = (float)dVar8;
      uStack_48 = 0;
      uStack_3c = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      stack_pair_60.first = 0x4d697850;
      stack_pair_60.second = lbl_821CA460;
      uStack_54 = 0x20;
      uStack_50 = lbl_821917C0;
      uStack_44 = 0x40;
      uStack_40 = lbl_821917C0;
      uStack_38 = 0;
      uStack_34 = 0;
      fn_82554860(*(unsigned int *)(param_2 + 0x54),0,auStack_80,&stack_pair_60.first);
      fn_82554860(*(unsigned int *)(param_2 + 0x54),1,auStack_7c,&stack_pair_60.first);
      fn_82554860(*(unsigned int *)(param_2 + 0x54),2,auStack_78,&stack_pair_60.first);
      fn_82554860(*(unsigned int *)(param_2 + 0x54),3,auStack_74,&stack_pair_60.first);
      fn_82554860(*(unsigned int *)(param_2 + 0x54),4,auStack_70,&stack_pair_60.first);
      fn_82554860(*(unsigned int *)(param_2 + 0x54),5,auStack_6c,&stack_pair_60.first);
      fn_82554860(*(unsigned int *)(param_2 + 0x54),6,auStack_68,&stack_pair_60.first);
      fn_82554860(*(unsigned int *)(param_2 + 0x54),7,auStack_64,&stack_pair_60.first);
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 4) + 0x118) = 1;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 8) + 0x118) = 1;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0xc) + 0x118) = 1;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0x10) + 0x118) = 1;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0x14) + 0x118) = 1;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0x18) + 0x118) = 1;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 400) + 0x1c) + 0x118) = 1;
      fn_827F5708(dVar8,**(unsigned int **)(*(int *)(param_2 + 0x54) + 0x198));
      fn_827F5708(dVar8,*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 4));
      fn_827F5708(dVar8,*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 8));
      fn_827F5708(dVar8,*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 0xc));
      fn_827F5708(dVar8,*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 0x10));
      fn_827F5708(dVar8,*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 0x14));
      fn_827F5708(dVar8,*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x54) + 0x198) + 0x18));
      *(float *)(param_2 + 0x5c) = (float)dVar8;
      *(unsigned char *)(param_2 + 0xb0) = 0;
      *(float *)(param_2 + 0x60) = (float)dVar8;
      *(unsigned char *)(param_2 + 0xb1) = 0;
      *(float *)(param_2 + 100) = (float)dVar8;
      *(unsigned char *)(param_2 + 0xb2) = 0;
      *(float *)(param_2 + 0x68) = (float)dVar8;
      *(unsigned char *)(param_2 + 0xb3) = 0;
      *(float *)(param_2 + 0x6c) = (float)dVar8;
      *(unsigned char *)(param_2 + 0xb4) = 0;
      *(float *)(param_2 + 0x70) = (float)dVar8;
      *(unsigned char *)(param_2 + 0xb5) = 0;
      *(float *)(param_2 + 0x74) = (float)dVar8;
      *(unsigned char *)(param_2 + 0xb6) = 0;
      *(float *)(param_2 + 0x78) = (float)dVar8;
      *(float *)(param_2 + 0x7c) = (float)dVar8;
      *(float *)(param_2 + 0x80) = (float)dVar8;
      *(float *)(param_2 + 0x84) = (float)dVar8;
      *(float *)(param_2 + 0x88) = (float)dVar8;
      *(float *)(param_2 + 0x8c) = (float)dVar8;
      *(float *)(param_2 + 0x90) = (float)dVar8;
      *(float *)(param_2 + 0x94) = (float)dVar8;
      *(float *)(param_2 + 0x98) = (float)dVar8;
      *(float *)(param_2 + 0x9c) = (float)dVar8;
      *(float *)(param_2 + 0xa0) = (float)dVar8;
      *(float *)(param_2 + 0xa4) = (float)dVar8;
      *(float *)(param_2 + 0xa8) = (float)dVar8;
      *(float *)(param_2 + 0xac) = (float)dVar8;
    }
    else {
      uVar3 = 0;
      dVar7 = (double)ltcg_pool_0_0f;
      if ((dVar7 < (double)*(float *)(param_2 + 0xbc)) &&
         (fVar1 = (float)((double)*(float *)(param_2 + 0xbc) - dVar8),
         *(float *)(param_2 + 0xbc) = fVar1, (double)fVar1 <= dVar7)) {
        *(float *)(param_2 + 0xbc) = fVar2;
        *(unsigned int *)(param_2 + 0xb8) = 0;
      }
      do {
        fn_824F1388(dVar8,param_2,uVar3);
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < 7);
      fn_827EF828(dVar8,*(unsigned int *)(param_2 + 0x50));
      fn_827EFFE8(*(unsigned int *)(param_2 + 0x50));
      iVar4 = (*(int **)(param_2 + 8))[0x20];
      iVar6 = (**(int (***)())(**(int **)(param_2 + 8) + 0xac))();
      if (iVar6 != 0) {
        fn_827F0180(*(unsigned int *)(param_2 + 0x50),*(unsigned int *)(iVar4 + 4),1,0,0);
        (**(int (***)())(**(int **)(*(int *)(param_2 + 8) + 0x1b4) + 0x18))();
        fn_82532F98(iVar4,0xffffffff82190260);
      }
    }
  }
  return;
}

