extern int fn_8257D088();
extern int fn_825C7348();
extern int fn_82623298();
extern int fn_82623338();
extern unsigned int lbl_83282290;


void fn_825EA830(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar3 = *(unsigned int **)((*(unsigned int *)(iVar1 + 0xaf0) % 3 + 9) * 4 + param_1);
  uVar2 = *puVar3;
  fn_825C7348(1);
  uVar4 = fn_825C7348(0);
  fn_82623298(puVar3,uVar4);
  if (*(int *)(iVar1 + 0xbe0) != 0) {
    fn_8257D088((int)*(float *)(iVar1 + 0xc70),(int)*(float *)(iVar1 + 0xc74),
                      (int)*(float *)(iVar1 + 0xc78),(int)*(float *)(iVar1 + 0xc7c),
                      (int)*(float *)(iVar1 + 0xc80),lbl_83282290,uVar2);
  }
  fn_82623338(puVar3);
  return;
}

