typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_824BF8A8();
extern unsigned int uStack_3c;


void fn_823DB058(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcStack_40;
  unsigned int uStack_3c;
  
  if (*param_1 != 0) {
    uStack_3c = 7;
    pcStack_40 = "showvideo_attacking";
    fn_824BF8A8(param_3,&pcStack_40);
  }
  iVar1 = *(int *)(param_2 + 0x9a0);
  iVar3 = 0;
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x24) == 0)) && (*(int *)(iVar1 + 0x2c) == 1)) {
    iVar4 = 1;
    bVar2 = true;
    iVar3 = 1;
    if (param_1[3] == 0) goto LAB_823db0dc;
  }
  iVar4 = iVar3;
  bVar2 = false;
LAB_823db0dc:
  param_1[3] = iVar4;
  if (param_1[2] != 0) {
    uStack_3c = 7;
    pcStack_40 = "showvideo_corner";
    fn_824BF8A8(param_3,&pcStack_40);
  }
  if (((bVar2) && (param_1[1] == 0)) &&
     ((iVar1 != 0 && ((*(int *)(iVar1 + 0x1ec) == 0 && (*(int *)(param_2 + 0x54) == 2)))))) {
    uStack_3c = 7;
    pcStack_40 = "showvideo_defending";
    fn_824BF8A8(param_3,&pcStack_40);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

