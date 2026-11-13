extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int fStack_5c;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82539560();
extern int fn_82672C20();
extern int fn_82F4DCB0();
extern int fn_82F4DCF8();
extern int fn_82F63108();
extern unsigned int iStack_7c;
extern float lbl_82005748;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82191118;
extern unsigned int lbl_821914B0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82284D28(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  double dVar4;
  unsigned char auStack_80 [4];
  int iStack_7c;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  double dStack_68;
  float fStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned char auStack_50 [48];
  
  dVar4 = (double)lbl_8218EC10;
  if (*(int *)(param_1 + 0x15c) == -1) {
    lVar3 = 0;
    do {
      iVar1 = fn_82F4DCB0(auStack_50,lVar3);
      fStack_5c = *(float *)(iVar1 + 4);
      uStack_58 = *(unsigned int *)(iVar1 + 8);
      uStack_54 = *(unsigned int *)(iVar1 + 0xc);
      if (dVar4 < (double)fStack_5c) {
        *(int *)(param_1 + 0x15c) = (int)lVar3;
        break;
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < 2);
  }
  if (*(int *)(param_1 + 0x15c) != -1) {
    iVar1 = fn_82F4DCB0(auStack_50);
    fStack_5c = *(float *)(iVar1 + 4);
    uStack_58 = *(unsigned int *)(iVar1 + 8);
    uStack_54 = *(unsigned int *)(iVar1 + 0xc);
                    /* WARNING: Subroutine does not return */
    fn_82539560((double)fStack_5c,(double)ltcg_pool_0_0f,(double)lbl_82191118,(double)ltcg_pool_0_0f,
                 (double)lbl_821CA460);
  }
  uStack_70 = 0;
  uStack_6c = 0;
  dVar4 = (double)(*(float *)(param_1 + 0x158) * lbl_82005748);
  fn_82273CD8(&uStack_70,3);
  dStack_68 = dVar4;
  puVar2 = (unsigned int *)fn_82279C58(auStack_80,param_1);
  fn_82672C20(*puVar2,0xffffffff821a8c70,&uStack_70,1);
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  if (lbl_821914B0 <= *(float *)(param_1 + 0x158)) {
    if (*(int *)(param_2 + 0x410) != 0) {
      if (*(int *)(param_2 + 0x410) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(**(int **)(param_2 + 0x410) + 4))();
    }
    if (*(int *)(param_2 + 0x428) != 0) {
      if (*(int *)(param_2 + 0x428) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(**(int **)(param_2 + 0x428) + 4))();
    }
    *(unsigned int *)(param_1 + 0x15c) = 0xffffffff;
    fn_82F4DCF8(0xffffffffffffffff);
  }
  fn_82273C88(&uStack_70);
  return;
}

