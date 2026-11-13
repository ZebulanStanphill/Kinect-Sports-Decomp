typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82758E40();
extern int fn_827A1590();
extern int fn_827A8770();
extern int fn_827AEB38();
extern int fn_827AF5B8();


void fn_827A1FB0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = (double)*(unsigned int *)(param_2 + 0x4c);
  uVar5 = fn_827A8770(param_2 + 0x24);
  dVar7 = (double)uVar5;
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(int *)(param_2 + 0x114) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(unsigned int *)(*(int *)(param_2 + 0x114) + 0x14);
    }
    fn_827AEB38(param_1,uVar6);
  }
  if ((*(int *)(param_1 + 4) != 0) &&
     ((((*(char *)(param_1 + 0x18) == '\0' || ((double)*(float *)(param_1 + 0xa4) != dVar8)) ||
       ((double)*(float *)(param_1 + 0xa8) != dVar7)) ||
      (*(short *)(param_1 + 0xac) != *(short *)(param_2 + 0x138))))) {
    *(float *)(param_1 + 0xa4) = (float)dVar8;
    *(float *)(param_1 + 0xa8) = (float)dVar7;
    *(unsigned short *)(param_1 + 0xac) = *(unsigned short *)(param_2 + 0x138);
    uVar4 = fn_827A1590(param_2,*(unsigned int *)(param_2 + 0x38));
    fn_827AF5B8((double)*(float *)(param_1 + 0xa4),(double)*(float *)(param_1 + 0xa8),param_1,
                      param_1 + 0x1c,param_2 + 0x24,param_2 + 0x3c,uVar4);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x54) != 0) || (bVar2 = true, *(int *)(iVar1 + 0x60) != 0)) {
      bVar2 = false;
    }
    bVar3 = false;
    if (!bVar2) goto LAB_827a20f4;
  }
  bVar3 = true;
LAB_827a20f4:
  if (!bVar3) {
    fn_82758E40(param_1 + 0x1c,param_3,param_4,param_5,0,0);
  }
  return;
}

