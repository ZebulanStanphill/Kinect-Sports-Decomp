typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822474A8();
extern int fn_82247890();
extern int fn_82248C08();
extern int fn_8225F160();
extern int fn_828A1C20();
extern int fn_828A1C28();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_82247890();


void fn_822472C8(int *param_1,int param_2)

{
  bool bVar1;
  char cVar5;
  __int64 lVar2;
  unsigned int uVar3;
  int iVar4;

  cVar5 = fn_828ACCE8(param_1[4]);
  if (cVar5 == '\0') {
LAB_82247304:
    bVar1 = false;
  }
  else {
    cVar5 = fn_828AD740(param_1[4]);
    bVar1 = true;
    if (cVar5 == '\0') goto LAB_82247304;
  }
  if (param_2 == 1) {
    fn_82247890(param_1);
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      if (bVar1) {
        fn_822474A8(param_1);
      }
      fn_828A1C20(param_1[4]);
      return;
    }
    if (param_2 != 4) {
      return;
    }
    if (bVar1) {
      return;
    }
    lVar2 = (**(int (***)())(*param_1 + 8))(param_1);
    uVar3 = fn_82248C08(lVar2 + 0x240);
    iVar4 = fn_8225F160();
    *(unsigned int *)(iVar4 + 0x14) = uVar3;
    *(unsigned int *)(iVar4 + 0x1c) = 0;
    *(unsigned int *)(iVar4 + 0x20) = 0;
    *(unsigned int *)(iVar4 + 0x24) = 0;
    *(unsigned int *)(iVar4 + 0x28) = uVar3;
    return;
  }
  if (bVar1) {
    cVar5 = fn_828A1C28(param_1[4]);
    bVar1 = true;
    if (cVar5 != '\0') goto LAB_822473ac;
  }
  bVar1 = false;
LAB_822473ac:
  if (bVar1) {
    fn_82247890(param_1[4]);
  }
  return;
}
