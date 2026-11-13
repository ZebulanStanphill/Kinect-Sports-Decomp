extern int fn_83005030();
extern int fn_83005078();
extern int fn_83005090();


unsigned __int64 fn_83001588(int param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned short uVar6;
  unsigned char *pbVar7;
  
  pbVar7 = (unsigned char *)*param_2;
  bVar1 = *pbVar7;
  *param_2 = pbVar7 + 1;
  bVar2 = pbVar7[1];
  *param_2 = pbVar7 + 2;
  uVar6 = *(unsigned short *)(pbVar7 + 2);
  *param_2 = pbVar7 + 4;
  *(unsigned short *)(param_1 + 0x32) = uVar6;
  pbVar7 = (unsigned char *)*param_2;
  bVar3 = *pbVar7;
  *param_2 = pbVar7 + 1;
  bVar4 = pbVar7[1];
  *param_2 = pbVar7 + 2;
  bVar5 = pbVar7[2];
  *param_2 = pbVar7 + 3;
  *(unsigned short *)(param_1 + 0x6c) = (unsigned short)bVar1;
  fn_83005030(param_1,bVar2 != 0);
  *(unsigned short *)(param_1 + 0x6e) = (unsigned short)bVar3;
  fn_83005078(param_1,bVar4 != 0,bVar3);
  fn_83005090(param_1,bVar5 != 0);
  return 1;
}

