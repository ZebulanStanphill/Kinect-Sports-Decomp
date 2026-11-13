typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_f0;
extern int fn_8267C498();
extern int fn_8278FDC8();
extern int fn_8279B4E0();
extern int fn_8279B5B8();
extern int fn_8279B858();
extern int fn_8279B930();
extern int fn_8279CDC0();
extern int fn_827A2BA0();
extern int fn_827A8420();
extern int fn_827A84D0();
extern int fn_827A8598();
extern int fn_827A9870();
extern float lbl_82005718;


void fn_8279DB08(unsigned int *param_1,unsigned int param_2)

{
  int *piVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar4;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned char auStack_f0 [176];
  
  param_1[1] = param_2;
  param_1[2] = *(unsigned int *)(param_2 + 0xc);
  uVar3 = fn_8279B5B8(auStack_f0,*param_1,param_2);
  fn_8279B930(param_1 + 4,uVar3);
  fn_8279B858(auStack_f0);
  uVar3 = fn_8279B4E0(auStack_f0);
  uVar3 = fn_8279B930(param_1 + 0x8b,uVar3);
  uVar3 = fn_8279B930(param_1 + 0x60,uVar3);
  fn_8279B930(param_1 + 0x35,uVar3);
  fn_8279B858(auStack_f0);
  param_1[0x2c] = (unsigned int)((float)*(unsigned short *)(*param_1 + 0x13a) * lbl_82005718);
  iVar5 = *(int *)(*param_1 + 0x114);
  if (iVar5 != 0) {
    uVar6 = *(unsigned int *)(iVar5 + 0x14);
    if (uVar6 == 0) {
LAB_8279dbe0:
      bVar2 = false;
    }
    else {
      iVar5 = fn_8278FDC8((unsigned __int64)uVar6 + 0x14);
      bVar2 = true;
      if (iVar5 == 0) goto LAB_8279dbe0;
    }
    if (bVar2) {
      uVar6 = *(unsigned int *)(*(int *)(*param_1 + 0x114) + 0x14);
      if (uVar6 != 0) {
        *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
      }
      if (param_1[0xb] != 0) {
        fn_8267C498();
      }
      param_1[0xb] = uVar6;
      param_1[0xc] = *(unsigned int *)(uVar6 + 0x30);
      uVar6 = fn_8278FDC8(uVar6 + 0x14);
      param_1[0xd] = uVar6;
    }
  }
  fn_8279CDC0(param_1);
  uVar9 = (unsigned __int64)param_1[0xd] + (unsigned __int64)*(unsigned int *)(param_2 + 4);
  if ((*(unsigned short *)(param_1[2] + 0x16) >> 7 & 1) != 0) {
    bVar2 = true;
    if ((*(unsigned short *)(param_1[2] + 0x16) & 0x8000) != 0) goto LAB_8279dc70;
  }
  bVar2 = false;
LAB_8279dc70:
  if (bVar2) {
    uVar9 = uVar9 + 1;
  }
  uVar4 = fn_827A8598(uVar9,(uVar9 & 0x7fffffff) << 1,1);
  if ((uVar4 & 0xffffffff) < 0x400) {
    puVar8 = param_1 + 0x14c;
    if (puVar8 == (unsigned int *)0x0) {
      puVar8 = (unsigned int *)0x0;
    }
    else {
      *puVar8 = 0;
    }
    param_1[3] = (unsigned int)puVar8;
    *puVar8 = *puVar8 & 0xf0000000 | (unsigned int)uVar4 & 0xfffffff;
  }
  else if ((unsigned int *)param_1[0x24c] == (unsigned int *)0x0) {
    uVar6 = fn_827A8420((unsigned __int64)*param_1 + 0xe4,uVar4 + 100,1);
    param_1[0x24c] = uVar6;
    param_1[3] = uVar6;
  }
  else {
    if (((unsigned __int64)*(unsigned int *)param_1[0x24c] & 0xfffffff) <= (uVar4 & 0xffffffff)) {
      fn_827A9870((unsigned __int64)*param_1 + 0xe4);
      uVar6 = fn_827A8420((unsigned __int64)*param_1 + 0xe4,uVar4 + 100,1);
      param_1[0x24c] = uVar6;
    }
    param_1[3] = param_1[0x24c];
  }
  puVar8 = (unsigned int *)param_1[3];
  *puVar8 = *puVar8 & 0xfffffff | 0x40000000;
  puVar8[6] = 0;
  puVar8[8] = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *(unsigned short *)((int)puVar8 + 0x26) = 0;
  *(unsigned short *)(puVar8 + 10) = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[5] = 0;
  *(unsigned int *)param_1[3] = *(unsigned int *)param_1[3] & 0xbfffffff;
  piVar1 = (int *)param_1[3];
  if (*piVar1 < 0) {
    *(char *)(piVar1 + 7) = (char)uVar9;
  }
  else {
    piVar1[1] = (int)uVar9;
  }
  uVar6 = *(unsigned int *)(param_2 + 0x1c);
  if (*(int *)(*param_1 + 0x114) != 0) {
    uVar6 = fn_827A2BA0();
  }
  piVar1 = (int *)param_1[3];
  if (*piVar1 < 0) {
    piVar1[2] = uVar6 & 0xffffff | piVar1[2] & 0xff000000U;
  }
  else {
    piVar1[2] = uVar6;
  }
  piVar1 = (int *)param_1[3];
  if (*piVar1 < 0) {
    uVar6 = (unsigned int)*(unsigned char *)(piVar1 + 7);
  }
  else {
    uVar6 = piVar1[1];
  }
  iVar5 = 0x1e;
  if (-1 < *piVar1) {
    iVar5 = 0x2a;
  }
  uVar7 = fn_827A84D0();
  param_1[0x28] = uVar6;
  param_1[0x29] = 0;
  param_1[0x26] = uVar7;
  param_1[0x25] = (int)piVar1 + iVar5;
  param_1[0x27] = 0;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  param_1[0xb9] = 1;
  param_1[0xba] = 1;
  param_1[0xbc] = 0;
  *(unsigned char *)(param_1 + 0x14a) = 0;
  *(unsigned char *)(param_1 + 0xbb) = 0;
  param_1[0x252] = 0;
  param_1[0xb6] = (unsigned int)(*(float *)(*param_1 + 0x44) - *(float *)(*param_1 + 0x3c));
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  return;
}

