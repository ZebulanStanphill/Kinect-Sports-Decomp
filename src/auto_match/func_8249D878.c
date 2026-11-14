extern char *fn_8249ABC0(void);
extern int fn_825200A8(void *a, void *b);
extern char lbl_8326597C[];
extern unsigned int lbl_832765BC;

typedef struct { char pad[0x2c]; int f2c; } W_8249D878;
typedef struct { char pad[8]; int k8; char pad2[0x2c - 0xc]; W_8249D878 *k2c; } Q_8249D878;
typedef struct { int pad; Q_8249D878 *q4; int v8; } P_8249D878;

static __forceinline int IsReady(P_8249D878 *p)
{
  Q_8249D878 *q;
  int b;
  if (p->v8 != 0) return 0;
  q = p->q4;
  if (q == 0) return 0;
  b = (q->k8 == 9);
  if (q->k2c != 0) b = (q->k2c->f2c == 0) & b;
  return b;
}

static __forceinline int HasQuery(P_8249D878 *p)
{
  return p->v8 == 0 && p->q4 != 0;
}

int fn_8249D878(int checkPending)
{
  char *session;
  P_8249D878 *p;

  session = *(char **)(fn_8249ABC0() + 0x70);
  if (session != 0 && *(unsigned int *)(*(int *)(session + 0x844) + 0x358) == 0) {
    if (checkPending != 0 && fn_825200A8(lbl_8326597C, session) != 0) return 1;
    p = (P_8249D878 *)(*(int *)(session + 0xd54) + 0x10);
    if (p != 0 && IsReady(p)) return 1;
    if (checkPending != 0 && p != 0 && !HasQuery(p) && lbl_832765BC != 0) return 1;
  }
  return 0;
}
