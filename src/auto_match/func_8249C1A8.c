extern int fn_8225F160(void);
extern int fn_8225F3C0(int);
extern void fn_82381BC0(void *);
extern char *fn_8249ABC0(void);
extern int fn_825200A8(void *a, void *b);
extern char lbl_8326597C[];
extern unsigned int lbl_832765BC;

typedef struct { int pad[9]; unsigned int f24; } Ent_8249C1A8;
typedef struct Link_8249C1A8 { struct Link_8249C1A8 *next; int pad[2]; unsigned int mask; } Link_8249C1A8;
typedef struct {
  char pad0[8]; int f8; char pad1[0x14 - 0xc]; Ent_8249C1A8 *e[2]; char pad2[0x20 - 0x1c]; int f20;
  char pad3[0x38 - 0x24]; Link_8249C1A8 *head; char pad4[0x6c - 0x3c]; unsigned int f6c;
} Obj_8249C1A8;
typedef struct { char pad[0x2c]; int f2c; } W_8249C1A8;
typedef struct { char pad[8]; int k8; char pad2[0x2c - 0xc]; W_8249C1A8 *k2c; } Q_8249C1A8;
typedef struct { int pad; Q_8249C1A8 *q4; int v8; } P_8249C1A8;

static __forceinline int IsReady(P_8249C1A8 *p)
{
  Q_8249C1A8 *q;
  int b;
  if (p->v8 != 0) return 0;
  q = p->q4;
  if (q == 0) return 0;
  b = (q->k8 == 9);
  if (q->k2c != 0) b = (q->k2c->f2c == 0) & b;
  return b;
}

static __forceinline int HasQuery(P_8249C1A8 *p)
{
  return p->v8 == 0 && p->q4 != 0;
}

unsigned int fn_8249C1A8(Obj_8249C1A8 *o)
{
  unsigned int result;
  Link_8249C1A8 *cur;
  unsigned int mask;
  int count;
  int i;
  int n;
  int n2;
  char *t;
  char *r4;
  P_8249C1A8 *p;
  Q_8249C1A8 *q;
  int v8;
  int b;

  result = 0;
  cur = o->head->next;
  while (cur != o->head) {
      mask = cur->mask;
      count = 0;
      for (i = 0; i < 2; i++) {
        if ((o->e[i]->f24 & mask) != 0) {
          if ((mask & o->f6c) != 0) {
            count = 2;
            break;
          }
          n = fn_8225F3C0(fn_8225F160());
          if (o->f8 == 2 || o->f8 == 1 || (mask & o->f6c) != 0 || n != 1 || i != o->f20) {
            count++;
          } else {
            count = 2;
            break;
          }
        }
      }
      n2 = fn_8225F3C0(fn_8225F160());
      if (n2 > 1) {
        t = fn_8249ABC0();
        r4 = *(char **)(t + 0x70);
        if (r4 != 0 && *(unsigned int *)(*(int *)(r4 + 0x844) + 0x358) == 0) {
          if (fn_825200A8(lbl_8326597C, r4) != 0) goto done;
          p = (P_8249C1A8 *)(*(int *)(r4 + 0xd54) + 0x10);
          if (p != 0) {
            if (IsReady(p)) goto done;
            if (HasQuery(p)) goto one;
            if (lbl_832765BC != 0) goto done;
          }
        }
one:
        n2 = 1;
      }
done:
      if (2 - count < n2) {
        result = mask | result;
      }
    fn_82381BC0(&cur);
  }
  return result;
}
