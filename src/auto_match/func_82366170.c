typedef struct O O;
struct O { void (**vt)(O *); };
extern void fn_82328960(void);

void fn_82366170(int a, char *p)
{
  O *o = *(O **)(p + 0x168);
  if (o != 0) {
    o->vt[0x50 / 4](o);
    fn_82328960();
  }
}
