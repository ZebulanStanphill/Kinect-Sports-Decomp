extern unsigned int *auStack_58;
extern int fn_82A40238();
extern int fn_82A431A8();
extern unsigned int stack0x0000003c;
extern unsigned int stack0x00000044;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_82A50828(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned int param_6,unsigned int param_7)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  int *piStack_60;
  int *piStack_5c;
  unsigned int auStack_58 [2];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  piStack_60 = (int *)0x0;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uVar2 = fn_82A431A8(&piStack_60);
  if (-1 < (int)uVar2) {
    piStack_5c = (int *)0x0;
    uStack_50 = (unsigned int)LZCOUNT(param_2) >> 5;
    uStack_4c = (unsigned int)LZCOUNT(param_3) >> 5;
    uStack_48 = (unsigned int)((param_4 & 0xffffffff) >> 7) & 1;
    (**(int (***)())*piStack_60)(piStack_60,0xffffffff82089748,&piStack_5c);
    (**(int (***)())(*piStack_5c + 0x18))(piStack_5c,&uStack_50,0xc);
    (**(int (***)())(*piStack_5c + 8))();
    piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0xb0);
    auStack_58[0] =
         (**(int (***)())(*piVar1 + 0x28))
                   (piVar1,piStack_60,param_5,1,&stack0x0000003c,1,&stack0x00000044,0x1337f001);
    fn_82A40238(auStack_58);
    (**(int (***)())(*piStack_60 + 8))();
    uVar2 = (unsigned __int64)auStack_58[0];
  }
  return uVar2;
}

