/* std::vector<T>::_Reserve (VC10 <vector>) built at /O1 /Og- (no global optimisation): size(),
   max_size(), _Xlen(), capacity(), _Grow_to() and reserve() stay calls. */
typedef struct Vector_82666B78 Vector_82666B78;

extern unsigned int fn_8265CF70(Vector_82666B78 *self);
extern unsigned int fn_8265FE68(Vector_82666B78 *self);
extern void fn_82660870(Vector_82666B78 *self);
extern unsigned int fn_8265D3F0(Vector_82666B78 *self);
extern unsigned int fn_82666F40(Vector_82666B78 *self, unsigned int count);
extern void fn_826660E8(Vector_82666B78 *self, unsigned int count);

void fn_82666B78(Vector_82666B78 *self, unsigned int count)
{
    unsigned int size = fn_8265CF70(self);

    if (fn_8265FE68(self) - count < size)
        fn_82660870(self);
    else if ((size += count) <= fn_8265D3F0(self))
        ;
    else
        fn_826660E8(self, fn_82666F40(self, size));
}
