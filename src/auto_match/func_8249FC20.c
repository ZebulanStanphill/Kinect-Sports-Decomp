extern unsigned int *auStack_40;
extern int fn_8249ABC0();
extern int fn_8249F490();
extern int fn_82F4EBE8();
extern int fn_82F52188();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_8249FC20(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [16];
  
  uVar4 = 0;
  if (param_2[8] < 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_82F4EBE8();
  }
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(int (***)())(*piVar2 + 4))(piVar2), iVar3 != 0)) {
    fn_82F52188(auStack_40,piVar2,1);
    iVar3 = fn_8249ABC0();
    iVar3 = *(int *)(iVar3 + 0xec);
    iVar1 = *(int *)(iVar3 + 0x34);
    if (*(int *)(iVar3 + 0x30) == iVar1) {
      uStack_50 = *(unsigned int *)(iVar3 + 0x10);
      uStack_4c = *(unsigned int *)(iVar3 + 0x14);
      uStack_48 = *(unsigned int *)(iVar3 + 0x18);
      uStack_44 = *(unsigned int *)(iVar3 + 0x1c);
    }
    else {
      uStack_50 = *(unsigned int *)(iVar1 + -0x14);
      uStack_4c = *(unsigned int *)(iVar1 + -0x10);
      uStack_48 = *(unsigned int *)(iVar1 + -0xc);
      uStack_44 = *(unsigned int *)(iVar1 + -8);
    }
    uVar4 = fn_8249F490(&uStack_50);
  }
  if (ltcg_pool_0_0f < *(float *)((*param_2 + 1) * 0x24 + param_1)) {
    uVar4 = 0;
  }
  return uVar4;
}

