// Dispatches a point query on a shape by its kind (the unsigned short at offset 0):
// kind 0 -> fn_825BBFA8, kind 1 -> fn_825BC0E0 (both with a discarded float out), kind 2 -> fn_825BBD78.
extern int fn_825BBFA8(unsigned short *shape, void *point, float *out);
extern int fn_825BC0E0(unsigned short *shape, void *point, float *out);
extern int fn_825BBD78(unsigned short *shape, void *point, int flags);

int fn_8255C820(void *point, unsigned short *shape)
{
    float unused;
    int r;
    switch (*shape) {
    case 0:
        r = fn_825BBFA8(shape, point, &unused);
        break;
    case 1:
        r = fn_825BC0E0(shape, point, &unused);
        break;
    case 2:
        r = fn_825BBD78(shape, point, 1);
        break;
    default:
        r = 0;
    }
    return r;
}
