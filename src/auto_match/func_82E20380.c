extern unsigned int *auStack_40;
extern int fn_82E1F690();
extern int fn_82F64068();
extern int fn_8306C4F8();
extern unsigned int uStack_23;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;


void fn_82E20380(void)

{
  unsigned short uStack_50;
  unsigned short uStack_4e;
  unsigned short uStack_4a;
  unsigned short uStack_48;
  unsigned char auStack_40 [29];
  unsigned char uStack_23;
  
  fn_8306C4F8(&uStack_50);
  fn_82F64068(auStack_40,0x1e,0x1d,0xffffffff8214bb54,uStack_4e,uStack_4a,uStack_50,uStack_48)
  ;
  uStack_23 = 0;
  fn_82E1F690(auStack_40);
  return;
}

