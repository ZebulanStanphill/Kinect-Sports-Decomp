#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823D1F70();
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_823EB588(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned __int64 uStack_38;
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  
  uStack_48 = *(unsigned int *)(param_1 + 4);
  uVar3 = (unsigned __int64)uStack_48;
  puVar1 = (unsigned int *)((int)&uStack_30 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_40 = param_2;
  uVar2 = fn_823D1F70(auStack_50,0x823d161000000000,CONCAT44(uStack_48,uStack_44),
                            CONCAT44(param_2,uStack_3c),uStack_38,uStack_30,uStack_28);
  fn_8227CB30(uVar3 + 0xc80,uVar2);
  fn_82359C18(uVar2);
  return;
}

