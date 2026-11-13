typedef unsigned char bool;
extern int fn_8223C478();
extern int fn_8224BF30();
extern int fn_828D2958();
extern int fn_828E9DB8();


void fn_828D2A48(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  bool bVar7;
  
  uVar2 = *(unsigned int *)(param_1 + 0x80);
  fn_8223C478(param_2,2,0);
  fn_828E9DB8(param_2,uVar2,2);
  iVar3 = *(int *)(param_1 + 0x80);
  if (iVar3 == 0) {
    fn_828D2958(param_2,param_1 + 0x84,0x24,0);
    uVar2 = *(unsigned int *)(param_1 + 0xa8);
    fn_8223C478(param_2,2,0);
    fn_828E9DB8(param_2,uVar2,2);
    uVar2 = *(unsigned int *)(param_1 + 0xac);
    fn_8223C478(param_2,0x10,0);
    fn_828E9DB8(param_2,uVar2,0x10);
    cVar1 = *(char *)(param_1 + 0xb0);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,cVar1 != '\0',1);
    bVar7 = 1 < *(unsigned int *)(param_1 + 0xb4);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,bVar7,1);
    if (!bVar7) goto LAB_828d2ba0;
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xb4) - 1;
    fn_8223C478(param_2,2,0);
    uVar4 = 2;
  }
  else {
    if ((iVar3 != 1) && (iVar3 != 3)) goto LAB_828d2ba0;
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xac);
    fn_8223C478(param_2,0x10,0);
    uVar4 = 0x10;
  }
  fn_828E9DB8(param_2,uVar6,uVar4);
LAB_828d2ba0:
  bVar7 = *(int *)(param_1 + 200) != 0;
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar7,1);
  if (bVar7) {
    puVar5 = (unsigned int *)(param_1 + 0xb8);
    if (0xf < *(unsigned int *)(param_1 + 0xcc)) {
      puVar5 = (unsigned int *)*puVar5;
    }
    fn_8224BF30(param_2,puVar5,0);
  }
  return;
}

