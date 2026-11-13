#define true 1
extern int fn_82488FB8();
extern int fn_82544F40();
extern int fn_82549660();
extern int fn_82558B08();
extern int fn_8256A938();
extern int fn_8256AA98();
extern int fn_82597398();
extern int fn_825979A8();
extern int fn_82598898();
extern int fn_825989D8();
extern int fn_82599418();
extern int fn_827D5650();
extern int fn_827D5740();
extern int fn_827D57E8();
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8327F678;
extern unsigned int *lbl_8327F84C;
extern unsigned int lbl_832960CC;
extern unsigned int lbl_8329618C;
extern int (*lbl_8329619C)();
extern int (*lbl_832961A0)();


void fn_8251D400(unsigned int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  __int64 lVar4;
  
  lbl_8327F678 = -(unsigned int)(lbl_8327F678 == 0) & lbl_8327F678;
  fn_82597398((unsigned __int64)(unsigned int)param_1[1] + 0x2e8);
  fn_825979A8(param_1[1]);
  if (lbl_8329618C == (unsigned int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)lbl_8329618C + 4);
  }
  lbl_8329618C = (unsigned int *)(-(unsigned int)(iVar1 != param_1[1]) & (unsigned int)lbl_8329618C);
  if (lbl_8329619C != (int (**)())0x0) {
    (*lbl_8329619C)(param_1[1]);
  }
  param_1[1] = 0;
  lVar4 = 4;
  iVar1 = 0;
  piVar3 = &lbl_832960CC;
  lbl_8329618C = (unsigned int *)(-(unsigned int)(param_1 != lbl_8329618C) & (unsigned int)lbl_8329618C);
  do {
    if (*piVar3 != 0) {
      iVar1 = iVar1 + 1;
    }
    piVar3 = piVar3 + 0xc;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (iVar1 == 0) {
    fn_825989D8();
    if (lbl_832961A0 != (int (**)())0x0) {
      (*lbl_832961A0)(param_1[1]);
    }
    fn_82544F40();
    fn_8256A938();
    fn_8256AA98();
    fn_82549660(0x200000,1);
    do {
      iVar1 = fn_827D5740(lbl_83265A24);
      if (iVar1 != 0) {
        iVar1 = fn_827D5650(lbl_83265A24);
        if (((iVar1 != 0) && (cVar2 = fn_827D57E8(lbl_83265A24), cVar2 != '\0')) &&
           (cVar2 = (**(int (***)())(*lbl_8327F84C + 0x24))(), cVar2 == '\x01')) goto LAB_8251d580;
      }
      fn_82599418();
      fn_82558B08();
    } while( true );
  }
  fn_82544F40();
  fn_8256A938();
  fn_8256AA98();
LAB_8251d594:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  fn_82488FB8(param_1 + 8);
  return;
LAB_8251d580:
  fn_82598898();
  goto LAB_8251d594;
}

