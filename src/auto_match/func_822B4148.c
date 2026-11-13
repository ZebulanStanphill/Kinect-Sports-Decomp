extern unsigned int *auStack_20;
extern int fn_8255C730();


int fn_822B4148(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  int *piVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char auStack_20 [1];
  
  puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  iVar2 = fn_8255C730(*(unsigned int *)(param_1 + 0x20),auStack_20,1 << (param_2 & 0x3f));
  if (iVar2 != 0) {
    for (piVar3 = *(int **)(param_1 + 0x10); piVar3 != *(int **)(param_1 + 0x14);
        piVar3 = piVar3 + 1) {
      if (*(unsigned int *)(*piVar3 + 0x24) == (unsigned int)*(unsigned short *)(iVar2 + 2)) {
        return *piVar3;
      }
    }
  }
  return 0;
}

