extern __int64 fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350(iVar3);
extern int fn_82BE5378();
extern int fn_82BE5398();


extern char lbl_82196582[];
unsigned __int64 fn_82BEA398(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar1 = fn_82BE5240(param_1,500,lbl_82196582);
  }
  else {
    iVar3 = param_1 + 0x28;
    fn_82BE5340(iVar3);
    while (*(int *)(param_1 + 0x30) != 0) {
      iVar2 = fn_82BE5378(iVar3);
      if (iVar2 == param_2) {
        fn_82BE5398(iVar3,*(unsigned int *)(param_1 + 0x30),1);
        return 0;
      }
      fn_82BE5350(iVar3);
    }
    uVar1 = 500;
  }
  return uVar1;
}

