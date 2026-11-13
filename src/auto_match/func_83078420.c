typedef unsigned char bool;
#define true 1
extern int fn_8306D760();
extern int fn_8306D830();
extern int fn_83077208();
extern int fn_83077AA8();
extern unsigned int lbl_82002AE0;


void fn_83078420(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,char param_4)

{
  unsigned int uVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = fn_8306D760(*(unsigned int *)(param_2 + 0x10));
  if (cVar2 == '\0') {
    bVar3 = true;
    *(unsigned int *)(param_2 + 0x84) = 0x1e;
    uVar1 = lbl_82002AE0;
    *(unsigned int *)(param_2 + 0x68) = *(unsigned int *)(param_2 + 0x18);
    *(unsigned int *)(param_2 + 0x6c) = *(unsigned int *)(param_2 + 0x1c);
    *(unsigned int *)(param_2 + 0x70) = *(unsigned int *)(param_2 + 0x20);
    *(unsigned int *)(param_2 + 0x74) = *(unsigned int *)(param_2 + 0x20);
    *(unsigned int *)(param_2 + 0x78) = *(unsigned int *)(param_2 + 0x24);
    *(unsigned int *)(param_2 + 0x7c) = *(unsigned int *)(param_2 + 0x24);
    *(unsigned int *)(param_2 + 0x80) = *(unsigned int *)(param_2 + 0x28);
    *(unsigned int *)(param_2 + 0x8c) = uVar1;
    *(unsigned int *)(param_2 + 0x90) = uVar1;
    *(unsigned int *)(param_2 + 0x88) = uVar1;
  }
  else {
    cVar2 = fn_8306D830(*(unsigned int *)(param_2 + 0x10));
    if (cVar2 == '\0') {
      fn_83077AA8(param_1,param_2);
    }
    bVar3 = param_4 == '\0';
  }
  fn_83077208(param_2,bVar3);
  return;
}

