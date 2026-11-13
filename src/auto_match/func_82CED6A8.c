typedef struct StringPtr_82CED6A8 {
    const char *stringAndFlag;
} StringPtr_82CED6A8;

typedef struct MemoryRouter_82CED6A8 {
    char pad0[0x10];
    void *heap;                    /* 0x10 */
} MemoryRouter_82CED6A8;

extern const char *lbl_8323B430;
extern MemoryRouter_82CED6A8 *fn_82CE5410(void);
extern void fn_82CE5338(void *heap, void *p);
extern char *fn_82CED330(const char *s);

static __forceinline void Deallocate(void *p)
{
    fn_82CE5338(fn_82CE5410()->heap, p);
}

static __forceinline StringPtr_82CED6A8 *Assign(StringPtr_82CED6A8 *self, const char *string)
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

StringPtr_82CED6A8 *fn_82CED6A8(StringPtr_82CED6A8 *self, const StringPtr_82CED6A8 *other)
{
    return Assign(self, (const char *)((unsigned int)other->stringAndFlag & ~1u));
}
