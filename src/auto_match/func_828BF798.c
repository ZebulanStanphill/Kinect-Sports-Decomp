typedef struct Value_828BF798 {
    unsigned int v[7];
} Value_828BF798;

extern int lbl_83214050;
extern char lbl_83214368[];
extern char *fn_8251F340(void *);
extern void fn_8251EFD0(void *, void *, void *, int);

void fn_828BF798(Value_828BF798 *input)
{
    Value_828BF798 value = *input;
    char result[16];
    char *slot;
    if (lbl_83214050 == 2) {
        value.v[5] = 0;
        value.v[6] = 0;
    }
    slot = fn_8251F340(lbl_83214368);
    {
        unsigned int *dst = (unsigned int *)(slot + 12);
        if (dst) {
            *dst = value.v[0];
            *(Value_828BF798 *)(dst + 1) = value;
        }
    }
    fn_8251EFD0(result, lbl_83214368, slot, 0);
}
