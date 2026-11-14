extern "C" void *memmove(void *dst, const void *src, unsigned int size);

struct Array_8277E0D8 {
    int *data;
    unsigned int count;

    void Insert(unsigned int index, const int &value);
};

void Array_8277E0D8::Insert(unsigned int index, const int &value)
{
    if (index >= count) {
        int *slot = data + count++;
        *slot = value;
    } else {
        memmove(&data[index + 1], &data[index], (count - index) * 4);
        data[index] = value;
        count++;
    }
}
