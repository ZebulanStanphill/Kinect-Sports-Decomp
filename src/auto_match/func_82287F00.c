extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8225C590();
extern int fn_8225D288();
extern int fn_8225F160();
extern int fn_8228ABB8();
extern int fn_8228AFF8();
extern int fn_8234F298();
extern int fn_823AB478();
extern int fn_8251F720();
extern int fn_8251FA58();
extern unsigned int lbl_83265988;


void fn_82287F00(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  int iVar8;
  unsigned char auStack_70 [4];
  unsigned char auStack_6c [12];
  unsigned char auStack_60 [96];
  
  uVar1 = fn_8225C590();
  fn_82230300(auStack_60,0,0);
  fn_82230360(auStack_60,0xffffffff821a9340,8);
  fn_8228AFF8(param_1,auStack_70);
  lVar2 = fn_8251F720(auStack_70,0);
  uVar3 = fn_8251F720(lVar2 + 4,0);
  fn_8225D288(uVar1,auStack_60,uVar3);
  uVar4 = fn_823AB478();
  iVar8 = param_2 * 0x40 + param_1;
  *(unsigned int *)(iVar8 + 0x6a8) = 1;
  *(unsigned int *)(iVar8 + 0x6ac) = uVar4;
  fn_8225F160();
  if ((lbl_83265988 == 0) ||
     ((*(unsigned char *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) {
    uVar5 = param_2;
    if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
      uVar5 = -((param_2 < 2) - 1);
    }
    fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar5,auStack_6c,auStack_70);
    puVar7 = auStack_70;
    puVar6 = auStack_6c;
  }
  else {
    puVar7 = (unsigned char *)0x0;
    puVar6 = (unsigned char *)0x0;
  }
  fn_8228ABB8(param_1,param_2,uVar3,puVar6,puVar7);
  *(unsigned int *)(iVar8 + 0x6bc) = 1;
  fn_8251FA58(uVar3);
  fn_8251FA58(lVar2);
  fn_82230300(auStack_60,1,0);
  return;
}

