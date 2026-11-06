extern void fn_83049320(void *self, int a, int b);
extern void fn_8307DE78(int h);
extern void fn_8307E060(int h);
extern void fn_8307E6E0(int h);

typedef struct Obj_830494F0 {
  char pad[0x28];
  int handle;
} Obj_830494F0;

int fn_830494F0(Obj_830494F0 *param_1)
{
  int *ph;

  if (param_1 != 0) { ph = &param_1->handle; } else { ph = 0; }
  fn_8307DE78(*ph);
  fn_8307E6E0(*ph);
  fn_83049320(param_1, 0, 1);
  fn_8307E060(*ph);
  return 1;
}
