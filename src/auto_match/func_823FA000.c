typedef struct Stream Stream;
typedef struct {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void (*f10)(Stream *self, int a, int b);
} StreamVtbl;
struct Stream {
    StreamVtbl *vtbl;
};

typedef struct {
    int f0;
    int f4;
    int off[5];
    Stream *s0;
    int f20;
    Stream *s1;
    int f28;
    Stream *s2;
    int f30;
    Stream *s3;
    int f38;
    Stream *s4;
} Self;

void fn_823FA000(Self *self, int a, int b)
{
    self->s0->vtbl->f10(self->s0, a, self->off[0] + b);
    self->s1->vtbl->f10(self->s1, a, self->off[1] + b);
    self->s2->vtbl->f10(self->s2, a, self->off[2] + b);
    self->s3->vtbl->f10(self->s3, a, self->off[3] + b);
    self->s4->vtbl->f10(self->s4, a, self->off[4] + b);
}
