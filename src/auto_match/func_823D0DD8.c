#define true 1
extern unsigned int *auStack_50;
extern unsigned int fStack_48;
extern int fn_82359C18();
extern int fn_823693A0();
extern int fn_8236A360();
extern int fn_8236A6E8();
extern int fn_8236BCD8();
extern int fn_823CC298();
extern int fn_823E69D0();
extern int fn_824C97F0();
extern int fn_824FE498();
extern int fn_82508078();
extern int fn_82F63108();
extern unsigned int iStack_3c;
extern unsigned int lbl_821B6284;
extern unsigned int ltcg_pool_0_0f;


void fn_823D0DD8(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_50 [8];
  float fStack_48;
  unsigned char **ppuStack_40;
  int iStack_3c;
  unsigned char ***pppuStack_30;
  
  if (*(int *)(param_2 + 0x80) != -1) {
    iVar5 = *(int *)(param_2 + 0x80) * 0x84 + *(int *)(param_1 + 0x4bc);
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_824FE498(*(unsigned int *)(param_1 + 0xe10));
    iVar5 = *(int *)(param_1 + 0xe10);
    puVar3 = (unsigned int *)(param_2 + 0x70U & 0xfffffff0);
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    puVar4 = (unsigned int *)(iVar5 + 0xbd0U & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar10;
    puVar3 = (unsigned int *)(iVar5 + 0xc30U & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_823E69D0(param_1,param_2);
    fn_823693A0(param_1,0);
  }
  fn_8236A6E8(param_1,5);
  fn_8236A360(param_1,5);
  fVar1 = *(float *)(param_2 + 0x58);
  puVar3 = (unsigned int *)(in_r0 + *(int *)(*(int *)(param_1 + 0x1c) + 4) & 0xfffffff0);
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar8;
  puVar4[2] = uVar9;
  puVar4[3] = uVar10;
  if (fVar1 <= fStack_48) {
    uVar6 = 0xffffffff821b61b4;
  }
  else {
    uVar6 = 0xffffffff821b61a4;
  }
  pppuStack_30 = &ppuStack_40;
  ppuStack_40 = &lbl_821B6284;
  piVar2 = (int *)(*(unsigned int **)(param_1 + 0xa8))[1];
  piVar7 = (int *)**(unsigned int **)(param_1 + 0xa8);
  iStack_3c = param_1;
  do {
    if (piVar7 == piVar2) {
      fn_82359C18(&ppuStack_40);
      iVar5 = *(int *)(param_1 + 0x41c);
      if (((((iVar5 == 2) || (iVar5 == 8)) || (iVar5 == 9)) || ((iVar5 == 6 || (iVar5 == 7)))) &&
         (*(int *)(param_1 + 0x4c0) == 0)) {
        fn_82508078(*(unsigned int *)(param_1 + 0xa4),0xffffffff821b61c4,0);
        fn_823CC298(*(unsigned int *)(param_1 + 0x4b8),0x15);
      }
      if (*(int *)(param_1 + 0x4c0) == 0) {
        if ((*(int *)(param_1 + 0x41c) != 4) ||
           (*(int *)(param_1 + 0x424) != *(int *)(param_1 + 0x420))) {
          *(unsigned int *)(param_1 + 0x41c) = 4;
          *(unsigned int *)(param_1 + 0x428) = ltcg_pool_0_0f;
        }
      }
      fn_8236BCD8(param_1);
      return;
    }
    iVar5 = fn_824C97F0(*(unsigned int *)(*piVar7 + 0x28),uVar6);
    if (iVar5 != 0) {
      if (pppuStack_30 == (unsigned char ***)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (*(int (**)())(*pppuStack_30)[1])(pppuStack_30,piVar7);
    }
    piVar7 = piVar7 + 2;
  } while( true );
}

