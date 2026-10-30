typedef struct Mgr { struct MgrVt *vt; char pad[0x4c]; char map[4]; } Mgr;
typedef struct MgrVt { void *s[7]; void (*f1c)(void *a, int b, int c, int d, int e); } MgrVt;
extern Mgr *lbl_83219598;
extern void **fn_82A381F0(void *map, void *key, int z);
void fn_82A38C08(void *a, int b, int c, int d, int e)
{
  Mgr *m = lbl_83219598;
  void **r = fn_82A381F0(m->map, a, 0);
  if (r) a = r[1];
  m->vt->f1c(a, b, c, d, e);
}
