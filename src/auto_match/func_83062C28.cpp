// Kinect Sports retail 4D5308C9, function 0x83062C28 (116 bytes).
// Makes room for count more elements in a std::vector of 8-byte elements
// (std::vector<T>::_Reserve; kept as fn_83062C28 because Matching C units call
// it by that name). Grows the capacity by half, or to the size needed.

#include <vector>

struct Element_83062B38 {
    int data[2];
};

typedef Element_83062B38 T;

extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);

template <> void std::vector<T>::reserve(size_type count);

extern "C" void fn_83062C28(std::vector<T> *self, unsigned int count)
{
    if (self->max_size() - count < self->size()) {
        fn_82F622A8("vector<T> too long");
    } else {
        unsigned int needed = self->size() + count;
        unsigned int capacity = self->capacity();
        if (needed > capacity) {
            unsigned int grown = self->max_size() - capacity / 2 < capacity ? 0 : capacity + capacity / 2;
            if (grown < needed)
                grown = needed;
            self->reserve(grown);
        }
    }
}
