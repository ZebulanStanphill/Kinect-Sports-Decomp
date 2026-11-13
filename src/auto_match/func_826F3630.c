typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826D8D60();
extern unsigned char fn_826E50D0(int,unsigned,int,int,int,int);


bool fn_826F3630(int param_1,unsigned param_2)

{
  int iVar1;
  unsigned char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  cVar2 = fn_826E50D0(param_1 + 0x28,param_2,*(unsigned int *)(iVar1 + 0xc),
                            *(unsigned int *)(iVar1 + 0x28),*(unsigned int *)(iVar1 + 0x10),1);
  if (cVar2 == 0) return false;
  fn_826D8D60(*(unsigned int *)(param_1 + 0x20),param_1 + 0x274);
  return true;
}

