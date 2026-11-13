extern unsigned int *auStack_30;
extern int fn_8268E140();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_22;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_8267B050(int param_1,unsigned __int64 param_2)

{
  unsigned char auStack_30 [8];
  unsigned int uStack_28;
  unsigned short uStack_24;
  unsigned short uStack_22;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  uStack_28 = 0;
  uStack_24 = 0x10;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  fn_8268E140(*(int *)(param_1 + 0xc),*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xc),
                    auStack_30,param_2,1);
  return;
}

