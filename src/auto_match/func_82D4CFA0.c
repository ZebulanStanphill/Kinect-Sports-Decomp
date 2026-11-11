typedef struct { float v[4]; } Vec4_82D401F8;
typedef struct {
    char pad0[0x20];
    Vec4_82D401F8 b;   /* 0x20 */
    Vec4_82D401F8 a;   /* 0x30 */
} Node_82D4CFA0;

extern void fn_82D401F8(const void *m, const Vec4_82D401F8 *a, const Vec4_82D401F8 *b, float t, void *out);

void fn_82D4CFA0(Node_82D4CFA0 *self, const void *m, float t, void *out)
{
    fn_82D401F8(m, &self->a, &self->b, t, out);
}
