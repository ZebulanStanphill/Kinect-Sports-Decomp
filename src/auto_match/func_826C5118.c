typedef struct Res_826C5118 {
    int f0;
    int f4;
    int refs;
} Res_826C5118;

typedef struct Obj_826C5118 {
    Res_826C5118 *res;
    float f4;
    char pad8[0x40];
    int f48;
    int f4c;
    int f50;
    int f54;
    unsigned char f58;
} Obj_826C5118;

extern Res_826C5118 *fn_82694700(char *table, int a);

/* Same table lookup as func_82683020: the string table sits at +0x24c inside the sub-object at +8. */
Obj_826C5118 *fn_826C5118(Obj_826C5118 *self, char **mgr)
{
    char *q = *mgr;
    char *sub = q + 8;
    Res_826C5118 *r = fn_82694700(sub + 0x24c, 0);
    self->res = r;
    r->refs++;
    self->f4 = 0.0f;
    self->f48 = 0;
    self->f4c = 0;
    self->f50 = 0;
    self->f54 = 0;
    self->f58 = 0;
    return self;
}
