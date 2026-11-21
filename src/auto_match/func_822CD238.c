extern unsigned int ___7bad_alloc_stdext__6B_;
extern unsigned int fn_822CFF10;
extern unsigned int lbl_821AD4D4;
extern unsigned int lbl_821AD4FC;
extern unsigned int lbl_821AE598;
extern unsigned int lbl_821C2424;
extern unsigned int lbl_831E4D44;

/* WARNING: Inlined function: __savegprlr_25 */

unsigned int * fn_822CD238(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char *puStack_440;
  unsigned int uStack_43c;
  int (**pcStack_438)();
  unsigned int uStack_434;
  unsigned __int64 uStack_430;
  unsigned int *puStack_428;
  unsigned int *puStack_420;
  unsigned char auStack_410 [976];
  
  fn_822B54F8();
  *param_1 = &lbl_821AD4D4;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 4;
  param_1[0x75] = 0x3e4ccccd;
  param_1[0x73] = 4;
  param_1[0x74] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x72] = 0;
  param_1[0xd6] = &lbl_821C2424;
  param_1[0xdc] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x7c] = *(unsigned int *)(param_2 + 0x4c);
  uVar1 = *(unsigned int *)(param_2 + 0x50);
  param_1[0x9e] = lbl_831E4D44;
  param_1[0x7d] = uVar1;
  param_1[0x9f] = 0;
  param_1[0x97] = 0;
  param_1[0x7e] = 0;
  param_1[0x98] = 0;
  param_1[0x7f] = 0;
  param_1[0x99] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7a] = 0xffffffff;
  param_1[0x7b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0x94] = 0x18;
  param_1[0x95] = 0x18;
  param_1[0x96] = 0x18;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0xa8] = 0;
  iVar2 = **(int **)(param_2 + 0x48);
  puVar4 = (unsigned int *)((unsigned int)(param_1 + 0xb0) & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xa9] = (unsigned int)(iVar2 == 0);
  param_1[0xb4] = 0;
  param_1[0xb8] = 0x18;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = *(unsigned int *)(param_2 + 0x54);
  uVar1 = *(unsigned int *)(param_2 + 0x58);
  param_1[0xd1] = 0x3f000000;
  param_1[0xbd] = uVar1;
  param_1[0xd2] = 0x3f800000;
  param_1[0xbf] = 0xbf800000;
  param_1[0xc0] = 0;
  param_1[0x76] = 0;
  param_1[0xc4] = 0;
  param_1[0x77] = 0x3f800000;
  param_1[0xd0] = 0;
  param_1[0x79] = 0;
  param_1[0x71] = 0;
  param_1[0x8f] = 0;
  param_1[0xbe] = 0;
  param_1[0xa0] = *(unsigned int *)(param_2 + 0x5c);
  param_1[0xa1] = *(unsigned int *)(param_2 + 0x60);
  param_1[0xa2] = *(unsigned int *)(param_2 + 100);
  param_1[0xa3] = *(unsigned int *)(param_2 + 0x68);
  param_1[0xa4] = *(unsigned int *)(param_2 + 0x70);
  uVar3 = fn_8251F720(param_2 + 0x6c,0);
  fn_82A1DD38(auStack_410,uVar3,0x3d0);
  puVar4 = (unsigned int *)fn_8265C9E0(0x3dc);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 1;
    *puVar4 = &lbl_821AE598;
    puVar4[2] = 1;
    if (puVar4 + 3 != (unsigned int *)0x0) {
      memcpy(puVar4 + 3,auStack_410,0x3d0);
    }
  }
  iVar2 = param_1[0x6d];
  param_1[0x6d] = puVar4;
  param_1[0x6c] = puVar4 + 3;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  fn_8251FA58(uVar3);
  fn_822CFB50(param_1);
  uVar3 = 0x3ff0000000000000;
  lVar5 = 0;
  do {
    uVar3 = fn_822B70F0(uVar3,param_1);
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 2);
  uStack_434 = 0;
  pcStack_438 = fn_822CFF10;
  uStack_430 = 0x822cff1000000000;
  puStack_428 = param_1;
  puVar4 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = &lbl_821AD4FC;
    memcpy(puVar4 + 2,&uStack_430,0x18);
    puStack_420 = puVar4;
    fn_82511668(param_1 + 0xd6,&uStack_430);
    fn_825113E0((unsigned __int64)(unsigned int)param_1[0x46] + 0x14,0x15,param_1 + 0xd6);
    return param_1;
  }
  uStack_43c = 0;
  puStack_440 = &___7bad_alloc_stdext__6B_;
  puVar4 = (unsigned int *)__Raise_exception_stdext__QBAXXZ(&puStack_440);
  return puVar4;
}
