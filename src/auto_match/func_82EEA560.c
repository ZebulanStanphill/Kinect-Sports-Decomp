extern void fn_82E50C30(void *);
extern unsigned fn_82A1E6A0(int, int, int, int);
extern unsigned fn_82A2A580(int, int, int, int);
extern int fn_82A1F470(void);
extern unsigned int lbl_8215FF94;

typedef struct Obj_82EEA560 {
  void *vt;
  char pad[0x3c];
  unsigned f40;
  unsigned f44;
  int f48;
  int f4c;
} Obj_82EEA560;

static __inline int LastErr(void)
{
  int hr = fn_82A1F470();
  if (hr > 0)
    return (hr & 0xffff) | 0x80070000;
  return hr;
}

Obj_82EEA560 *fn_82EEA560(Obj_82EEA560 *o, int *err)
{
  *(unsigned **)o = &lbl_8215FF94;
  fn_82E50C30((int *)o + 1);
  o->f48 = 0;
  o->f4c = 0;
  o->f40 = fn_82A1E6A0(0, 1, 1, 0);
  if (o->f40 == 0)
    *err = LastErr();
  o->f44 = fn_82A2A580(0, 0, 0x7fff, 0);
  if (o->f44 == 0)
    *err = LastErr();
  return o;
}
