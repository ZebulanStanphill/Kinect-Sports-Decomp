typedef struct Obj_82DF1208 {
  char pad[0x24];
  int active;
} Obj_82DF1208;
extern void fn_82DF1050(Obj_82DF1208 *self, int arg);

void fn_82DF1208(Obj_82DF1208 *self)
{
  if (self->active != 0) {
    fn_82DF1050(self, 0);
  }
}
