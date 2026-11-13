extern int fn_822315A0(void *);
extern int fn_82273C88(void *);
extern int fn_82273CD8(void *, int);
extern int *fn_8229AE10(void *, void *);
extern int fn_82672C20(int, const char *, void *, int);

typedef struct Val_82293B48 {
  int m0;
  int m4;
  union {
    double d;
    int i;
  } v;
} Val_82293B48;

typedef struct Ref_82293B48 {
  int m0;
  void *rc;
} Ref_82293B48;

void fn_82293B48(int *self, int count)
{
  Val_82293B48 arg;
  Ref_82293B48 ref;

  self[0x610] = count;
  if (count > 0) {
    arg.m0 = 0;
    arg.m4 = 0;
    fn_82273CD8(&arg, 3);
    arg.v.d = (double)count;
    fn_82672C20(*fn_8229AE10(&ref, self), "_root.scorecardCtrl.setNumberTeams", &arg, 1);
    if (ref.rc != 0) {
      fn_822315A0(ref.rc);
    }
    fn_82273C88(&arg);
  }
}
