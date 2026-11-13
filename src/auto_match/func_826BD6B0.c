#define true 1
extern int fn_826BD078();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


int fn_826BD6B0(__int64 param_1,unsigned int param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned short *puVar4;
  __int64 lVar3;
  unsigned int uStack0000001c;
  
  lVar3 = param_1;
  uStack0000001c = param_2;
  if ((int)param_3 == -1) {
    while( true ) {
      uVar1 = fn_826BD078(&stack0x0000001c);
      puVar4 = (unsigned short *)lVar3;
      iVar2 = (int)param_1;
      if (uVar1 == 0) break;
      if (0xfffe < uVar1) {
        uVar1 = 0xfffd;
      }
      *puVar4 = (short)uVar1;
      lVar3 = lVar3 + 2;
    }
  }
  else {
    while( true ) {
      puVar4 = (unsigned short *)lVar3;
      iVar2 = (int)param_1;
      if ((int)param_3 < 1) break;
      uVar1 = fn_826BD078(&stack0x0000001c);
      puVar4 = (unsigned short *)lVar3;
      iVar2 = (int)param_1;
      param_3 = param_3 + -1;
      if (uVar1 == 0) break;
      if (0xfffe < uVar1) {
        uVar1 = 0xfffd;
      }
      *puVar4 = (short)uVar1;
      lVar3 = lVar3 + 2;
    }
  }
  *puVar4 = 0;
  return (int)puVar4 - iVar2 >> 1;
}

