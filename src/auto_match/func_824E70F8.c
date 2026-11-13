extern int fn_82359C18();
extern int fn_8252DDF0();
extern int fn_82F68CC0();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821955C0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832967B8;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;


void fn_824E70F8(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  int iVar8;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  int in_stack_00000094;
  int *in_stack_0000009c;
  
  iVar2 = in_stack_00000094;
  piVar4 = in_stack_0000009c;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  uStack00000050 = param_9;
  if ((-1 < in_stack_00000094) && (in_stack_00000094 < 2)) {
    iVar8 = in_stack_00000094 * 0x170 + param_2;
    puVar6 = &lbl_832967B8;
    if ((*(int *)(iVar8 + 0x160) == 0) && (*(int *)(iVar8 + 0x148) == 0)) {
      if (-2 < in_stack_00000094) {
        puVar5 = puVar6;
        if (in_stack_00000094 != -1) {
          puVar5 = &lbl_832967B8 + in_stack_00000094 * 0x1a;
        }
        fn_82F68CC0(iVar8 + 0x10,puVar5,0x68);
      }
    }
    *(int *)(iVar8 + 0x160) = *(int *)(iVar8 + 0x160) + 1;
    if (-2 < iVar2) {
      if (iVar2 != -1) {
        puVar6 = &lbl_832967B8 + iVar2 * 0x1a;
      }
      fn_82F68CC0(iVar8 + 0x78,puVar6,0x68);
    }
    if (*(int *)(iVar8 + 0xac) == 0) {
      *(unsigned int *)(iVar8 + 0xb0) = lbl_821922D0;
      uVar3 = lbl_821916FC;
      *(unsigned int *)(iVar8 + 0xb8) = ltcg_pool_0_0f;
      *(unsigned int *)(iVar8 + 0xb4) = uVar3;
    }
    if (*(int *)(iVar8 + 0xa0) == 0) {
      *(unsigned int *)(iVar8 + 0xa4) = lbl_821917B0;
      *(unsigned int *)(iVar8 + 0xa8) = lbl_821CA460;
    }
    if (*(int *)(iVar8 + 0x90) == 0) {
      *(unsigned int *)(iVar8 + 0x94) = 0x7f7f7f00;
      *(unsigned int *)(iVar8 + 0x98) = 0x7f7f7f00;
      *(unsigned int *)(iVar8 + 0x9c) = 0x7f7f7f00;
    }
    fn_82F68CC0((unsigned int *)(iVar8 + 0xe0),&stack0x00000020,0x68);
    if (*(int *)(iVar8 + 0x114) != 0) {
      *(unsigned int *)(iVar8 + 0xac) = 1;
    }
    if (*(int *)(iVar8 + 0x108) != 0) {
      *(unsigned int *)(iVar8 + 0xa0) = 1;
    }
    if (*(int *)(iVar8 + 0xf8) != 0) {
      *(unsigned int *)(iVar8 + 0x90) = 1;
    }
    *(unsigned int *)(iVar8 + 0xe0) = 1;
    fn_8252DDF0(iVar8 + 0x78,iVar2);
    piVar4 = in_stack_0000009c;
    piVar7 = (int *)(iVar8 + 0x168);
    if ((float)(param_1 - (double)lbl_8218EC10) < 0.0) {
      param_1 = lbl_821955C0;
    }
    *(float *)(iVar8 + 0x14c) = (float)param_1;
    uVar3 = *(unsigned int *)(param_2 + 0x300);
    *(unsigned int *)(iVar8 + 0x148) = 1;
    *(unsigned int *)(iVar8 + 0x15c) = uVar3;
    if (piVar7 != in_stack_0000009c) {
      piVar1 = *(int **)(iVar8 + 0x178);
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 0xc))(piVar1,piVar7 != piVar1);
        *(unsigned int *)(iVar8 + 0x178) = 0;
      }
      if ((int *)piVar4[4] == (int *)0x0) {
        *(unsigned int *)(iVar8 + 0x178) = 0;
      }
      else {
        if ((int *)piVar4[4] != piVar4) {
          piVar7 = (int *)0x0;
        }
        uVar3 = (*(int (**)())**(unsigned int **)piVar4[4])((unsigned int *)piVar4[4],piVar7);
        *(unsigned int *)(iVar8 + 0x178) = uVar3;
      }
    }
  }
  fn_82359C18(piVar4);
  return;
}

