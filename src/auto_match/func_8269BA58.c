typedef struct Obj_8269BA58 Obj_8269BA58;
typedef struct Other_8269BA58 Other_8269BA58;

struct Other_8269BA58 {
  char pad0[0xb00];
  unsigned int fb00;
};

typedef struct {
  char pad0[0x40];
  Other_8269BA58 *(*f40)(Obj_8269BA58 *);
} VT_8269BA58;

struct Obj_8269BA58 {
  VT_8269BA58 *vt;
  char pad4[0x80];
  unsigned int f84;
  char pad88[4];
  unsigned int f8c;
};

extern void fn_82681930(void *);
extern void *fn_8269AFB8(Obj_8269BA58 *, void *);
extern void fn_8269B930(Obj_8269BA58 *, void *);

void fn_8269BA58(Obj_8269BA58 *self, unsigned char on)
{
  char buf[0x38];
  Other_8269BA58 *o;
  unsigned int *pf;

  if (self->f84 == 0) {
    fn_82681930(buf);
    fn_8269B930(self, fn_8269AFB8(self, buf));
  }
  if (on != 0) {
    self->f8c = self->f8c | 0x1000;
  } else {
    self->f8c = self->f8c & 0xffffefff;
  }
  o = self->vt->f40(self);
  pf = &o->fb00;
  *pf = *pf | 0x400;
}
