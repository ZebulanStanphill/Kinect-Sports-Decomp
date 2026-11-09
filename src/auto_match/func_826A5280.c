/* param_2 is a functor passed by value (0x14 bytes: two words, a ref-counted
   pointer at +8, a flag byte at +0x10); fn_826A3E68 copy-constructs it,
   fn_826A2A40 destroys it, fn_826A4D98 sorts [first, last) and destroys its copy. */
typedef struct Functor_826A5280 {
    int a;
    int b;
    void *ref;
    int pad;
    unsigned char flags;
} Functor_826A5280;

extern void fn_826A2A40(Functor_826A5280 *f);
extern Functor_826A5280 *fn_826A3E68(Functor_826A5280 *dst, Functor_826A5280 *src);
extern int fn_826A4D98(int self, int first, int last, Functor_826A5280 *pred);

int fn_826A5280(int param_1, Functor_826A5280 *pred)
{
    int count;
    int result;
    Functor_826A5280 copy;

    count = *(int *)(param_1 + 4);
    result = fn_826A4D98(param_1, 0, count, fn_826A3E68(&copy, pred));
    fn_826A2A40(pred);
    return result;
}
