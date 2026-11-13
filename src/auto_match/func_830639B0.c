typedef unsigned char bool;
#define true 1
extern int fn_8305ED48();
extern int fn_8305F320();
extern int fn_83066810();
extern unsigned int lbl_8217E8A0;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_830639B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  bool bVar1;
  int iVar2;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  fn_8305ED48(param_3,param_2 + 0x10,param_4,param_5);
  uStack_2c = (unsigned int)param_2;
  ppuStack_30 = &lbl_8217E8A0;
  uStack_28 = uStack_2c;
  while( true ) {
    uStack_28 = (*(int (**)())ppuStack_30[1])(&ppuStack_30,param_2);
    if (uStack_28 == 0) break;
    bVar1 = *(int *)(uStack_28 + 0x30) == (int)param_2;
    iVar2 = fn_83066810((double)*(float *)(param_1 + 0x30),uStack_28 + 0x10,param_3);
    if (iVar2 == 3) {
      fn_8305F320((double)*(float *)(param_1 + 0x30),param_3,(unsigned __int64)uStack_28 + 0x10,
                        -(unsigned __int64)!bVar1 & param_3,-(unsigned __int64)bVar1 & param_3);
    }
    param_2 = (unsigned __int64)uStack_28;
  }
  return;
}

