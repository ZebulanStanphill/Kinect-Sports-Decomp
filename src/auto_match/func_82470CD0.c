extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_82279C58();
extern int fn_8228D9E8();
extern int fn_8228DAA0();
extern int fn_8228DDD8();
extern int fn_824BDAC8();
extern int fn_824BDE68();
extern int fn_824BE290();
extern int fn_824BE350();
extern int fn_824BEEE8();
extern int fn_826728E8();
extern unsigned int iStack_1c;


void fn_82470CD0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  iVar1 = *(int *)(param_1 + 0x428);
  if (iVar1 == 0) goto LAB_82470dd4;
  if (*(int *)(param_1 + 0x680) == 0) {
    if (*(int *)(iVar1 + 0x188) == 0) goto LAB_82470dd4;
    fn_824BDE68(*(unsigned int *)(param_1 + 0x438),1);
    fn_824BDAC8(*(unsigned int *)(param_1 + 0x438),1,0,1);
    uVar4 = 1;
  }
  else {
    if (*(int *)(iVar1 + 0x188) == 0) {
      if (*(int *)(*(int *)(param_1 + 0x438) + 0xe0) == 0) {
        fn_824BEEE8();
        iVar1 = *(int *)(param_1 + 0x428);
        iVar2 = *(int *)(param_1 + 0x438);
        goto LAB_82470d1c;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x438);
      if (*(int *)(iVar2 + 0xe0) == 0) {
        if ((*(int *)(iVar2 + 0x54c) != 0) && (*(int *)(iVar1 + 0x198) == 0)) {
          fn_8228DDD8();
        }
        uVar4 = *(unsigned int *)(param_1 + 0x428);
        fn_824BE290(*(unsigned int *)(param_1 + 0x438));
        fn_8228D9E8(uVar4);
        goto LAB_82470dd4;
      }
LAB_82470d1c:
      fn_8228DAA0(iVar1,*(unsigned int *)(iVar2 + 0xe4),1);
      fn_824BDE68(*(unsigned int *)(param_1 + 0x438),0);
      fn_824BDAC8(*(unsigned int *)(param_1 + 0x438),0,0,1);
    }
    uVar4 = 0;
  }
  *(unsigned int *)(param_1 + 0x680) = uVar4;
LAB_82470dd4:
  if ((*(int *)(param_1 + 0x438) != 0) && (iVar1 = fn_8225F160(), *(int *)(iVar1 + 0x2c) != 0)
     ) {
    iVar2 = fn_824BE350(*(unsigned int *)(param_1 + 0x438));
    iVar1 = *(int *)(param_1 + 0x428);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x160) = iVar2, iVar2 != 0)) {
      puVar3 = (unsigned int *)fn_82279C58(auStack_20,iVar1);
      fn_826728E8(*puVar3,0xffffffff821a9828,*(unsigned int *)(iVar1 + 0x160));
      if (iStack_1c != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}

