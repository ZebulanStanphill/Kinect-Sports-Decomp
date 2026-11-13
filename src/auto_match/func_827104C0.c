#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82681838();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B120();
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_826957D0();
extern int fn_826972E0();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_50;


void fn_827104C0(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  double dVar6;
  unsigned __int64 uStack_50;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  fn_8268AFB0(&uStack_40,lbl_831E7E64);
  lVar5 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,lVar5);
      dVar6 = (double)fn_826972E0(uVar2,uVar1);
      uStack_50 = (__int64)dVar6;
      fn_8268B120(&uStack_40,(((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF));
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(param_1 + 0x1c));
  }
  uVar4 = (unsigned __int64)uStack_40;
  if (uVar4 == 0) {
    uVar4 = 0xffffffff82196582;
  }
  iVar3 = fn_82694610((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,uVar4,
                            uStack_3c);
  uStack_50 = CONCAT44(iVar3,(((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF));
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  fn_82681838(*(unsigned int *)(param_1 + 4),&uStack_50);
  lVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 8) - 1;
  *(int *)(iVar3 + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(iVar3);
  }
  fn_8268AFD8(&uStack_40);
  return;
}

