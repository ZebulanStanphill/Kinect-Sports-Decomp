// Polls an enumeration that fills the vector of game/Element_82538468.h: returns
// 0 while the request is still pending (status 0x3e4, ERROR_IO_INCOMPLETE);
// otherwise sizes the results to the count returned, or empties them on an error
// (0x12, ERROR_NO_MORE_FILES, is not recorded as one), and returns 1.
#include "game/Element_82538468.h"

struct Request_82538210 {
    char pad[0x1c];
    int handle;
    Vector_82538468 results;
    unsigned int error;
};

template <> void Vector_82538468::resize(size_type);
template <> Vector_82538468::iterator Vector_82538468::erase(const_iterator, const_iterator);

extern "C" {
unsigned int fn_82A1E740(Request_82538210 *self, unsigned int *count, int wait);
unsigned int fn_82A1C098(Request_82538210 *self);

int fn_82538210(Request_82538210 *self, unsigned char wait)
{
    unsigned int count;

    if (self->handle != -1) {
        unsigned int status = fn_82A1E740(self, &count, wait);
        unsigned int extended = fn_82A1C098(self);
        if (status == 0x3e4) {
            return 0;
        }
        if (status == 0) {
            self->error = 0;
            self->results.resize(count);
        } else {
            if (status == 0x12 || extended == 0x80070012) {
                self->error = 0;
            } else {
                self->error = status;
            }
            self->results.erase(self->results.begin(), self->results.end());
        }
    }
    return 1;
}
}
