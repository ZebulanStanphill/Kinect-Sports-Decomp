#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_148;
extern unsigned int *auStack_30;
extern unsigned int *auStack_98;
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823CFA50();
extern int fn_823D20A8();
extern int fn_82F68CC0();
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_dc;


void fn_823EB430(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_148 [104];
  int (**pcStack_e0)();
  unsigned int uStack_dc;
  unsigned __int64 uStack_d0;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned __int64 uStack_c0;
  unsigned __int64 uStack_b8;
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  unsigned char auStack_98 [104];
  unsigned char auStack_30 [24];
  
  uStack_c8 = *(unsigned int *)(param_1 + 4);
  uVar2 = (unsigned __int64)uStack_c8;
  uStack_dc = 0;
  pcStack_e0 = fn_823CFA50;
  uStack_d0 = 0x823cfa5000000000;
  fn_82F68CC0(&uStack_c0,param_2,0x90);
  fn_82F68CC0(auStack_148,auStack_98,0x68);
  uVar1 = fn_823D20A8(auStack_30,uStack_d0,CONCAT44(uStack_c8,uStack_c4),uStack_c0,uStack_b8,
                          uStack_b0,uStack_a8,uStack_a0);
  fn_8227CB30(uVar2 + 0xbf0,uVar1);
  fn_82359C18(uVar1);
  return;
}

