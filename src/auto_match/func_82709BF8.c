static __forceinline unsigned *Init_82709BF8(unsigned *p) {*p=0;return p;}
extern int fn_8267B890();
extern int fn_826C3768();
extern int fn_82700DA0();
extern int fn_82709658();
extern unsigned int lbl_831E7E64;


void fn_82709BF8(int param_1,unsigned int param_2,int *param_3,unsigned param_4,unsigned param_5)

{
  unsigned int *puVar1;
  struct { unsigned key; void *value; } kv;
  struct { unsigned rc; int *ptr; unsigned data[2]; unsigned char flag; } val;
  if (*(unsigned *)(param_1 + 0xa00) == 0) {
    void *mem=(void *)fn_8267B890(lbl_831E7E64,4,0);
    puVar1=mem ? Init_82709BF8((unsigned *)mem) : 0;
    *(unsigned int **)(param_1 + 0xa00) = puVar1;
  }
  val.flag = 0;
  val.data[0] = 0;
  val.data[1] = 0;
  if (param_4 != 0) {
    *(unsigned int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  val.rc = param_4;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  val.ptr = param_3;
  fn_826C3768(&val.data[0],param_5);
  kv.value = &val.rc;
  kv.key = param_2;
  fn_82709658(*(unsigned int *)(param_1 + 0xa00),*(unsigned int *)(param_1 + 0xa00),&kv.key);
  fn_82700DA0(&val.rc);
  return;
}
