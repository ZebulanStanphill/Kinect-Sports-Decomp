typedef struct Source_827FAF20 {
    char pad00[0x2e];
    unsigned short column; /* 0x2e */
    char pad30[2];
    unsigned short row; /* 0x32 */
    char pad34[0x50];
    unsigned int (*rows)[12]; /* 0x84 */
} Source_827FAF20;

typedef struct Triple_827FAF20 {
    unsigned int mode; /* 0x00 */
    void *elements[3]; /* 0x04 */
    int values[3];     /* 0x10 */
} Triple_827FAF20;

extern int fn_827F6AB8(Source_827FAF20 *source);
extern int fn_827FA1E8(Source_827FAF20 *source);

/* Fills the element pointers and values of three sources: whole rows in mode 0, single cells in mode 1. */
void fn_827FAF20(Source_827FAF20 *a, Source_827FAF20 *b, Source_827FAF20 *c, Triple_827FAF20 *out)
{
    switch (out->mode) {
    default:
        out->elements[0] = 0;
        out->elements[1] = 0;
        out->elements[2] = 0;
        out->values[0] = 0;
        out->values[1] = 0;
        out->values[2] = 0;
        break;
    case 1:
        out->elements[0] = &a->rows[a->row][a->column];
        out->elements[1] = &b->rows[b->row][b->column];
        out->elements[2] = &c->rows[c->row][c->column];
        out->values[0] = fn_827FA1E8(a);
        out->values[1] = fn_827FA1E8(b);
        out->values[2] = fn_827FA1E8(c);
        break;
    case 0:
        out->elements[0] = &a->rows[a->row];
        out->elements[1] = &b->rows[b->row];
        out->elements[2] = &c->rows[c->row];
        out->values[0] = fn_827F6AB8(a);
        out->values[1] = fn_827F6AB8(b);
        out->values[2] = fn_827F6AB8(c);
        break;
    }
}
