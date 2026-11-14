// The _Init of a VC10 hash container (<xhash>) whose list and bucket vector
// allocate through Allocator_8248F890: the bucket vector is refilled with
// Buckets * 2 copies of the list's end() and the mask and bucket count are
// reset. Identical code folding gave every 4-byte vector of this allocator one
// _Insert_n, named after Element_824974E8 (func_824974E8.cpp); the bucket
// vector reaches it through a forwarding specialization.
#include <list>
#include <vector>

#include "game/Allocator_8248F890.h"

struct Element_824974E8 {
    float data[1];
};

typedef std::vector<Element_824974E8, Allocator_8248F890<Element_824974E8> > FoldedVector;

template <> void FoldedVector::_Insert_n(const_iterator where, size_type count, const Element_824974E8 &value);

struct FoldedVector_82497430 : FoldedVector {
    using FoldedVector::_Insert_n;
};

struct Value_82497430 {};
typedef std::list<Value_82497430, Allocator_8248F890<Value_82497430> >::iterator Bucket;
typedef std::vector<Bucket, Allocator_8248F890<Bucket> > BucketVector;

template <> __forceinline void BucketVector::_Insert_n(const_iterator where, size_type count, const Bucket &value)
{
    FoldedVector_82497430 *folded = (FoldedVector_82497430 *)this;
    folded->_Insert_n(FoldedVector::const_iterator((Element_824974E8 *)where._Ptr, folded), count,
                      (const Element_824974E8 &)value);
}

struct Hash_82497430 {
    char traits[4];
    std::list<Value_82497430, Allocator_8248F890<Value_82497430> > list;
    BucketVector buckets;
    unsigned int mask;
    unsigned int maxidx;
};

extern "C" void fn_82497430(Hash_82497430 *self, unsigned int count)
{
    self->buckets.assign(count * 2, self->list.end());
    self->mask = count - 1;
    self->maxidx = count;
}
