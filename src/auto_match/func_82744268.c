extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_30;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_826972E0();
extern int fn_82743808();
extern int fn_82743888();
extern int fn_82743CD8();


void fn_82744268(int param_1)

{
  char cVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  double dVar4;
  double dStack_40;
  double dStack_38;
  unsigned char auStack_30 [24];
  
  cVar2 = fn_82695468(param_1,0x10);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef00,0,0);
  }
  else {
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      lVar3 = 0;
    }
    if (*(int *)(param_1 + 0x1c) < 1) {
      fn_82743808(lVar3,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff831f12e8);
    }
    else {
      uVar1 = fn_826957D0(param_1,0);
      fn_82695DA0(auStack_30,uVar1);
      fn_82743CD8(lVar3,*(unsigned int *)(param_1 + 0x18),&dStack_40);
      dVar4 = (double)fn_826972E0(auStack_30,*(unsigned int *)(param_1 + 0x18));
      dVar4 = dVar4 / SQRT(dStack_40 * dStack_40 + dStack_38 * dStack_38);
      dStack_40 = dStack_40 * dVar4;
      dStack_38 = dStack_38 * dVar4;
      fn_82743888(lVar3,*(unsigned int *)(param_1 + 0x18),&dStack_40);
      fn_82696330(auStack_30);
    }
  }
  return;
}

