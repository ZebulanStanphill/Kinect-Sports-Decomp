typedef struct Range_829F5398 { unsigned __int64 v[3]; } Range_829F5398;
typedef struct Obj_829F5398 {
    unsigned char head[0x60];
    Range_829F5398 a;
    Range_829F5398 b;
    unsigned __int64 c;
    int d;
    void *h;
} Obj_829F5398;

extern void *memset(void *, int, unsigned int);
extern void fn_829FD078(void *h);

static __forceinline void Range_Clear(Range_829F5398 *r)
{
    r->v[0] = 0;
    r->v[1] = 0;
    r->v[2] = 0;
}

void fn_829F5398(Obj_829F5398 *self)
{
    memset(self->head, 0, 0x60);
    Range_Clear(&self->b);
    Range_Clear(&self->a);
    self->c = 0;
    self->d = 0;
    fn_829FD078(self->h);
}
