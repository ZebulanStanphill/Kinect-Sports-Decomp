typedef struct {void (*fn)(void *,int,int,unsigned char,int,int,unsigned char,float);int adj;} Pmf_823D2720;
typedef struct {char pad[8];Pmf_823D2720 pmf;char *obj;int p14;int a,p1c,b,p24;unsigned char c;char p29[7];int d,p34,e,p3c;unsigned char f;char p41[7];float g;} Bound_823D2720;
void fn_823D2720(Bound_823D2720 *s) {Pmf_823D2720 p=s->pmf; p.fn(s->obj+p.adj,s->a,s->b,s->c,s->d,s->e,s->f,s->g);}
