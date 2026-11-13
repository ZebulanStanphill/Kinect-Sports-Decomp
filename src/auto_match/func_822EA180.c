extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C9D68();
extern int fn_822EA278();
extern int fn_8232CA90();
extern int fn_82365BD8();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_6c;
extern unsigned int iStack_7c;


unsigned int * fn_822EA180(unsigned int *param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned char auStack_80 [4];
  int iStack_7c;
  unsigned int *puStack_70;
  int iStack_6c;
  unsigned char auStack_60 [96];
  
  fn_8255FD70(&puStack_70,*(unsigned int *)(*(int *)(param_2 + 0x80) + 0x24));
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = iStack_6c - (int)puStack_70 >> 2;
  fn_8232CA90(param_1,uVar1);
  puVar3 = puStack_70;
  if (uVar1 != 0) {
    do {
      fn_82230110(auStack_60,*puVar3);
      uVar2 = fn_82365BD8(&puStack_70,param_4);
      fn_822EA278(auStack_80,param_2,auStack_60,uVar2);
      fn_82230300(auStack_60,1,0);
      fn_822C9D68(param_1,auStack_80);
      if (iStack_7c != 0) {
        fn_822315A0();
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar1);
  }
  if (puStack_70 != (unsigned int *)0x0) {
    fn_8265CA20(puStack_70);
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

