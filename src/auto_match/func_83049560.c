extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82A1DDC0();
extern int fn_82FEC7F0();
extern int fn_830491F8();
extern int fn_8304D650();
extern int fn_8307DE18();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E188();
extern int fn_8307E218();
extern int fn_8307E478();
extern int fn_8307E4B8();
extern int fn_8307E6E0();


void fn_83049560(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_50 [4];
  unsigned int auStack_4c [19];
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  fn_8307DE78(*(unsigned int *)(param_1 + 0x28));
  fn_8307E6E0(*(unsigned int *)(param_1 + 0x28));
  uVar1 = fn_8307E188(*(unsigned int *)(param_1 + 0x28),0);
  if (uVar1 == 0) {
    iVar2 = fn_8307E4B8();
    iVar3 = fn_8307E478(*(unsigned int *)(param_1 + 0x28),0);
    if ((iVar2 == 0) && (((iVar3 == 0 || (iVar3 == 1)) || (iVar3 == 2)))) {
      param_2[0xd0] = 0x2e;
      fn_8307E060(*(unsigned int *)(param_1 + 0x28));
      return;
    }
LAB_830495fc:
    param_2[0xd0] = 2;
    fn_8307E060(*(unsigned int *)(param_1 + 0x28));
    return;
  }
  auStack_4c[0] = 0;
  uVar4 = fn_8307E218(*(unsigned int *)(param_1 + 0x28),0,*(unsigned short *)(param_2 + 3),auStack_4c);
  iVar3 = 0;
  uVar7 = *(unsigned int *)(iVar2 + 0x24) >> 0xe;
  for (uVar6 = uVar7; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
    iVar3 = iVar3 + 1;
  }
  uVar5 = 0;
  for (; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
    uVar5 = uVar5 + 1;
  }
  uVar5 = fn_82FEC7F0((uVar5 & 0x1fffff) << 0xb);
  *(int *)(param_1 + 0x40) = (int)uVar5;
  if ((uVar5 & 0xffffffff) == 0) goto LAB_830495fc;
  fn_82A1DDC0(uVar5,auStack_4c[0],((__int64)iVar3 * (__int64)(int)uVar4 & 0x7fffffffU) << 1)
  ;
  fn_8307E060(*(unsigned int *)(param_1 + 0x28));
  uVar7 = *(unsigned int *)(iVar2 + 0x24);
  uVar8 = *(unsigned int *)(param_1 + 0x40);
  *(short *)((int)param_2 + 0xe) = (short)uVar4;
  *(unsigned short *)(param_2 + 3) = 0x400;
  param_2[1] = uVar7 >> 0xe;
  *param_2 = uVar8;
  if ((*(unsigned int *)(*(int *)(param_1 + 8) + 8) & 0x10000) != 0) {
    param_2[9] = *(unsigned int *)(iVar2 + 0x20);
    param_2[6] = *(unsigned int *)(param_1 + 0x3c);
    param_2[8] = *(unsigned int *)(param_1 + 0x34);
  }
  uVar8 = *(unsigned int *)(param_1 + 0x3c);
  auStack_50[0] = 0;
  auStack_4c[0] = uVar4;
  fn_830491F8(param_1,auStack_4c,auStack_50);
  fn_8304D650(param_1,param_2,uVar8,auStack_50[0]);
  if (uVar4 == uVar1) {
    iVar2 = fn_8307DE18(*(unsigned int *)(param_1 + 0x28),0);
    uVar8 = 0x11;
    if (iVar2 != 0) goto LAB_83049748;
  }
  uVar8 = 0x2d;
LAB_83049748:
  param_2[0xd0] = uVar8;
  return;
}

