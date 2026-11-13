extern unsigned int *auStack_70;
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F8A0;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_824F1260(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int in_r0;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned char auStack_70 [16];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  uVar3 = lbl_8327F8A0;
  uStack_5c = ltcg_pool_0_0f;
  if (*(int *)(param_1 + 8) != 0) {
    uStack_80 = lbl_8327F8A0;
    puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_000104b0;
    puVar2[1] = in_register_000104b4;
    puVar2[2] = in_register_000104b8;
    puVar2[3] = in_vr75;
    uStack_7c = 4;
    uStack_4c = uStack_5c;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0xffffffff;
    fn_82540438(0,uVar3,4);
    puVar4 = &lbl_83296890;
    puVar5 = (unsigned __int64 *)(&lbl_83296BE0 + param_3 * 0x2c);
    if ((&lbl_83296C80)[param_3 * 0x2c] == 0) {
      puVar5 = &lbl_832968D0;
    }
    else {
      puVar4 = &lbl_83296C20 + param_3 * 0x16;
    }
    fn_82540870(uVar3,puVar4);
    fn_82540B48(uVar3,puVar5);
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x1ac);
    (**(int (***)())(*piVar1 + 4))
              (piVar1,&uStack_80,param_1 + 0x10,1,0xffffffff82196290,0,0xffffffffffffffff);
  }
  return;
}

