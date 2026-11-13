extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_826A3F08();


__int64 fn_826A4360(int param_1,unsigned char *param_2,unsigned char *param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  unsigned int uVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [112];
  
  auStack_70[0] = 0;
  if (param_2 == (unsigned char *)0x0) {
    param_2 = auStack_70;
  }
  if (param_3 == (unsigned char *)0x0) {
    param_3 = auStack_70;
  }
  uVar4 = 0;
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x78;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      piVar1 = (int *)fn_82696AD0(param_2,*(unsigned int *)(param_1 + 8));
      piVar2 = (int *)fn_82696AD0(param_3,*(unsigned int *)(param_1 + 8));
      if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        auStack_80[0] = 0;
        auStack_90[0] = 0;
        lVar8 = (unsigned __int64)**(unsigned int **)(param_1 + 4) + lVar7;
        cVar3 = (**(int (***)())(*piVar1 + 0x2c))(piVar1,lVar5,lVar8,auStack_80);
        if (cVar3 != '\0') {
          cVar3 = (**(int (***)())(*piVar2 + 0x2c))(piVar2,lVar5,lVar8,auStack_90);
          if (cVar3 != '\0') {
            lVar8 = fn_826A3F08((unsigned __int64)*(unsigned int *)(param_1 + 0x10) + lVar6,auStack_80,auStack_90
                                 );
            if (lVar8 != 0) {
              fn_82696330(auStack_90);
              fn_82696330(auStack_80);
              goto LAB_826a44a8;
            }
          }
        }
        fn_82696330(auStack_90);
        fn_82696330(auStack_80);
      }
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + 0x1c;
    } while (uVar4 < *(unsigned int *)(param_1 + 0x14));
  }
  lVar8 = 0;
LAB_826a44a8:
  fn_82696330(auStack_70);
  return lVar8;
}

