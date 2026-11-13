extern unsigned int *auStack_40;
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8228ED20();
extern int fn_82290718();
extern int fn_82512A48();
extern int fn_8251FA58();
extern int fn_82550380();
extern int fn_8265CA20();
extern int fn_8266DB08();
extern int fn_8266EC60();
extern unsigned int lbl_821A9C90;
extern unsigned int lbl_832961C8;


void fn_8228EBD8(unsigned int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_40 [16];
  
  *param_1 = &lbl_821A9C90;
  fn_8228ED20();
  if (param_1[0x19] != 0) {
    fn_82512A48();
    param_1[0x19] = 0;
  }
  if (param_1[0x23] != 0) {
    lbl_832961C8 = lbl_832961C8 + -1;
    param_1[0x23] = 0;
  }
  iVar2 = param_1[0x24];
  if (iVar2 != 0) {
    uVar5 = fn_8266EC60();
    fn_8266DB08(uVar5,iVar2);
    param_1[0x24] = 0;
  }
  cVar1 = *(char *)((int)*(int **)(param_1[10] + 4) + 0x2d);
  piVar4 = *(int **)(param_1[10] + 4);
  while (cVar1 == '\0') {
    fn_82550380(param_1 + 9,piVar4[2]);
    piVar3 = (int *)*piVar4;
    fn_82230300(piVar4 + 3,1,0);
    fn_8265CA20(piVar4);
    piVar4 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x2d);
  }
  *(unsigned int *)(param_1[10] + 4) = param_1[10];
  *(unsigned int *)param_1[10] = param_1[10];
  *(unsigned int *)(param_1[10] + 8) = param_1[10];
  param_1[0xb] = 0;
  if (param_1[0xd] != 0) {
    fn_8251FA58();
  }
  if (param_1[0xe] != 0) {
    fn_8265CA20();
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  fn_82290718(auStack_40,param_1 + 9,*(unsigned int *)param_1[10]);
  fn_8265CA20(param_1[10]);
  if (param_1[6] != 0) {
    fn_822315A0();
  }
  return;
}

