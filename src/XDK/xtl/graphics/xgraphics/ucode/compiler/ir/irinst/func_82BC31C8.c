typedef unsigned char bool;
extern int fn_82AB15D0();
extern unsigned int lbl_8316FF54;


void fn_82BC31C8(int *param_1,unsigned char param_2,unsigned char param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (**(int (***)())(*param_1 + 4))();
  iVar1 = *(int *)(&lbl_8316FF54 + param_1[6] * 0x34);
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3ca8,0xffffffff820e3b18,0x598);
  }
  if (param_4 != '\0') {
    if (param_1[6] != 0x34) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3c90,0xffffffff820e3b18,0x59a);
    }
    param_1[6] = 0x35;
    bVar2 = *(char *)((int)param_1 + 0x9a) == '\0';
    *(bool *)((int)param_1 + 0x9a) = bVar2;
    if ((bool)*(char *)((int)param_1 + 0x99) != bVar2) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3c6c,0xffffffff820e3b18,0x59e);
    }
  }
  *(unsigned char *)(param_1 + 0x21) = param_2;
  *(unsigned char *)((int)param_1 + 0x85) = param_2;
  *(unsigned char *)((int)param_1 + 0x86) = param_2;
  *(unsigned char *)((int)param_1 + 0x87) = param_2;
  if (iVar3 == 2) {
    *(unsigned char *)(param_1 + 0x22) = param_3;
    *(unsigned char *)((int)param_1 + 0x89) = param_3;
    *(unsigned char *)((int)param_1 + 0x8a) = param_3;
    *(unsigned char *)((int)param_1 + 0x8b) = param_3;
  }
  return;
}

