typedef struct Rc_82697918 {int a,b,count;} Rc;
extern void fn_826944C8(Rc *);
static __forceinline void dec(Rc *r) { if(--r->count == 0) fn_826944C8(r); }

extern int fn_82694D08();
extern int fn_826959C8();
extern int fn_82696D38();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_82697918(unsigned char *param_1,unsigned int param_2,unsigned int param_3)

{
  int lVar1;
  int iStack_20;
  int iStack_1c;
  
  fn_82696D38(&iStack_20,param_1,param_2,0xffffffffffffffff,0);
  fn_82694D08(&iStack_1c,&iStack_20,param_3);
  dec((Rc *)iStack_20);
  fn_826959C8(param_1);
  *param_1 = 5;
  *(int *)(param_1 + 4) = iStack_1c;
  *(int *)(iStack_1c + 8) = *(int *)(iStack_1c + 8) + 1;
  dec((Rc *)iStack_1c);
  return;
}

