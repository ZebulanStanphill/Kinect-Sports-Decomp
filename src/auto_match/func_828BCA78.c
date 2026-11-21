/* WARNING: Inlined function: __savegprlr_27 */

int fn_828BCA78(int param_1,int param_2)

{
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int *puVar5;
  unsigned int auStack_70 [2];
  unsigned int uStack_68;
  int iStack_64;
  unsigned int auStack_60 [4];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int iStack_40;
  
  uVar3 = fn_828C2090();
  if (uVar3 != *(unsigned int *)(param_1 + 4)) {
    puVar5 = (unsigned int *)(uVar3 + 0xc);
    if (0xf < *(unsigned int *)(uVar3 + 0x20)) {
      puVar5 = (unsigned int *)*puVar5;
    }
    iVar4 = fn_8260D428(param_2,0,*(unsigned int *)(param_2 + 0x10),puVar5,
                        *(unsigned int *)(uVar3 + 0x1c));
    if (-1 < iVar4) goto __restgprlr_27;
  }
  uStack_68 = 0;
  iStack_64 = 0;
  uVar1 = fn_828C26E8(auStack_60,param_2,&uStack_68);
  lVar2 = fn_828BAAA8(param_1);
  if (lVar2 + 0xc != 0) {
    fn_828C2760(lVar2 + 0xc,uVar1);
  }
  __Insert____Tree_V___Tset_traits_UElement_828BBD90__U__less_UElement_828BBD90___std__V__allocator_UElement_828BBD90___3__0A__std___std__QAA_AV___Tree_const_iterator_V___Tree_val_V___Tset_traits_UElement_828BBD90__U__less_UElement_828BBD90___std__V__allocator_UElement_828BBD90___3__0A__std___std___2_V32_PAU_Node____Tree_nod_V___Tset_traits_UElement_828BBD90__U__less_UElement_828BBD90___std__V__allocator_UElement_828BBD90___3__0A__std___2__Z
            (auStack_70,param_1,uVar3,lVar2);
  if (iStack_40 != 0) {
    fn_822315A0();
  }
  if (0xf < uStack_4c) {
    fn_8265CA20(auStack_60[0]);
  }
  uStack_50 = 0;
  uStack_4c = 0xf;
  auStack_60[0] = auStack_60[0] & 0xffffff;
  uVar3 = auStack_70[0];
  if (iStack_64 != 0) {
    fn_822315A0();
  }
__restgprlr_27:
  return uVar3 + 0x28;
}
