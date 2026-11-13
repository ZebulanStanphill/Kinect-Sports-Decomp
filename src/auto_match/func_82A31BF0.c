extern void *memset(void *,int,unsigned);
typedef struct { unsigned __int64 a; unsigned b; } Args;
static __forceinline void init(Args *p) { p->a=0; p->b=0; }
extern unsigned int *auStack_60;
extern int fn_82A2E9B0();
extern int fn_82A30780();
extern unsigned int uStack_68;
extern unsigned int uStack_70;


unsigned int  fn_82A31BF0(unsigned int param_1,int param_2,char *param_3)

{
 unsigned int self = param_1;

  unsigned int uVar1;
  unsigned char bVar2;
  Args args;
  unsigned char auStack_60 [72];
  
  if (*param_3 == '\0') {
    bVar2 = *(unsigned char *)(param_2 + 0x35) & 0xf7;
  }
  else {
    if ((*(unsigned char *)(param_2 + 0x35) & 2) != 0) {
      memset(&args,0,12);
      uVar1 = fn_82A2E9B0(self,param_2,0,&args,auStack_60);
      if ((int)uVar1 >= 0) {
        return 0xc0000101;
      }
      if ((int)uVar1 != -0x3fffffcc) {
        return uVar1;
      }
    }
    uVar1 = fn_82A30780(self,param_2);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    bVar2 = *(unsigned char *)(param_2 + 0x35) | 8;
  }
  *(unsigned char *)(param_2 + 0x35) = bVar2;
  return 0;
}

