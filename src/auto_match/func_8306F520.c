extern int fn_83075D90();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E6C;


void fn_8306F520(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  __int64 lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = 0;
  piVar1 = (int *)(param_2 + 0x160);
  dVar4 = (double)lbl_82186E6C;
  dVar5 = (double)lbl_82002AE0;
  do {
    dVar3 = dVar4;
    if (*piVar1 == 2) {
      dVar3 = dVar5;
    }
    fn_83075D90(dVar3,param_3,lVar2);
    lVar2 = lVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)lVar2 < 0x14);
  return;
}

