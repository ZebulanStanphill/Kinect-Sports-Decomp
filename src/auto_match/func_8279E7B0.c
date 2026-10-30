typedef struct Sub_8279E7B0 { char pad[4]; } Sub_8279E7B0;
typedef struct Obj_8279E7B0 {
  char *base;
} Obj_8279E7B0;
extern void fn_8267BE38(void *);
extern void fn_826C6368(void *);
extern void fn_8279B858(void *);
extern void fn_8279B8E0(void *);
extern void fn_8279D848(void *);
extern void fn_827A9870(void *, unsigned);

void fn_8279E7B0(unsigned *p)
{
  unsigned *rc;
  if (p[0x24c] != 0)
    fn_827A9870((char *)*p + 0xe4, p[0x24c]);
  rc = (unsigned *)p[0x141];
  if (rc != 0) {
    (*rc)--;
    if (*rc == 0) {
      fn_826C6368(rc);
      fn_8267BE38(rc);
    }
  }
  fn_8279B858(p + 0x8b);
  fn_8279B858(p + 0x60);
  fn_8279B858(p + 0x35);
  fn_8279B8E0(p + 0x31);
  fn_8279D848(p + 0x2f);
  fn_8279B858(p + 4);
}
