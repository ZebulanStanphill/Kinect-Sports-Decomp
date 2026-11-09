typedef struct AdCreator_82BF4A18 {
    const void *vtable;
    int pad04[9];
    unsigned short value;
} AdCreator_82BF4A18;

extern AdCreator_82BF4A18 *fn_82BF4448(AdCreator_82BF4A18 *self, const char *name, int param,
                                      const void *data, unsigned short count, unsigned short flags);
extern const char lbl_820EBA10[];

AdCreator_82BF4A18 *fn_82BF4A18(AdCreator_82BF4A18 *self, const char *name, int param,
                                const void *data, unsigned short count, unsigned short flags,
                                unsigned short value)
{
    fn_82BF4448(self, name, param, data, count, flags);
    self->value = value;
    self->vtable = lbl_820EBA10;
    return self;
}
