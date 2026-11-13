typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_822EFBF0();
extern int fn_822F4258();
extern int fn_823A74D8();
extern int fn_823AFE00();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_38;


unsigned __int64 fn_822F3EC0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  int *piVar6;
  unsigned int *puVar7;
  bool bVar8;
  int iStack_50;
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned __int64 uStack_38;
  
  bVar8 = false;
  iStack_50 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x84);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x1e4);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    bVar8 = true;
    piVar6 = (int *)fn_822EFBF0(auStack_48,iVar1);
    if ((*(int *)(*piVar6 + 0x38) == 0) || (*(int *)(*piVar6 + 0x44) != 0)) {
      bVar5 = true;
      goto LAB_822f3f2c;
    }
  }
  bVar5 = false;
LAB_822f3f2c:
  if ((bVar8) && (iStack_44 != 0)) {
    fn_822315A0();
  }
  if (bVar5) {
    uVar3 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x2c);
    uVar4 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x28);
    puVar7 = (unsigned int *)fn_822EFBF0(auStack_40,iVar1);
    fn_823A74D8(&iStack_50,*puVar7,uVar4,uVar3);
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    iVar1 = iStack_50;
    if (iStack_50 != 0) {
      fn_823AFE00(iVar2);
      uStack_38 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x20);
      fn_822F4258((double)uStack_38,(double)*(float *)(iVar1 + 0x24),
                        (double)*(float *)(iVar1 + 0x28),(double)*(float *)(iVar1 + 0x2c),
                        (double)*(float *)(iVar1 + 0x30),(double)*(float *)(iVar1 + 0x34),
                        (double)*(float *)(iVar1 + 0x38),param_1,iVar2);
      if (iStack_4c != 0) {
        fn_822315A0();
      }
      return 1;
    }
    if (iStack_4c != 0) {
      fn_822315A0();
    }
  }
  return 0;
}

