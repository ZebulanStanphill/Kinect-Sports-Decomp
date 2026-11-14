typedef struct Tag_82F90478 {
    unsigned char unused;
} Tag_82F90478;

void fn_82F90478(unsigned int *first, unsigned int count, const unsigned int *value, unsigned char tag)
{
    for (; 0 < count; --count, ++first) {
        *first = *value;
    }
}
