typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826824B0();
extern int fn_826828D8();
extern int fn_826959C8();
extern int fn_82696B20();
extern int fn_8269F500();
extern int fn_826ADE60();
extern int fn_826BD868();
extern unsigned int iStack_7c;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


unsigned __int64
fn_826AEA50(unsigned __int64 param_1,unsigned char *param_2,int *param_3,int *param_4,unsigned int param_5,
             unsigned int param_6,unsigned __int64 param_7)

{
  bool bVar1;
  char cVar4;
  int iVar2;
  int *piVar3;
  int *piStack_80;
  int iStack_7c;
  unsigned char bStack_78;
  unsigned char **ppuStack_70;
  unsigned char *puStack_6c;
  int *piStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned char uStack_5c;
  int *piStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  fn_82696B20(&piStack_80,param_1,param_4);
  if (param_2 != (unsigned char *)0x0) {
    fn_826959C8(param_2);
    *param_2 = 0;
  }
  if (piStack_80 != (int *)0x0) {
    uStack_5c = 0;
    ppuStack_70 = &lbl_8200579C;
    uStack_64 = 0;
    uStack_60 = 0;
    puStack_6c = param_2;
    piStack_68 = param_3;
    piStack_58 = param_4;
    uStack_54 = param_5;
    uStack_50 = param_6;
    (**(int (***)())(*piStack_80 + 0x28))(piStack_80,&ppuStack_70,iStack_7c,param_7);
    fn_826828D8(&ppuStack_70);
    if (((bStack_78 & 2) == 0) && (piStack_80 != (int *)0x0)) {
      fn_826824B0();
    }
    piStack_80 = (int *)0x0;
    if (((bStack_78 & 1) == 0) && (iStack_7c != 0)) {
      fn_826824B0();
    }
    return 1;
  }
  piVar3 = (int *)0x0;
  if ((param_4 != (int *)0x0) &&
     (cVar4 = (**(int (***)())(*param_4 + 4))(param_4), piVar3 = piStack_80, cVar4 != '\0')) {
    if (param_3 != (int *)0x0) {
      iVar2 = (**(int (***)())(*param_3 + 8))(param_3);
      if ((iVar2 < 2) || (bVar1 = true, 5 < iVar2)) {
        bVar1 = false;
      }
      if (bVar1) {
        if ((param_7 & 0xffffffff) == 0) {
          param_7 = 0xffffffff82007640;
        }
        iVar2 = fn_826BD868(param_3);
        iVar2 = *(int *)(iVar2 + 0x80);
        if (iVar2 == 0) {
          iVar2 = fn_8269F500();
        }
        fn_826ADE60(param_4,0xffffffff82007610,**(unsigned int **)(iVar2 + 0xc),param_7);
        piVar3 = piStack_80;
        goto LAB_826aec18;
      }
    }
    if ((param_7 & 0xffffffff) == 0) {
      param_7 = 0xffffffff82007640;
    }
    fn_826ADE60(param_4,0xffffffff820075e4,param_7);
    piVar3 = piStack_80;
  }
LAB_826aec18:
  if (((bStack_78 & 2) == 0) && (piVar3 != (int *)0x0)) {
    fn_826824B0();
  }
  piStack_80 = (int *)0x0;
  if (((bStack_78 & 1) == 0) && (iStack_7c != 0)) {
    fn_826824B0();
  }
  return 0;
}

