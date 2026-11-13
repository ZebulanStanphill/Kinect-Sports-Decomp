extern unsigned int *auStack_80;
extern int fn_82CE6768();


void fn_82D6AFF0(int *param_1,int *param_2,int *param_3,unsigned param_4,unsigned param_5)

{
  int iVar1;
  struct {int data[2]; unsigned char *buffer; int *object;} context;
  unsigned char auStack_80 [64];
  
  iVar1 = *param_1;
  fn_82CE6768(auStack_80,param_1[2],iVar1 + 0x30);
  context.object = param_1;
  context.buffer = auStack_80;
  context.data[0] = *(int *)(iVar1 + 0x14);
  context.data[1] = 0;
  (*(int (**)())((unsigned int)*(unsigned char *)((*(int *)(context.data[0] + 0xc) + 0xd) * 0x20 +
                               *(int *)(*param_2 + 0xc) + *param_3) * 0x14 + *param_3 + 0x9ac))
            (&context,param_2,param_3,param_4,param_5);
  return;
}

