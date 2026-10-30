typedef struct O O;
typedef struct { void *s[2]; int (*f8)(O *); int (*fc)(O *, int); void *s2; void (*f14)(O *, O *, void *); } VT;
struct O { VT *vt; };
extern void fn_8267C4F0(void *);
extern void fn_826959C8(void *);
extern int fn_826957D0(void *, int);
extern O *fn_82696958(int, int);
extern int fn_8269F500(void *);
extern char *fn_826A7398(int);
extern void fn_826ADE60(int, char *, int);
extern char *fn_826C59F8(void *);
typedef struct { int a; unsigned char *p4; int p8; int pc; int p10; int p14; int p18; int p1c; } In;
void fn_826C7F28(In *param_1)
{
  unsigned char *puVar1 = param_1->p4;
  char *iVar4;
  int iVar5;
  fn_826959C8(puVar1);
  *puVar1 = 0;
  iVar4 = fn_826C59F8(param_1);
  if (iVar4 != 0) {
    if (param_1->p1c < 1) {
      iVar5 = *(int *)(iVar4 + 0x80);
      if (iVar5 == 0) {
        iVar5 = fn_8269F500(iVar4);
      }
      fn_826ADE60(param_1->p18, "Error: %s.attachAudio() needs one Argument\n",
                        **(int **)(iVar5 + 0xc));
    }
    else {
      int uVar2 = param_1->p18;
      int uVar3 = fn_826957D0(param_1,0);
      O *o = fn_82696958(uVar3,uVar2);
      if (o != 0) {
        O *q = (O *)((char *)o + 0x10);
        if (q->vt->f8(q) == 0x22) {
          O *p = (O *)(fn_826A7398(param_1->p18) + 8);
          O *r = (O *)(p->vt->fc(p, 0x23));
          if (r != 0) {
            fn_8267C4F0(r);
            r->vt->f14(r, o, iVar4);
          }
        }
      }
    }
  }
}
