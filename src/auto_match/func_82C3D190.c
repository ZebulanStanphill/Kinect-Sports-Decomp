extern int fn_82C106C8();
extern int fn_82C10B28();
extern int fn_82C3CD98();
extern int fn_82C49BB0();


void fn_82C3D190(unsigned int *param_1)

{
  int uVar1;
  int iVar2;
  unsigned int aiStack_30;
  
  aiStack_30 = param_1[8];
  uVar1 = fn_82C49BB0(*(unsigned int *)(aiStack_30 + 0x44));
  if (*(unsigned int *)(aiStack_30 + 0x54) != 0) {
    fn_82C10B28(*(unsigned int *)(aiStack_30 + 0x1084),0x19,aiStack_30 + 0x54);
  }
  *(unsigned int *)(aiStack_30 + 0x54) = 0;
  fn_82C106C8(*(unsigned int *)(aiStack_30 + 0x1084),*(unsigned int *)(aiStack_30 + 0x1088));
  if (aiStack_30 != 0) {
    fn_82C10B28(*(unsigned int *)(aiStack_30 + 0x1084),0x19,&aiStack_30);
  }
  iVar2 = fn_82C3CD98(uVar1);
  if (iVar2 >= 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
  }
  return;
}

