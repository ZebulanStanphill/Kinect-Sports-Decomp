typedef struct Vt_823F9DB8 { char pad[0x14]; void (*f14)(void *, int, void *); } Vt_823F9DB8;
typedef struct Obj_823F9DB8 { Vt_823F9DB8 *vt; } Obj_823F9DB8;
typedef struct W_823F9DB8 { int v[8]; } W_823F9DB8;
typedef struct Self_823F9DB8 {
  char pad0[8];
  char *a8;
  char *ac;
  char *a10;
  char *a14;
  char *a18;
  Obj_823F9DB8 *o1c;
  char pad1[4];
  Obj_823F9DB8 *o24;
  char pad2[4];
  Obj_823F9DB8 *o2c;
  char pad3[4];
  Obj_823F9DB8 *o34;
  char pad4[4];
  Obj_823F9DB8 *o3c;
} Self_823F9DB8;
extern void *memcpy(void *, const void *, unsigned);

void fn_823F9DB8(Self_823F9DB8 *s, int arg, unsigned off)
{
  struct { int u1, u2, u3, pad; W_823F9DB8 a; W_823F9DB8 b; } L;
  int i;

  L.a.v[0] = 0;
  for (i = 1; i < 8; i++) L.a.v[i] = -1;
  L.b.v[0] = 0;
  for (i = 1; i < 8; i++) L.b.v[i] = -1;
  s->o1c->vt->f14(s->o1c, arg, &L.a);
  s->o24->vt->f14(s->o24, arg, &L.b);
  s->o2c->vt->f14(s->o2c, arg, &L.u1);
  s->o34->vt->f14(s->o34, arg, &L.u2);
  s->o3c->vt->f14(s->o3c, arg, &L.u3);
  if (off != 0) {
    memcpy(s->a8 + off, &L.a, 0x20);
    memcpy(s->ac + off, &L.b, 0x20);
    *(int *)(s->a10 + off) = L.u1;
    *(int *)(s->a14 + off) = L.u2;
    *(int *)(s->a18 + off) = L.u3;
  }
}
