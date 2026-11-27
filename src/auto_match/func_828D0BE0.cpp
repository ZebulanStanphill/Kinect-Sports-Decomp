#include <memory>
#include <vector>

struct Session_828D0BE0 {
    Session_828D0BE0(int kind, const void *first, const unsigned char *second, const void *third);

    bool MatchesFirst(const void *key) const;
    bool MatchesSecond(const unsigned char *key) const;

    void *vtable;            /* 0x00 */
    int unknown4;            /* 0x04 */
    bool closed;             /* 0x08 */
    unsigned char first[36]; /* 0x09 */
    unsigned char second[8]; /* 0x2d */
    char pad35[0x7b];
};

typedef std::tr1::shared_ptr<Session_828D0BE0> SessionPtr_828D0BE0;

struct Manager_828D0BE0 {
    char pad0[0x14];
    std::vector<SessionPtr_828D0BE0> sessions; /* 0x14 */
};

extern "C" {
void fn_822315A0(std::tr1::_Ref_count_base *rep);
bool fn_828A0BE8(const unsigned char *first, const void *key);
bool fn_828A0B78(const unsigned char *second, const unsigned char *key);
void fn_828CCCC0(void *self, Session_828D0BE0 *session, std::tr1::_Ref_count_base *rep, bool doThrow);
}

template <> __forceinline void std::tr1::_Ptr_base<Session_828D0BE0>::_Decref()
{
    if (_Rep != 0) {
        fn_822315A0(_Rep);
    }
}

template <>
__forceinline void std::tr1::_Ptr_base<Session_828D0BE0>::_Reset(Session_828D0BE0 *ptr,
                                                                 std::tr1::_Ref_count_base *rep, bool doThrow)
{
    fn_828CCCC0(this, ptr, rep, doThrow);
}

template <> void std::vector<SessionPtr_828D0BE0>::push_back(const SessionPtr_828D0BE0 &value);

inline bool Session_828D0BE0::MatchesFirst(const void *key) const
{
    if (closed) {
        return false;
    }
    return fn_828A0BE8(first, key);
}

inline bool Session_828D0BE0::MatchesSecond(const unsigned char *key) const
{
    if (closed) {
        return false;
    }
    return fn_828A0B78(second, key);
}

SessionPtr_828D0BE0 FindOrCreateSession_828D0BE0(Manager_828D0BE0 *manager, bool host, const void *first,
                                                 const unsigned char *second, const void *third)
{
    for (std::vector<SessionPtr_828D0BE0>::iterator it = manager->sessions.begin();
         it != manager->sessions.end(); ++it) {
        if (!(*it)->closed && (*it)->MatchesFirst(first) && (*it)->MatchesSecond(second)) {
            return *it;
        }
    }
    SessionPtr_828D0BE0 created(new Session_828D0BE0(host ? 8 : 1, first, second, third));
    manager->sessions.push_back(created);
    return created;
}
