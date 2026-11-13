typedef struct StringPtr_82CED628 {
    const char *stringAndFlag;
} StringPtr_82CED628;

typedef struct MemoryRouter_82CED628 {
    char pad0[0x10];
    void *heap;                    /* 0x10 */
} MemoryRouter_82CED628;

extern const char *lbl_8323B430;
extern MemoryRouter_82CED628 *fn_82CE5410(void);
extern void fn_82CE5338(void *heap, void *p);
extern char *fn_82CED330(const char *s);

static __forceinline void Deallocate(void *p)
{
    fn_82CE5338(fn_82CE5410()->heap, p);
}

StringPtr_82CED628 *fn_82CED628(StringPtr_82CED628 *self, const char *string)
{
    if ((const char *)((unsigned int)self->stringAndFlag & ~1u) != string) {
        if (((unsigned int)self->stringAndFlag & 1) == 1) {
            Deallocate((void *)(self->stringAndFlag - 1));
        }
        if (string != 0) {
            self->stringAndFlag = fn_82CED330(string) + 1;
        } else {
            self->stringAndFlag = lbl_8323B430;
        }
    }
    return self;
}
