extern unsigned int *auStack_c0;
extern int fn_8267BE38();
extern int fn_8268CC00();
extern int fn_82758858();
extern int fn_82759900();
extern int fn_8275F338();
extern int fn_8275FA28();
extern int fn_827601F0();
extern int fn_82763948();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_6b;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82765D90(int *param_1,int param_2,char param_3)

{
  int iVar1;
  float fVar2;
  __int64 lVar3;
  __int64 lVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned char auStack_c0 [32];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned char uStack_6c;
  unsigned char uStack_6b;
  
  (**(int (***)())(**(int **)(param_2 + 0xc) + 0x14))(&uStack_d0);
  piVar5 = param_1 + 0x14;
  lVar4 = ((unsigned __int64)uStack_c4 - (unsigned __int64)uStack_cc) * 0x14;
  dVar6 = (double)(__int64)(int)lVar4;
  iVar1 = param_1[0x15];
  lVar3 = ((unsigned __int64)uStack_c8 - (unsigned __int64)uStack_d0) * 0x14;
  dVar7 = (double)(__int64)(int)lVar3;
  fn_82758858(piVar5,piVar5,1);
  if (iVar1 == 0) {
    fn_827601F0(*piVar5,1);
  }
  fn_8268CC00(auStack_c0);
  fn_82759900(*piVar5,(-(unsigned __int64)(param_3 != '\0') & 0xfffffffe) + 0x43,param_2,auStack_c0);
  fVar2 = lbl_821AAD20;
  dVar8 = (double)lbl_821AAD20;
  *(unsigned char *)(param_1 + 9) = *(unsigned char *)(param_1 + 9) | 1;
  param_1[2] = (int)fVar2;
  param_1[1] = (int)fVar2;
  param_1[3] = (int)(float)dVar7;
  param_1[4] = (int)(float)dVar6;
  (**(int (***)())(*param_1 + 8))(param_1,param_1 + 1);
  param_1[0x1a] = (int)(float)dVar8;
  *(unsigned char *)(param_1 + 9) = *(unsigned char *)(param_1 + 9) | 0x10;
  if (param_1[0x11] == 0) {
    *(unsigned short *)((int)param_1 + 0x4e) = 0x20;
  }
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6b = 0;
  uStack_a0 = 0;
  uStack_9c = 1;
  uStack_98 = 0;
  *(unsigned char *)(param_1 + 9) = *(unsigned char *)(param_1 + 9) | 4;
  fn_8275FA28(&uStack_a0,0,0,0);
  fn_82763948(&uStack_a0,lVar3);
  fn_82763948(&uStack_a0,0,lVar4,0);
  fn_82763948(&uStack_a0,((unsigned __int64)uStack_c8 - (unsigned __int64)uStack_d0) * -0x14,0,0);
  fn_82763948(&uStack_a0,0,((unsigned __int64)uStack_c4 - (unsigned __int64)uStack_cc) * -0x14,0);
  fn_8275F338(&uStack_a0,param_1 + 0x11,param_1 + 0xd);
  fn_8267BE38(uStack_84);
  return;
}

