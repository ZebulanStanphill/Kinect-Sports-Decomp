extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C9D68();
extern int fn_822FED38();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_8c;


unsigned int *
fn_822FEC40(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puStack_90;
  int iStack_8c;
  unsigned char auStack_80 [48];
  
  fn_8255FD70(&puStack_90,*(unsigned int *)(param_4 + 0x24),param_2);
  *param_1 = 0;
  uVar2 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = iStack_8c - (int)puStack_90 >> 2;
  puVar3 = puStack_90;
  if (uVar1 != 0) {
    do {
      fn_82230110(auStack_80,*puVar3);
      fn_822FED38(&puStack_90,param_3,param_4,param_5,auStack_80,param_6,param_7,param_8);
      fn_82230300(auStack_80,1,0);
      fn_822C9D68(param_1,&puStack_90);
      if (iStack_8c != 0) {
        fn_822315A0();
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < uVar1);
  }
  if (puStack_90 != (unsigned int *)0x0) {
    fn_8265CA20(puStack_90);
  }
  return param_1;
}

