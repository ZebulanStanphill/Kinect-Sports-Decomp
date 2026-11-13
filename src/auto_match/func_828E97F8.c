extern int *piRam832144b4;
typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_828E6240();
extern int fn_828E67B0();
extern int fn_828E6A10();
extern int fn_828E6AA0();
extern int fn_828E7BA8();
extern int fn_828E8548();
extern int fn_828E8A40();
extern int fn_828E8AC0();
extern int fn_828E8E38();
extern int fn_828E9220();
extern int fn_828E9670();
extern int fn_82F63108();
extern int fn_82F63EC8();
extern int iRam832144b0;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int iStack_a0;
extern unsigned int lbl_83213F18;
extern unsigned int *lbl_832144D0;
extern unsigned int uRam832144b8;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_b0;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_828E97F8(int param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  char cVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char uStack_b0;
  int iStack_a0;
  int *piStack_9c;
  unsigned int uStack_98;
  int iStack_94;
  struct { unsigned int first; int second; } stack_pair_90;

  int iStack_88;
  int *piStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int auStack_58;

  if ((uRam832144b8 & 1) == 0) {
    uRam832144b8 = uRam832144b8 | 1;
    iRam832144b0 = 0;
    piRam832144b4 = (int *)0x0;
    fn_82F63EC8(0xffffffff83141688);
  }
  cVar5 = fn_828E6A10(0xffffffff832144b0);
  if (cVar5 == '\0') {
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    auStack_58 = 0;
    fn_828E7BA8(&auStack_58,0xffffffff828e92a8);
    uVar8 = (unsigned __int64)lbl_83213F18;
    lVar7 = uVar8 + 0xc;
    RtlEnterCriticalSection(lVar7);
    fn_828E9670(&iStack_88,uVar8,&uStack_70,0);
    RtlLeaveCriticalSection(lVar7);
    uVar8 = ZEXT48(piStack_84);
    if (uVar8 != 0) {
      do {
        puVar6 = (unsigned int *)(uVar8 + 8);
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,uVar8 + 8);
          *puVar6 = uVar2;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    iStack_a0 = iRam832144b0;
    piStack_9c = piRam832144b4;
    iRam832144b0 = iStack_88;
    piRam832144b4 = piStack_84;
    fn_828E6AA0(&iStack_a0);
    if (piStack_84 != (int *)0x0) {
      do {
        puVar6 = (unsigned int *)(uVar8 + 8);
        lVar7 = (unsigned __int64)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(lVar7,0,uVar8 + 8);
          *puVar6 = uVar2;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar7 == 0) {
        (**(int (***)())(*piStack_84 + 8))(uVar8);
      }
    }
    fn_828E8AC0(&uStack_70);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iStack_88 = iVar1;
  piStack_84 = param_2;
  uVar3 = fn_828E9220();
  fn_828E67B0(&uStack_80,uVar3,&iStack_88);
  iStack_a0 = 0;
  fn_828E6240(uStack_80,uStack_7c,&iStack_a0,uStack_b0);
  if (iStack_a0 == 0) {
    if (lbl_832144D0 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(*lbl_832144D0 + 4))(&stack_pair_90.first,lbl_832144D0,param_1,param_2);
    iStack_94 = stack_pair_90.second;
    uStack_98 = stack_pair_90.first;
    stack_pair_90.second = 0;
    stack_pair_90.first = 0;
    iStack_a0 = iVar1;
    piStack_9c = param_2;
    uVar3 = fn_828E9220();
    uVar4 = fn_828E8A40(uVar3,&iStack_a0);
    fn_828E8548(&uStack_80,uVar3,uVar4,0);
    if (iStack_94 != 0) {
      fn_822315A0();
    }
    if (stack_pair_90.second != 0) {
      fn_822315A0();
    }
  }
  uVar3 = fn_828E9220();
  fn_828E8E38(uVar3,&iStack_88);
  return;
}
