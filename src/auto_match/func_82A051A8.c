extern unsigned int *auStack_50;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82A04FD0();
extern unsigned int lbl_8200D8BC;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;


/* WARNING: Removing unreachable block (ram,0x82a05200) */
/* WARNING: Removing unreachable block (ram,0x82a05208) */
/* WARNING: Removing unreachable block (ram,0x82a0522c) */
/* WARNING: Removing unreachable block (ram,0x82a0523c) */
/* WARNING: Removing unreachable block (ram,0x82a05224) */
/* WARNING: Removing unreachable block (ram,0x82a05240) */
/* WARNING: Removing unreachable block (ram,0x82a05268) */
/* WARNING: Removing unreachable block (ram,0x82a0524c) */
/* WARNING: Removing unreachable block (ram,0x82a0526c) */
/* WARNING: Removing unreachable block (ram,0x82a05288) */
/* WARNING: Removing unreachable block (ram,0x82a05294) */
/* WARNING: Removing unreachable block (ram,0x82a052a0) */

unsigned char * fn_82A051A8(unsigned char *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  double dVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_00010380;
  unsigned int in_register_00010384;
  unsigned int in_register_00010388;
  unsigned int in_vr56;
  unsigned int in_register_00010390;
  unsigned int in_register_00010394;
  unsigned int in_register_00010398;
  unsigned int in_vr57;
  unsigned int in_register_000103a0;
  unsigned int in_register_000103a4;
  unsigned int in_register_000103a8;
  unsigned int in_vr58;
  unsigned int in_register_000103b0;
  unsigned int in_register_000103b4;
  unsigned int in_register_000103b8;
  unsigned int in_vr59;
  unsigned int in_register_000103c0;
  unsigned int in_register_000103c4;
  unsigned int in_register_000103c8;
  unsigned int in_vr60;
  unsigned int in_register_000103d0;
  unsigned int in_register_000103d4;
  unsigned int in_register_000103d8;
  unsigned int in_vr61;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_50 [16];
  struct { float first; float second; } stack_pair_40;

  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;

  dVar7 = (double)lbl_821AAD20;
  if ((double)*(float *)(param_1 + 0x40c8) != dVar7) {
    puVar3 = (unsigned char *)
             fn_82A04FD0((double)lbl_8200D8BC,param_1,&stack0x00000000 + -0x40,
                               &stack0x00000000 + -0x50);
    altv207_13(in_vs32,in_vs43);
    puVar5 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
    *puVar5 = in_register_000103f0;
    puVar5[1] = in_register_000103f4;
    puVar5[2] = in_register_000103f8;
    puVar5[3] = in_vr63;
    if ((((double)fStack_30 != dVar7) || ((double)fStack_2c != dVar7)) ||
       ((double)fStack_28 != dVar7)) {
      uVar1 = *(unsigned int *)(param_1 + 0x40f4);
      puVar5 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
      *puVar5 = in_register_000103f0;
      puVar5[1] = in_register_000103f4;
      puVar5[2] = in_register_000103f8;
      puVar5[3] = in_vr63;
      altv207_13(in_vs32,in_vs40);
      puVar5 = (unsigned int *)((unsigned int)(param_1 + in_r0 + 0x10) & 0xfffffff0);
      *puVar5 = in_register_000103d0;
      puVar5[1] = in_register_000103d4;
      puVar5[2] = in_register_000103d8;
      puVar5[3] = in_vr61;
      *(unsigned int *)(param_1 + 0x40f4) = uVar1;
    }
    puVar4 = param_1 + 0x20;
    lVar6 = 4;
    puVar5 = (unsigned int *)(param_1 + 0x40f4);
    param_1 = puVar3;
    do {
      altv207_13(in_vs42,in_vs40);
      puVar2 = (unsigned int *)((int)&stack_pair_40.first + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)stack_pair_40.first != dVar7) || ((double)stack_pair_40.second != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = puVar5[-1];
        puVar2 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (unsigned int *)((unsigned int)(puVar4 + -0x20) & 0xfffffff0);
        *puVar2 = in_register_000103c0;
        puVar2[1] = in_register_000103c4;
        puVar2[2] = in_register_000103c8;
        puVar2[3] = in_vr60;
        puVar5[-1] = uVar1;
      }
      altv207_13(in_vs42,in_vs37);
      puVar2 = (unsigned int *)((int)&stack_pair_40.first + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)stack_pair_40.first != dVar7) || ((double)stack_pair_40.second != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = *puVar5;
        puVar2 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (unsigned int *)((unsigned int)(puVar4 + -0x10) & 0xfffffff0);
        *puVar2 = in_register_000103b0;
        puVar2[1] = in_register_000103b4;
        puVar2[2] = in_register_000103b8;
        puVar2[3] = in_vr59;
        *puVar5 = uVar1;
      }
      altv207_13(in_vs32,in_vs42);
      puVar2 = (unsigned int *)((int)&stack_pair_40.first + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)stack_pair_40.first != dVar7) || ((double)stack_pair_40.second != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = puVar5[1];
        puVar2 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (unsigned int *)((unsigned int)(puVar4 + in_r0) & 0xfffffff0);
        *puVar2 = in_register_000103a0;
        puVar2[1] = in_register_000103a4;
        puVar2[2] = in_register_000103a8;
        puVar2[3] = in_vr58;
        puVar5[1] = uVar1;
      }
      altv207_13(in_vs42,in_vs38);
      puVar2 = (unsigned int *)((int)&stack_pair_40.first + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)stack_pair_40.first != dVar7) || ((double)stack_pair_40.second != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = puVar5[2];
        puVar2 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (unsigned int *)((unsigned int)(puVar4 + 0x10) & 0xfffffff0);
        *puVar2 = in_register_00010390;
        puVar2[1] = in_register_00010394;
        puVar2[2] = in_register_00010398;
        puVar2[3] = in_vr57;
        puVar5[2] = uVar1;
      }
      altv207_13(in_vs42,in_vs39);
      puVar2 = (unsigned int *)((int)&stack_pair_40.first + in_r0 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      if ((((double)stack_pair_40.first != dVar7) || ((double)stack_pair_40.second != dVar7)) ||
         ((double)fStack_38 != dVar7)) {
        param_1 = &stack0x00000000 + -0x30;
        uVar1 = puVar5[3];
        puVar2 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = in_register_000103f0;
        puVar2[1] = in_register_000103f4;
        puVar2[2] = in_register_000103f8;
        puVar2[3] = in_vr63;
        altv207_13(in_vs32,in_vs35);
        puVar2 = (unsigned int *)((unsigned int)(puVar4 + 0x20) & 0xfffffff0);
        *puVar2 = in_register_00010380;
        puVar2[1] = in_register_00010384;
        puVar2[2] = in_register_00010388;
        puVar2[3] = in_vr56;
        puVar5[3] = uVar1;
      }
      puVar4 = puVar4 + 0x50;
      puVar5 = puVar5 + 5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_1;
}
