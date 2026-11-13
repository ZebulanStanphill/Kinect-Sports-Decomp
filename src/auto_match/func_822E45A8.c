extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern float fRam831d14dc;
extern float fRam831d14e0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822AF138();
extern int fn_822C8C08();
extern int fn_822E5340();
extern int fn_822E53F8();
extern int fn_822E54B0();


void fn_822E45A8(int param_1)

{
  float fVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [64];
  
  *(unsigned int *)(*(int *)(param_1 + 0x118) + 0x2f4) = 1;
  if (*(int *)(param_1 + 0x24) == 0) {
    fn_822C8C08(*(unsigned int *)(param_1 + 0x114),0xffffffff821adebc);
    fn_82230110(auStack_80,0xffffffff821adec4);
    fn_822E53F8(param_1,auStack_80);
    fn_82230300(auStack_80,1,0);
    fn_82230110(auStack_40,0xffffffff821aded8);
    fn_822E5340(param_1,auStack_40);
    puVar3 = auStack_40;
  }
  else {
    fn_822C8C08(*(unsigned int *)(param_1 + 0x114),0xffffffff821ade9c);
    fn_82230110(auStack_a0,0xffffffff821adea8);
    fn_822E53F8(param_1,auStack_a0);
    fn_82230300(auStack_a0,1,0);
    fn_82230110(auStack_60,0xffffffff821ade9c);
    fn_822E5340(param_1,auStack_60);
    puVar3 = auStack_60;
  }
  fn_82230300(puVar3,1,0);
  fn_822E54B0(param_1);
  fVar1 = fRam831d14e0;
  if (*(int *)(param_1 + 0x24) != 0) {
    fVar1 = fRam831d14dc;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(float *)(iVar2 + 0x8bc) != fVar1) {
    *(float *)(iVar2 + 0x8bc) = fVar1;
    *(unsigned int *)(iVar2 + 0x170) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(unsigned int *)(param_1 + 0x110),1);
}

