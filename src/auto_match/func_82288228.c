extern unsigned int *auStack_420;
extern unsigned int *auStack_42c;
extern unsigned int *auStack_430;
extern int fn_8225F160();
extern int fn_8228A728();
extern int fn_8228ABB8();
extern int fn_8228A728();
extern int fn_8234F298();
extern int fn_8234F338();
extern unsigned int lbl_83265988;


void fn_82288228(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int iVar5;
  int iVar6;
  unsigned char auStack_430 [4];
  unsigned char auStack_42c [12];
  unsigned char auStack_420 [992];

  iVar5 = param_2 * 0x420 + *(int *)(param_1 + 0x11f0);
  iVar6 = param_3 * 0x40 + param_1;
  uVar1 = *(unsigned int *)(iVar5 + 0x838);
  *(unsigned int *)(iVar6 + 0x6c0) = 0;
  *(unsigned int *)(iVar6 + 0x6bc) = 0;
  *(unsigned int *)(iVar6 + 0x6a8) = uVar1;
  uVar2 = *(unsigned int *)(iVar6 + 0x6a8);
  *(unsigned int *)(iVar6 + 0x6ac) = *(unsigned int *)(iVar5 + 0x83c);
  if (uVar2 < 2) {
    fn_8225F160();
    if ((lbl_83265988 == 0) ||
       ((*(unsigned char *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) {
      uVar2 = param_3;
      if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
        uVar2 = -((param_3 < 2) - 1);
      }
      fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar2,auStack_42c,auStack_430);
      puVar4 = auStack_430;
      puVar3 = auStack_42c;
    }
    else {
      puVar4 = (unsigned char *)0x0;
      puVar3 = (unsigned char *)0x0;
    }
    fn_8228ABB8(param_1,param_3,iVar5 + 0x844,puVar3,puVar4);
  }
  else {
    if (uVar2 == 2) {
      fn_8234F338((unsigned __int64)*(unsigned int *)(param_1 + 0x11f0) + 0x234,
                        *(unsigned int *)(iVar5 + 0x840),auStack_42c,auStack_430);
      fn_8228A728(auStack_420,param_1,param_3,*(unsigned int *)(iVar5 + 0x840),auStack_42c,
                        auStack_430);
      return;
    }
    if (3 < uVar2) goto LAB_822883c4;
    if (*(char *)(iVar5 + 0xc54) == '\0') {
      uVar2 = param_3;
      if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
        uVar2 = -((param_3 < 2) - 1);
      }
      fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar2,auStack_430,auStack_42c);
      fn_8228ABB8(param_1,param_3,iVar5 + 0x844,auStack_430,auStack_42c);
      *(unsigned __int64 *)(iVar6 + 0x6b0) = *(unsigned __int64 *)(*(int *)(param_1 + 0x11f0) + 0x18d0);
    }
    else {
      fn_8228A728(param_1,param_3,param_1 + 0x520);
      *(unsigned __int64 *)(iVar6 + 0x6b0) = 0;
    }
  }
  *(unsigned int *)(iVar6 + 0x6bc) = 1;
LAB_822883c4:
  *(unsigned int *)(iVar6 + 0x6b8) = 0;
  return;
}
