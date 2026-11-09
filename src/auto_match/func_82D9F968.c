typedef struct { float v[4]; } Vec4_82D9F968;
extern void fn_82CE5040(Vec4_82D9F968 *out, void *matrix, Vec4_82D9F968 *in);

typedef struct {
    char pad[0x20];
    Vec4_82D9F968 *points;
    int count;
} Points_82D9F968;

void fn_82D9F968(Points_82D9F968 *self, void *matrix)
{
    int i;
    int n = self->count;
    for (i = 0; i < n; i++) {
        fn_82CE5040(&self->points[i], matrix, &self->points[i]);
    }
}
