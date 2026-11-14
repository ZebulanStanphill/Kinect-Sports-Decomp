typedef struct Callbacks_8282BF78 {
    void *context;
    void *alloc;
    void *realloc;
    void *free;
    void *size;
} Callbacks_8282BF78;

extern Callbacks_8282BF78 lbl_8320A784;
extern void fn_8282BE80(void);
extern void fn_8282BEC8(void);
extern void fn_8282BF18(void);
extern void fn_8282BF48(void);

void fn_8282BF78(char *self, Callbacks_8282BF78 *out)
{
    if (lbl_8320A784.alloc == 0) {
        out->context = self + 0xd8;
        out->alloc = (void *)fn_8282BE80;
        out->realloc = (void *)fn_8282BEC8;
        out->free = (void *)fn_8282BF18;
        out->size = (void *)fn_8282BF48;
    } else {
        out->context = lbl_8320A784.context;
        out->alloc = lbl_8320A784.alloc;
        out->realloc = lbl_8320A784.realloc;
        out->free = lbl_8320A784.free;
        out->size = lbl_8320A784.size;
    }
}
