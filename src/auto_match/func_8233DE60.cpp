#include <vector>

struct Element_8233E9E0 {
    float unk0;
    int unk4;
};
typedef Element_8233E9E0 T;
template <> void std::vector<T>::push_back(const T &);

struct Pred { char c; };
struct S { char pad[0xc0]; std::vector<T> v; };

extern "C" void fn_8233F530(T *first, T *last, int n, Pred pred);

extern "C" void fn_8233DE60(S *self, float x, int y)
{
    T e;
    Pred pred;
    e.unk0 = x;
    e.unk4 = y;
    self->v.push_back(e);
    fn_8233F530(self->v._Myfirst, self->v._Mylast, self->v._Mylast - self->v._Myfirst, pred);
}
