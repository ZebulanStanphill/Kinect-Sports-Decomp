extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696958();
extern unsigned int fn_82696AD0(unsigned,int);
extern int fn_826A2FF8();


unsigned int fn_8271FEE8(int param_1,int *param_2,unsigned int param_3)

{
  unsigned char cVar4;
  int iVar2;
  unsigned int iVar3;
  unsigned int uVar1;
  int lVar5;
  int uVar6;
  unsigned char auStack_40;
  
  if ((param_2 == (int *)0x0) || (param_3 == 0)) {
LAB_8271fff4:
    uVar1 = 0;
  }
  else {
    auStack_40 = 0;
    cVar4 = (*(int (**)())(*param_2 + 0x2c))
                      (param_2,param_1 + 0x78,(unsigned int)*(unsigned int *)(param_1 + 0x78) + 0x140,
                       &auStack_40);
    if (cVar4 != '\0') {
      iVar2 = fn_82696958(&auStack_40,param_1);
      if ((iVar2 != 0) &&
         (iVar3 = (*(int (**)())(*(int *)(iVar2 + 0x10) + 8))(iVar2 + 0x10), (int)iVar3 == 7)) {
        iVar3 = *(unsigned int *)(iVar2 + 8);
        uVar6 = *(int *)(iVar2 + 0x38) - 1;
        *(unsigned int *)(iVar2 + 8) = (iVar3 + 1U) & 0x8fffffff;
        if (uVar6 >= 0) {
          lVar5 = uVar6 * 4;
          do {
            iVar3 = *(unsigned *)(*(int *)(iVar2 + 0x34) + uVar6*4);
            if ((iVar3 != 0) && (iVar3 = fn_82696AD0(iVar3,param_1), iVar3 == param_3)) {
              fn_826A2FF8(iVar2,uVar6,1);
              fn_826824B0(iVar2);
              fn_82696330(&auStack_40);
              goto LAB_8271fff4;
            }
            uVar6 = uVar6 - 1;
            lVar5 = lVar5 + -4;
          } while (uVar6 >= 0);
        }
        fn_826824B0(iVar2);
      }
    }
    fn_82696330(&auStack_40);
    uVar1 = 1;
  }
  return uVar1;
}

