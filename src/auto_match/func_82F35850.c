extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E59EC8();
extern int fn_82F35188();
extern unsigned int uStack_50;


unsigned __int64 fn_82F35850(int param_1,int *param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uStack_50;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  if (param_2 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  iVar5 = 0x22;
  *param_2 = 0x22;
  uVar2 = *(unsigned int *)(param_1 + 0x40);
  if (0x21 < uVar2) {
    iVar5 = param_1 + 0x28;
    fn_82E57620(param_1 + 0x10,iVar5);
    fn_82E576A8(param_1 + 0x20,iVar5);
    fn_82E59EC8(param_1 + 0x134,iVar5);
    fn_82E57738((unsigned short *)(param_1 + 0x138),iVar5);
    fn_82E59EC8(param_1 + 0x13c,iVar5);
    uVar1 = *(unsigned short *)(param_1 + 0x138);
    if ((unsigned int)uVar1 << 2 <= *(unsigned int *)(param_1 + 0x40)) {
      uVar6 = 0;
      if (uVar1 != 0) {
        do {
          fn_82E57738(&uStack_50,iVar5);
          fn_82E57738((int)&uStack_50 + 2,iVar5);
          iVar4 = fn_82F35188(param_1 + 200,uStack_50,0);
          if (iVar4 == 0) {
            return 0xffffffff8007000e;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(unsigned short *)(param_1 + 0x138));
      }
      uVar3 = 0;
      iVar5 = uVar2 - *(int *)(param_1 + 0x40);
      goto LAB_82f3596c;
    }
    iVar5 = (unsigned int)uVar1 * 4 + 0x22;
  }
  uVar3 = 0xffffffffc00d36b1;
LAB_82f3596c:
  *param_2 = iVar5;
  return uVar3;
}

