extern int fn_822B1CF0();
extern int fn_822B2618(int, unsigned int, int);
extern unsigned char fn_8288B760(int);
extern int fn_828AB870(void *, unsigned int);
extern __declspec(noreturn) void fn_82F63108(void);


typedef struct { void **vt; } Obj_822B1FF0;
typedef struct { int pad[4]; Obj_822B1FF0 *obj; } Sub_822B1FF0;

void fn_822B1FF0(int param_1)
{
  unsigned int uVar1;
  int iVar3;
  Sub_822B1FF0 *s;

  fn_822B1CF0();
  if (*(unsigned int *)(param_1 + 0x28) != 0) {
    s = (Sub_822B1FF0 *)(param_1 + 0x18);
    if (s->obj == 0) fn_82F63108();
    uVar1 = ((unsigned int (*)(void *))(*(void ***)s->obj)[1])(s->obj);
  }
  else {
    uVar1 = 0;
  }
  if (fn_8288B760(*(int *)(param_1 + 0x10)) != 0) {
    fn_828AB870((void *)(param_1 + 0x30),uVar1);
    fn_828AB870((void *)(param_1 + 0xd8),uVar1);
  }
  iVar3 = param_1 + 0x84;
  fn_822B2618(iVar3,uVar1,0);
  fn_822B2618(iVar3,0,1);
  fn_822B2618(iVar3,1,2);
  *(unsigned char *)(param_1 + 0x13c) = 0;
  *(unsigned int *)(param_1 + 0x140) = 0;
}
