extern unsigned int *auStack_50;
extern int fn_8227FFA8();
extern int fn_82292AE8();
extern int fn_82359C18();
extern int fn_82529320();
extern int fn_8254F110(int,int,float,float);
extern int fn_825529B0();
extern int fn_82552B50();
extern int fn_825708F0();
extern int fn_8265CA20();
extern int fn_82864898();
extern int fn_82864988();


void fn_82476360(int param_1)

{
  int iVar1;
  int iVar3;
  int *source;
  unsigned uVar2;
  float dVar4;
  unsigned char auStack_50 [32];
  
  if (*(void **)(param_1 + 0x160) != 0) {
    fn_82529320(*(int *)(param_1 + 0x160),0);
    *(unsigned int *)(param_1 + 0x160) = 0;
  }
  dVar4 = 0.0f;
  if (*(float *)(param_1 + 0x11c) > dVar4) {
    iVar3 = fn_82292AE8();
    if (*(int **)(iVar3 + 0x24) != (int *)0x0) {
      source = *(int **)(iVar3 + 0x24);
      iVar1 = **(int **)(iVar3 + 0x24);
      uVar2 = fn_82864988(auStack_50,"music_frontend_clap");
      ((int (*)(int,unsigned,float))*(int *)(iVar1 + 0x10))(*(int *)(iVar3 + 0x24),uVar2,(float)dVar4);
      fn_82864898(auStack_50);
    }
    fn_8254F110(*(int *)(param_1 + 0x18),0,*(float *)(param_1 + 0x80),*(float *)(param_1 + 0x80));
  }
  iVar3 = fn_825529B0(param_1 + 0x164);
  if (iVar3 != 0) {
    fn_82552B50(param_1 + 0x164,1);
  }
  if ((*(int *)(param_1 + 0x174) != -1) && (*(void **)(*(int *)(param_1 + 0x15c) + 0x848) != 0)) {
    fn_825708F0(*(int *)(*(int *)(param_1 + 0x15c) + 0x848),*(int *)(param_1 + 0x174));
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if ((unsigned)iVar3 != 0) {
    fn_8227FFA8(iVar3);
    fn_8265CA20(iVar3);
  }
  fn_82359C18(param_1 + 0x28);
  return;
}

