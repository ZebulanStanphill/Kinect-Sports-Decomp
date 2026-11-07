typedef unsigned int undefined4;

typedef struct Value_82293FE8 {
  unsigned int type;
  unsigned int flags;
  double number;
} Value_82293FE8;

extern void fn_82273C88(Value_82293FE8 *v);
extern void fn_82273CD8(Value_82293FE8 *v, int type);
extern int fn_82672C20(undefined4 obj, const char *path, Value_82293FE8 *v, int count);


void fn_82293FE8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  Value_82293FE8 v;

  iVar2 = param_2 * 0x1c + param_1;
  if (*(unsigned int *)(iVar2 + 0x34) > 0) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    v.type = 0;
    v.flags = 0;
    fn_82273CD8(&v,3);
    v.number = (double)(param_2 + 1);
    fn_82672C20(*puVar1,"_root.mainCtrl.powerHasBeenLost",&v,1);
    fn_82273C88(&v);
    *(unsigned int *)(iVar2 + 0x34) = 0;
  }
  return;
}
