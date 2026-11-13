#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_822315A0();
extern int fn_823AB478();
extern int fn_82522588();
extern int fn_82522D98();
extern int fn_827D6E18();
extern int fn_82A264E0();
extern int fn_82A264E8();
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_83265A24;
extern unsigned int *lbl_832767C8;
extern unsigned int uStack_70;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82522258(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  int iStack_90;
  int iStack_8c;
  unsigned char auStack_88 [4];
  int iStack_84;
  unsigned char auStack_80 [16];
  unsigned __int64 uStack_70;
  
  if (*(int *)(param_1 + 0x120) == -1) {
    return;
  }
  uVar2 = fn_827D6E18(auStack_88,lbl_83265A24);
  fn_82522588(&iStack_90,uVar2);
  if (iStack_84 != 0) {
    fn_822315A0();
  }
  if (iStack_90 != 0) {
    uVar4 = (**(int (***)())(*lbl_832767C8 + 0x10))();
    fn_82A264E0(*(unsigned int *)(iStack_90 + 0x98),auStack_80);
    uVar3 = fn_82A264E8(uVar4,0);
    if ((uVar3 & 0x7fffffff) << 1 <= (uStack_70 & 0xffffffff)) {
      *(unsigned int *)(param_1 + 0x110) = 1;
      iVar5 = fn_823AB478(param_1);
      if (*(char *)((int)lbl_832767C8 + iVar5 + 0x88) == '\0') {
        puVar6 = (unsigned int *)(ZEXT48(lbl_832767C8) + 0xa0);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 - 1,0,ZEXT48(lbl_832767C8) + 0xa0);
          *puVar6 = uVar1;
        }
      }
      else {
        *(unsigned char *)((int)lbl_832767C8 + iVar5 + 0x88) = 0;
      }
      if (iStack_8c == 0) {
        return;
      }
      fn_822315A0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0x14);
}

