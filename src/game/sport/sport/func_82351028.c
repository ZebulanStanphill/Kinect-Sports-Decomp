typedef unsigned char bool;
#define false 0
extern int fn_82244C20();
extern int fn_82247000();
extern int fn_82250A18();
extern int fn_82350888();
extern int fn_82512B70();
extern unsigned char fn_8288B760(int);
extern unsigned __int64 fn_828B00A0(unsigned);
extern int (*lbl_83276774[])();
extern unsigned int lbl_832975B0;


void fn_82351028(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar5;
  unsigned char cVar6;
  unsigned uVar3;
  unsigned __int64 uVar4;
  unsigned uVar7;
  
  uVar7 = 4;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar7 = 5;
  }
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if ((*(char *)(iVar5 + 4) != '\0') && (*(unsigned *)(param_1 + 0x3f4) != 0)) {
    *(unsigned char *)(*(int *)(param_1 + 0x3f4) + 0x95) = 1;
    if (*(int *)(param_1 + 0x3f8) == 0) {
      iVar5 = *(int *)(param_1 + 0x3f4);
      *(unsigned int *)(param_1 + 0x3f8) = 1;
      *(unsigned char *)(iVar5 + 0x98) = 1;
      cVar6 = fn_8288B760(iVar5);
      if (cVar6 != '\0') {
        fn_82244C20(iVar5);
      }
    }
    iVar5 = fn_82247000(*(unsigned int *)(param_1 + 0x3f4));
    if (iVar5 != 3) {
      return;
    }
    uVar2 = (*(int **)(param_1 + 0x3f4))[4];
    iVar5 = (*(int (**)())(**(int **)(param_1 + 0x3f4) + 4))(*(void**)(param_1+0x3f4));
    iVar5+=0xf0;uVar3 = (*(int (**)())(*(int *)iVar5 + 0x3c))(iVar5);
    if (uVar3 != 0) {
      bVar1 = fn_828B00A0(uVar2+0x278) >= (unsigned __int64)uVar3;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      return;
    }
    uVar7 = 5;
  }
  if ((*(int *)(param_1 + 0x3e4) != 0) &&
     (*(unsigned int *)(param_1 + 0x3e4) = 0, lbl_83276774[2] != (int (**)())0x0)) {
    (*lbl_83276774[2])("olympus::sport::Sport::TickWaitingOnSync","D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\sport.cpp",0x657);
  }
  if (*(unsigned *)(param_1 + 0x3f0) != 0) {
    fn_82512B70(*(unsigned *)(param_1+0x3f0));
    *(unsigned int *)(param_1 + 0x3f0) = 0;
  }
  fn_82350888(param_1,uVar7);
  return;
}

