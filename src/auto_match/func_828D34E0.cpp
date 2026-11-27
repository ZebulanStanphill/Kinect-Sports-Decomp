// Advances every pending connection test of a list and reports whether all of
// them have left the "running" state. An entry starts by asking the session
// manager for a connection (a std::tr1::shared_ptr), then waits until the
// connection has finished and records its result. When `notify` is set, a
// result message is queued for each entry as soon as it has one.
//
// std::tr1::_Ref_count_base::_Decref stays a call to fn_822315A0, the name
// that C units use.
#include <memory>

extern "C" {
void fn_822315A0(std::tr1::_Ref_count_base *rep);
}

struct Connection_828D34E0 {
    char pad00[0x7c];
    int status; /* 0x7c */
    int result; /* 0x80 */
};

template <> __forceinline void std::tr1::_Ptr_base<Connection_828D34E0>::_Decref()
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
}

typedef std::tr1::shared_ptr<Connection_828D34E0> ConnectionPtr;

enum EntryState_828D34E0 {
    ENTRY_NEW = 0,
    ENTRY_RUNNING = 1,
    ENTRY_SUCCEEDED = 2,
    ENTRY_FAILED = 3
};

struct Entry_828D34E0 {
    ConnectionPtr connection; /* 0x00 */
    int id;                   /* 0x08 */
    int state;                /* 0x0c */
    float value;              /* 0x10 */
    char address[0x24];       /* 0x14 */
    char key[8];              /* 0x38 */
    char extra[0x10];         /* 0x40 */
};

struct Manager_828D34E0;
struct Message_828D34E0;

struct Self_828D34E0 {
    char pad00[0x14];
    Entry_828D34E0 *begin; /* 0x14 */
    Entry_828D34E0 *end;   /* 0x18 */
    char pad1C[8];
    void *owner; /* 0x24 */
};

extern "C" {
extern Manager_828D34E0 *lbl_83213FC8;
Manager_828D34E0 *fn_828A17A0();
ConnectionPtr fn_828D0BE0(Manager_828D34E0 *manager, bool create, char *address, char *key, char *extra);
float fn_828CF9E8(Connection_828D34E0 *connection);
void *fn_8265C9E0(unsigned int size);
Message_828D34E0 *fn_828D33C0(void *memory, float value, int id);
void fn_82886518(Message_828D34E0 *message, int a, int b);
void *fn_8289EEE0(void *owner);
void *fn_823AA970(void *target);
void fn_828BE208(void *owner, Message_828D34E0 *message, void *target, int flags);
}

static inline Manager_828D34E0 *GetManager()
{
    return lbl_83213FC8 != 0 ? lbl_83213FC8 : fn_828A17A0();
}

static inline bool IsFinished(const Connection_828D34E0 *connection)
{
    switch (connection->status) {
    case 1:
    case 2:
    case 3:
        return false;
    case 4:
    case 5:
        return true;
    default:
        return false;
    }
}

extern "C" bool fn_828D34E0(Self_828D34E0 *self, bool notify)
{
    bool allDone = true;
    for (Entry_828D34E0 *entry = self->begin; entry != self->end; ++entry) {
        switch (entry->state) {
        case ENTRY_NEW:
            entry->connection = fn_828D0BE0(GetManager(), true, entry->address, entry->key, entry->extra);
            entry->state = ENTRY_RUNNING;
            break;
        case ENTRY_RUNNING:
            if (IsFinished(entry->connection.get())) {
                if (entry->connection->result == 1) {
                    entry->value = fn_828CF9E8(entry->connection.get());
                    entry->state = ENTRY_SUCCEEDED;
                } else {
                    entry->value = 0.0f;
                    entry->state = ENTRY_FAILED;
                }
            }
            if (notify && entry->state != ENTRY_RUNNING) {
                void *memory = fn_8265C9E0(200);
                Message_828D34E0 *message = memory != 0 ? fn_828D33C0(memory, entry->value, entry->id) : 0;
                fn_82886518(message, 500, -1);
                fn_828BE208(self->owner, message, fn_823AA970(fn_8289EEE0(self->owner)), 0);
            }
            break;
        }
        if (entry->state == ENTRY_RUNNING)
            allDone = false;
    }
    return allDone;
}
