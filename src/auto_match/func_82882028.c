extern int fn_825089A0();
extern int fn_8288E040();
extern int fn_8289F160();
extern int fn_828EA790();
extern unsigned int *lbl_83212A04;


__int64 fn_82882028(unsigned int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puStack_40;
  unsigned int *puStack_3c;
  int aiStack_38;
  
  lVar6 = 0;
  if ((-1 < (int)param_1) &&
     (puStack_40 = param_1, fn_8289F160(&puStack_3c,0xffffffff83212a00,&puStack_40),
     puStack_3c != lbl_83212A04)) {
    piVar4 = (int *)fn_825089A0();
    uVar3 = (**(int (***)())(*piVar4 + 0xc))();
    puVar2 = lbl_83212A04;
    puStack_40 = (unsigned int *)*lbl_83212A04;
    while (puStack_40 != puVar2) {
      iVar1 = puStack_40[4];
      if ((((iVar1 != 0) &&
           (puStack_3c = param_1, fn_8288E040(&aiStack_38,iVar1 + 0x10,&puStack_3c),
           aiStack_38 != *(int *)(iVar1 + 0x14))) &&
          (uVar5 = *(unsigned __int64 *)(aiStack_38 + 0x18), uVar5 != 0)) &&
         ((uVar5 < uVar3 && (uVar3 - uVar5 < 5000)))) {
        lVar6 = lVar6 + 1;
      }
      fn_828EA790(&puStack_40);
    }
  }
  return lVar6;
}

