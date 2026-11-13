extern unsigned int *auStack_90;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822D51D0();
extern int fn_82365BD8();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;


void fn_822D50C0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4,int param_5,
                  int param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned char auStack_b0 [8];
  unsigned char auStack_a8 [8];
  int iStack_a0;
  int iStack_9c;
  unsigned char auStack_90 [144];
  
  fn_8255FD70(&iStack_a0,*(unsigned int *)(param_2 + 0x24),0xffffffff821ad78c);
  uVar6 = 0;
  uVar1 = iStack_9c - iStack_a0 >> 2;
  if (uVar1 != 0) {
    puVar5 = (unsigned int *)(iStack_a0 + -4);
    do {
      puVar5 = puVar5 + 1;
      fn_82230110(auStack_90,*puVar5);
      uVar2 = fn_82365BD8(auStack_b0,param_6);
      uVar3 = fn_82365BD8(auStack_a8,param_5);
      uVar4 = fn_82365BD8(&iStack_a0,param_4);
      fn_822D51D0(param_1,param_2,param_3,auStack_90,uVar4,uVar3,uVar2);
      fn_82230300(auStack_90,1,0);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  if (iStack_a0 != 0) {
    fn_8265CA20(iStack_a0);
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_5 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_6 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

