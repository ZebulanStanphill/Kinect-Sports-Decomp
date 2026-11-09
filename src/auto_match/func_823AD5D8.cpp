// circular_buffer<__vector4>::set_capacity(5): reallocate through std::_Allocate
// (fn_82386E68, its unused pointer argument dropped by LTCG), copy the live range,
// free the old storage.
inline void *operator new(unsigned int, void *where) throw() { return where; }

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

typedef __vector4 Elem;

extern "C" Elem *fn_82386E68(unsigned int count);
extern "C" void fn_8265CA20(void *p);

struct CB;

struct Iter {
    CB *m_buff;
    Elem *m_it;
    Iter(CB *cb, Elem *it) : m_buff(cb), m_it(it) {}
    Iter(const Iter &o) : m_buff(o.m_buff), m_it(o.m_it) {}
};

extern "C" Iter *fn_823AD830(Iter *self, int n);

struct CB {
    Elem *m_buff;
    Elem *m_end;
    Elem *m_first;
    Elem *m_last;
    unsigned int m_size;
};

static void increment(CB *cb, Elem *&p)
{
    if (++p == cb->m_end)
        p = cb->m_buff;
}

static void next(Iter &it)
{
    increment(it.m_buff, it.m_it);
    if (it.m_it == it.m_buff->m_last)
        it.m_it = 0;
}

static void advance(Iter &it, int n)
{
    if (n > 0) {
        CB *cb = it.m_buff;
        it.m_it = it.m_it + (n < cb->m_end - it.m_it ? n : n - (cb->m_end - cb->m_buff));
        if (it.m_it == it.m_buff->m_last)
            it.m_it = 0;
    } else if (n < 0) {
        fn_823AD830(&it, -n);
    }
}

static Elem *ucopy(Iter first, Iter last, Elem *dest)
{
    for (; first.m_it != last.m_it; next(first), ++dest)
        ::new ((void *)dest) Elem(*first.m_it);
    return dest;
}

extern "C" void fn_823AD5D8(CB *self)
{
    unsigned int new_capacity = 5;
    if (new_capacity == (unsigned int)(self->m_end - self->m_buff))
        return;
    Elem *buff = fn_82386E68(new_capacity);
    Iter b(self, self->m_size == 0 ? 0 : self->m_first);
    unsigned int sz = self->m_size;
    int n = *(sz < new_capacity ? &sz : &new_capacity);
    Iter last(b);
    advance(last, n);
    Elem *dest = ucopy(b, last, buff);
    for (unsigned int ii = 0; ii < self->m_size; ++ii, increment(self, self->m_first)) {
    }
    if (self->m_buff != 0)
        fn_8265CA20(self->m_buff);
    self->m_size = dest - buff;
    self->m_first = self->m_buff = buff;
    self->m_end = self->m_buff + new_capacity;
    self->m_last = dest == self->m_end ? self->m_buff : dest;
}
