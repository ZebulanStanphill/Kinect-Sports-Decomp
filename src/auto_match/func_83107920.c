extern unsigned int lbl_820D2760;
extern unsigned int lbl_820D2840;
extern unsigned int lbl_821CEA90;
extern unsigned int lbl_821CEAA0;
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83107920(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  puVar1 = (unsigned int *)((unsigned int)(&lbl_821CEAA0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(&lbl_820D2840 + in_r0) & 0xfffffff0);
  lbl_8329EAE0 = *puVar2;
  uRam8329eae4 = puVar2[1];
  uRam8329eae8 = puVar2[2];
  uRam8329eaec = puVar2[3];
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821CEA90 + in_r0) & 0xfffffff0);
  lbl_8329EAF0 = *puVar2;
  uRam8329eaf4 = puVar2[1];
  uRam8329eaf8 = puVar2[2];
  uRam8329eafc = puVar2[3];
  puVar2 = (unsigned int *)((unsigned int)(&lbl_820D2760 + in_r0) & 0xfffffff0);
  lbl_8329EB00 = *puVar2;
  uRam8329eb04 = puVar2[1];
  uRam8329eb08 = puVar2[2];
  uRam8329eb0c = puVar2[3];
  puVar2 = (unsigned int *)((int)&lbl_8329EAD0 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return;
}

