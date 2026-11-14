/* Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndex):
   hash the key, mask it with the table's SizeMask, then findIndexCore (fn_827B5BC8). */
typedef struct Key_827B6190 {
    unsigned int w0;
    unsigned short h4;
    unsigned char b6;
    unsigned char b7;
    unsigned char b8;
    unsigned char b9;
    unsigned char b10;
    unsigned char b11;
} Key_827B6190;

typedef struct Table_827B6190 {
    unsigned int EntryCount;
    unsigned int SizeMask;
} Table_827B6190;

typedef struct Hash_827B6190 {
    Table_827B6190 *pTable;
} Hash_827B6190;

extern int fn_827B5BC8(Hash_827B6190 *m, const Key_827B6190 *key, unsigned int hashValue);

int fn_827B6190(Hash_827B6190 *m, const Key_827B6190 *key)
{
    unsigned int hash;

    if (m->pTable == 0)
        return -1;
    hash = ((unsigned short)(key->b11 ^ key->b10 ^ key->b8 ^ key->b7 ^ key->b6)
         ^ (key->b9 << 1) ^ key->h4 ^ (key->w0 >> 6) ^ key->w0) & m->pTable->SizeMask;
    return fn_827B5BC8(m, key, hash);
}
