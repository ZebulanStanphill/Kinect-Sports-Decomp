extern unsigned int *auStack_20;
extern int fn_822A1968();
extern int fn_82359698();
extern int fn_82372A58();
extern int fn_82535298();
extern int fn_82536288();


void fn_8238B098(double param_1,int param_2)

{
  float fVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned int auStack_20;
  
  iVar3 = *(int *)(param_2 + 8);
  if ((*(int *)(iVar3 + 0x58) != *(int *)(iVar3 + 0x54)) && (*(int *)(iVar3 + 0x58) != 0)) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x20) + param_1);
  *(float *)(param_2 + 0x20) = fVar1;
  if (fVar1 < *(float *)(param_2 + 0x1c)) {
    return;
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x18) != 0)) {
    if (*(int *)(param_2 + 0x14) != 0) goto LAB_8238b140;
    auStack_20 = *(unsigned int *)(param_2 + 0x10);
    auStack_20 =
         fn_82535298(&auStack_20,**(unsigned int **)(iVar3 + 0x9b8),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(&auStack_20);
  }
  *(unsigned int *)(param_2 + 0x14) = 1;
LAB_8238b140:
  uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 8);
  iVar3 = fn_822A1968(*(unsigned int *)(*(unsigned int *)(param_2 + 8) + 0xd4));
  if ((iVar3 == 0) && (*(int *)(param_2 + 0x14) != 0)) {
    uVar2 = fn_82372A58(uVar4);
    fn_82359698(*(unsigned int *)(param_2 + 8),uVar2);
  }
  return;
}

