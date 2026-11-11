extern int fn_82E7B8D0(void *a, void *b);

typedef struct Obj_82E7E5D8 {
    int pad[4];
    char *inner;
} Obj_82E7E5D8;

int fn_82E7E5D8(Obj_82E7E5D8 *self, void *out)
{
    char *inner = self->inner;
    if (inner == 0) {
        return 0x80004003;
    }
    return fn_82E7B8D0(inner + 0x10, out);
}
