typedef unsigned char bool;
extern int fn_82F5E8F0();
extern int fn_82F5FE40();
extern int fn_82F60010();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;


bool fn_82F600B0(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  char cVar3;
  unsigned __int64 *puVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  
  puVar4 = param_1 + 4;
  lVar5 = 0x14;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  do {
    puVar1 = (unsigned int *)(in_r0 + param_6 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    param_6 = param_6 + 0x10;
    puVar2 = (unsigned int *)(in_r0 + (int)puVar4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar4 = puVar4 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  fn_82F5FE40(param_1);
  cVar3 = fn_82F60010(param_1);
  if (cVar3 != '\0') {
    fn_82F5E8F0(param_1);
  }
  return cVar3 != '\0';
}

