typedef struct Element_822F8A68 {
    unsigned int value;
    float key;
} Element_822F8A68;

static __forceinline unsigned char Greater(float left, float right)
{
    return left > right;
}

void fn_822F8A68(Element_822F8A68 *first, Element_822F8A68 *last)
{
    Element_822F8A68 *next;
    if (first != last) {
        for (next = first; ++next != last;) {
            unsigned int value = next->value;
            float key = next->key;
            Element_822F8A68 *hole = next;
            if (Greater(key, first->key)) {
                Element_822F8A68 *dest = next + 1;
                Element_822F8A68 *src = next;
                while (first != src) {
                    --dest;
                    --src;
                    dest->value = src->value;
                    dest->key = src->key;
                }
                first->key = key;
                first->value = value;
            } else {
                Element_822F8A68 *previous;
                for (previous = hole; Greater(key, (--previous)->key); hole = previous) {
                    hole->value = previous->value;
                    hole->key = previous->key;
                }
                hole->key = key;
                hole->value = value;
            }
        }
    }
}
