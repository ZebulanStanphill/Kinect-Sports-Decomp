typedef struct StringPtr_82CED3E8 {
    const char *stringAndFlag;
} StringPtr_82CED3E8;

typedef struct MemoryRouter_82CED3E8 {
    char pad0[0x10];
    void *heap;                    /* 0x10 */
} MemoryRouter_82CED3E8;

extern const char *lbl_8323B430;
extern MemoryRouter_82CED3E8 *fn_82CE5410(void);
extern void fn_82CE5338(void *heap, void *p);
extern char *fn_82CED330(const char *s);
extern char *fn_82CED388(const char *s, int len);

static __forceinline void Deallocate(void *p)
{
    fn_82CE5338(fn_82CE5410()->heap, p);
}

void fn_82CED3E8(StringPtr_82CED3E8 *self, const char *string, int len)
{
    if ((const char *)((unsigned int)self->stringAndFlag & ~1u) != string) {
        if (((unsigned int)self->stringAndFlag & 1) == 1) {
            Deallocate((void *)(self->stringAndFlag - 1));
        }
        if (string != 0) {
            self->stringAndFlag = (len == -1 ? fn_82CED330(string) : fn_82CED388(string, len)) + 1;
        } else {
            self->stringAndFlag = lbl_8323B430;
        }
    }
}
