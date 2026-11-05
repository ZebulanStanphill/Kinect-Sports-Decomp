typedef struct Rel Rel;
typedef struct RelVt { void *pad[2]; void (*f8)(Rel *); } RelVt;
struct Rel { RelVt *vt; };
typedef struct Dev Dev;
typedef struct DevVt {
  void *pad[10];
  int (*f28)(Dev *, Rel *, int, int, void *, int, void *, int, int);
  void *pad2[7];
  int (*f48)(Dev *, int);
} DevVt;
struct Dev { DevVt *vt; };
typedef struct Obj_82A40750 {
  char pad[0xb0];
  Dev *dev;
} Obj;
extern char *fn_82A42E20(void *, int, int, int, int);
extern int fn_82A43088(Rel **);

int fn_82A40750(Obj *o, int p2, int p3)
{
  char *r;
  int hr;
  Rel *rel;
  r = fn_82A42E20((char *)o + 0x250, 0, 1, 0, 0x465);
  if (r == 0) {
    hr = 0x8007000e;
  } else {
    rel = 0;
    hr = fn_82A43088(&rel);
    if (hr >= 0) {
      hr = o->dev->vt->f28(o->dev, rel, p2, 1, r + 4, 1, r + 4, 0x1337f001, p3);
      if (hr >= 0)
        hr = o->dev->vt->f48(o->dev, 0x1337f001);
      rel->vt->f8(rel);
    }
  }
  return hr;
}
