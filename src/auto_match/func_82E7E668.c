extern int fn_82E7B768(void *a, void *b);

typedef struct Obj_82E7E668 {
    int pad[4];
    char *inner;
} Obj_82E7E668;

int fn_82E7E668(Obj_82E7E668 *self, void *out)
{
    char *inner = self->inner;
    if (inner == 0) {
        return 0x80004003;
    }
    return fn_82E7B768(inner + 0x10, out);
}
