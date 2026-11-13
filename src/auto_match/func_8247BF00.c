extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82281530();
extern int fn_82281868();
extern int fn_822819E0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();


void fn_8247BF00(int param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  __int64 lVar4;
  unsigned int uVar5;
  double dVar6;
  
  dVar6 = (double)*(float *)(param_1 + 0x7c);
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x6a,1);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x6a), cVar3 != '\0')) {
      fn_82E1CC60(dVar6,0xffffffff821a7a04);
      fn_82E1CB08(0xffffffff821a7a38,0xffffffff821bd500,0);
      fn_82E1CCA8();
    }
  }
  iVar2 = fn_82281530(*(unsigned int *)(param_1 + 0x14));
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      *(unsigned int *)(param_1 + 0x40) = 1;
      *(unsigned int *)(param_1 + 0x3c) = 1;
    }
    else {
      uVar5 = *(int *)(param_1 + 0x30) - 1;
      *(unsigned int *)(param_1 + 0x30) = uVar5;
      if (uVar5 == 2) {
        *(unsigned int *)(param_1 + 0x50) = 1;
      }
      iVar2 = *(int *)(param_1 + 0x14);
      lVar4 = ((unsigned __int64)uVar5 + 9 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
      if (*(int *)(iVar2 + 0x10) == 0) {
        if (*(int *)(iVar2 + 8) != 0) {
          fn_822819E0(iVar2,lVar4);
        }
      }
      else {
        fn_82281868(iVar2,lVar4,0);
      }
    }
  }
  return;
}

