typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822D7FE0();
extern int fn_823B4970();
extern int fn_8265CA20();
extern int fn_8287FE18();
extern int fn_82883058();
extern int fn_828867D8();
extern int fn_828BD660();
extern int fn_828BE968();
extern int fn_828CD208();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_48;


bool fn_828CD8A8(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [24];
  int iStack_48;
  
  if (*param_1 == 0) {
    if (*(char *)(param_2 + 0x8c) != '\0') {
      *param_1 = *(int *)(param_2 + 0x88) + 1;
    }
  }
  else if ((*(char *)(param_2 + 0x8c) != '\0') &&
          ((unsigned int)((int)(param_1[2] - param_1[1]) >> 2) <= *(unsigned int *)(param_2 + 0x88))) {
    *(unsigned char *)(param_2 + 0xc0) = 1;
    return (param_1[2] - param_1[1] & 0xfffffffc) == 0;
  }
  auStack_70[0] = *(int *)(param_2 + 0x88) + 1;
  puVar3 = auStack_70;
  if (auStack_70[0] <= *param_1) {
    puVar3 = param_1;
  }
  puVar7 = param_1 + 1;
  fn_828CD208(puVar7,*puVar3);
  iVar5 = *(int *)(param_2 + 0x88) * 4;
  if (*(int *)(iVar5 + param_1[1]) == 0) {
    *(int *)(iVar5 + param_1[1]) = param_2;
    if ((*param_1 == 0) || ((int)(param_1[2] - *puVar7) >> 2 != *param_1)) {
      return false;
    }
    iVar5 = 0;
    piVar2 = (int *)*puVar7;
    if (piVar2 != (int *)param_1[2]) {
      do {
        if (*piVar2 == 0) {
          iVar5 = iVar5 + 1;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != (int *)param_1[2]);
      if (iVar5 != 0) {
        return false;
      }
    }
    fn_822D7FE0(auStack_60);
    uVar4 = 0;
    if ((int)(param_1[2] - *puVar7) >> 2 != 0) {
      iVar5 = 0;
      do {
        lVar6 = (unsigned __int64)*(unsigned int *)(iVar5 + *puVar7) + 0x98;
        uVar1 = fn_828E9D90(lVar6);
        fn_828E9D40(lVar6);
        fn_823B4970(auStack_60,lVar6,uVar1,0);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < (unsigned int)((int)(param_1[2] - *puVar7) >> 2));
    }
    fn_828E9D40(auStack_60);
    fn_828BE968(auStack_60);
    piVar2 = (int *)fn_828867D8();
    (**(int (***)())(*piVar2 + 0x48))(piVar2,*(unsigned int *)(param_2 + 0x18));
    fn_828BD660(piVar2,auStack_60);
    uVar1 = fn_82883058(*(unsigned int *)(param_2 + 0x18));
    fn_8287FE18(uVar1,piVar2);
    if (iStack_48 != 0) {
      fn_8265CA20();
    }
    return true;
  }
  *(unsigned char *)(param_2 + 0xc0) = 1;
  return (param_1[2] - *puVar7 & 0xfffffffc) == 0;
}

