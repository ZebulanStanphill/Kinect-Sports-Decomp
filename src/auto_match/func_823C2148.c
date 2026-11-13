typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_8236BCD8();
extern int fn_823DB6B8();
extern unsigned int ltcg_pool_0_0f;


void fn_823C2148(int param_1,char param_2,char param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_40 [32];
  
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0xe10) + 0x50U & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(bool *)(param_1 + 0xd50) = param_2 == '\0';
  *(unsigned char *)(param_1 + 0xd51) = 1;
  *(unsigned char *)(param_1 + 0xd52) = 0;
  puVar1 = (unsigned int *)(param_1 + 0xd60U & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (unsigned int *)(param_1 + 0xd70U & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  if (param_3 != '\0') {
    fn_8236BCD8();
    iVar2 = fn_82356F98(auStack_40);
    if (*(int *)(param_1 + 0x4b0) != 0) {
      fn_823DB6B8((double)ltcg_pool_0_0f,*(int *)(param_1 + 0x4b0),iVar2,0);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
  }
  return;
}

