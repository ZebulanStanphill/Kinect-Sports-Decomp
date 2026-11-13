typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8245D538();
extern int fn_8245DD40();
extern int fn_82522ED8();
extern unsigned int lbl_83276594;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_824BED88(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  iVar3 = lbl_83276594;
  *(unsigned int *)(lbl_83276594 + 0x58) = 0;
  if (((*(int *)(iVar3 + 0x54) != 0) && (*(int *)(iVar3 + 0x58) == 0)) &&
     (*(int *)(iVar3 + 0x50) == 0)) {
    fn_8245DD40();
  }
  *(unsigned int *)param_2[1] = param_3;
  puVar1 = (unsigned int *)*param_2;
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(1,0,ZEXT48(puVar1));
      *puVar1 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  fn_82522ED8(param_2);
  return;
}

