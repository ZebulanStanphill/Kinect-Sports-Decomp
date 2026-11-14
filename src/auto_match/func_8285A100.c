typedef struct Matrix_8285A100 {
    float m[4][4];
} Matrix_8285A100;

typedef struct Entry_8285A100 {
    char pad0[0x10];
    Matrix_8285A100 matrix;
    Matrix_8285A100 *source;
} Entry_8285A100;

typedef struct Owner_8285A100 {
    char pad0[0x50];
    char *entries;
} Owner_8285A100;

extern void fn_8280CED8(Matrix_8285A100 *src, Matrix_8285A100 *dst);
extern void fn_8280ACD8(Matrix_8285A100 *m);

void fn_8285A100(Owner_8285A100 *self, int offset, Matrix_8285A100 *source)
{
    Entry_8285A100 *e = (Entry_8285A100 *)(self->entries + offset);
    e->source = source;
    if (source != 0)
        fn_8280CED8(source, &e->matrix);
    else
        fn_8280ACD8(&e->matrix);
}
