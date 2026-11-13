extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_8240D930();
extern int fn_82526B90();
extern int fn_8252DCF0();
extern int fn_8265CA60();
extern int fn_8266F128();
extern int fn_8266F1B0();
extern int fn_8266F5A0();
extern int fn_8266F9C8();
extern int fn_8266FA50();
extern int fn_8266FAC8();
extern int fn_8266FB20();
extern int fn_82671E20();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_8266F2D0(double param_1,int *param_2,unsigned int *param_3,int param_4,unsigned __int64 param_5,
                  int *param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar8;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned int *puVar13;
  unsigned __int64 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  double dStack_88;
  
  stack_pair_90.first = 0;
  stack_pair_90.second = 0;
  dVar17 = (double)lbl_821AAD20;
  if ((param_4 != 0) && (dVar17 < param_1)) {
    fn_8266F5A0(*param_3,param_2);
  }
  cVar8 = fn_8266FA50(*param_3,&stack_pair_90.first,0xffffffff82002c10);
  if ((cVar8 != '\0') && ((stack_pair_90.second & 0x8f) == 3)) {
    uVar1 = (unsigned int)dStack_88;
    uVar14 = (unsigned __int64)uVar1;
    uVar12 = uVar14 * 5;
    uVar3 = (**(int (***)())(*param_2 + 0x5c))(param_2);
    (**(int (***)())(*param_2 + 0x3c))(param_2);
    uVar4 = fn_8240D930();
    uVar9 = (uVar12 & 0xfffffff) << 4;
    if (0xfffffff < (uVar12 & 0xffffffff)) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar5 = uVar9 + 8;
    if (0xfffffff7 < (uVar9 & 0xffffffff)) {
      lVar5 = -1;
    }
    puVar6 = (unsigned int *)fn_8265CA60(lVar5);
    if (puVar6 == (unsigned int *)0x0) {
      puVar11 = (unsigned int *)0x0;
    }
    else {
      *puVar6 = (int)uVar12;
      puVar11 = puVar6 + 2;
      if (-1 < (__int64)(uVar12 - 1)) {
        puVar6 = puVar6 + -1;
        uVar9 = uVar12;
        do {
          puVar6[3] = 0;
          puVar6 = puVar6 + 4;
          *puVar6 = 0;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    cVar8 = fn_8266F9C8(*param_3,0xffffffff82002bf8,0,puVar11,uVar12);
    if (cVar8 != '\0') {
      dVar15 = (double)fn_8266FAC8(*param_3);
      dVar16 = (double)fn_8266FB20(*param_3);
      if ((dVar17 < dVar15) && (dVar17 < dVar16)) {
        if (param_6 == (int *)0x0) {
          puVar6 = puVar11;
          if (0 < (int)uVar1) {
            do {
              fn_8266F1B0(dVar15,dVar16,uVar3,uVar4,puVar6);
              uVar14 = uVar14 - 1;
              puVar6 = puVar6 + 0x14;
            } while (uVar14 != 0);
          }
        }
        else {
          iVar10 = *param_6;
          while (iVar10 != 0) {
            puVar6 = (unsigned int *)0x0;
            iVar10 = 0;
            if (0 < (int)uVar1) {
              puVar13 = puVar11 + 2;
              do {
                if (puVar6 == (unsigned int *)0x0) goto LAB_8266f4e4;
                if (((unsigned int)puVar13[-1] >> 6 & 1) == 0) {
                  uVar2 = *puVar13;
                }
                else {
                  uVar2 = *(unsigned int *)*puVar13;
                }
                iVar7 = fn_82526B90(param_6[1],uVar2);
                if (iVar7 == 0) {
                  puVar6 = puVar13 + -2;
                }
                iVar10 = iVar10 + 1;
                puVar13 = puVar13 + 0x14;
              } while (iVar10 < (int)uVar1);
              if (puVar6 != (unsigned int *)0x0) {
                fn_8266F1B0(dVar15,dVar16,uVar3,uVar4,puVar6);
              }
            }
LAB_8266f4e4:
            param_6 = param_6 + 2;
            iVar10 = *param_6;
          }
        }
      }
    }
    if (puVar11 != (unsigned int *)0x0) {
      fn_8266F128(puVar11,3);
    }
  }
  uVar2 = *param_3;
  uVar3 = fn_8252DCF0(param_2);
  fn_82671E20(uVar2,uVar3);
  fn_82273C88(&stack_pair_90.first);
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return;
}

