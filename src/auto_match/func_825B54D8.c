typedef struct Pair_825B54D8 {
    void *a;
    void *b;
} Pair_825B54D8;

typedef struct Obj_825B54D8 {
    int f0;
    int f4;
    Pair_825B54D8 *pair;
} Obj_825B54D8;

extern void fn_82850DC0(void *a, void *b, void *arg);

void fn_825B54D8(Obj_825B54D8 *self, void *arg)
{
    fn_82850DC0(self->pair->a, self->pair->b, arg);
}
