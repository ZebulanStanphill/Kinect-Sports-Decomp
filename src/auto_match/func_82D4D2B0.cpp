class BitResult {
    unsigned char value;
    friend struct BitSet_82D4D2B0;
};
struct BitWords { unsigned *data; };
struct BitSet_82D4D2B0 {
    int pad[5];
    BitWords *bits;
    BitResult get(int index);
};
BitResult BitSet_82D4D2B0::get(int index) {
    BitResult result;
    result.value = ~(bits->data[index >> 5] >> (index & 31)) & 1;
    return result;
}
