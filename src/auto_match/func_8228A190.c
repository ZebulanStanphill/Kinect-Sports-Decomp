extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8225C590();
extern int fn_8225D288();
extern int fn_8225F160();
extern int fn_822883D0();
extern int fn_82289670();
extern int fn_8228ABB8();
extern int fn_8234F298();
extern int fn_823AB478();
extern unsigned int lbl_83265988;
extern unsigned int uStack_70;


void fn_8228A190(int param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int uStack_70;
  unsigned int auStack_6c [3];
  unsigned char auStack_60 [96];
  
  uVar2 = (**(int (***)())(**(int **)(param_2[3] + 0x8c0) + 100))();
  *(unsigned int *)(param_1 + 0x7c0) = 1;
  fn_82289670(param_1,*(unsigned int *)(param_1 + 0x6a0));
  iVar1 = *param_2;
  if (iVar1 != 0) {
    uVar3 = fn_8225C590();
    fn_82230300(auStack_60,0,0);
    fn_82230360(auStack_60,0xffffffff821a9340,8);
    fn_8225D288(uVar3,auStack_60,uVar2);
    iVar4 = fn_823AB478();
    fn_82230300(auStack_60,1,0);
  }
  else {
    iVar4 = param_2[1];
  }
  *(unsigned int *)(*(int *)(param_1 + 0x6a0) * 0x40 + param_1 + 0x6a8) = (unsigned int)(iVar1 != 0);
  *(int *)(*(int *)(param_1 + 0x6a0) * 0x40 + param_1 + 0x6ac) = iVar4;
  fn_8225F160();
  if ((lbl_83265988 == 0) ||
     ((*(unsigned char *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) {
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6a0);
    auStack_6c[0] = 0;
    uStack_70 = 0;
    if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
      uVar5 = -((unsigned __int64)(uVar5 < 2) - 1);
    }
    fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar5,auStack_6c,&uStack_70);
    puVar7 = &uStack_70;
    puVar6 = auStack_6c;
  }
  else {
    puVar7 = (unsigned int *)0x0;
    puVar6 = (unsigned int *)0x0;
  }
  fn_8228ABB8(param_1,*(unsigned int *)(param_1 + 0x6a0),uVar2,puVar6,puVar7);
  fn_822883D0(param_1,*(int *)(param_1 + 0x6a0),
                    *(unsigned int *)((*(int *)(param_1 + 0x6a0) + 0x1b) * 0x40 + param_1));
  *(unsigned int *)(param_1 + 0x604) = 1;
  *(unsigned int *)(param_1 + 0x7c0) = 0;
  return;
}

