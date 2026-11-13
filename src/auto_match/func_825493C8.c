extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_7c;
extern unsigned int fStack_8c;
extern unsigned int fStack_cc;
extern unsigned int fStack_dc;
extern int fn_82540438();
extern int fn_82547C80();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000060;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_100;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_825493C8(double param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int uVar7;
  int in_r0;
  int iVar8;
  unsigned char bVar9;
  double dVar10;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned int in_stack_000000ac;
  unsigned int in_stack_000000b4;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned char auStack_f0 [16];
  unsigned int uStack_e0;
  float fStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d0;
  float fStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned char auStack_a0 [16];
  unsigned int uStack_90;
  float fStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_80;
  float fStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  
  uVar7 = in_stack_000000ac;
  uVar1 = param_3[3];
  bVar9 = 0;
  uVar2 = *param_3;
  uVar3 = param_3[2];
  uStack00000020 = param_4;
  uStack00000028 = param_5;
  uStack00000030 = param_6;
  uStack00000038 = param_7;
  uStack00000040 = param_8;
  uStack00000048 = param_9;
  if (in_stack_000000ac != 0xffffffff) {
    iVar8 = param_2 + 0xd0;
    if (iVar8 != 0) {
      iVar6 = (in_stack_000000ac & 0xff) * 4;
      iVar4 = iVar6 >> 3;
      bVar9 = *(unsigned char *)(iVar4 + iVar8 + 4) >> (iVar6 + iVar4 * -8 & 0x3fU) & 0xf;
      fn_82547C80(iVar8,in_stack_000000ac & 0xff,in_stack_000000b4 & 0xff);
    }
  }
  (**(int (***)())(**(int **)(param_2 + 0x1a8) + 0xc))(*(int **)(param_2 + 0x1a8),uVar1);
  dVar10 = (double)ltcg_pool_0_0f;
  (**(int (***)())(**(int **)(param_2 + 0x1a8) + 4))
            ((double)lbl_821922D0,(double)lbl_821CA460,dVar10,*(int **)(param_2 + 0x1a8),uVar1,
             &stack0x00000020,&stack0x00000060);
  puVar5 = (unsigned int *)((unsigned int)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_000104b0;
  puVar5[1] = in_register_000104b4;
  puVar5[2] = in_register_000104b8;
  puVar5[3] = in_vr75;
  puVar5 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_000104b0;
  puVar5[1] = in_register_000104b4;
  puVar5[2] = in_register_000104b8;
  puVar5[3] = in_vr75;
  fStack_cc = (float)dVar10;
  uStack_d0 = 0xffffffff;
  fStack_7c = (float)dVar10;
  uStack_80 = 0xffffffff;
  fStack_dc = (float)param_1;
  fStack_8c = (float)param_1;
  uStack_fc = 4;
  uStack_e0 = 1;
  uStack_d8 = 7;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0xffffffff;
  uStack_ac = 8;
  uStack_90 = 1;
  uStack_88 = 7;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0xffffffff;
  uStack_100 = uVar2;
  uStack_f8 = uVar3;
  uStack_f4 = uVar1;
  uStack_b0 = uVar2;
  uStack_a8 = uVar3;
  uStack_a4 = uVar1;
  fn_82540438(0,uVar2,4);
  (**(int (***)())(**(int **)(param_2 + 0x1ac) + 4))
            (*(int **)(param_2 + 0x1ac),&uStack_100,&stack0x00000060,1,0xffffffff82196290,0,
             0xffffffffffffffff);
  fn_82540438(0,uVar2,8);
  (**(int (***)())(**(int **)(param_2 + 0x1ac) + 4))
            (*(int **)(param_2 + 0x1ac),&uStack_b0,&stack0x00000060,1,0xffffffff82196290,0,
             0xffffffffffffffff);
  if ((uVar7 != 0xffffffff) && (param_2 + 0xd0 != 0)) {
    fn_82547C80(param_2 + 0xd0,uVar7 & 0xff,bVar9);
  }
  return;
}

