typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82521AB0();
extern int fn_82522258();
extern int fn_82522588();
extern int fn_82522D98();
extern int fn_8259BDA8();
extern int fn_827D6E18();
extern int fn_828EA610();
extern int fn_82A264D8();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int lbl_83265A24;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82521888(__int64 param_1,int param_2)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  char cVar6;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char bVar8;
  unsigned int *apuStack_50 [2];
  int iStack_48;
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  cVar6 = fn_828EA610(param_2);
  if (((cVar6 == '\0') && (bVar1 = *(char *)(param_2 + 0xd8) == '\0', bVar8 = bVar1 << 1, bVar1)) &&
     (*(int *)(param_2 + 0x120) != -1)) {
    uVar4 = fn_827D6E18(auStack_40,lbl_83265A24);
    fn_82522588(&iStack_48,uVar4);
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    if (*(int *)(iStack_48 + 0x98) != 0) {
      iVar5 = fn_82A264D8(*(int *)(iStack_48 + 0x98),0);
      bVar8 = (iVar5 == 0) << 1;
      if (iVar5 != 0) {
LAB_82521954:
        do {
          puVar7 = (unsigned int *)(param_1 + 0xa0);
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,param_1 + 0xa0);
            *puVar7 = uVar3;
            bVar8 = 2;
          }
        } while (!(bool)(bVar8 >> 1));
        fn_82521AB0(param_2);
                    /* WARNING: Subroutine does not return */
        fn_82522D98(0x14);
      }
    }
    puVar2 = *(unsigned int **)(iStack_48 + 0xa0);
    apuStack_50[0] = (unsigned int *)*puVar2;
    while (apuStack_50[0] != puVar2) {
      iVar5 = fn_82A264D8(apuStack_50[0][3],0);
      bVar8 = (iVar5 == 0) << 1;
      if (iVar5 != 0) goto LAB_82521954;
      fn_8259BDA8(apuStack_50);
    }
    if (*(int *)(param_2 + 0x110) == 1) {
      *(unsigned int *)(param_2 + 0x110) = 0;
      do {
        puVar7 = (unsigned int *)(param_1 + 0xa0);
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,param_1 + 0xa0);
          *puVar7 = uVar3;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      fn_82522258(param_2);
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  return 0;
}

