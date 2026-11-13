typedef unsigned char bool;
#define false 0
extern int fn_83008D30();


void fn_83000748(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  if ((param_4 & 0xff) == 0) {
    bVar1 = *(int *)(param_1 + 0xc) == (int)param_2;
  }
  if (!bVar1) {
    cVar2 = '\0';
    if (((param_3 & 0xff) == 0) && (*(int *)(param_1 + 0x14) != 0)) {
      cVar2 = fn_83008D30(*(int *)(param_1 + 0x14),param_2);
      param_3 = 1;
    }
    if ((cVar2 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
      if ((*(unsigned char *)(param_1 + 0x3d) & 0x20) != 0) {
        param_4 = 1;
      }
      fn_83000748(*(int *)(param_1 + 0x10),param_2,param_3,param_4);
    }
  }
  return;
}

