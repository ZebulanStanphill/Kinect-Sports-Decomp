/* The original reads 1.0f as it would a variable: it loads it after the store p->b = 1,
   whereas the literal's load is scheduled above that store (87.1%). The relocation is the
   pooled constant __real@3f800000, which C cannot name, so the unit declares it as
   real_1_0f and its objects.json pool_aliases entry renames that to __real@3f800000. */
extern float real_1_0f; typedef struct { float x,y; int d,e,f; } Sub; typedef struct { const char *name; int a,b,c; Sub sub; } S; void fn_82CF0600(S *p) { Sub *q=&p->sub; float f; p->a=0; p->name="Unknown Heading"; p->b=1; f=real_1_0f; p->c=0; q->x=f; q->y=f; q->d=0; q->e=0; q->f=0; }
