#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_108;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_88;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8227CB30();
extern int fn_822EFBF0();
extern int fn_82359C18();
extern int fn_823CF178();
extern int fn_823D2008();
extern int fn_823E6E98();
extern int fn_823EAA88();
extern int memcpy();
extern unsigned int iStack_6c;
extern unsigned int iStack_b8;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;


void fn_823CEFB0(int param_1,unsigned __int64 param_2)

{
  int in_r0;
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char auStack_108 [24];
  int (**pcStack_f0)();
  unsigned int uStack_ec;
  struct { unsigned int first; unsigned int second; } stack_pair_e0;

  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned char uStack_cc;
  unsigned __int64 uStack_c0;
  int iStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  unsigned __int64 uStack_98;
  unsigned __int64 uStack_90;
  unsigned char auStack_88 [24];
  unsigned char auStack_70 [4];
  int iStack_6c;
  unsigned char auStack_60 [96];
  
  stack_pair_e0.second = 0;
  stack_pair_e0.first = 0xffffffff;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  fn_823E6E98(param_1,param_2,&stack_pair_e0.first);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  uStack_b0 = (unsigned int)param_2;
  iStack_b8 = param_1;
  if (*(char *)(iVar2 + 4) == '\0') {
    uStack_ec = 0;
    pcStack_f0 = fn_823CF178;
    puVar3 = (unsigned int *)((int)&uStack_a0 + in_r0 & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    uStack_c0 = 0x823cf17800000000;
    memcpy(&uStack_90,&stack_pair_e0.first,0x18);
    memcpy(auStack_108,auStack_88,0x18);
    uVar1 = fn_823D2008(auStack_60,uStack_c0,CONCAT44(iStack_b8,uStack_b4),
                              CONCAT44(uStack_b0,uStack_ac),uStack_a8,uStack_a0,uStack_98,uStack_90)
    ;
    fn_8227CB30(param_1 + 0xb18,uVar1);
    fn_82359C18(uVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 != 0) {
      uStack_ec = 0;
      pcStack_f0 = fn_823CF178;
      uStack_c0 = 0x823cf17800000000;
      puVar3 = (unsigned int *)((int)&uStack_a0 + in_r0 & 0xfffffff0);
      *puVar3 = in_register_00010010;
      puVar3[1] = in_register_00010014;
      puVar3[2] = in_register_00010018;
      puVar3[3] = in_vr1;
      memcpy(&uStack_90,&stack_pair_e0.first,0x18);
      memcpy(auStack_108,auStack_88,0x18);
      uVar1 = fn_823D2008(auStack_60,uStack_c0,CONCAT44(iStack_b8,uStack_b4),
                                CONCAT44(uStack_b0,uStack_ac),uStack_a8,uStack_a0,uStack_98,
                                uStack_90);
      fn_8227CB30(param_1 + 0xb18,uVar1);
      fn_82359C18(uVar1);
      puVar3 = (unsigned int *)fn_822EFBF0(auStack_70,iVar2);
      fn_823EAA88(*puVar3,param_2,&stack_pair_e0.first);
      if (iStack_6c != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}

