extern int fn_827F3980();
extern unsigned short fn_827F3C30();
extern unsigned int fn_827F3C48();
extern float fn_827F4868();
extern float lbl_82196280;
extern float lbl_82196288;

void fn_827F50C8(char *param_2, float param_1)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned short sVar5;
  unsigned int iVar4;
  unsigned int *piVar6;
  float dVar7;
  unsigned char eq;

  *(float *)(param_2 + 0x30) = param_1 + *(float *)(param_2 + 0x30);
  dVar7 = fn_827F4868(param_2);
  if (dVar7 == lbl_82196288) {
    bVar1 = *(unsigned char *)(param_2 + 0xdc);
    if ((((bVar1 & 1) == 0) || ((bVar1 & 2) == 0)) && (((bVar1 & 4) == 0 || ((bVar1 & 8) == 0)))) {
      piVar6 = (unsigned int *)(param_2 + 0xe0);
LAB_827f5190:
      if (piVar6 != (unsigned int *)0x0) {
        sVar5 = fn_827F3C30(param_2);
        if ((sVar5 != 1) || (iVar4 = fn_827F3C48(param_2,0), iVar4 != *piVar6)) {
          uVar2 = *(unsigned int *)(param_2 + 0xe0);
          uVar3 = *(unsigned int *)(param_2 + 0xe4);
          fn_827F3980(param_2,1,piVar6);
          *(unsigned int *)(param_2 + 0xe0) = uVar2;
          *(unsigned int *)(param_2 + 0xe4) = uVar3;
        }
        goto LAB_827f521c;
      }
    }
  }
  else if ((((dVar7 == lbl_82196280) &&
            ((bVar1 = *(unsigned char *)(param_2 + 0xdc), (bVar1 & 1) == 0 || ((bVar1 & 2) != 0)))) &&
           (((bVar1 & 4) == 0 || ((bVar1 & 8) != 0)))) &&
          (((*(unsigned int *)(param_2 + 0x40) == 0 && (*(unsigned short *)(param_2 + 0x20) == 0)) ||
           (((bVar1 & 0x40) != 0 && (*(unsigned short *)(param_2 + 0x20) == 2)))))) {
    piVar6 = (unsigned int *)(param_2 + 0xe4);
    goto LAB_827f5190;
  }
  sVar5 = fn_827F3C30(param_2);
  if (sVar5 != 2) {
    uVar2 = *(unsigned int *)(param_2 + 0xe0);
    uVar3 = *(unsigned int *)(param_2 + 0xe4);
    fn_827F3980(param_2,2,param_2 + 0xe0);
    *(unsigned int *)(param_2 + 0xe0) = uVar2;
    *(unsigned int *)(param_2 + 0xe4) = uVar3;
  }
LAB_827f521c:
  *(unsigned char *)(param_2 + 0xdc) = *(unsigned char *)(param_2 + 0xdc) & 0xdf | ((unsigned char)(dVar7 == *(float *)(param_2 + 0x24)) << 5);
}
