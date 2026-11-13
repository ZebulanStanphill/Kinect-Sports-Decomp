extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822CF260();
extern int fn_822E0200();
extern int fn_822E03F8();
extern int fn_822E0550();
extern int fn_822E0880();
extern int fn_822E09B8();
extern int fn_82365BD8();


unsigned __int64 fn_822E00E8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char auStack_30 [16];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x350);
  if (*(int *)(*param_2 + 0x2184) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x14) + 0x340) == 0) {
      if (iVar3 == 0) {
        uVar1 = fn_82365BD8(auStack_30);
        uVar2 = fn_822E0550(param_1,uVar1);
        iVar3 = fn_822CF260(*(unsigned int *)(param_1 + 0x14),1);
        if (((iVar3 != 0) || (*(int *)(*(int *)(param_1 + 0x14) + 0x274) != 0)) ||
           ((uVar2 & 0xffffffff) != 0)) goto LAB_822e01e4;
        uVar1 = fn_82365BD8(auStack_30,param_2);
        uVar2 = fn_822E03F8(param_1,uVar1);
        if (uVar2 != 0) goto LAB_822e01e4;
        uVar1 = fn_82365BD8(auStack_30,param_2);
        iVar3 = 0;
      }
      else {
        uVar1 = fn_82365BD8(auStack_30);
      }
      uVar2 = fn_822E0200(param_1,uVar1,iVar3);
    }
    else {
      uVar1 = fn_82365BD8(auStack_30);
      uVar2 = fn_822E0880(param_1,uVar1);
    }
  }
  else {
    uVar1 = fn_82365BD8(auStack_30);
    uVar2 = fn_822E09B8(param_1,uVar1);
  }
LAB_822e01e4:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return uVar2;
}

