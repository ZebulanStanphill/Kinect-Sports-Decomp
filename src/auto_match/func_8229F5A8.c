typedef struct Obj { int h; char pad[0xc]; int f10; char pad2[0x60]; int arr[8]; } Obj;
extern void fn_82672C20(int, const char *, int, int);
void fn_8229F5A8(Obj *o)
{
  int i;
  if (o->f10 == 0) {
    fn_82672C20(o->h, "_root.mainCtrl.show", 0, 0);
    o->f10 = 1;
    for (i = 0; i < 8; i++) o->arr[i] = 1;
  }
}
