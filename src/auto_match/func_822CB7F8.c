typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_828E5660();


unsigned __int64 fn_822CB7F8(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  bool bVar3;
  int in_r0;
  char cVar4;
  char cVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (unsigned int *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  cVar4 = fn_828E5660((double)fStack_50);
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (unsigned int *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  cVar5 = fn_828E5660((double)fStack_4c,param_1);
  if (cVar5 == '\0') {
    bVar3 = false;
    if (cVar4 == '\0') goto LAB_822cb86c;
  }
  bVar3 = true;
LAB_822cb86c:
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (unsigned int *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  cVar4 = fn_828E5660((double)fStack_48,param_1);
  if ((cVar4 != '\0') || (uVar6 = 0, bVar3)) {
    uVar6 = 1;
  }
  return uVar6;
}

