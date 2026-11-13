extern unsigned int *auStack_40;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826A5E30();
extern int fn_826B14D8();
extern int fn_827244C0();
extern int fn_82729EA0();
extern int fn_82734030();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


/* WARNING: Type propagation algorithm not settling */

unsigned int * fn_82734110(unsigned int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned char auStack_60 [4];
  unsigned int auStack_5c [3];
  int iStack_50;
  unsigned char uStack_4c;
  unsigned char auStack_40 [16];
  
  uStack_4c = 8;
  iStack_50 = param_2;
  uVar3 = fn_8267B890(*(unsigned int *)(param_2 + 0x288),0x34,0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_827244C0(uVar3,&iStack_50);
  }
  *param_1 = uVar6;
  *(unsigned char *)(param_1 + 2) = 0;
  param_1[1] = 0;
  lVar4 = fn_8267B890(*(unsigned int *)(param_2 + 0x288),0x58,0);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = fn_826B14D8(param_2,1);
    uVar7 = fn_82729EA0(lVar4,&iStack_50,uVar5,param_1);
  }
  if (uVar7 != 0) {
    *(unsigned int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
  }
  auStack_5c[1] = 10;
  auStack_5c[0] = uVar7;
  fn_826A5E30(param_2 + 0x278,auStack_5c + 1,auStack_5c);
  if (auStack_5c[0] != 0) {
    fn_826824B0();
  }
  auStack_60[0] = 0;
  iVar1 = *(int *)(param_2 + 0x2a0);
  iVar2 = *(int *)(iVar1 + 0x10);
  uVar5 = fn_82695750(auStack_40,param_1);
  (**(int (***)())(iVar2 + 0x28))(iVar1 + 0x10,&iStack_50,param_2 + 0x30,uVar5,auStack_60);
  fn_82696330(auStack_40);
  fn_82734030(param_2,&iStack_50,*param_1);
  if (uVar7 != 0) {
    fn_826824B0(uVar7);
  }
  return param_1;
}

