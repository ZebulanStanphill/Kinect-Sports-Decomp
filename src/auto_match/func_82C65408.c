extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA4F48();
extern unsigned int lbl_82109160;
extern unsigned int lbl_82109161;
extern unsigned int lbl_821092F0;
extern unsigned int lbl_821092F1;


unsigned __int64 fn_82C65408(int param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  
  puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
  iVar5 = (int)((*puVar3 >> 0x37) << 1);
  fn_82C4E470(puVar3,(&lbl_821092F0)[iVar5]);
  lVar9 = 3;
  bVar1 = (&lbl_821092F1)[iVar5];
  if (bVar1 == 0xff) {
    *(unsigned int *)((int)puVar3 + 0x14) = 3;
  }
  puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
  if ((*(int *)((int)puVar3 + 0x14) == 0) && (bVar1 < 0x15)) {
    uVar7 = *puVar3;
    uVar4 = *(unsigned int *)(puVar3 + 1);
    *puVar3 = uVar7 << 1;
    *(int *)(puVar3 + 1) = (int)((unsigned __int64)uVar4 - 1);
    if ((__int64)((unsigned __int64)uVar4 - 1) < 0) {
      fn_82C4E5E8();
    }
    uVar4 = *param_2;
    uVar6 = (unsigned int)((uVar7 >> 0x3f) << 3);
    *param_2 = uVar6 | uVar4 & 0xffffffe7;
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
      *param_2 = uVar6 | uVar4 & 0x7ffdffe7;
      puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
      iVar5 = (int)((*puVar3 >> 0x3a) << 1);
      fn_82C4E470(puVar3,(&lbl_82109160)[iVar5]);
      bVar2 = (&lbl_82109161)[iVar5];
      if (bVar2 == 0xff) {
        *(unsigned int *)((int)puVar3 + 0x14) = 3;
      }
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
        fn_82CA4F48(param_2,5,(int)(unsigned int)bVar1 >> 1);
        fn_82CA4F48(param_2,6,bVar1 & 1);
        lVar8 = 1;
        do {
          fn_82CA4F48(param_2,lVar8,(int)(unsigned int)bVar2 >> ((unsigned int)lVar9 & 0x3f) & 1);
          lVar9 = lVar9 + -1;
          lVar8 = lVar8 + 1;
        } while (-1 < lVar9);
        return 0;
      }
    }
  }
  return 1;
}

