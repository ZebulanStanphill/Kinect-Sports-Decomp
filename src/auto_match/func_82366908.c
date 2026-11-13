extern int fn_82561778();
extern unsigned int lbl_82191FD4;
extern unsigned int lbl_8219676C;
extern unsigned int lbl_82196770;
extern unsigned int lbl_82196774;
extern unsigned int lbl_821B2D1C;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int ltcg_pool_0_0f;


__int64 fn_82366908(__int64 param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar1 = (unsigned int *)param_1;
  puVar1[4] = param_2;
  puVar2 = (unsigned int *)((unsigned int)(puVar1 + 0x68) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)((unsigned int)(puVar1 + 0x6c) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)((unsigned int)(puVar1 + 0x70) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)((unsigned int)(puVar1 + 0x74) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *puVar1 = &lbl_821B2D1C;
  puVar2 = (unsigned int *)((unsigned int)(puVar1 + 0x78) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar1[0x7c] = lbl_8219676C;
  puVar1[0x7d] = lbl_82196770;
  uVar5 = ltcg_pool_0_0f;
  puVar1[0x7e] = lbl_82196774;
  puVar1[0x7f] = lbl_821CA1A0;
  puVar1[0x80] = lbl_821CA1A4;
  uVar3 = lbl_82191FD4;
  puVar1[0x81] = lbl_821CA1A8;
  puVar1[0x82] = lbl_8219676C;
  puVar1[0x83] = lbl_82196770;
  puVar1[0x84] = lbl_82196774;
  puVar1[0x85] = lbl_8219676C;
  puVar1[0x86] = lbl_82196770;
  uVar4 = lbl_82196774;
  puVar1[0x88] = uVar3;
  puVar1[0x89] = uVar5;
  puVar1[0x87] = uVar4;
  puVar1[0x8a] = uVar3;
  puVar1[0x8b] = 0;
  puVar1[0x8c] = 0;
  puVar1[0x8d] = 0;
  fn_82561778(param_1 + 0x20,param_3,2);
  return param_1;
}

