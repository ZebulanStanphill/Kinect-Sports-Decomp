typedef unsigned char bool;
#define false 0
extern int fn_822315A0();
extern int fn_82247000();
extern int fn_824C15D0();
extern int fn_824C1930();
extern int fn_824C1AD8();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82520EB0();
extern int fn_82522588();
extern int fn_828ACCE8();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_83297810;


unsigned __int64 fn_824C1440(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  char cVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar5 = (unsigned __int64)lbl_83297810;
  uVar1 = *(unsigned int *)(*(int *)(param_2 + 4) + 8);
  if (uVar5 == 0) {
    uVar5 = fn_82511928();
  }
  fn_825138E0(&iStack_30,uVar5,uVar1);
  fn_82522588(&iStack_28,&iStack_30);
  if ((*(int *)(param_2 + 0x1c) != 0) || (*(int *)(param_2 + 0x18) != 0)) {
    if (iStack_24 != 0) {
      fn_822315A0();
    }
    if (iStack_2c != 0) {
      fn_822315A0();
    }
    return 0;
  }
  if (iStack_30 != 0) {
    if (*(int *)(iStack_28 + 0x38) == 0) {
      bVar6 = false;
    }
    else {
      lVar2 = fn_82247000();
      bVar6 = lVar2 != 0;
    }
    if (bVar6) goto LAB_824c1590;
  }
  if (*(char *)(*(int *)(param_2 + 4) + 4) == '\0') {
    if ((iStack_30 == 0) || (cVar4 = fn_828ACCE8(*(unsigned int *)(iStack_30 + 8)), cVar4 == '\0')) {
      fn_824C1930(param_2);
    }
    else {
      fn_824C15D0(param_1,param_2);
    }
  }
  else {
    iVar3 = fn_82520EB0();
    if (iVar3 == 2) {
      fn_824C1AD8(param_2);
    }
    else if ((iVar3 == 0) && (*(int *)(*(int *)(param_2 + 4) + 0x60) != 4)) {
      *(unsigned int *)(param_2 + 0x18) = 1;
    }
  }
LAB_824c1590:
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return 1;
}

