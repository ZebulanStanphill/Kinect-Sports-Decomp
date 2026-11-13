/* std::vector<T>::_Reserve (VC10 <vector>) built at /O1 /Og- (no global optimisation): size(),
   max_size(), _Xlen(), capacity(), _Grow_to() and reserve() stay calls. */
typedef struct Vector_82666D30 Vector_82666D30;

extern unsigned int fn_826664D8(Vector_82666D30 *self);
extern unsigned int fn_8265FE68(Vector_82666D30 *self);
extern void fn_82660870(Vector_82666D30 *self);
extern unsigned int fn_82666C10(Vector_82666D30 *self);
extern unsigned int fn_82666EA0(Vector_82666D30 *self, unsigned int count);
extern void fn_82666388(Vector_82666D30 *self, unsigned int count);

void fn_82666D30(Vector_82666D30 *self, unsigned int count)
{
    unsigned int size = fn_826664D8(self);

    if (fn_8265FE68(self) - count < size)
        fn_82660870(self);
    else if ((size += count) <= fn_82666C10(self))
        ;
    else
        fn_82666388(self, fn_82666EA0(self, size));
}
