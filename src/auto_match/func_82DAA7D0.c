extern int fn_82CE8A48();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;


void fn_82DAA7D0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char uStack_50;
  unsigned char uStack_4f;
  unsigned char uStack_4e;
  unsigned short uStack_4c;
  unsigned short uStack_4a;
  unsigned short uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (*(char *)(param_2 + 0x21) != '\0') {
    uStack_38 = *(unsigned int *)(param_1 + 0x18);
    uStack_40 = *(unsigned short *)(param_1 + 0x10);
    uStack_3c = *(unsigned int *)(param_1 + 0x14);
    uStack_34 = *(unsigned int *)(param_1 + 0x1c);
    uStack_50 = 5;
    uStack_4f = 0;
    uStack_4e = 2;
    uStack_4c = 0x20;
    uStack_4a = 0xffff;
    fn_82CE8A48(param_3,param_4,&uStack_50,0);
  }
  return;
}

