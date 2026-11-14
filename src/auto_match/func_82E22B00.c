typedef struct Cipher_82E22B00 {
    int unk0;
    int unk4;
    unsigned char key;
    unsigned char state;
} Cipher_82E22B00;

void fn_82E22B00(Cipher_82E22B00 *cipher, char *data, int size)
{
    int i;

    for (i = 0; i < size; i++) {
        unsigned char s;
        data[i] ^= cipher->key;
        s = cipher->state;
        cipher->state = data[i] ^ s;
        cipher->key ^= s;
    }
}
