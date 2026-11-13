typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82593540();
extern int fn_825C3A68();


int fn_825C39A8(unsigned short *param_1,int param_2,int (**param_3)(),unsigned __int64 param_4,unsigned __int64 param_5,
                 unsigned __int64 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == (int (**)())0x0) {
    param_3 = fn_825C3A68;
  }
  iVar3 = 0;
  while( true ) {
    bVar1 = false;
    while( true ) {
      if (param_1 == (unsigned short *)0x0) {
        return iVar3;
      }
      iVar2 = fn_82593540(param_1 + 4);
      if (iVar2 == param_2) {
        (*param_3)(param_1,param_4,param_5,param_6);
        iVar3 = 1;
        if (param_1[1] != 0) {
          bVar1 = true;
        }
      }
      if (param_1[2] == 0) break;
      param_1 = (unsigned short *)((unsigned int)*param_1 + (int)param_1);
    }
    if ((iVar3 != 0) && (!bVar1)) break;
    param_1 = *(unsigned short **)(param_1 + 0x26);
  }
  return iVar3;
}

