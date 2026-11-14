typedef struct Name_82818CC8 Name_82818CC8;

extern int fn_828186A8(int indexA, unsigned int kindA, Name_82818CC8 *nameA,
                       int indexB, unsigned int kindB, Name_82818CC8 *nameB);

int fn_82818CC8(int indexA, unsigned int kindA, Name_82818CC8 *nameA,
                int indexB, unsigned int kindB, Name_82818CC8 *nameB)
{
    if (kindA == kindB)
        return fn_828186A8(indexA, kindA, nameA, indexB, kindB, nameB);
    return kindA - kindB;
}
