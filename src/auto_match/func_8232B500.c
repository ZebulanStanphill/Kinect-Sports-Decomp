extern int fn_8265C9E0();
extern int memcpy();
extern int memset();
extern unsigned int lbl_821B05F0;


unsigned int * fn_8232B500(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar3 = (unsigned int *)fn_8265C9E0(0x130);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar6 = puVar3 + 4;
    puVar3[1] = 1;
    *puVar3 = &lbl_821B05F0;
    puVar3[2] = 1;
    if (puVar6 != (unsigned int *)0x0) {
      uVar1 = *param_3;
      memset(puVar6,0,0xf0);
      puVar4 = param_2 + 0x3c;
      puVar3[0x40] = *puVar4;
      uVar2 = param_2[0x3d];
      puVar5 = (unsigned int *)((unsigned int)(puVar3 + 0x48) & 0xfffffff0);
      *puVar5 = in_register_000104d0;
      puVar5[1] = in_register_000104d4;
      puVar5[2] = in_register_000104d8;
      puVar5[3] = in_vr77;
      puVar3[0x41] = uVar2;
      puVar3[0x42] = 0;
      puVar3[0x43] = uVar1;
      puVar3[0x44] = 0;
      if (param_2 != puVar4) {
        puVar5 = param_2;
        do {
          memcpy((int)puVar6 + ((int)puVar5 - (int)param_2),puVar5,0x18);
          puVar5 = puVar5 + 6;
        } while (puVar5 != puVar4);
      }
    }
  }
  param_1[1] = puVar3;
  *param_1 = puVar3 + 4;
  return param_1;
}

