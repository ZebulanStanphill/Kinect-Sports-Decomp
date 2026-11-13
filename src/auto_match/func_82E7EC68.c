typedef struct Var_82E7EC68 {
    unsigned short vt;
    unsigned short pad[3];
    unsigned int count;
} Var_82E7EC68;

int fn_82E7EC68(Var_82E7EC68 *v, unsigned int *out)
{
    int hr = 0;

    if (out == 0) {
        hr = 0x80004003;
    } else if (v->vt == 0) {
        *out = 0;
    } else {
        *out = (v->vt & 0x1000) == 0 ? 1 : v->count;
    }
    return hr;
}
