extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_83015740();
extern int fn_8301E4B8();
extern int fn_830251B0();
extern int fn_8301E4B8();
extern unsigned int lbl_83264300;
extern unsigned int uStack_44;


void fn_83024E30(int param_1)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  double dVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned int in_register_000103f0;
  unsigned int uStack_44;
  unsigned char auStack_40 [1];
  unsigned char auStack_30 [48];

  if (*(int *)(param_1 + 0x74) != 1) {
    dVar6 = (double)fn_830251B0(param_1 + 0x70);
    *(float *)(param_1 + 0x14) = (float)dVar6;
    dVar6 = (double)fn_8301E4B8();
    *(float *)(param_1 + 4) = (float)dVar6;
    dVar6 = (double)fn_8301E4B8(param_1 + 0x70);
    *(float *)(param_1 + 0x18) = (float)dVar6;
    dVar6 = (double)fn_8301E4B8();
    *(float *)(param_1 + 0x10) = (float)dVar6;
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 4);
    *(float *)(param_1 + 0xc) = (float)dVar6;
    if (*(int *)(param_1 + 0x16c) != 0) {
      iVar2 = fn_83015740(auStack_40,lbl_83264300);
      puVar3 = (unsigned int *)(param_1 + 0x14c);
      puVar4 = (unsigned int *)(iVar2 + -4);
      lVar5 = 6;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
      return;
    }
    puVar4 = &uStack_44;
    puVar3 = (unsigned int *)(param_1 + 0x14c);
    altv300_21(in_vs32,in_vs39);
    lVar5 = 6;
    puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f0;
    puVar1[2] = in_register_000103f0;
    puVar1[3] = in_register_000103f0;
    puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f0;
    puVar1[2] = in_register_000103f0;
    puVar1[3] = in_register_000103f0;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  return;
}
