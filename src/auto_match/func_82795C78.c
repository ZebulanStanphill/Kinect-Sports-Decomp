extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d8;
extern int fn_8267C4F0();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82726AB8();
extern int fn_8278D3F0();
extern int fn_8278E7B0();
extern int fn_82790678();
extern int fn_82791BD8();
extern int fn_82791CF0();
extern int fn_82791E88();
extern int fn_82794EE8();
extern unsigned int iStack_d0;
extern unsigned int iStack_e4;
extern unsigned int iStack_f4;
extern unsigned int uStack_e0;


void fn_82795C78(int param_1,int param_2,unsigned char *param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int auStack_110 [4];
  unsigned char auStack_100 [12];
  int iStack_f4;
  int iStack_e4;
  unsigned int uStack_e0;
  unsigned char auStack_d8 [8];
  int iStack_d0;
  unsigned char auStack_c0 [48];
  unsigned char auStack_90 [144];
  
  fn_82791BD8(auStack_100,param_1 + 0x10,param_1);
  if ((param_5 & 0xffffffff) < (param_4 & 0xffffffff)) {
    param_5 = param_4;
  }
  if ((int)param_5 == -1) {
    param_5 = 0x7fffffff;
  }
  else {
    param_5 = param_5 - param_4;
    if ((__int64)param_5 < 1) goto LAB_82795dd8;
  }
  do {
    if (*(unsigned int *)(iStack_e4 + 4) <= uStack_e0) break;
    iVar4 = fn_82791CF0(auStack_100);
    uVar7 = (unsigned __int64)*(unsigned int *)(iVar4 + 4);
    uVar1 = *(unsigned int *)(iVar4 + 8);
    uVar8 = param_4;
    if ((param_4 & 0xffffffff) <= uVar7) {
      uVar8 = uVar7;
    }
    fn_826FDED0(auStack_c0,*(unsigned int *)(param_2 + 0x1c));
    puVar5 = param_3;
    if (*(int *)(iVar4 + 0xc) != 0) {
      uVar2 = fn_8278D3F0(auStack_90,*(int *)(iVar4 + 0xc),param_3);
      fn_82726AB8(auStack_c0,uVar2);
      fn_826FDF58(auStack_90);
      puVar5 = auStack_c0;
    }
    uVar3 = fn_8278E7B0(param_2,puVar5);
    auStack_110[0] = (unsigned int)uVar3;
    uVar6 = (uVar1 - uVar8) + uVar7;
    if ((param_5 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
      uVar6 = param_5;
    }
    uVar2 = fn_82790678(auStack_d8,uVar8,uVar6,auStack_110);
    fn_82794EE8(param_1 + 0x10,uVar2);
    if (iStack_d0 != 0) {
      fn_8267C4F0();
    }
    param_5 = param_5 - uVar6;
    fn_82791E88(auStack_100,uVar1 + uVar7);
    if ((uVar3 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar3);
    }
    fn_826FDF58(auStack_c0);
  } while (0 < (int)param_5);
LAB_82795dd8:
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  if (iStack_f4 != 0) {
    fn_8267C4F0();
  }
  return;
}

