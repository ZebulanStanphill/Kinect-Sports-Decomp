typedef void (*code)();
extern int fn_823B78E0();
extern int fn_824CC9E8();
extern int fn_824CD030();
extern int fn_82F4EC30();
extern int fn_82F52C20();
extern unsigned int lbl_821B5BEC;
extern unsigned int lbl_821C0C34;
extern unsigned int lbl_821C0C6C;
extern unsigned int lbl_821C0C90;

typedef struct { void *vt; void *owner; } Sub;

static void Sub_dtor(Sub *s)
{
  s->vt = &lbl_821B5BEC;
  if (s->owner != 0) {
    fn_823B78E0(s->owner, s);
  }
}

void fn_824CF0C8(void **param_1)
{
  void **puVar1;
  unsigned int uVar3;
  
  *param_1 = &lbl_821C0C6C;
  param_1[0x3c] = &lbl_821C0C90;
  uVar3 = 0;
  if (fn_824CD030() != 0) {
    uVar3 = fn_82F4EC30(param_1[10]);
  }
  if (param_1[0x3f] != 0) {
    fn_82F52C20(uVar3,param_1[0x3f],1);
    param_1[0x3f] = 0;
  }
  if (param_1[0x40] != 0) {
    fn_82F52C20(uVar3,param_1[0x40],1);
    param_1[0x40] = 0;
  }
  puVar1 = (void **)param_1[0x58];
  if (puVar1 != 0) {
    (*(code *)*puVar1)(puVar1,1);
  }
  Sub_dtor((Sub *)(param_1 + 0x3c));
  *param_1 = &lbl_821C0C34;
  fn_824CC9E8(param_1);
}
