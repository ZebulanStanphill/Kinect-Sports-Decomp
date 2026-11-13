extern unsigned int *auStack_60;
extern int fn_82230360();
extern int fn_8265CA20();
extern int fn_8288B460();
extern int fn_8288F180();
extern int fn_8288F1E8();
extern int fn_828B55B0();
extern int fn_828BDE70();
extern int fn_82F622E0();
extern unsigned int lbl_82025B20;
extern unsigned int lbl_82025B28;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828C6DE0(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  unsigned int uVar7;
  unsigned int auStack_60 [4];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  *param_1 = &lbl_82025B28;
  param_1[0x14] = &lbl_82025B20;
  piVar6 = param_1 + 0x22;
  uVar7 = 0;
  uVar2 = (int)(param_1[0x23] - param_1[0x22]) >> 2;
  if (uVar2 != 0) {
    iVar5 = 0;
    do {
      if ((unsigned int)(param_1[0x23] - *piVar6 >> 2) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      puVar1 = *(unsigned int **)(iVar5 + *piVar6);
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,1);
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar7 < uVar2);
  }
  uVar3 = fn_8288F1E8(param_1[0x1b],param_1 + 0x20);
  if (((*(char *)(param_1 + 0x26) != '\0') && ((uVar3 & 0xffffffff) != 0)) &&
     (cVar4 = fn_8288B460(uVar3,*(unsigned char *)(param_1 + 0x28),1), cVar4 != '\0')) {
    uStack_50 = 0;
    auStack_60[0] = auStack_60[0] & 0xffffff;
    uStack_4c = 0xf;
    fn_82230360(auStack_60,0xffffffff8202610c,0x21);
    fn_8288F180(uVar3,param_1[0x27],auStack_60);
    if (0xf < uStack_4c) {
      fn_8265CA20(auStack_60[0]);
    }
  }
  if (*piVar6 != 0) {
    fn_8265CA20();
  }
  *piVar6 = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  fn_828B55B0(param_1 + 0x20);
  fn_828BDE70(param_1);
  return;
}

