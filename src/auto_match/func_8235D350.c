#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_82196582;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_48;
extern unsigned int uStack_60;


unsigned char * fn_8235D350(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char *puVar5;
  unsigned __int64 uStack_60;
  struct { int first; int second; } stack_pair_50;

  unsigned int uStack_48;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1ba8);
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x1ba4);
  stack_pair_50.second = 0;
  uStack_48 = 0;
  stack_pair_50.first = 0;
  uStack_60 = (unsigned __int64)(((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF);
  if (uVar1 != 0) {
    do {
      iVar3 = uVar4 * 0x4c + iVar2;
      if ((*(int *)(iVar3 + 0x40) == param_2) &&
         (((param_3 == 0 && (*(int *)(iVar3 + 0x48) != 0)) ||
          ((param_3 == 1 && (*(int *)(iVar3 + 0x44) != 0)))))) {
        fn_8257A9F0(&stack_pair_50.first,&uStack_60);
        uVar4 = (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF);
      }
      uVar4 = uVar4 + 1;
      uStack_60 = CONCAT44(uVar4,(((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF));
    } while (uVar4 < uVar1);
  }
  iVar3 = stack_pair_50.second - stack_pair_50.first >> 2;
  if (iVar3 == 0) {
    if (stack_pair_50.first != 0) {
      fn_8265CA20();
    }
    puVar5 = &lbl_82196582;
  }
  else {
    if (param_4 == 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      param_5 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                     (float)(__int64)iVar3);
      uStack_60 = (unsigned __int64)param_5;
    }
    puVar5 = (unsigned char *)(*(int *)(param_5 * 4 + stack_pair_50.first) * 0x4c + iVar2);
    if (stack_pair_50.first != 0) {
      fn_8265CA20();
    }
  }
  return puVar5;
}

