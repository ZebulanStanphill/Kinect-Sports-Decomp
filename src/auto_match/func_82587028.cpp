// The _Init of a VC10 hash container (<xhash>): the bucket vector is refilled
// with Buckets * 2 copies of the list's end() and the mask and bucket count are
// reset. The linker folded this code for every hash container of the game, so
// the list's value type stands for any of them (see func_825870E0.cpp, the
// bucket vector's _Insert_n it calls).
#include <list>
#include <vector>

struct HashValue {};
typedef std::list<HashValue>::iterator Bucket;

// _Insert_n stays a call (func_825870E0.cpp).
template <> void std::vector<Bucket>::_Insert_n(const_iterator where, size_type count, const Bucket &value);

struct Hash_82587028 {
    char traits[4];
    std::list<HashValue> list;
    std::vector<Bucket> buckets;
    unsigned int mask;
    unsigned int maxidx;
};

extern "C" void fn_82587028(Hash_82587028 *self, unsigned int count)
{
    self->buckets.assign(count * 2, self->list.end());
    self->mask = count - 1;
    self->maxidx = count;
}
