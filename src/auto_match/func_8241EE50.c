typedef struct {
  char pad[0x2c];
  int state;
} Ent;

typedef struct {
  char pad[0x1854];
  int h;
} Sub;

typedef struct Self Self;

typedef struct {
  char pad[0xd4];
  Sub *sub;
  char pad2[0xcb8 - 0xd8];
  int enabled;
  char pad3[0x2b20 - 0xcbc];
  Self *cur;
} Owner;

struct Self {
  Owner *owner;
  char pad[0x1c];
  Ent **begin;
  Ent **end;
  char pad2[0x234 - 0x28];
  float t;
};

extern void fn_8229CFB8(int, int, int);
extern void fn_8241A8A0(Self *, int);
extern void fn_8241B4E0(Self *, Ent *, int);
extern float lbl_821CC160;

void fn_8241EE50(Self *param_1, int param_2)
{
  Ent **it;
  int found;
  Owner *o;

  found = 0;
  for (it = param_1->begin; it != param_1->end; it++) {
    if ((*it)->state == 2) {
      fn_8241B4E0(param_1, *it, 0);
      found = 1;
    }
  }
  if (found) {
    fn_8241A8A0(param_1, param_2);
    return;
  }
  o = param_1->owner;
  if (o->enabled != 0) {
    param_1->t = lbl_821CC160;
    if (param_1 == o->cur) {
      fn_8229CFB8(o->sub->h, 0, 0);
    }
  }
}
