/* std::vector<T>::_Buy(size_type) from Visual C++ 2010's <vector>, built
   without optimisation (4-byte elements). */
typedef struct Vec_82F8F420 {
    char alval;
    void **first;
    void **last;
    void **end;
} Vec_82F8F420;

extern unsigned int fn_82F8F648(Vec_82F8F420 *self);
extern void fn_82F8FB10(void);
extern void **fn_82F8FBA8(Vec_82F8F420 *self, unsigned int count, int hint);

unsigned char fn_82F8F420(Vec_82F8F420 *self, unsigned int count)
{
    self->first = 0;
    self->last = 0;
    self->end = 0;
    if (count == 0) {
        return 0;
    } else if (fn_82F8F648(self) < count) {
        fn_82F8FB10();
    } else {
        self->first = fn_82F8FBA8(self, count, 0);
        self->last = self->first;
        self->end = self->first + count;
    }
    return 1;
}
