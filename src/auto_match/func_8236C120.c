extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82359070();
extern int fn_8248F890();
extern int fn_82522588();
extern unsigned int iStack_2c;
extern unsigned int lbl_821BEBF4;
extern unsigned int lbl_831D1AD0;
extern unsigned int lbl_831D1AD4;
extern unsigned int lbl_831D1AD8;


void fn_8236C120(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x94) + 0x50);
  }
  if (iVar6 != 0) {
    for (uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
        (uVar7 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x34); uVar7 = uVar7 + 8) {
      piVar4 = (int *)fn_82522588(auStack_30,uVar7);
      iVar6 = *piVar4;
      *(unsigned int *)(iVar6 + 0x3c0) = 0;
      *(unsigned int *)(iVar6 + 0x3c4) = 0;
      if (iStack_2c != 0) {
        fn_822315A0();
      }
    }
    puVar5 = (unsigned int *)fn_8248F890(0x48);
    uVar3 = lbl_831D1AD8;
    uVar2 = lbl_831D1AD4;
    uVar1 = lbl_831D1AD0;
    if (puVar5 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[9] = uVar1;
      puVar5[10] = uVar2;
      puVar5[7] = 0xffffffff;
      puVar5[0xb] = uVar3;
      puVar5[8] = 0xffffffff;
      puVar5[0xc] = 1;
      *puVar5 = &lbl_821BEBF4;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = param_1;
    }
    fn_82359070(param_1,puVar5);
    *(unsigned int *)(param_1 + 0xe6c) = 1;
  }
  return;
}

