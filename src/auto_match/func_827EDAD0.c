typedef struct Vector_827EDAD0 { float v[4]; } Vector_827EDAD0;
extern int fn_827ECE88(void *p, float radius, const void *a, const void *b, const void *c, Vector_827EDAD0 *out);
int fn_827EDAD0(void *p, float radius, const void *a, const void *b, const void *c) {
    Vector_827EDAD0 out;
    return fn_827ECE88(p, radius, a, b, c, &out);
}
