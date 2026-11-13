#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8227CB30();
extern int fn_822EFBF0();
extern int fn_82359C18();
extern int fn_823D1F70();
extern int fn_823F0828();
extern unsigned int iStack_68;
extern unsigned int iStack_74;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


void fn_823CEC40(int param_1,unsigned __int64 param_2)

{
  int in_r0;
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char auStack_78 [4];
  int iStack_74;
  unsigned char auStack_70 [8];
  int iStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  uStack_60 = (unsigned int)param_2;
  iStack_68 = param_1;
  if (*(char *)(iVar2 + 4) == '\0') {
    puVar3 = (unsigned int *)((int)&uStack_50 + in_r0 & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    uVar1 = fn_823D1F70(auStack_70,0x823ced9000000000,CONCAT44(param_1,uStack_64),
                              CONCAT44(uStack_60,uStack_5c),uStack_58,uStack_50,uStack_48);
    fn_8227CB30(param_1 + 0xb48,uVar1);
    fn_82359C18(uVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 != 0) {
      puVar3 = (unsigned int *)((int)&uStack_50 + in_r0 & 0xfffffff0);
      *puVar3 = in_register_00010010;
      puVar3[1] = in_register_00010014;
      puVar3[2] = in_register_00010018;
      puVar3[3] = in_vr1;
      uVar1 = fn_823D1F70(auStack_70,0x823ced9000000000,CONCAT44(param_1,uStack_64),
                                CONCAT44(uStack_60,uStack_5c),uStack_58,uStack_50,uStack_48);
      fn_8227CB30(param_1 + 0xb48,uVar1);
      fn_82359C18(uVar1);
      puVar3 = (unsigned int *)fn_822EFBF0(auStack_78,iVar2);
      fn_823F0828((unsigned __int64)*(unsigned int *)*puVar3 + 0xa8,param_2);
      if (iStack_74 != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}

