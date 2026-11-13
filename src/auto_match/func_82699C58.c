extern int fn_8267C498();
extern int fn_82698C48();
extern int fn_82698CC0();
extern int fn_82699828();
extern int fn_82699B40();
extern int memcpy();


void fn_82699C58(int *param_1,int *param_2,int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int aiStack_50;
  
  iVar1 = param_2[0x10];
  uVar2 = param_1[1];
  aiStack_50 = iVar1;
  uVar3 = fn_82698C48(param_1,0,uVar2,&aiStack_50,0xffffffff82698c28);
  param_1[3] = 0;
  if ((((param_4 & 1) != 0) && (uVar3 < uVar2)) &&
     (*(int *)(*(int *)(uVar3 * 4 + *param_1) + 0x14) == iVar1)) {
    fn_82699B40(param_1,uVar3);
    aiStack_50 = iVar1;
    uVar3 = fn_82698C48(param_1,0,param_1[1],&aiStack_50,0xffffffff82698c28);
  }
  param_3[5] = iVar1;
  aiStack_50 = 0;
  fn_82698CC0(&aiStack_50,param_3);
  param_3[5] = iVar1;
  memcpy(param_3 + 9,param_2 + 1,0x20);
  (**(int (***)())(*param_3 + 4))(param_3);
  param_3[0x11] = param_2[9];
  param_3[0x12] = param_2[10];
  param_3[0x13] = param_2[0xb];
  param_3[0x14] = param_2[0xc];
  param_3[0x15] = param_2[0xd];
  param_3[0x16] = param_2[0xe];
  param_3[7] = param_2[0xf];
  *(unsigned short *)(param_3 + 0x19) = *(unsigned short *)(param_2 + 0x12);
  (**(int (***)())(*param_3 + 0x18))(param_3,*(unsigned char *)((int)param_2 + 0x4a));
  if (*param_2 != 0) {
    (**(int (***)())(*param_3 + 0x1c))(param_3);
  }
  fn_82699828(param_1,uVar3,&aiStack_50);
  (**(int (***)())(*param_3 + 0x70))(param_3);
  if (aiStack_50 != 0) {
    fn_8267C498();
  }
  return;
}

