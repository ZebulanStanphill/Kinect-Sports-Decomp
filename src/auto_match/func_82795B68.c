typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8278E7B0();
extern int fn_8278E8D0();
extern int fn_8278FB30();
extern int fn_82790618();
extern int fn_827947D0();


int fn_82795B68(int param_1,int param_2,int param_3)

{
  bool bVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned int auStack_50;
  
  fn_8278FB30();
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  fn_827947D0((int *)(param_1 + 0x10),*(unsigned int *)(param_2 + 0x10),
                *(unsigned int *)(param_2 + 0x14));
  uVar3 = *(unsigned int *)(param_2 + 0x1c);
  *(unsigned short *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x1c) = uVar3;
  iVar5 = *(int *)(param_3 + 0x18);
  *(int *)(param_3 + 0x18) = iVar5 + 1;
  *(int *)(param_1 + 0x20) = iVar5;
  uVar3 = fn_8278E8D0(param_3,*(unsigned int *)(param_2 + 0xc));
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_8267C498(*(int *)(param_1 + 0xc));
  }
  *(unsigned int *)(param_1 + 0xc) = uVar3;
  uVar4 = 0;
  iVar5 = 0;
  while( true ) {
    if (((int)uVar4 < 0) || (bVar1 = false, *(unsigned int *)(param_1 + 0x14) <= uVar4)) {
      bVar1 = true;
    }
    if (bVar1) break;
    iVar6 = iVar5 + *(int *)(param_1 + 0x10);
    uVar2 = fn_8278E7B0(param_3,*(unsigned int *)(iVar6 + 8));
    auStack_50 = (unsigned int)uVar2;
    fn_82790618(iVar6,&auStack_50);
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar2);
    }
    if ((int)uVar4 < *(int *)(param_1 + 0x14)) {
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0xc;
    }
  }
  return param_1;
}

