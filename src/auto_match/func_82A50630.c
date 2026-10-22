typedef unsigned int uint;
void *memcpy(void *d, const void *s, uint n);

typedef struct Lock Lock;
typedef struct {
  void *f0;
  void *f4;
  void (*lock)(Lock *);
  void *fc;
  void *f10;
  void (*unlock)(Lock *);
} LockVT;
struct Lock { LockVT *vt; };

typedef struct {
  char pad[0x2c];
  Lock lock;
} Owner;

typedef struct Obj Obj;
typedef struct {
  char pad[0x60];
  int (*write)(Obj *, uint, void *, int);
} ObjVT;

struct Obj {
  ObjVT *vt;
  char pad[0x2c];
  Owner *owner;
  char pad2[0x18];
  void *buf;
};

int fn_82A50630(Obj *p, uint n, void *src, int d)
{
  int hr;
  p->owner->lock.vt->lock(&p->owner->lock);
  hr = p->vt->write(p, n, src, d);
  if (hr >= 0) {
    memcpy(p->buf, src, n * 4);
  }
  p->owner->lock.vt->unlock(&p->owner->lock);
  return hr;
}
