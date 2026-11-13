typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_30;
extern int fn_82535298();
extern int fn_82536218();
extern int fn_82536288();
extern int fn_825F8418();
extern int fn_825F8580();
extern int fn_825F8BB0();


unsigned __int64 fn_826299F8(int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  unsigned int auStack_30 [12];
  
  iVar4 = *param_1;
  iVar6 = *(int *)(iVar4 + 4);
  if (iVar6 == 0x16) {
    if (*(char *)(iVar4 + 0x12) == '\0') {
      fn_825F8418((double)*(float *)(iVar4 + 0xc),*(unsigned int *)(param_2 + 0x858),iVar4 + 8,
                        param_3,*(unsigned char *)(iVar4 + 0x13));
    }
    else {
      auStack_30[0] = *(unsigned int *)(iVar4 + 8);
      auStack_30[0] =
           fn_82535298(auStack_30,*(unsigned int *)(param_2 + 0x84c),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(auStack_30);
    }
  }
  else if (iVar6 == 0x17) {
    fn_825F8580((unsigned __int64)*(unsigned int *)(param_2 + 0x858),
                      (unsigned __int64)*(unsigned int *)(param_2 + 0x858) + 0x230);
  }
  else if (iVar6 == 0x29) {
    iVar6 = *(int *)(param_2 + 0x858);
    uVar1 = *(unsigned int *)(iVar4 + 0xc);
    iVar2 = 0;
    pcVar3 = (char *)(iVar6 + 0x28);
    do {
      if (*pcVar3 == '\0') {
        iVar5 = iVar2 * 0x2c + iVar6;
        *(unsigned int *)(iVar5 + 0x10) = uVar1;
        *(unsigned int *)(iVar5 + 0x18) = uVar1;
        *(unsigned int *)(iVar5 + 0x1c) = uVar1;
        *(unsigned int *)(iVar5 + 4) = *(unsigned int *)(iVar4 + 8);
        *(unsigned char *)(iVar5 + 0x28) = 1;
        goto LAB_82629ad4;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0x2c;
    } while (iVar2 < 0xc);
    iVar2 = -1;
LAB_82629ad4:
    iVar4 = iVar2 * 0x2c + iVar6;
    *(unsigned char *)(iVar4 + 0x2b) = 0;
    *(unsigned char *)(iVar4 + 0x2a) = 0;
    *(int *)(*(int *)(iVar6 + 0x22c) * 4 + iVar6 + 0x214) = iVar2;
    *(int *)(iVar6 + 0x22c) = *(int *)(iVar6 + 0x22c) + 1;
    *(int *)((*(int *)(iVar6 + 0x27c) + 0x93) * 4 + iVar6) = iVar2;
    *(int *)(iVar6 + 0x27c) = *(int *)(iVar6 + 0x27c) + 1;
  }
  else if (iVar6 == 0x7c) {
    iVar6 = 0;
    piVar7 = (int *)(iVar4 + 0x10);
    do {
      if (piVar7 == (int *)0x0) {
        bVar8 = false;
      }
      else {
        bVar8 = *piVar7 != 0;
      }
      if (!bVar8) {
        return 3;
      }
      fn_825F8BB0(*(unsigned int *)(param_2 + 0x858),piVar7,piVar7[-1],
                        *(unsigned int *)(iVar4 + 8));
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar6 < 6);
  }
  else {
    if (iVar6 != 0x94) {
      return 4;
    }
    fn_82536218((double)*(float *)(iVar4 + 0x28),iVar4 + 8);
  }
  return 3;
}

