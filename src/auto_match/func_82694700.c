typedef struct Pool_82694700 {
    char pad00[0x18];
    void *empty;   /* 0x18 */
} Pool_82694700;

extern unsigned int strlen(const char *s);
extern void *fn_82694610(Pool_82694700 *self, const char *s, unsigned int len);

void *fn_82694700(Pool_82694700 *self, const char *s)
{
    if (s == 0) {
        return self->empty;
    }
    return fn_82694610(self, s, strlen(s));
}
