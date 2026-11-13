extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_82272D90();
extern int fn_82273600();
extern int fn_822B3F70();
extern int fn_822B4040();
extern int fn_822B41D0();
extern int fn_822B4378();
extern int fn_822B4448();
extern int fn_8265C9E0();
extern unsigned int lbl_821B2E2C;
extern unsigned int stack0x00000000;
extern unsigned int uStack_5c;


void fn_822B3D30(int param_1,int param_2)

{
  int iVar1;
  int in_r0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char auStack_80 [8];
  unsigned char auStack_78 [8];
  unsigned char auStack_70 [8];
  unsigned char auStack_68 [8];
  unsigned char auStack_60 [4];
  unsigned int uStack_5c;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [40];
  
  puVar3 = *(unsigned int **)(param_1 + 4);
  puVar2 = (unsigned int *)(*(unsigned int **)(param_1 + 4))[1];
  while (*(char *)((int)puVar2 + 0x51) == '\0') {
    if ("" < (char *)puVar2[4]) {
      puVar3 = puVar2;
      puVar2 = (unsigned int *)*puVar2;
    }
    else {
      puVar2 = (unsigned int *)puVar2[2];
    }
  }
  if ((puVar3 == *(unsigned int **)(param_1 + 4)) || (&lbl_821B2E2C < (unsigned char *)puVar3[4])) {
    iVar1 = -0x78;
  }
  else {
    iVar1 = -0x80;
  }
  puVar3 = *(unsigned int **)(&stack0x00000000 + iVar1);
  if (puVar3 == *(unsigned int **)(param_1 + 4)) {
    fn_822B3F70(&stack0x00000000 + -0x60);
    if (param_2 != 0) {
      puVar3 = (unsigned int *)fn_8265C9E0(0x14);
      if (puVar3 == (unsigned int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82230040(&stack0x00000000 + -0x80);
      }
      *puVar3 = uStack_5c;
      puVar3[1] = uStack_5c;
      *(unsigned char *)(puVar3 + 4) = 0;
      *(unsigned char *)((int)puVar3 + 0x11) = 0;
      puVar3[2] = uStack_5c;
      if (puVar3 + 3 != (int *)0x0) {
        puVar3[3] = param_2;
      }
      fn_82273600(&stack0x00000000 + -0x68,&stack0x00000000 + -0x60);
    }
    puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    puVar4 = (unsigned char *)fn_822B41D0(param_1,&stack0x00000000 + -0x70);
    if (puVar4 != &stack0x00000000 + -0x60) {
      fn_822B4378(&stack0x00000000 + -0x70,puVar4,**(unsigned int **)(puVar4 + 4));
      fn_822B4448(puVar4,&stack0x00000000 + -0x60);
    }
    puVar5 = puVar4 + 0x10;
    if (puVar5 != &stack0x00000000 + -0x50) {
      fn_82272D90(&stack0x00000000 + -0x70,puVar5,**(unsigned int **)(puVar4 + 0x14));
      fn_822B4448(puVar5,&stack0x00000000 + -0x50);
    }
    puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    puVar2 = (unsigned int *)((unsigned int)(puVar4 + 0x20) & 0xfffffff0);
    *puVar2 = *puVar3;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    fn_822B4040(&stack0x00000000 + -0x60);
  }
  else if (param_2 != 0) {
    puVar2 = (unsigned int *)fn_8265C9E0(0x14);
    if (puVar2 == (unsigned int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82230040(&stack0x00000000 + -0x78);
    }
    *puVar2 = puVar3[9];
    puVar2[1] = puVar3[9];
    puVar2[2] = puVar3[9];
    *(unsigned char *)(puVar2 + 4) = 0;
    *(unsigned char *)((int)puVar2 + 0x11) = 0;
    if (puVar2 + 3 != (int *)0x0) {
      puVar2[3] = param_2;
    }
    fn_82273600(&stack0x00000000 + -0x70,puVar3 + 8);
  }
  return;
}

