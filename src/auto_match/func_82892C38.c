extern int fn_8265C9E0();
extern int fn_8288E810();
extern int fn_8288EBC8();
extern int fn_828916D0();
extern int fn_82897BD0();
extern int fn_828A12E8();
extern int fn_828BE158();
extern int fn_828C9758();
extern int fn_828C99A0();
extern int fn_828CB310();
extern int fn_828E9D78();
extern int fn_828EA790();


void fn_82892C38(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar6;
  unsigned __int64 uVar3;
  char cVar9;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  unsigned int uVar8;
  int aiStack_40;
  
  iVar6 = fn_828A12E8(param_1[0x14]);
  uVar3 = (**(int (***)())(*param_1 + 0xc))(param_1);
  if (*(int *)(iVar6 + 0x74) != 0) {
    puVar7 = (unsigned int *)0x0;
    aiStack_40 = **(int **)(iVar6 + 0x70);
    if ((int *)aiStack_40 != *(int **)(iVar6 + 0x70)) {
      do {
        piVar1 = *(int **)(aiStack_40 + 0x10);
        cVar9 = (**(int (***)())(*piVar1 + 0x30))(piVar1,param_1);
        if (cVar9 != '\0') {
          uVar4 = fn_828CB310();
          cVar9 = fn_828C9758(uVar4,piVar1,uVar3);
          if (cVar9 != '\0') {
            if (puVar7 == (unsigned int *)0x0) {
              uVar5 = fn_8265C9E0(0x4c0);
              if ((uVar5 & 0xffffffff) == 0) {
                puVar7 = (unsigned int *)0x0;
              }
              else {
                puVar7 = (unsigned int *)fn_8288E810(uVar5,param_1);
              }
            }
            cVar9 = fn_8288EBC8(piVar1,0,param_1);
            if (cVar9 != '\0') {
              cVar9 = fn_828916D0(puVar7,param_1[0x14],piVar1);
              uVar4 = fn_828CB310();
              fn_828C99A0(uVar4,piVar1,uVar3,cVar9 != '\0');
            }
            uVar8 = fn_828E9D78(puVar7 + 0x125);
            if (900 < uVar8) {
              iVar2 = param_1[0x14];
              uVar4 = fn_82897BD0(param_1);
              fn_828BE158(iVar2,puVar7,uVar4,1);
              puVar7 = (unsigned int *)0x0;
            }
          }
        }
        fn_828EA790(&aiStack_40);
      } while (aiStack_40 != *(int *)(iVar6 + 0x70));
      if (puVar7 != (unsigned int *)0x0) {
        if (*(char *)(puVar7 + 0x124) == '\0') {
          (**(int (***)())*puVar7)(puVar7,1);
        }
        else {
          iVar6 = param_1[0x14];
          uVar3 = fn_82897BD0(param_1);
          fn_828BE158(iVar6,puVar7,uVar3,1);
        }
      }
    }
  }
  return;
}

