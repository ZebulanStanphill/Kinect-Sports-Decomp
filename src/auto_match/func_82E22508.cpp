// Appends a copy of the string text to the std::deque at offset 0x88 of the
// owner while holding the critical section at offset 0x6c, then resets the
// event at offset 0x64 (fn_82A1E7D8, which wraps NtClearEvent) and sets the one
// at offset 0x68 (fn_82A1E810, which wraps NtSetEvent). The temporary string is
// built by fn_82230110 and destroyed by fn_82230300. Converted from the
// Matching C version so that fn_82E220D0 can take its name as the deque's
// push_back member, func_82E220D0.cpp.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#undef _Xlength_error

extern "C" {
void fn_8223B688(void *self, const void *other);
void fn_82230110(void *self, const char *text);
void fn_82230300(void *self, int a, int b);
int fn_82A1E7D8(void *event);
int fn_82A1E810(void *event);
void RtlEnterCriticalSection(void *criticalSection);
void RtlLeaveCriticalSection(void *criticalSection);
}

struct Element_82E21E18 {
    int data[7];

    Element_82E21E18(const Element_82E21E18 &other) { fn_8223B688(this, &other); }
};

typedef Element_82E21E18 T;
typedef std::deque<T> Deque;

template <> void Deque::push_back(const T &);

struct Owner_82E22508 {
    char pad0[0x64];
    void *event64;
    void *event68;
    char criticalSection[0x1c];
    Deque queue;
};

extern "C" void fn_82E22508(Owner_82E22508 *self, const char *text)
{
    T *string;
    char buffer[32];

    RtlEnterCriticalSection(self->criticalSection);
    string = (T *)buffer;
    fn_82230110(string, text);
    self->queue.push_back(*string);
    fn_82230300(string, 1, 0);
    fn_82A1E7D8(self->event64);
    fn_82A1E810(self->event68);
    RtlLeaveCriticalSection(self->criticalSection);
}
