extern int fn_82D59158();
extern int fn_82D663C0();
extern int fn_82D66498();
extern int fn_82D66508();
extern int fn_82D66B70();
extern int fn_82D66F00();
extern int fn_82D67010();
extern int fn_82D673C8();
extern int fn_82D75FD0();
extern unsigned int uStack_1f;
extern unsigned int uStack_20;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


void fn_82D66E30(unsigned __int64 param_1)

{
  int (**pcStack_50)();
  int (**pcStack_4c)();
  int (**pcStack_48)();
  int (**pcStack_44)();
  unsigned char uStack_40;
  unsigned char uStack_3f;
  int (**pcStack_30)();
  int (**pcStack_2c)();
  int (**pcStack_28)();
  int (**pcStack_24)();
  unsigned char uStack_20;
  unsigned char uStack_1f;
  
  pcStack_50 = fn_82D66498;
  pcStack_4c = fn_82D67010;
  pcStack_48 = fn_82D673C8;
  pcStack_44 = fn_82D66F00;
  uStack_40 = 1;
  uStack_3f = 0;
  fn_82D59158(param_1,&pcStack_50,5,1);
  uStack_20 = 0;
  uStack_1f = 0;
  pcStack_30 = fn_82D663C0;
  pcStack_2c = fn_82D66508;
  pcStack_28 = fn_82D66B70;
  pcStack_24 = fn_82D75FD0;
  fn_82D59158(param_1,&pcStack_30,1,5);
  return;
}

