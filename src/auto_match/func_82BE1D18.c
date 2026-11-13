extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BEA238();
extern int fn_82BEB628();
extern unsigned int lbl_8322B130;


unsigned __int64 fn_82BE1D18(int param_1,char *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  int iVar4;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    fn_82BE5240(param_1,300,0xffffffff82196582);
    uVar1 = 300;
  }
  else {
    uVar2 = thunk_FUN_82be5550(0x54);
    if ((uVar2 & 0xffffffff) == 0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3 = (unsigned int *)fn_82BEA238(uVar2,param_2,param_3);
    }
    if (puVar3 == (unsigned int *)0x0) {
      uVar1 = 0x65;
      *(unsigned int *)(lbl_8322B130 + 0x10) = 0;
    }
    else {
      uVar2 = thunk_FUN_82be5550(0xc);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_82BEB628(uVar2,puVar3);
      }
      if (iVar4 == 0) {
        (**(int (***)())*puVar3)(puVar3,1);
        *(unsigned int *)(lbl_8322B130 + 0x10) = 0;
        uVar1 = fn_82BE5240(lbl_8322B130,0x65,0xffffffff820e89e8);
      }
      else {
        fn_82BE52B8(param_1 + 0x170);
        *(unsigned int **)(param_1 + 0x180) = puVar3;
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

