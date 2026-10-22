extern char *fn_822ABA88(void *, int);
extern unsigned char fn_828EA5F8(void *);
extern unsigned char fn_828EA840(void *);

typedef struct {
  void **items;
  int a, b, c;
  int index;
} Entry;

typedef struct {
  char pad[0x40];
  unsigned int state;
} Cur;

typedef struct {
  char pad[8];
  Entry ***table;
  char pad2[0xa0 - 0xc];
  int cur;
} World;

typedef struct Listener Listener;
typedef struct {
  char pad[0x68];
  void (*f68)(Listener *, void *);
} ListenerVT;
struct Listener {
  ListenerVT *vt;
};

typedef struct {
  World *world;
  Listener *listener;
} Self;

typedef struct {
  char pad[0x100];
  unsigned int *data;
} Target;

typedef struct {
  int id;
  char pad[0xf8 - 4];
  unsigned int vals[41];
} Msg;

int fn_8241F350(Self *self, Msg *msg)
{
  int cur;
  Entry *e;
  char *r;
  Target *t;
  int i;

  cur = self->world->cur;
  if ((cur == 0 || ((Cur *)cur)->state != 1) &&
      (e = (*self->world->table)[msg->id],
       r = fn_822ABA88(e->items[e->index], 0),
       *(int *)(r + 0x24) != 0) &&
      (t = *(Target **)(r + 0x74)) != 0 &&
      fn_828EA5F8(t)) {
    for (i = 0; i < 41; i++) {
      if (t->data[i + 0x116] != msg->vals[i]) {
        t->data[i + 0x116] = msg->vals[i];
      }
    }
    if (fn_828EA840(t)) {
      self->listener->vt->f68(self->listener, t);
    }
    return 1;
  }
  return 0;
}
