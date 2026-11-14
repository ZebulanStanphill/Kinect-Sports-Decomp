typedef struct Buf_8251E450 {
    char *begin;
    char *end;
    char *cap;
    unsigned short elemSize;    /* 0x0c */
} Buf_8251E450;

extern void *lbl_832767CC;
extern void fn_82522838(void);
extern char *fn_82522BC8(void *heap, void *p, unsigned int size);
extern char *fn_82522D98(unsigned int size);

void fn_8251E450(Buf_8251E450 *self, unsigned int count)
{
    char *data = self->begin;
    unsigned int used = self->end - data;
    unsigned int size = self->elemSize * count + used;

    if (data != 0) {
        if (lbl_832767CC == 0)
            fn_82522838();
        self->begin = fn_82522BC8(lbl_832767CC, data, size);
    } else {
        self->begin = fn_82522D98(size);
    }
    self->end = self->begin + used;
    self->cap = self->begin + size;
}
