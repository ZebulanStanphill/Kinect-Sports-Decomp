extern unsigned int *auStack_30;
extern int fn_82CE3E48();
extern int fn_82D000A0();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82D00450();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82CEF738(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned char auStack_30 [32];
  
  fn_82D00388(auStack_30,0);
  for (; param_2 != (unsigned int *)0x0; param_2 = (unsigned int *)param_2[2]) {
    fn_82D000A0(auStack_30,*param_2,param_2);
  }
  for (; param_1 != (unsigned int *)0x0; param_1 = (unsigned int *)param_1[2]) {
    iVar1 = fn_82D00450(auStack_30,*param_1,0);
    if (iVar1 != 0) {
      if (*(int *)param_1[3] != 0) {
        fn_82CE3E48(*(int *)param_1[3]);
      }
      *(unsigned int *)param_1[3] = 0;
    }
  }
  fn_82D003F0(auStack_30);
  return;
}

