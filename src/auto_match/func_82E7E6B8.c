extern int fn_82E7B958(void *object, unsigned short id, void *a, void *b);

typedef struct Obj_82E7E6B8 {
    int pad00[3];
    unsigned short id; /* 0x0C */
    char *inner;       /* 0x10 */
} Obj_82E7E6B8;

int fn_82E7E6B8(Obj_82E7E6B8 *self, void *a, void *b)
{
    char *inner = self->inner;
    if (inner == 0) {
        return 0x80004003;
    }
    return fn_82E7B958(inner + 0x10, self->id, a, b);
}
