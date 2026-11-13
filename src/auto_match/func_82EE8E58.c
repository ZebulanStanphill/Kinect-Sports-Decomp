struct Obj_82EE8E58;
typedef struct VT_82EE8E58 {
  int pad[5];
  int (*f14)(struct Obj_82EE8E58 *, int);
  int pad2[3];
  int (*f24)(struct Obj_82EE8E58 *, __int64, int, int);
} VT_82EE8E58;
typedef struct Obj_82EE8E58 {
  VT_82EE8E58 *vt;
} Obj_82EE8E58;
typedef struct Host_82EE8E58 {
  char pad[0x98];
  int f98;
  int pad9c;
  Obj_82EE8E58 *fa0;
} Host_82EE8E58;
extern int fn_82EE88B0(void);

int fn_82EE8E58(Host_82EE8E58 *h, int a, __int64 b, int c)
{
  int r = 0;

  if (h->f98 != 0 || (r = fn_82EE88B0()) >= 0) {
    if (b == 0) {
      h->fa0->vt->f14(h->fa0, a);
    } else {
      r = h->fa0->vt->f24(h->fa0, b, a, c);
    }
  }
  return r;
}
