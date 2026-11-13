#define NAN(x) ((x) != (x))
extern int fn_8287D518();
extern int fn_8287FD98();
extern int fn_82897BD0();
extern int fn_82F63108();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_82404638(double param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_2 + 0x98) != 0) {
    uVar1 = fn_82897BD0(*(unsigned int *)(*(int *)(param_2 + 0x34) + 0x38));
    uVar2 = fn_8287FD98();
    dVar3 = (double)fn_8287D518(uVar2,uVar1);
    dVar3 = -(double)(float)((double)(float)(dVar3 * (double)lbl_8218E8E8) * (double)lbl_82193CC0 -
                            param_1);
    if (*(int *)(param_2 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    dVar4 = -dVar3;
    dVar5 = (double)ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar4 < dVar5) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar5)) << 2)) <
        0.0) {
      dVar5 = dVar3;
    }
    (**(int (***)())(**(int **)(param_2 + 0x98) + 4))(dVar5);
  }
  return;
}

