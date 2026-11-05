typedef struct { float x,y; } Point_82784098;
typedef struct { int a,b; unsigned count; int p[2]; Point_82784098 **pages; } Paged_82784098;
void fn_82784098(Paged_82784098 *self,float a,float b,float c,float d) {
 unsigned i; for(i=0;i<self->count;i++) { Point_82784098 *p=&self->pages[i>>8][(unsigned char)i]; float x=p->x,y=p->y; p->x=x*a+c; p->y=y*b+d; }
}
