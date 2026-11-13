typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_825089A0();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82890F90();
extern int fn_828A12E8();
extern int fn_828BE158();
extern int fn_828C8A00();


void fn_82891DD0(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar5;
  unsigned __int64 uVar3;
  char cVar6;
  unsigned __int64 uVar4;
  double dVar7;
  
  if ((param_1[0xd] == 0) || (iVar1 = *(int *)(param_1[0xd] + 0x38), iVar1 == 0)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = *(char *)(iVar1 + 0x26);
  }
  if (cVar6 == '\0') {
    cVar6 = (**(int (***)())(*param_1 + 0x1c))(param_1);
    if (cVar6 == '\0') {
      param_1[0x14] = 3;
    }
    else {
      if ((param_1[0x14] == 2) || (bVar2 = false, param_1[0x14] == 4)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = fn_8265C9E0(0x90);
        if ((uVar4 & 0xffffffff) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = fn_828C8A00(uVar4,param_1);
        }
        fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
        fn_828BE158(param_1[4],uVar3,*(unsigned int *)(param_1[0xd] + 0x3c),0);
        param_1[0x14] = 2;
        piVar5 = (int *)fn_825089A0();
        dVar7 = (double)(**(int (***)())(*piVar5 + 8))();
        param_1[0x15] = (int)(float)dVar7;
        uVar3 = fn_828A12E8(param_1[4]);
        fn_82890F90(uVar3,param_1,0);
      }
    }
  }
  else {
    param_1[0x14] = 1;
    piVar5 = (int *)fn_825089A0();
    uVar3 = (**(int (***)())(*piVar5 + 0xc))();
    *(unsigned __int64 *)(param_1 + 0x18) = uVar3;
  }
  return;
}

