extern int fn_826944C8();
extern int fn_82695128();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826C59F8();
extern int fn_826FFD88();
extern unsigned int iStack_40;


void fn_826C5E00(int param_1)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar6;
  unsigned __int64 uVar5;
  __int64 lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  unsigned __int64 uVar11;
  int iStack_40;
  unsigned int *puStack_3c;
  unsigned int *apuStack_38 [14];
  
  piVar6 = (int *)fn_826C59F8();
  if ((piVar6 != (int *)0x0) && (0 < *(int *)(param_1 + 0x1c))) {
    uVar11 = 0;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar3 = *(unsigned int *)(param_1 + 0x18);
      uVar5 = fn_826957D0(param_1,1);
      fn_82696D38(&iStack_40,uVar5,uVar3,0xffffffffffffffff,0);
      fn_82695128(apuStack_38,&iStack_40);
      lVar7 = (unsigned __int64)*(unsigned int *)(iStack_40 + 8) - 1;
      *(int *)(iStack_40 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(iStack_40);
      }
      pcVar8 = "get";
      pcVar10 = (char *)*apuStack_38[0];
      pcVar9 = pcVar10;
      do {
        cVar1 = *pcVar9;
        cVar2 = *pcVar8;
        if (cVar1 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar11 = 1;
      }
      else {
        pcVar9 = "post";
        do {
          cVar1 = *pcVar10;
          cVar2 = *pcVar9;
          if (cVar1 == '\0') break;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar11 = 2;
        }
      }
      uVar4 = apuStack_38[0][2];
      apuStack_38[0][2] = (int)((unsigned __int64)uVar4 - 1);
      if ((unsigned __int64)uVar4 - 1 == 0) {
        fn_826944C8();
      }
    }
    uVar3 = *(unsigned int *)(param_1 + 0x18);
    uVar5 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_3c,uVar5,uVar3,0xffffffffffffffff,0);
    uVar3 = *puStack_3c;
    uVar5 = (**(int (***)())(*piVar6 + 0x40))(piVar6);
    fn_826FFD88(uVar5,piVar6,uVar3,uVar11);
    uVar4 = puStack_3c[2];
    puStack_3c[2] = (int)((unsigned __int64)uVar4 - 1);
    if ((unsigned __int64)uVar4 - 1 == 0) {
      fn_826944C8(puStack_3c);
    }
  }
  return;
}

