struct ConstIter_8265D948 {
    void *ptr;
};

struct Iter_8265D948 : ConstIter_8265D948 {
    Iter_8265D948();
};

struct Vector_8265D948 {
    Iter_8265D948 begin();
    Iter_8265D948 end();
    Iter_8265D948 erase(ConstIter_8265D948);
};

struct Owner_8265D948 {
    int unused;
    Vector_8265D948 values;
};

extern "C" unsigned char fn_82668EA0(const ConstIter_8265D948 *, const ConstIter_8265D948 *);
extern "C" void **fn_826638B0(const ConstIter_8265D948 *, int);
extern "C" void fn_8265CA20(void *);

extern "C" void fn_8265D948(Owner_8265D948 *self, bool release)
{
    Iter_8265D948 it;
    it = self->values.begin();
    while (fn_82668EA0(&it, &self->values.end())) {
        if (release) {
            delete *(char **)fn_826638B0(&it, 0);
        }
        it = self->values.erase(it);
    }
}
