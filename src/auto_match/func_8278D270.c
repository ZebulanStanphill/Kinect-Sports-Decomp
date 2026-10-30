extern void fn_8267BE38(int *);
extern void fn_826C6368(int *);
struct A { char pad[0x1c]; int *p; };
struct B { char pad[0x2a]; unsigned short flags; };
typedef struct { char pad[0x1c]; int *p; char gap[10]; unsigned short flags; } S;
void fn_8278D270(S *s,int *p) {
 int *old; int **slot=&s->p; unsigned short *flags=&s->flags;
 if (p) ++*p;
 old=s->p;
 if (old && --*old==0) { fn_826C6368(old); fn_8267BE38(old); }
 s->p=p;
 *flags |= 0x800;
}
