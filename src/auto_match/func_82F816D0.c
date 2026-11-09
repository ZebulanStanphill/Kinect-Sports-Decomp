typedef struct Stream_82F816D0 {
    char *ptr;
    int cnt;
    char *base;
    int flag;
    int file;
    int charbuf;
    int bufsiz;
    int tmpfname;
} Stream_82F816D0;

extern int lbl_83263398;
extern char *lbl_8326361C[];
extern int fn_82F7C468(Stream_82F816D0 *stream);
extern int fn_82D7E470(int fd);
extern Stream_82F816D0 *__iob_func(void);
extern char *malloc(unsigned int size);

int fn_82F816D0(Stream_82F816D0 *param_1)
{
    int index;
    char **slot;

    if (fn_82D7E470(fn_82F7C468(param_1)) == 0) {
        return 0;
    }
    if (param_1 == &__iob_func()[1]) {
        index = 0;
    } else if (param_1 == &__iob_func()[2]) {
        index = 1;
    } else {
        return 0;
    }
    lbl_83263398++;
    if ((param_1->flag & 0x10c) != 0) {
        return 0;
    }
    slot = &lbl_8326361C[index];
    if (*slot == 0 && (*slot = malloc(0x1000)) == 0) {
        param_1->ptr = param_1->base = (char *)&param_1->charbuf;
        param_1->cnt = param_1->bufsiz = 2;
    } else {
        param_1->ptr = param_1->base = *slot;
        param_1->cnt = param_1->bufsiz = 0x1000;
    }
    param_1->flag |= 0x1102;
    return 1;
}
