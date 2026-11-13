extern unsigned int *auStack_40;
extern int fn_822B6908();
extern int fn_822C40E8();


unsigned __int64
fn_822C4448(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,char param_5)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_40 [1];
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (((iVar1 == 0) || (param_5 == '\0')) || (*(int *)(iVar1 + 0x160) == 0)) {
    fn_822B6908(auStack_40,param_2);
  }
  else {
    puVar2 = (unsigned int *)(iVar1 + 0x130U & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
  }
  fn_822C40E8(param_1,param_2,param_3,param_4);
  return param_1;
}

