extern int fn_826824B0();
static void inc(unsigned int *p) { *p = (*p+1) & 0x8fffffff; }
extern unsigned char fn_8269AEB8(int,int);
extern int fn_8269FD90();


int fn_826A0878(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char cVar5;
  int uVar2;
  unsigned int uVar3;
  int iVar4;
  int uVar1;
  int *piVar6;
  
  cVar5 = fn_8269AEB8(param_3,0);
  if (cVar5 != '\0') {
    piVar6 = (int *)(param_1 + -0x68);
    uVar2 = fn_8269FD90(piVar6,param_3);
    if (((uVar2 != -1) && (uVar2 <= 0x1f)) &&
       (uVar3 = (*(int (**)())(*piVar6 + 0xf8))(piVar6), (uVar3 & 1 << uVar2) != 0)) {
      return 1;
    }
  }
  iVar4 = (*(int (**)())(*(int *)(param_1 + -0x68) + 0xe4))(param_1 + -0x68);
  if (iVar4 != 0) {
    inc((unsigned int *)(iVar4 + 8));
    uVar1 = (*(int (**)())(*(int *)(iVar4 + 0x10) + 0x24))(iVar4 + 0x10,param_2,param_3,param_4);
    fn_826824B0(iVar4);
    return uVar1;
  }
  return 0;
}
