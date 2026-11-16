struct Vec_82F8EEE0;

struct Iter_82F8EEE0 {
    const Vec_82F8EEE0 *cont; /* 0x00 */
    void **ptr;               /* 0x04 */

    Iter_82F8EEE0();
    int operator-(const Iter_82F8EEE0 &other) const;
    Iter_82F8EEE0 operator+(int offset) const;
};

struct Vec_82F8EEE0 {
    int alval;    /* 0x00 */
    void **first; /* 0x04 */
    void **last;  /* 0x08 */
    void **limit; /* 0x0c */

    unsigned int size() const;
    unsigned int capacity() const;
    Iter_82F8EEE0 begin();
    Iter_82F8EEE0 end();
    Iter_82F8EEE0 insert(Iter_82F8EEE0 where, void *const &val);
    void push_back(void *const &val);
    void **_Ufill(void **ptr, unsigned int count, void *const &val);
};

extern "C" void fn_82F8F6B0(Vec_82F8EEE0 *self, Iter_82F8EEE0 where, unsigned int count, void *const &value);

Iter_82F8EEE0 Vec_82F8EEE0::insert(Iter_82F8EEE0 where, void *const &val)
{
    int offset = size() == 0 ? 0 : where - begin();
    fn_82F8F6B0(this, where, 1, val);
    return begin() + offset;
}
