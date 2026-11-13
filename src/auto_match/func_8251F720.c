extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern int fn_825200F0();
extern int fn_8256BF18();
extern int fn_8256CC50();
extern int fn_8259BB38();
extern int fn_82A1EFC0();
extern unsigned int lbl_8329618C;
extern unsigned int uRam832767b4;
extern unsigned int uStack_1ac;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


unsigned __int64 fn_8251F720(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uStack_1ac;
  int aiStack_1a8 [2];
  unsigned char auStack_1a0 [32];
  unsigned char auStack_180 [308];
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  uRam832767b4 = 1;
  iVar1 = fn_8256BF18();
  aiStack_1a8[0] = *param_1;
  fn_8259BB38(&uStack_1ac,iVar1,aiStack_1a8);
  uVar2 = (unsigned __int64)uStack_1ac;
  if (uVar2 != *(unsigned int *)(iVar1 + 4)) {
    if (lbl_8329618C == 0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3 = *(unsigned int **)(lbl_8329618C + 4);
    }
    fn_8256CC50(iVar1,uVar2 + 0x10,uVar2 + 0x28,*puVar3);
  }
  if (*param_1 == 0) {
    uRam832767b4 = 0;
    return 0;
  }
  fn_825200F0(auStack_1a0,param_1);
  uStack_4c = 0;
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_180,0,0x148);
}

