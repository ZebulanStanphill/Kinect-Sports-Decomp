typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_82743808();
extern int fn_82743888();
extern int fn_82743C08();
extern int fn_82743CD8();
extern int fn_82744378();


void fn_827443F0(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  char cVar7;
  __int64 lVar6;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  uVar3 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,
                            0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82744378(uVar3,*(unsigned int *)(param_1 + 0x18));
  }
  bVar2 = false;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    lVar5 = fn_82696958(uVar4,uVar1);
    if (lVar5 != 0) {
      cVar7 = fn_82695468(param_1,0x10);
      if (cVar7 == '\0') {
        fn_826954C0(param_1,0xffffffff8200ef00,0,0);
        goto LAB_82744524;
      }
      lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
        lVar6 = 0;
      }
      fn_82743CD8(lVar6,*(unsigned int *)(param_1 + 0x18),&dStack_50);
      fn_82743C08(*(unsigned int *)(param_1 + 0x18),lVar5,&dStack_40);
      dStack_50 = dStack_50 + dStack_40;
      dStack_48 = dStack_48 + dStack_38;
      fn_82743888(uVar3,*(unsigned int *)(param_1 + 0x18),&dStack_50);
      bVar2 = true;
    }
  }
  if (!bVar2) {
    fn_82743808(uVar3,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff831f12e8);
  }
  fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar3);
LAB_82744524:
  if ((uVar3 & 0xffffffff) != 0) {
    fn_826824B0(uVar3);
  }
  return;
}

