extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5398();
extern void (*lbl_831751CC)(int);


extern char lbl_82196582[];
unsigned __int64 fn_82BEEEA0(int param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    fn_82BE5240(param_1,600,lbl_82196582);
  }
  else {
    iVar2 = param_1 + 0x4c;
    fn_82BE5340(iVar2);
    while (*(int *)(param_1 + 0x54) != 0) {
      piVar1 = (int *)fn_82BE5378(iVar2);
      if (*piVar1 == param_2) {
        lbl_831751CC(fn_82BE5378(iVar2));
        fn_82BE5398(iVar2,*(unsigned int *)(param_1 + 0x54),1);
        return 1;
      }
      fn_82BE5350(iVar2);
    }
  }
  return 0;
}

