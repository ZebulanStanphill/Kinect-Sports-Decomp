extern int fn_82539560();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8329773C;


void fn_824B3A40(void)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  iVar2 = fn_82F6A534();
  iVar1 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(iVar1 + 0x2c) == 0) {
    dVar4 = (double)ltcg_pool_0_0f;
    if (3 < *(unsigned int *)(iVar1 + 0x14)) {
      if (*(unsigned int *)(iVar1 + 0x14) != 0) {
        dVar3 = (double)*(float *)(*(int *)(iVar2 + 0x3c) + 100);
                    /* WARNING: Subroutine does not return */
        fn_82539560((double)(float)(dVar3 - dVar4),dVar4,dVar3,dVar4,(double)lbl_821CA460);
      }
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)(float)(dVar4 / (double)*(float *)(iVar1 + 100)),dVar4,
                   (double)lbl_821922D0,dVar4,(double)lbl_821CA460);
    }
    dVar3 = dVar4;
    if (*(float *)(*(int *)(iVar2 + 0x3c) + 0x84) < lbl_821917C0) {
      dVar3 = (double)(float)((double)lbl_8329773C * dVar4);
    }
    if (dVar3 < (double)lbl_8218E8E8) {
      dVar3 = dVar4;
    }
  }
  else {
    *(unsigned int *)(iVar1 + 0x2c) = 0;
    dVar3 = (double)*(float *)(*(int *)(iVar2 + 0x3c) + 0x1c);
  }
  fn_82F6A580(dVar3);
  return;
}

