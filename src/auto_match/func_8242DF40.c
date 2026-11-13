#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_220;
extern unsigned int *auStack_420;
extern unsigned int *auStack_450;
extern unsigned int *auStack_460;
extern int fn_822315A0();
extern int fn_8229EC50();
extern int fn_8229ED70();
extern int fn_8229EE18();
extern int fn_82358FD8();
extern int fn_823599A8();
extern int fn_82359C18();
extern int fn_8242C1B8();
extern int fn_8242E3E0();
extern int fn_824325E8();
extern int fn_824F3D58();
extern int fn_82522588();
extern unsigned int iStack_44c;
extern unsigned int iStack_454;
extern unsigned int lbl_821B9094;
extern unsigned int uStack_43c;


void fn_8242DF40(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_460 [2];
  unsigned int *puStack_458;
  int iStack_454;
  unsigned char auStack_450 [4];
  int iStack_44c;
  unsigned char **ppuStack_440;
  unsigned __int64 uStack_43c;
  unsigned char ***pppuStack_430;
  unsigned char auStack_420 [512];
  unsigned char auStack_220 [544];
  
  for (uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
      (uVar5 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x34); uVar5 = uVar5 + 8) {
    iVar3 = *(int *)(param_1 + 0x174);
    puVar2 = (unsigned int *)fn_82522588(auStack_450,uVar5);
    fn_824325E8(*puVar2,*(unsigned int *)(iVar3 + 0x170));
    if (iStack_44c != 0) {
      fn_822315A0();
    }
  }
  fn_82358FD8(param_1,auStack_420,0x100,0xffffffff821aadb8);
  if ((*(int *)(*(int *)(param_1 + 0x174) + 0x120) == 0) ||
     (iVar3 = fn_8242E3E0(param_1), iVar3 != 0)) {
    fn_8229EC50(*(unsigned int *)(*(int *)(param_1 + 0x94) + 0x5c),auStack_420);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x174);
    if (*(int *)(iVar3 + 0x124) == 0) {
      if (*(int *)(iVar3 + 0x128) == 0) {
        fn_8229EE18(*(unsigned int *)(*(int *)(param_1 + 0x94) + 0x5c),auStack_420,iVar3 + 0x130
                         );
        goto LAB_8242e054;
      }
      uVar4 = 0xffffffff821b8e58;
    }
    else {
      uVar4 = 0xffffffff821b8e3c;
    }
    fn_82358FD8(param_1,auStack_220,0x100,uVar4);
    fn_8229ED70(*(unsigned int *)(*(int *)(param_1 + 0x94) + 0x5c),auStack_420,auStack_220,
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x174) + 0x130);
  }
LAB_8242e054:
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x5c) + 0x1d4) == -1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
    iVar3 = *(int *)(*(int *)(iVar3 + 0x1d4) * 4 + *(int *)(iVar3 + 0x1c4));
  }
  if (*(int *)(*(int *)(iVar3 + 0x40) + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(param_1);
  }
  if (1 < (unsigned int)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 3)) {
    auStack_460[0] = 0;
    pppuStack_430 = &ppuStack_440;
    puStack_458 = auStack_460;
    ppuStack_440 = &lbl_821B9094;
    uStack_43c = CONCAT44(puStack_458,param_1);
    iStack_454 = param_1;
    fn_823599A8(param_1,&ppuStack_440);
    fn_82359C18(&ppuStack_440);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
  iVar1 = **(int **)(iVar3 + 0x1e0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d0) == 0)) {
    *(unsigned int *)(iVar1 + 0x1d0) = 1;
  }
  *(unsigned int *)(*(int *)(iVar3 + 0x1e0) + 0x2c) = 0;
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0xd54) + 0x20) != 0) {
    fn_824F3D58();
  }
  return;
}

