typedef struct { float v[4]; } Vec4_82D401F8;
typedef struct {
    char pad0[0x90];
    Vec4_82D401F8 a;   /* 0x90 */
    Vec4_82D401F8 b;   /* 0xa0 */
} Node_82D425E8;

extern void fn_82D401F8(const void *m, const Vec4_82D401F8 *a, const Vec4_82D401F8 *b, float t, void *out);

void fn_82D425E8(Node_82D425E8 *self, const void *m, float t, void *out)
{
    fn_82D401F8(m, &self->a, &self->b, t, out);
}
