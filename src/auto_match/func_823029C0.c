extern unsigned int *auStack_30;
extern int fn_82809E58();
extern unsigned int lbl_821CA460;


void fn_823029C0(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_30 [32];
  
  iVar1 = *(int *)(param_1 + 0x30);
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  if (iVar1 != 0) {
    fn_82809E58((double)((float)(__int64)(int)(*(unsigned short *)(param_1 + 0x22) - 1) *
                          *(float *)(iVar1 + 0x28) + lbl_821CA460));
  }
  return;
}

