extern unsigned int *auStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_824B43C0(unsigned __int64 param_1,int *param_2,__int64 param_3,int *param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned __int64 in_r0;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  int aiStack_58 [2];
  unsigned char auStack_50 [80];
  
  (**(int (***)())*param_2)(param_2,&uStack_60,&uStack_5c);
  iVar2 = (int)in_r0;
  uVar3 = ((unsigned __int64)uStack_5c - param_3) + 1;
  uVar4 = (unsigned int)uVar3;
  uVar5 = (unsigned __int64)uStack_60;
  if ((int)uStack_60 < (int)uVar4) {
    uVar5 = uVar3;
    uStack_60 = uVar4;
  }
  if ((uVar5 & 0xffffffff) <= (unsigned __int64)uStack_5c) {
    do {
      (**(int (***)())(*param_2 + 4))(param_2,uVar5,aiStack_58);
      puVar1 = (unsigned int *)(*(int *)(aiStack_58[0] + 0x40) + param_5 * 0x40 + 0x10U & 0xfffffff0);
      in_register_000104d0 = *puVar1;
      in_register_000104d4 = puVar1[1];
      in_register_000104d8 = puVar1[2];
      in_vr77 = puVar1[3];
      if ((uVar5 & 0xffffffff) != (unsigned __int64)uStack_60) {
        iVar2 = (**(int (***)())(*param_4 + 4))(auStack_50,param_4);
        puVar1 = (unsigned int *)((int)in_r0 + iVar2 & 0xfffffff0);
        in_register_000104d0 = *puVar1;
        in_register_000104d4 = puVar1[1];
        in_register_000104d8 = puVar1[2];
        in_vr77 = puVar1[3];
      }
      iVar2 = (int)in_r0;
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) <= (unsigned __int64)uStack_5c);
  }
  puVar1 = (unsigned int *)(iVar2 + (int)param_1 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  return param_1;
}

