extern int fn_826BF638(void *a, void *b, void *c, void *d, unsigned char *e);
extern void *fn_826C2928(void **self);
extern char lbl_8200B88C[];
extern char lbl_8200B890[];
extern char lbl_8200B8E4[];
extern char lbl_8200B734[];

void **fn_826C3C70(void **self, void *a2, void *a3, void *a4, unsigned char flag)
{
    unsigned char one;

    fn_826C2928(self);
    self[0] = lbl_8200B8E4;
    self[4] = lbl_8200B890;
    self[0xc] = lbl_8200B88C;
    if (flag) {
        one = 1;
        fn_826BF638(self + 0xc, self, a2, lbl_8200B734, &one);
    }
    return self;
}
