extern unsigned int *auStack_4c;
extern int fn_82A1DDC0();
extern int fn_82FEC7F0();
extern int fn_83049EC0();
extern int fn_8304A158();
extern int fn_8304D650();
extern int fn_8307DE18();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E188();
extern int fn_8307E6E0();
extern unsigned int uStack_50;


void fn_8304A690(int param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned int uStack_50;
  unsigned int auStack_4c;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  uStack_50 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  fn_8307DE78(*(unsigned int *)(param_1 + 0x28));
  fn_8307E6E0(*(unsigned int *)(param_1 + 0x28));
  auStack_4c = 0;
  uVar5 = fn_83049EC0(param_1,*(unsigned short *)(param_2 + 3),&uStack_50,&auStack_4c);
  param_2[0xd0] = uVar5;
  iVar6 = fn_8304A158(param_1);
  uVar4 = uStack_50;
  if (iVar6 == 2) {
    param_2[0xd0] = 2;
  }
  if ((param_2[0xd0] == 0x11) || (param_2[0xd0] == 0x2d)) {
    iVar6 = 0;
    uVar10 = *(unsigned int *)(iVar2 + 0x24) >> 0xe;
    for (uVar9 = uVar10; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      iVar6 = iVar6 + 1;
    }
    lVar3 = (__int64)(int)uStack_50;
    uVar8 = 0;
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar8 = uVar8 + 1;
    }
    uVar8 = fn_82FEC7F0((uVar8 & 0x1fffff) << 0xb);
    *(int *)(param_1 + 0x74) = (int)uVar8;
    if ((uVar8 & 0xffffffff) == 0) {
      param_2[0xd0] = 2;
      fn_8307E060(*(unsigned int *)(param_1 + 0x28));
      return;
    }
    fn_82A1DDC0(uVar8,auStack_4c,(iVar6 * lVar3 & 0x7fffffffU) << 1);
    if (((*(char *)(param_1 + 0x7c) != '\0') &&
        (iVar6 = fn_8307E188(*(unsigned int *)(param_1 + 0x28),0), iVar6 == 0)) &&
       (iVar6 = fn_8307DE18(*(unsigned int *)(param_1 + 0x28),0), iVar6 != 0)) {
      param_2[0xd0] = 0x11;
    }
  }
  fn_8307E060(*(unsigned int *)(param_1 + 0x28));
  uVar10 = *(unsigned int *)(iVar2 + 0x24);
  uVar5 = *(unsigned int *)(param_1 + 0x74);
  *(unsigned short *)(param_2 + 3) = 0x400;
  *(short *)((int)param_2 + 0xe) = (short)uVar4;
  uVar7 = 0;
  param_2[1] = uVar10 >> 0xe;
  *param_2 = uVar5;
  if ((*(char *)(param_1 + 0x7e) != '\0') && (*(unsigned int *)(param_1 + 0x78) <= (uVar4 & 0xffff) + iVar1)
     ) {
    uVar7 = 1;
    *(char *)(param_1 + 0x7e) = *(char *)(param_1 + 0x7e) + -1;
  }
  fn_8304D650(param_1,param_2,iVar1,uVar7);
  if ((*(unsigned int *)(*(int *)(param_1 + 8) + 8) & 0x10000) != 0) {
    uVar5 = *(unsigned int *)(iVar2 + 0x20);
    param_2[6] = iVar1;
    param_2[9] = uVar5;
    param_2[8] = *(unsigned int *)(param_1 + 0x78);
  }
  return;
}

