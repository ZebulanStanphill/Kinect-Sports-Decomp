#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_28;
extern int fn_8287D350();
extern int fn_8287FD98();
extern int fn_828AB870();
extern int fn_828B00A0();
extern unsigned int lbl_82193E00;
extern unsigned int uStack_30;


void fn_82244C20(int *param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 uVar5;
  double dVar6;
  unsigned __int64 uStack_30;
  unsigned __int64 auStack_28 [1];
  
  uVar1 = fn_828B00A0((unsigned __int64)(unsigned int)param_1[4] + 0x278);
  fn_8287FD98();
  dVar6 = (double)fn_8287D350();
  uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)dVar6)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_30 = CONCAT44((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF),(((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF));
  if ((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) < 0x9c4) {
    puVar3 = (unsigned int *)&lbl_82193E00;
  }
  else {
    puVar3 = (unsigned int *)&uStack_30;
  }
  auStack_28[0] = 4000;
  uStack_30 = (unsigned __int64)*puVar3;
  puVar4 = &uStack_30;
  if (3999 < (unsigned __int64)*puVar3) {
    puVar4 = auStack_28;
  }
  uVar5 = *puVar4;
  lVar2 = (**(int (***)())(*param_1 + 8))(param_1);
  fn_828AB870(lVar2 + 0xf0,(uVar5 & 0xffffffff) + (uVar1 & 0xffffffff));
  return;
}

