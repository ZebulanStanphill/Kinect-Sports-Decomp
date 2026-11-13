extern unsigned int *auStack_2c;
extern unsigned int lbl_820D1708;
extern unsigned int uStack_30;


/* WARNING: Type propagation algorithm not settling */

unsigned int * fn_82A8B0B0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  param_1[1] = param_2;
  uVar1 = param_4 + 0xfU & 0xfffffff0;
  param_1[3] = 0;
  *param_1 = &lbl_820D1708;
  param_1[2] = (int)uVar1;
  puVar3 = param_1 + 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (0x1ca0e < param_3) {
    uStack_30 = 0x9800;
    auStack_2c[1] = 0x8000;
    auStack_2c[2] = 0x8000;
    auStack_2c[0] = 0x8000;
    iVar2 = LDICreateDecompression(auStack_2c,auStack_2c + 1,0,0,uVar1 + 0x11800,&uStack_30,puVar3);
    if (iVar2 == 0) {
      if ((0x97ff < uStack_30) && (0x7fff < auStack_2c[0])) goto LAB_82a8b178;
      LDIDestroyDecompression(*puVar3);
    }
    *puVar3 = 0;
  }
LAB_82a8b178:
  (**(int (***)())(*(int *)param_1[1] + 4))();
  return param_1;
}

