extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C56578();
extern int fn_82CA4F48();
extern unsigned int lbl_82109160;
extern unsigned int lbl_82109161;
extern unsigned int lbl_821091F0;
extern unsigned int lbl_821091F1;


unsigned __int64 fn_82C65130(int param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 *plVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar9;
  
  if (*(int *)(param_1 + 0x1c4) == 0) {
    *param_2 = *param_2 & 0x7fffffff;
  }
  else {
    plVar3 = *(__int64 **)(param_1 + 0x54);
    lVar6 = *plVar3;
    uVar8 = *(unsigned int *)(plVar3 + 1);
    *plVar3 = lVar6 << 1;
    *(int *)(plVar3 + 1) = (int)((unsigned __int64)uVar8 - 1);
    if ((__int64)((unsigned __int64)uVar8 - 1) < 0) {
      fn_82C4E5E8();
    }
    *param_2 = (int)(lVar6 >> 0x3f) * -0x80000000 | *param_2 & 0x7fffffff;
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
      return 1;
    }
    if (lVar6 < 0) {
      *(unsigned short *)((int)param_2 + 0xe) = 0;
      *(unsigned short *)(param_2 + 4) = 0;
      *(unsigned short *)((int)param_2 + 0x12) = 0;
      *param_2 = *param_2 | 0x20000;
      return 0;
    }
  }
  puVar4 = *(unsigned __int64 **)(param_1 + 0x54);
  iVar7 = (int)((*puVar4 >> 0x39) << 1);
  fn_82C4E470(puVar4,(&lbl_821091F0)[iVar7]);
  lVar6 = 3;
  bVar1 = (&lbl_821091F1)[iVar7];
  if (bVar1 == 0xff) {
    *(unsigned int *)((int)puVar4 + 0x14) = 3;
  }
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
    return 1;
  }
  if (7 < bVar1) {
    return 1;
  }
  iVar7 = (int)(unsigned int)bVar1 >> 2;
  if (iVar7 != 0) {
    if (iVar7 != 1) {
      return 1;
    }
    *param_2 = *param_2 & 0xfffdffff;
    puVar4 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar8 = *(unsigned int *)(puVar4 + 1);
    uVar5 = *puVar4;
    *puVar4 = uVar5 << 1;
    *(int *)(puVar4 + 1) = (int)((unsigned __int64)uVar8 - 1);
    if ((__int64)((unsigned __int64)uVar8 - 1) < 0) {
      fn_82C4E5E8();
    }
    *param_2 = (unsigned int)((uVar5 >> 0x3f) << 3) | *param_2 & 0xffffffe7;
    puVar4 = *(unsigned __int64 **)(param_1 + 0x54);
    if (*(int *)((int)puVar4 + 0x14) != 0) {
      return 1;
    }
    iVar7 = (int)((*puVar4 >> 0x3a) << 1);
    fn_82C4E470(puVar4,(&lbl_82109160)[iVar7]);
    bVar2 = (&lbl_82109161)[iVar7];
    if (bVar2 == 0xff) {
      *(unsigned int *)((int)puVar4 + 0x14) = 3;
    }
    uVar8 = (unsigned int)bVar2;
    goto LAB_82c65370;
  }
  *param_2 = *param_2 | 0x20000;
  puVar4 = *(unsigned __int64 **)(param_1 + 0x54);
  iVar7 = (int)((*puVar4 >> 0x3a) << 1);
  if ((bVar1 & 3) == 3) {
    fn_82C4E470(puVar4,(&lbl_82109160)[iVar7]);
    bVar2 = (&lbl_82109161)[iVar7];
    if (bVar2 == 0xff) {
      *(unsigned int *)((int)puVar4 + 0x14) = 3;
    }
    uVar8 = (unsigned int)bVar2;
LAB_82c65360:
    iVar7 = 0;
  }
  else {
    fn_82C4E470(puVar4,(&lbl_82109160)[iVar7]);
    bVar2 = (&lbl_82109161)[iVar7];
    if (bVar2 == 0xff) {
      *(unsigned int *)((int)puVar4 + 0x14) = 3;
    }
    uVar8 = 0xf - bVar2;
    if (((bVar1 & 3) != 0) || (iVar7 = 1, uVar8 != 0)) goto LAB_82c65360;
  }
  *param_2 = iVar7 << 0x1e | *param_2 & 0xbfffffff;
LAB_82c65370:
  if (((*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) && (-1 < (int)uVar8)) && ((int)uVar8 < 0x10)
     ) {
    fn_82CA4F48(param_2,5,(int)(bVar1 & 3) >> 1);
    fn_82CA4F48(param_2,6,bVar1 & 1);
    lVar9 = 1;
    do {
      fn_82CA4F48(param_2,lVar9,(int)uVar8 >> ((unsigned int)lVar6 & 0x3f) & 1);
      lVar6 = lVar6 + -1;
      lVar9 = lVar9 + 1;
    } while (-1 < lVar6);
    fn_82C56578((int)param_2 + 0xe);
    *param_2 = *param_2 & 0xfff3ffff | 0x80000;
    return 0;
  }
  return 1;
}

