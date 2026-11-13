extern unsigned int *auStack_90;
extern int fn_8255AA78();
extern int fn_82574340();
extern int fn_82574438();
extern int fn_825932A8();
extern int fn_82593358();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_82603170(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_90 [16];
  unsigned __int64 uStack_80;
  unsigned __int64 uStack_78;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  
  if (param_1 == 0) {
    puVar3 = (unsigned int *)(in_r0 + (int)param_2 & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  else {
    if ((*param_5 == 0) || (iVar2 = fn_82593358(param_1,param_5,param_4), iVar2 == 0)) {
      uVar4 = fn_825932A8(param_1,param_4);
    }
    else {
      uVar4 = (unsigned __int64)*param_5;
    }
    if ((uVar4 & 0xffffffff) == 0) {
      puVar3 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar1 = (unsigned int *)(in_r0 + (int)param_2 & 0xfffffff0);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
    }
    else {
      if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(unsigned int *)
                 ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0)
                 );
      }
      fn_82574340(uVar4,param_1 + 0xf0,uVar5,param_2);
      if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(unsigned int *)
                 ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0)
                 );
      }
      fn_82574438(uVar4,param_1 + 0xf0,uVar5,&uStack_80);
      puVar3 = (unsigned int *)
               fn_8255AA78(auStack_90,uStack_80,uStack_78,uStack_70,uStack_68,uStack_60,
                                 uStack_58,uStack_50);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      *param_3 = *puVar3;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      *param_5 = (unsigned int)uVar4;
    }
  }
  return;
}

