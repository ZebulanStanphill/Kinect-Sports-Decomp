extern void fn_8267C8D8(void *p);
extern void fn_8267CF60(void *a, void *b, int t);
extern void fn_8267D9C0(void *p);

typedef struct {
  char pad0[8];
  char lock[0x14];
  char cond[4];
} Sync;

typedef struct {
  char pad0[0x74];
  int state;
  unsigned int seq;
  char pad7c[8];
  Sync *sync;
} Obj;

void fn_826D6DB0(Obj *o, unsigned int seq)
{
  void *lock;

  if (o->state <= 1 && o->seq <= seq) {
    lock = o->sync->lock;
    fn_8267C8D8(lock);
    while (o->state <= 1 && o->seq <= seq) {
      fn_8267CF60(o->sync->cond, o->sync->lock, -1);
    }
    fn_8267D9C0(lock);
  }
}
