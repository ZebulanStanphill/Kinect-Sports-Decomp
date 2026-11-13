extern int fn_8265C9E0();
extern int fn_83066180();
extern int fn_83066210();
extern int fn_83066358();
extern unsigned int lbl_8217E8AC;
extern unsigned int lbl_8217E8B4;
extern unsigned int *lbl_83265080;


void fn_83065C70(unsigned int param_1,unsigned int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  
  lbl_83265080 = (unsigned int *)fn_8265C9E0(0x1c);
  *lbl_83265080 = param_1;
  lbl_83265080[1] = param_2;
  puVar4 = (unsigned int *)fn_8265C9E0(0xc);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    *puVar4 = &lbl_8217E8AC;
  }
  lbl_83265080[2] = puVar4;
  puVar4 = (unsigned int *)fn_8265C9E0(4);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    *puVar4 = &lbl_8217E8B4;
  }
  puVar2 = lbl_83265080;
  piVar1 = lbl_83265080 + 2;
  lbl_83265080[3] = puVar4;
  *(unsigned int *)(*piVar1 + 4) = param_1;
  *(unsigned int *)(puVar2[2] + 8) = param_2;
  uVar3 = fn_8265C9E0(0x18);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_83066180(uVar3,lbl_83265080[2],lbl_83265080[3]);
  }
  lbl_83265080[4] = uVar5;
  uVar3 = fn_8265C9E0(0x18);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_83066210(uVar3,lbl_83265080[2],lbl_83265080[3]);
  }
  lbl_83265080[5] = uVar5;
  uVar3 = fn_8265C9E0(0x18);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_83066358(uVar3,lbl_83265080[2],lbl_83265080[3]);
  }
  lbl_83265080[6] = uVar5;
  return;
}

