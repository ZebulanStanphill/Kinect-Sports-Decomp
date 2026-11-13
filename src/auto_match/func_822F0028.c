typedef struct Sp_822F0028 { int *px; int *rep; } Sp_822F0028;
typedef struct Ctx_822F0028 { char pad[0xc]; int m0c; int m10; } Ctx_822F0028;
typedef struct Ent_822F0028 { int pad[4]; int f10; } Ent_822F0028;
extern void fn_822315A0(void *);
extern __declspec(noreturn) void fn_822AF138(int, int);
extern int **fn_822E5F48(Sp_822F0028 *, int);
extern int fn_822F09C0(void *, int, float, float, float, int, int);
extern int fn_82397F30(int);
extern void fn_82536070(const char *, const char *);
extern void fn_82536590(void *, int);
extern int lbl_83265A28;

void fn_822F0028(Ctx_822F0028 *self)
{
  Sp_822F0028 t38, t40, t48, t50;
  int **p;
  float d6, d5, d4;
  int r;
  int obj;
  int code;
  int w;
  obj = ((Ent_822F0028 *)*fn_822E5F48(&t38, self->m0c))->f10;
  d6 = *(float *)*fn_822E5F48(&t40, self->m0c);
  d5 = *(float *)((char *)*fn_822E5F48(&t48, self->m0c) + 8);
  p = fn_822E5F48(&t50, self->m0c);
  d4 = *(float *)((char *)*p + 4);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  r = fn_822F09C0(self, lbl_83265A28, d4, d5, d6, obj, 0);
  if (t50.rep != 0)
    fn_822315A0(t50.rep);
  if (t48.rep != 0)
    fn_822315A0(t48.rep);
  if (t40.rep != 0)
    fn_822315A0(t40.rep);
  if (t38.rep != 0)
    fn_822315A0(t38.rep);
  if (r == 0)
    return;
  w = self->m10;
  if (*(int *)(w + 0x178) == 1 &&
      (*(int *)(w + 0xa0) == 0 || *(unsigned *)(*(int *)(w + 0xa0) + 0x40) != 1) &&
      *(int *)(w + 0xbd4) == 0) {
    fn_82536070("music_minigame", "mini01");
    fn_82536590((void *)(w + 0xbc8), 0);
    *(int *)(w + 0xbd4) = 1;
  }
  if (*(int *)(self->m10 + 0x178) != 2) {
    if (fn_82397F30(self->m10) != 0) {
      w = self->m0c;
      if (*(int *)(w + 0x24) == 0) {
        code = 6;
        goto done;
      }
    }
    code = 7;
  } else {
    code = 5;
  }
  w = self->m0c;
done:
  fn_822AF138(*(int *)(w + 0x110), code);
}
