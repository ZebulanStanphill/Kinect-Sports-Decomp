extern unsigned int *auStack_240;
extern int fn_8225B7C8();
extern int fn_82521888();
extern int fn_82522D98();
extern int fn_82522FF0();
extern int fn_828EA610();
extern int fn_82F64840();
extern unsigned int lbl_832767C8;
extern unsigned int lbl_83283E3C;
extern unsigned int uStack_248;
extern unsigned int uStack_24c;
extern unsigned int uStack_250;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8225AF90(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  char cVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  char in_RESERVE;
  double dVar7;
  unsigned int uStack_250;
  struct { unsigned int first; unsigned int second; } stack_pair_24c;

  unsigned char auStack_240 [544];
  
  iVar4 = fn_82521888(lbl_832767C8,param_1);
  if (iVar4 == 0) {
    puVar6 = (unsigned int *)((unsigned __int64)lbl_832767C8 + 0xa0);
    uVar1 = *puVar6;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,(unsigned __int64)lbl_832767C8 + 0xa0);
      *puVar6 = uVar2;
    }
    if (((((int)uVar1 < 1) && (*(int *)(param_1 + 0x110) != 0)) &&
        (cVar5 = fn_828EA610(param_1), cVar5 == '\0')) && (*(char *)(param_1 + 0xd8) == '\0')) {
      fn_82F64840(auStack_240,0x104,0xffffffff831d096c,0x103);
      uStack_250 = 0;
      stack_pair_24c.first = 0;
      stack_pair_24c.second = lbl_83283E3C;
      fn_8225B7C8(param_1,&uStack_250,&stack_pair_24c.first);
                    /* WARNING: Subroutine does not return */
      fn_82522D98(8);
    }
    uVar3 = 0;
  }
  else {
    dVar7 = (double)fn_82522FF0();
    *(float *)(param_1 + 0x108) = (float)dVar7;
    if (*(int *)(param_1 + 0x114) == 0) {
      *(float *)(param_1 + 0x104) = (float)dVar7;
    }
    *(unsigned int *)(param_1 + 0x114) = 1;
    uVar3 = 1;
  }
  return uVar3;
}

