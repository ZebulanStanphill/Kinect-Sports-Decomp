// Erase the element whose key (+0x28 of a 0x30-byte element) equals key.
struct Elem_8279C838 { int w[12]; };
struct Vec_8279C838 {
    Elem_8279C838 *data;
    unsigned int size;
    void Erase(unsigned int i);
    void EraseKey(unsigned int key);
};
void Vec_8279C838::EraseKey(unsigned int key)
{
    unsigned int n = size;
    unsigned int i = 0;
    if (n != 0) {
        do {
            if ((unsigned int)data[i].w[10] == key) {
                Erase(i);
            } else {
                i++;
            }
        } while (i < n);
    }
}
