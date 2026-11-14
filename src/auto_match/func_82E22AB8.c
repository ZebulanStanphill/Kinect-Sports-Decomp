typedef struct Cipher_82E22AB8 {
    int unk0;
    int unk4;
    unsigned char key;
    unsigned char state;
} Cipher_82E22AB8;

void fn_82E22AB8(Cipher_82E22AB8 *cipher, unsigned char *data, int size)
{
    int i;

    for (i = 0; i < size; i++) {
        unsigned char c = data[i];
        unsigned char s;
        data[i] ^= cipher->key;
        s = cipher->state;
        cipher->state = c ^ s;
        cipher->key ^= s;
    }
}
