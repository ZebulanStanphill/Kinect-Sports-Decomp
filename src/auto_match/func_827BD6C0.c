extern void fn_827BCA70(void);
extern void fn_827BCEC0(void);
extern void fn_827BD1E0(void);
extern void fn_827BD478(void);
extern void fn_827BD698(void);

typedef struct Obj_827BD6C0 Obj_827BD6C0;
struct Obj_827BD6C0 {
  int pad0;
  unsigned *(**a)(Obj_827BD6C0 *, int, int);
  char pad8[0x6c];
  int f74;
  char pad78[0x4];
  int f7c;
  char pad80[0x44];
  int fc4;
  char padc8[0xb4];
  int f17c;
  char pad180[0x14];
  unsigned char *q;
};

void fn_827BD6C0(Obj_827BD6C0 *o)
{
  unsigned *q;
  unsigned char *b;
  unsigned *p;
  int i;
  q = (*o->a)(o, 0, 0xa8);
  o->q = (unsigned char *)q;
q[0] = (unsigned)fn_827BD698;
q[0x17] = 0;
q[1] = (unsigned)fn_827BD1E0;
q[2] = (unsigned)fn_827BD478;
q[6] = (unsigned)fn_827BCEC0;
  for (i = 0; i < 0x10; i++) {
    q[7 + i] = (unsigned)fn_827BCEC0;
    q[0x18 + i] = 0;
  }
  q[7] = (unsigned)fn_827BCA70;
  q[0x15] = (unsigned)fn_827BCA70;
  b = o->q;
  o->fc4 = 0;
  o->f7c = 0;
  o->f17c = 0;
  b[0xc] = 0;
  b[0xd] = 0;
  *(int *)(b + 0x14) = 0;
  *(int *)(b + 0xa0) = 0;
}
