#define true 1
extern int fn_82230300();
extern int fn_8223F468();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_8223F670();
extern int fn_8223F6E0();
extern int fn_8223F7A8();
extern int fn_82F640F0();
extern unsigned int uStack_7c;


unsigned __int64
fn_8223F810(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
             unsigned __int64 param_5,__int64 param_6,unsigned __int64 param_7)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar5;
  unsigned int *puVar6;
  unsigned __int64 *puVar7;
  int *piVar8;
  unsigned __int64 uVar4;
  char *pcVar9;
  __int64 lVar10;
  char ****ppppcVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  int aiStack_a0 [2];
  int aiStack_98 [2];
  char ***apppcStack_90 [5];
  unsigned int uStack_7c;
  
  iVar2 = **(int **)(param_4 + 0x30);
  aiStack_a0[0] = iVar2;
  fn_8223F508(iVar2);
  piVar5 = (int *)fn_8223F468(aiStack_a0);
  if ((iVar2 != 0) && (puVar6 = (unsigned int *)fn_8223F5A0(iVar2), puVar6 != (unsigned int *)0x0)) {
    (**(int (***)())*puVar6)(puVar6,1);
  }
  (**(int (***)())(*piVar5 + 0xc))(apppcStack_90,piVar5);
  pcVar9 = (char *)param_6;
  cVar1 = *pcVar9;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    lVar10 = 1;
  }
  else if ((cVar1 == '0') && ((pcVar9[1] == 'x' || (pcVar9[1] == 'X')))) {
    lVar10 = 2;
  }
  else {
    lVar10 = 0;
  }
  ppppcVar11 = (char ****)apppcStack_90[0];
  if (uStack_7c < 0x10) {
    ppppcVar11 = apppcStack_90;
  }
  if (*(char *)ppppcVar11 != '\x7f') {
    ppppcVar11 = (char ****)apppcStack_90[0];
    if (uStack_7c < 0x10) {
      ppppcVar11 = apppcStack_90;
    }
    if ('\0' < *(char *)ppppcVar11) {
      uVar12 = param_7;
      ppppcVar11 = (char ****)apppcStack_90[0];
      if (uStack_7c < 0x10) {
        ppppcVar11 = apppcStack_90;
      }
      while( true ) {
        cVar1 = *(char *)ppppcVar11;
        if (((cVar1 == '\x7f') || (cVar1 < '\x01')) ||
           ((uVar12 - lVar10 & 0xffffffff) <= ((__int64)cVar1 & 0xffffffffU))) break;
        uVar12 = uVar12 - (__int64)cVar1;
        fn_82F640F0(uVar12 + param_6 + 1,(param_7 - uVar12) + 1,uVar12 + param_6);
        pcVar9[(int)uVar12] = '\0';
        param_7 = param_7 + 1;
        if ('\0' < *(char *)((int)ppppcVar11 + 1)) {
          ppppcVar11 = (char ****)((int)ppppcVar11 + 1);
        }
      }
    }
  }
  if (((__int64)*(unsigned __int64 *)(param_4 + 0x20) < 1) ||
     (uVar12 = *(unsigned __int64 *)(param_4 + 0x20) & 0xffffffff, lVar13 = uVar12 - param_7,
     uVar12 <= (param_7 & 0xffffffff))) {
    lVar13 = 0;
  }
  uVar3 = *(unsigned int *)(param_4 + 0x14) & 0x1c0;
  if (uVar3 != 0x40) {
    piVar8 = aiStack_a0;
    if (uVar3 == 0x100) {
      puVar7 = (unsigned __int64 *)fn_8223F670(piVar8,param_2,param_3,param_6,lVar10);
      piVar8 = aiStack_98;
      param_6 = lVar10 + param_6;
      param_7 = param_7 - lVar10;
      param_3 = *puVar7;
    }
    puVar7 = (unsigned __int64 *)fn_8223F7A8(piVar8,param_2,param_3,param_5,lVar13);
    param_3 = *puVar7;
    lVar13 = 0;
  }
  uVar4 = (**(int (***)())(*piVar5 + 8))(piVar5);
  puVar7 = (unsigned __int64 *)fn_8223F6E0(aiStack_98,param_2,param_3,param_6,param_7,uVar4);
  uVar4 = *puVar7;
  *(unsigned __int64 *)(param_4 + 0x20) = 0;
  fn_8223F7A8(param_1,param_2,uVar4,param_5,lVar13);
  fn_82230300(apppcStack_90,1,0);
  return param_1;
}

