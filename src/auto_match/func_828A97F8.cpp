// The peer maps are std::map<8-byte key, Peer *>; their iterator increment stays a call
// to fn_82248B90, which the linker folded with the increments of many other trees.
namespace std
{
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
} // namespace std

#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <map>
#undef _Xlength_error
#undef _Xout_of_range

struct Peer_828A97F8;

struct PeerKey_828A97F8 {
    unsigned int words[2];
};

inline bool operator<(const PeerKey_828A97F8 &a, const PeerKey_828A97F8 &b)
{
    if (a.words[0] != b.words[0]) {
        return a.words[0] < b.words[0];
    }
    return a.words[1] < b.words[1];
}

typedef std::map<PeerKey_828A97F8, Peer_828A97F8 *> PeerMap_828A97F8;
typedef PeerMap_828A97F8::_Mybase Tree_828A97F8;
typedef std::_Tree_unchecked_const_iterator<Tree_828A97F8::_Mybase> Unchecked_828A97F8;

extern "C" __declspec(noalias) void fn_82248B90(Unchecked_828A97F8 *it);

template <> __forceinline Unchecked_828A97F8 &Unchecked_828A97F8::operator++()
{
    fn_82248B90(this);
    return *this;
}

struct PeerVt_828A97F8 {
    void *slots[17];
    void *(*GetAddress)(Peer_828A97F8 *self);       /* 0x44 */
    unsigned __int64 (*GetId)(Peer_828A97F8 *self); /* 0x48 */
};

struct Peer_828A97F8 {
    PeerVt_828A97F8 *vt;
    char pad4[0xc];
    void *session; /* 0x10 */
};

extern "C" unsigned char fn_8288B760(Peer_828A97F8 *self);
extern "C" unsigned int fn_828EB5F8(void *address, unsigned __int64 *id);
extern "C" char *fn_828A12E8(void *session);
extern "C" PeerMap_828A97F8 *fn_8288F9A0(char *table, unsigned int kind);

extern "C" unsigned char fn_828A97F8(Peer_828A97F8 *self, Peer_828A97F8 *other)
{
    PeerMap_828A97F8 *peers;

    if (fn_8288B760(self) == 0) {
        if (other != 0) {
            unsigned __int64 id;

            id = self->vt->GetId(self);
            return fn_828EB5F8(other->vt->GetAddress(other), &id) != 2;
        }
        peers = fn_8288F9A0(fn_828A12E8(self->session), 1);
        for (PeerMap_828A97F8::iterator it = peers->begin(); it != peers->end(); ++it) {
            if (fn_828A97F8(self, it->second) != 0) {
                return 1;
            }
        }
        peers = fn_8288F9A0(fn_828A12E8(self->session), 2);
        for (PeerMap_828A97F8::iterator it = peers->begin(); it != peers->end(); ++it) {
            if (fn_828A97F8(self, it->second) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
