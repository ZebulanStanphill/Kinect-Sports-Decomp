extern unsigned int *auStack_50;
extern int fn_82635EE8();
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABF3A0();
extern unsigned int uStack_48;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82ABF4A0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  
  if (*param_5 < 0) {
    uVar1 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
    if ((uVar1 != 0x7b) &&
       ((uVar1 != 0x75 ||
        (iVar2 = fn_82ABDD90(param_1,0x75,0,0), (*(unsigned int *)(iVar2 + param_3 + -0x10) & 7) != 7))))
    {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uStack_48 = 0x2000000;
    param_4 = fn_82635EE8(*(unsigned int *)(param_1 + 0x300),auStack_50);
    fn_82ABF3A0(param_1,1,param_4,param_2,param_3);
    *param_5 = 1;
  }
  return param_4;
}

