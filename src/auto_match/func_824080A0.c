extern unsigned int *auStack_61;
extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82321480();
extern int fn_82409B50();
extern int fn_8265C9E0();
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_a0;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_821B7EC8;
extern unsigned int lbl_821B7EE4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int *
fn_824080A0(double param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
             unsigned int param_9)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *in_stack_0000005c;
  unsigned int in_stack_00000064;
  int iStack_a0;
  unsigned int *puStack_9c;
  int iStack_98;
  int iStack_94;
  unsigned char **ppuStack_90;
  unsigned int uStack_8c;
  unsigned char **ppuStack_88;
  unsigned int uStack_84;
  unsigned char auStack_80 [16];
  int *piStack_70;
  unsigned char auStack_61 [17];
  int *piStack_50;
  
  param_2[3] = param_7;
  param_2[2] = param_3;
  *param_2 = &lbl_821B7EC8;
  param_2[1] = 3;
  param_2[4] = param_6;
  param_2[5] = param_5;
  param_2[0xd] = 1;
  uVar3 = ltcg_pool_0_0f;
  param_2[6] = (float)param_1;
  param_2[7] = (float)param_1;
  param_2[8] = param_3;
  param_2[0xc] = uVar3;
  param_2[9] = param_5;
  param_2[10] = param_6;
  uVar1 = lbl_8218E1AC;
  param_2[0xb] = 0;
  param_2[0x10] = param_9;
  param_2[0x11] = uVar1;
  param_2[0xe] = param_4;
  param_2[0xf] = param_8;
  uVar1 = *in_stack_0000005c;
  param_2[0x15] = uVar3;
  param_2[0x12] = uVar1;
  param_2[0x13] = in_stack_00000064;
  param_2[0x14] = 4;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  puStack_9c = param_2;
  piStack_70 = (int *)fn_8265C9E0(0x14);
  if (piStack_70 == (int *)0x0) {
    uStack_84 = 0;
    ppuStack_88 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_88);
  }
  *piStack_70 = (int)&lbl_821B7EE4;
  piStack_70[1] = iStack_a0;
  piStack_70[2] = (int)puStack_9c;
  piStack_70[3] = iStack_98;
  piStack_70[4] = iStack_94;
  lVar4 = (**(int (***)())(*(int *)param_2[5] + 4))();
  fn_82321480(&iStack_a0,lVar4 + 0x598,auStack_80);
  iVar2 = param_2[0x17];
  param_2[0x17] = puStack_9c;
  param_2[0x16] = fn_82409B50;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  if (piStack_70 != (int *)0x0) {
    (**(int (***)())(*piStack_70 + 0xc))
              (piStack_70,
               (int)(auStack_80 + -(int)piStack_70) -
               (int)(auStack_80 +
                    (unsigned int)(auStack_80 + -(int)piStack_70 == (unsigned char *)0x0) + -(int)piStack_70 +
                    -1));
    piStack_70 = (int *)0x0;
  }
  puStack_9c = param_2;
  piStack_50 = (int *)fn_8265C9E0(0x14);
  if (piStack_50 != (int *)0x0) {
    *piStack_50 = (int)&lbl_821B7EE4;
    piStack_50[1] = iStack_a0;
    piStack_50[2] = (int)puStack_9c;
    piStack_50[3] = iStack_98;
    piStack_50[4] = iStack_94;
    lVar4 = (**(int (***)())(*(int *)param_2[5] + 8))();
    fn_82321480(&iStack_a0,lVar4 + 0x598,auStack_61 + 1);
    iVar2 = param_2[0x19];
    param_2[0x19] = puStack_9c;
    param_2[0x18] = fn_82409B50;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (piStack_50 != (int *)0x0) {
      (**(int (***)())(*piStack_50 + 0xc))
                (piStack_50,
                 (int)(auStack_61 + -(int)piStack_50 + 1) -
                 (int)(auStack_61 +
                      (unsigned int)(auStack_61 + -(int)piStack_50 + 1 == (unsigned char *)0x0) +
                      -(int)piStack_50));
    }
    return param_2;
  }
  uStack_8c = 0;
  ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_90);
}

