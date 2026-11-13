extern int fn_8268B610();


void fn_826A70D0(unsigned char *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  int iVar5;
  int iVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char abStack_130 [255];
  unsigned char abStack_31 [49];
  
  pbVar4 = abStack_130;
  pbVar8 = param_1;
LAB_826a71b0:
  if (param_1 + param_2 <= pbVar8) {
    *pbVar4 = 0;
    fn_8268B610(param_3,abStack_130,0xffffffffffffffff);
    return;
  }
  bVar1 = *pbVar8;
  pbVar7 = pbVar8 + 1;
  if (abStack_31 <= pbVar4 + 1) {
    *pbVar4 = 0;
    fn_8268B610(param_3,abStack_130,0xffffffffffffffff);
    pbVar4 = abStack_130;
  }
  if (bVar1 == 0x25) goto code_r0x826a712c;
  *pbVar4 = bVar1;
  goto LAB_826a71ac;
code_r0x826a712c:
  bVar1 = *pbVar7;
  if ((bVar1 < 0x61) || (uVar3 = bVar1 - 0x20, 0x7a < bVar1)) {
    uVar3 = (unsigned int)bVar1;
  }
  bVar1 = pbVar8[2];
  if ((bVar1 < 0x61) || (uVar2 = bVar1 - 0x20, 0x7a < bVar1)) {
    uVar2 = (unsigned int)bVar1;
  }
  iVar5 = uVar3 - 0x30;
  pbVar7 = pbVar8 + 3;
  if (9 < iVar5) {
    iVar5 = uVar3 - 0x37;
  }
  iVar6 = uVar2 - 0x30;
  if (9 < iVar6) {
    iVar6 = uVar2 - 0x37;
  }
  pbVar8 = pbVar7;
  if ((iVar5 < 0x10) && (iVar6 < 0x10)) {
    *pbVar4 = (char)iVar5 * '\x10' + (char)iVar6;
LAB_826a71ac:
    pbVar4 = pbVar4 + 1;
    pbVar8 = pbVar7;
  }
  goto LAB_826a71b0;
}

