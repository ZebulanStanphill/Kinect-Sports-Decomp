extern unsigned int *auStack_140;
extern unsigned int *auStack_e0;
extern int fn_82CE5410();
extern int fn_82CE8B30();
extern int fn_82CE9108();
extern int fn_82D89718();
extern int fn_82D9C6F8();
extern int fn_82DA5410();
extern int fn_82DAA348();
extern int fn_82DB58C0();
extern int fn_82DC3748();
extern unsigned int iStack_16c;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_8323C860;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_170;
extern unsigned int uStack_17a;
extern unsigned int uStack_17c;
extern unsigned int uStack_17e;
extern unsigned int uStack_17f;
extern unsigned int uStack_180;
extern unsigned int uStack_190;
extern unsigned int uStack_198;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1a6;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1ca;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1ce;
extern unsigned int uStack_1cf;
extern unsigned int uStack_1d0;
extern unsigned int uStack_58;
extern unsigned int uStack_7c;


/* WARNING: Removing unreachable block (ram,0x82da97d4) */

void fn_82DA9608(int param_1,unsigned __int64 param_2,__int64 param_3,int param_4,int param_5,
                  unsigned char param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned char uStack_1d0;
  unsigned char uStack_1cf;
  unsigned char uStack_1ce;
  unsigned short uStack_1cc;
  unsigned short uStack_1ca;
  unsigned short uStack_1c0;
  unsigned int uStack_1bc;
  unsigned int uStack_1b8;
  unsigned int uStack_1b4;
  unsigned int uStack_1b0;
  unsigned short uStack_1ac;
  unsigned short uStack_1a8;
  unsigned short uStack_1a6;
  unsigned int uStack_1a4;
  unsigned __int64 uStack_1a0;
  unsigned __int64 uStack_198;
  unsigned char uStack_190;
  unsigned char uStack_180;
  unsigned char uStack_17f;
  unsigned char uStack_17e;
  unsigned short uStack_17c;
  unsigned short uStack_17a;
  unsigned short uStack_170;
  int iStack_16c;
  unsigned int uStack_168;
  unsigned int uStack_164;
  unsigned int uStack_160;
  int aiStack_150 [4];
  unsigned char auStack_140 [96];
  unsigned char auStack_e0 [100];
  unsigned int uStack_7c;
  int iStack_60;
  int iStack_5c;
  unsigned int uStack_58;
  unsigned int *puStack_54;
  
  if (*(int *)(param_1 + 200) != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = (int)param_3;
    if (*(int *)(iVar1 + 0xec) < iVar4) {
      uStack_198 = *(unsigned __int64 *)(param_4 + 0x58);
      uStack_1a0 = *(unsigned __int64 *)(param_4 + 0x50);
      uVar2 = *(unsigned int *)(iVar1 + 0xe8);
      uVar3 = (unsigned __int64)uVar2;
      uStack_1bc = 0;
      uStack_1ce = 1;
      uStack_1cc = 0x50;
      uStack_1ca = 0xffff;
      uStack_1d0 = 0xf;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1ac = 0;
      uStack_1a4 = (unsigned int)param_2;
      uStack_1a8 = (unsigned short)param_3;
      uStack_1a6 = (unsigned short)uVar2;
      uStack_1b0 = 0;
      uStack_1cf = 1;
      uStack_1b4 = *(unsigned int *)(iVar1 + 0x74);
      uStack_190 = param_6;
      if (0 < iVar4) {
        uVar6 = param_3 - 1;
        trapWord(6,uVar3,0);
        uVar5 = uVar3 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1);
        trapWord(5,uVar5,0xffff);
        uStack_1b0 = fn_82DAA348((__int64)((int)uVar6 / (int)uVar2) + 1,uVar3,uStack_1b4,
                                       param_4 + 0x50,&uStack_1a0,uVar5);
        uStack_1c0 = *(unsigned short *)(param_5 + 0x20);
        uStack_1ce = 2;
        fn_82CE8B30(*(unsigned int *)(param_1 + 200),&uStack_1d0,1);
      }
      fn_82CE9108(*(unsigned int *)(param_1 + 200));
      if (0 < iVar4) {
        iStack_5c = *(int *)(param_1 + 0xc) + 0x1d0;
        uStack_180 = 0xe;
        uStack_17f = 0;
        uStack_17e = 2;
        uStack_17c = 0x30;
        uStack_17a = 0xffff;
        uStack_168 = uStack_1b8;
        uStack_164 = uStack_1b4;
        uStack_170 = uStack_1c0;
        uStack_160 = uStack_1b0;
        uStack_7c = 0;
        iStack_16c = param_5;
        fn_82D9C6F8(auStack_e0,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x78));
        fn_82DA5410(auStack_140,(unsigned __int64)*(unsigned int *)(param_1 + 0xc) + 0x1e0,
                     (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + 0x1d0);
        aiStack_150[0] = *(int *)(param_1 + 0xc);
        uStack_58 = *(unsigned int *)(*(int *)(aiStack_150[0] + 0x78) + 8);
        puStack_54 = &lbl_8323C860;
        iStack_60 = param_1;
        fn_82DC3748(aiStack_150,0,&uStack_180);
        fn_82D89718(aiStack_150);
      }
      fn_82CE5410();
      return;
    }
  }
  fn_82DB58C0(param_1,param_2,param_3,param_4,param_5);
  return;
}

