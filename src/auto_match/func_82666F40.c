/* std::vector<T>::_Grow_to (VC10 <vector>) built at /O1 /Og- (no global optimisation): capacity()
   and max_size() stay calls. */
typedef struct Vector_82666F40 Vector_82666F40;

extern unsigned int fn_8265D3F0(Vector_82666F40 *self);
extern unsigned int fn_8265FE68(Vector_82666F40 *self);

unsigned int fn_82666F40(Vector_82666F40 *self, unsigned int count)
{
    unsigned int capacity = fn_8265D3F0(self);

    capacity = fn_8265FE68(self) - capacity / 2 < capacity ? 0 : capacity + capacity / 2;
    if (capacity < count)
        capacity = count;
    return capacity;
}
