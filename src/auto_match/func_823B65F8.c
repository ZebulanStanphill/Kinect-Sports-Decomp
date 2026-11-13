#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_822315A0();
extern int fn_8223C478();
extern int fn_823B4800();
extern int fn_823B8800();
extern int fn_8288B760();
extern int fn_828B00A0();
extern int fn_828E9DB8();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


unsigned __int64 fn_823B65F8(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar7;
  unsigned int uVar5;
  int *piVar6;
  __int64 lVar4;
  unsigned int *puVar8;
  unsigned int **ppuVar9;
  unsigned __int64 uVar10;
  unsigned int *apuStack_50 [2];
  unsigned __int64 uStack_48;
  struct { unsigned int first; int second; } stack_pair_40;

  
  uVar10 = 0;
  if (param_1[3] != 0) {
    cVar7 = fn_8288B760((unsigned __int64)param_1[3] - 0x68);
    if ((cVar7 != '\0') && (param_1[4] != 0)) {
      uVar1 = *(unsigned int *)(param_2 + 4);
      apuStack_50[0] = (unsigned int *)param_1[0x22];
      puVar8 = (unsigned int *)((unsigned int *)param_1[0x22])[1];
      while (*(char *)((int)puVar8 + 0x19) == '\0') {
        if ((unsigned int)puVar8[3] < uVar1) {
          puVar8 = (unsigned int *)puVar8[2];
        }
        else {
          apuStack_50[0] = puVar8;
          puVar8 = (unsigned int *)*puVar8;
        }
      }
      if ((apuStack_50[0] == (unsigned int *)param_1[0x22]) || (uVar1 < (unsigned int)apuStack_50[0][3])) {
        uStack_48 = CONCAT44((unsigned int *)param_1[0x22],(((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF));
        ppuVar9 = (unsigned int **)&uStack_48;
      }
      else {
        ppuVar9 = apuStack_50;
      }
      puVar8 = *ppuVar9;
      if (puVar8 != (unsigned int *)param_1[0x22]) {
        uVar5 = (**(int (***)())(**(int **)(*param_1 + 0x308) + 8))();
        if (uVar1 <= uVar5) {
          uVar2 = *(unsigned int *)(*(int *)(*param_1 + 0x308) + 0xc);
          fn_823B4800(&stack_pair_40.first);
          uVar3 = stack_pair_40.first;
          fn_8223C478(stack_pair_40.first,uVar2,0);
          fn_828E9DB8(uVar3,uVar1,uVar2);
          piVar6 = (int *)puVar8[4];
          (**(int (***)())(*piVar6 + 8))(piVar6,stack_pair_40.first,param_2);
          uStack_48 = fn_828B00A0((unsigned __int64)*param_1 + 0x278);
          piVar6 = (int *)(param_1[3] - 0x68);
          if (param_1[3] == 0) {
            piVar6 = (int *)0x0;
          }
          lVar4 = (**(int (***)())(*piVar6 + 0x44))();
          fn_823B8800(lVar4 + 0x30,&uStack_48,&stack_pair_40.first);
          uVar10 = 1;
          if (stack_pair_40.second != 0) {
            fn_822315A0();
          }
        }
      }
    }
  }
  return uVar10;
}

