extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_8269CEE0();
extern int fn_826A79D8();
extern int fn_826C0B08();
extern int fn_82F68CC0();
extern unsigned int lbl_82005748;


void fn_82714CD8(int param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  double dVar5;
  int aiStack_f0 [4];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  unsigned char auStack_c0 [8];
  double dStack_b8;
  unsigned char auStack_b0 [8];
  double dStack_a8;
  unsigned char auStack_a0 [8];
  double dStack_98;
  unsigned char auStack_90 [8];
  double dStack_88;
  unsigned char auStack_80 [8];
  double dStack_78;
  unsigned char auStack_70 [8];
  double dStack_68;
  unsigned char auStack_60 [8];
  double dStack_58;
  unsigned char auStack_50 [8];
  double dStack_48;
  
  cVar1 = fn_82695468(param_1,0x15);
  if (cVar1 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef1c,0,0);
  }
  else {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar2 = 0;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8269CEE0(aiStack_f0,uVar2 + 0x30);
      if (aiStack_f0[0] != 0) {
        *(int *)(aiStack_f0[0] + 4) = *(int *)(aiStack_f0[0] + 4) + 1;
        fn_8267C498(aiStack_f0[0]);
        fn_82F68CC0(&fStack_e0,aiStack_f0[0] + 0x24,0x20);
        uVar2 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288)
                                  ,0x30,0);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_826C0B08(uVar2,*(unsigned int *)(param_1 + 0x18));
        }
        lVar4 = uVar2 + 0x10;
        auStack_60[0] = 3;
        lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78;
        dVar5 = (double)lbl_82005748;
        dStack_58 = (double)(float)((double)fStack_d0 * dVar5);
        fn_826A79D8(lVar4,lVar3,0xffffffff8200f4c0,auStack_60);
        fn_82696330(auStack_60);
        dStack_48 = (double)(float)((double)fStack_d8 * dVar5);
        auStack_50[0] = 3;
        fn_826A79D8(lVar4,lVar3,0xffffffff8200f4bc,auStack_50);
        fn_82696330(auStack_50);
        dStack_98 = (double)(float)((double)fStack_e0 * dVar5);
        auStack_a0[0] = 3;
        fn_826A79D8(lVar4,lVar3,0xffffffff8200f4b8,auStack_a0);
        fn_82696330(auStack_a0);
        dStack_b8 = (double)(float)((double)fStack_c8 * dVar5);
        auStack_c0[0] = 3;
        fn_826A79D8(lVar4,lVar3,0xffffffff8200f4b4,auStack_c0);
        fn_82696330(auStack_c0);
        dStack_78 = (double)fStack_cc;
        auStack_80[0] = 3;
        fn_826A79D8(lVar4,lVar3,0xffffffff8200f4b0,auStack_80);
        fn_82696330(auStack_80);
        dStack_a8 = (double)fStack_d4;
        auStack_b0[0] = 3;
        fn_826A79D8(lVar4,lVar3,0xffffffff8200f4ac,auStack_b0);
        fn_82696330(auStack_b0);
        dStack_88 = (double)fStack_dc;
        auStack_90[0] = 3;
        fn_826A79D8(lVar4,lVar3,0xffffffff821c42ec,auStack_90);
        fn_82696330(auStack_90);
        dStack_68 = (double)fStack_c4;
        auStack_70[0] = 3;
        fn_826A79D8(lVar4,lVar3,0xffffffff8200d784,auStack_70);
        fn_82696330(auStack_70);
        fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar2);
        if ((uVar2 & 0xffffffff) != 0) {
          fn_826824B0(uVar2);
        }
        fn_8267C498(aiStack_f0[0]);
      }
    }
  }
  return;
}

